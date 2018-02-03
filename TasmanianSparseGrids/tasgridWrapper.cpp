/*
 * Code Author: Miroslav Stoyanov, Mar 2013
 *
 * Copyright (C) 2013  Miroslav Stoyanov
 *
 * This file is part of
 * Toolkit for Adaprive Stochastic Modeling And Non-Intrusive Approximation
 *              a.k.a. TASMANIAN
 *
 * TASMANIAN is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * TASMANIAN is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with TASMANIAN.  If not, see <http://www.gnu.org/licenses/>
 *
 */

#ifndef __TASMANIAN_TASGRID_WRAPPER_CPP
#define __TASMANIAN_TASGRID_WRAPPER_CPP

#include "tasgridWrapper.hpp"

using std::cout;
using std::endl;
using std::setw;

GridWrapper::GridWrapper() : grid_filename(0), in_filename(0), out_filename(0), anisotropic_filename(0), todo(op_none), num_dimensions(1), num_outputs(0), depth(1), order(1), tolerance(0),isTensor(false),
        type(TasGrid::type_level), oned(TasGrid::rule_clenshawcurtis), print(false), refinement(TasGrid::refine_classic){};

GridWrapper::~GridWrapper(){};

void GridWrapper::setGridFilename( const char * filename ){
        grid_filename = filename;
}
void GridWrapper::setInFilename( const char * filename ){
        in_filename = filename;
}
void GridWrapper::setOutFilename( const char * filename ){
        out_filename = filename;
}
void GridWrapper::setAnisotropicFilename( const char * filename ){
        anisotropic_filename = filename;
}
void GridWrapper::setNumDimensions( int n ){
        num_dimensions = n;
}
void GridWrapper::setNumOutputs( int n ){
        num_outputs = n;
}
void GridWrapper::setDepth( int n ){
        depth = n;
}
void GridWrapper::setType( TasGrid::TypeDepth t ){
        type = t;
}
void GridWrapper::setOneDim( TasGrid::TypeOneDRule r ){
        oned = r;
}
void GridWrapper::setRefinementType( TasGrid::TypeRefinement ref ){
        refinement = ref;
}
void GridWrapper::setOrder( int new_order ){
        order = new_order;
}
void GridWrapper::setFullTensor( bool t ){
        isTensor = t;
}
void GridWrapper::setTolerance( double tol ){
        tolerance = tol;
}
void GridWrapper::setAlpha( double a ){
        alpha = a;
}
void GridWrapper::setBeta( double b ){
        beta = b;
}
void GridWrapper::setPrint( bool p ){
        print = p;
}
void GridWrapper::setOperation( Operations op ){
        todo = op;
}
bool GridWrapper::isValid() const{
        // operations that need a grid filename
        if ( (todo == op_getpoints) || (todo == op_getquadrature) || (todo == op_loadvalues) || (todo == op_evaluate) || (todo == op_getinterweights) || (todo == op_refine) || (todo == op_info) ){
                if( grid_filename == 0 ){
                        cerr << "ERROR: must provide a grid filename" << endl;
                        return false;
                }
        }
        // operations that need an input file
        if ( (todo == op_loadvalues) || (todo == op_evaluate) || (todo == op_getinterweights) ){
                if( in_filename == 0 ){
                        cerr << "ERROR: must provide an input file" << endl;
                        return false;
                }
        }
        return true;
}
const char* GridWrapper::getVersion() const{
        return "1.0";
}
const char* GridWrapper::getLicense() const{
        return "License GPLv3";
}
void GridWrapper::printVersion() const{
        cout << setw(25) << "libtasmaniansparsegrid.a" << "   version: " << grid.getVersion() << "  " << grid.getLicense() << endl;
        cout << setw(25) << "tasgrid" << "   version: " << getVersion() << "  " << getLicense() << endl;
}

bool GridWrapper::doOperation(){
        if ( todo == op_recycle ){
                return recycleGrid();
        }else if ( todo == op_makegrid ){
                return makeCanonicalGrid();
        }else if ( todo == op_makequadrature ){
                return makeCanonicalQuadrature();
        }else if ( todo == op_getquadrature ){
                return getQuadrature();
        }else if ( todo == op_getpoints ){
                return readPrintPoints();
        }else if ( todo == op_getneededpoints ){
                return readPrintNeededPoints();
        }else if ( todo == op_loadvalues ){
                return loadValues();
        }else if ( todo == op_evaluate ){
                return evaluate();
        }else if ( todo == op_getinterweights ){
                return getInterWeights();
        }else if ( todo == op_integrate ){
                return integrate();
        }else if ( todo == op_info ){
                return printInfo();
        }else if ( todo == op_refine ){
                return refine();
        };

        return true;
}

void GridWrapper::writeMatrix( int rows, int cols, double x[], const char *filename ) const{
        std::ofstream ofs;
        ofs.open( filename );
        ofs << rows << " " << cols << endl;
        ofs.precision(17);
        for( int i=0; i<rows; i++ ){
                for( int j=0; j<cols; j++ ){
                        ofs << setw(25) << std::scientific << x[i*cols + j] << " ";
                }
                ofs << endl;
        }
        ofs.close();
}
void GridWrapper::printMatrix( int rows, int cols, double x[] ) const{
        cout << rows << " " << cols << endl;
        cout.precision(17);
        for( int i=0; i<rows; i++ ){
                for( int j=0; j<cols; j++ ){
                        cout << setw(25) << std::scientific << x[i*cols + j] << " ";
                }
                cout << endl;
        }
}
void GridWrapper::readMatrix( int &rows, int &cols, double* &x, const char *filename ) const{
        std::ifstream ifs; ifs.open(filename);
        ifs >> rows >> cols;
        if ( (rows == 0) && (cols == 0) ){
                cout << "WARNING: empty file" << endl;
                return;
        }
        if ( x != 0 ){ delete x; }
        x = new double[rows*cols];
        for( int i=0; i<rows; i++ ){
                for( int j=0; j<cols; j++ ){
                        ifs >> x[i*cols + j];
                }
        }
        ifs.close();
}

bool GridWrapper::makeCanonicalGrid(){
        makeGrid();
        if ( in_filename != 0 ){
                double *ranges = 0;
                int numr, numc;
                readMatrix( numr, numc, ranges, in_filename );
                if ( (numr<num_dimensions) || (numc<2) ){
                        cerr << "ERROR: not enough range entires provided, using canonical domain" << endl;
                }else{
                        double *xmin = new double[num_dimensions];
                        double *xMax = new double[num_dimensions];
                        for ( int i=0; i<num_dimensions; i++ ){
                                xmin[i] = ranges[i*numc];
                                xMax[i] = ranges[i*numc+1];
                        }
                        grid.setTransformAB( xmin, xMax );
                        delete[] xmin;
                        delete[] xMax;
                }
                if ( ranges != 0 ){ delete[] ranges; }
        }
        writePrintPoints( (todo == op_recycle) );
        writeGrid();
        return true;
}
bool GridWrapper::makeCanonicalQuadrature(){
        makeGrid();
        writeGrid();
        double *w = 0, *x = 0;
        grid.getPoints( x );
        grid.getWeights( w );
        int num_points = grid.getNumPoints();
        int num_dimensions = grid.getNumDimensions();
        writePrintQuadrature( num_points, num_dimensions, w, x );
        return true;
}
bool GridWrapper::readPrintPoints(){
        if ( !readGrid() ) return false;
        writePrintPoints();
        return true;
}
bool GridWrapper::readPrintNeededPoints(){
        if ( !readGrid() ) return false;
        writePrintPoints( true );
        return true;
}
bool GridWrapper::getQuadrature(){
        if ( !readGrid() ) return false;
        double *w = 0, *x = 0;
        grid.getPoints( x );
        grid.getWeights( w );
        int num_p = grid.getNumPoints();
        int num_d = grid.getNumDimensions();
        writePrintQuadrature( num_p, num_d, w, x );
        delete[] w;
        delete[] x;
        return true;
}
void GridWrapper::writePrintQuadrature( int num_p, int num_d, double w[], double x[] ) const{
        double *mat = new double[num_p * ( num_d + 1 )];
        for( int i=0; i<num_p; i++ ){
                mat[ i *( num_d+1 ) ] = w[i];
                for( int j=0; j<num_d; j++ ){
                        mat[ i *( num_d+1 ) + 1 + j ] = x[ i*num_d + j ];
                }
        }
        if ( out_filename != 0 ){
                writeMatrix( num_p, num_d+1, mat, out_filename );
        }
        if ( print ){
                printMatrix( num_p, num_d+1, mat );
        }
        delete[] mat;
}
bool GridWrapper::loadValues(){
        if ( !readGrid() ) return false;
        double *vals = 0;
        int num_p, num_o;
        readMatrix( num_p, num_o, vals, in_filename );
        if ( num_p != grid.getNumNeededPoints() ){
                cerr << "ERROR: wrong number of points, there are " << num_p << " points provided, but the grid needs " << grid.getNumNeededPoints() << endl;
                delete vals;
                return false;
        }
        if ( grid.getNumOutputs() != num_o ){
                cerr << "ERROR: wrong number of outputs, there are " << num_o << " outputs provided, but the grid is set for " << grid.getNumOutputs() << endl;
                cerr << "       You must change the number of outputs first, use tasgrid for that purpse." << endl;
                delete vals;
                return false;
        }
        grid.loadNeededPoints( vals );
        writeGrid();
        delete[] vals;
        return true;
}
bool GridWrapper::evaluate(){
        if ( !readGrid() ) return false;
        int num_o = grid.getNumOutputs();
        if ( num_o == 0 ){
                cerr << "ERROR: the grid is not set for internal evaluations, use the get-interpolation-weights option" << endl;
                return false;
        }
        double *points = 0;
        int num_p, num_d;
        readMatrix( num_p, num_d, points, in_filename );
        if ( grid.getNumDimensions() != num_d ){
                cerr << "ERROR: wrong number of dimensions, there are " << num_d << " provided, but the grid is set for " << grid.getNumDimensions() << endl;
                delete points;
                return false;
        }
        double *res = new double[num_p * grid.getNumOutputs()];
        for( int i=0; i<num_p; i++ ){
                grid.evaluate( &(points[i*num_d]), &(res[i*num_o]) );
        }
        if ( out_filename != 0 ){
                writeMatrix( num_p, num_o, res, out_filename );
        }
        if ( print ){
                printMatrix( num_p, num_o, res );
        }
        delete[] res;
        delete[] points;
        return true;
}
bool GridWrapper::getInterWeights(){
        if ( !readGrid() ) return false;
        double *points = 0;
        int num_p, num_d;
        readMatrix( num_p, num_d, points, in_filename );
        if ( grid.getNumDimensions() != num_d ){
                cerr << "ERROR: wrong number of dimensions, there are " << num_d << " provided, but the grid is set for " << grid.getNumDimensions() << endl;
                delete points;
                return false;
        }
        int num_w = grid.getNumPoints();
        double *res = new double[num_p * num_w];
        double *w = 0;
        for( int i=0; i<num_p; i++ ){
                //grid.eval( &(points[i*num_d]), &(res[i*num_o]) );
                grid.getInterpolantWeights( &(points[i*num_d]), w );
                for( int j=0; j<num_w; j++ ){
                        res[i*num_w + j] = w[j];
                }
        }
        if ( out_filename != 0 ){
                writeMatrix( num_p, num_w, res, out_filename );
        }
        if ( print ){
                printMatrix( num_p, num_w, res );
        }
        delete[] res;
        delete[] points;
        delete[] w;
        return true;
}
bool GridWrapper::integrate(){
        if ( !readGrid() ) return false;
        double *res = 0; res = new double[grid.getNumOutputs()];
        grid.integrate( res );
        if ( out_filename != 0 ){
                writeMatrix( 1, grid.getNumOutputs(), res, out_filename );
        }
        if ( print ){
                printMatrix( 1, grid.getNumOutputs(), res );
        }
        delete[] res;
        return true;
}
void GridWrapper::writePrintPoints( bool use_needed_points ){
        double *points = 0;
        int num_points;
        if ( use_needed_points ){
                num_points = grid.getNumNeededPoints();
                if ( num_points > 0) grid.getNeededPoints(points);
        }else{
                num_points = grid.getNumPoints();
                grid.getPoints(points);
        }
        if ( out_filename != 0 ){
                writeMatrix( num_points, grid.getNumDimensions(), points, out_filename );
        }
        if ( print ){
                printMatrix( num_points, grid.getNumDimensions(), points );
        }
        delete[] points;
}
bool GridWrapper::printInfo(){
        if ( !readGrid() ) return false;
        grid.printStats();
        return true;
}

void GridWrapper::makeGrid(){
        if ( isTensor ){
                int indx[num_dimensions];
                if ( anisotropic_filename != 0 ){
                        int rows, cols;
                        double *float_anisotropic = 0;
                        readMatrix( rows, cols, float_anisotropic, anisotropic_filename );
                        if ( (rows != num_dimensions) || (cols != 1) ){
                                cerr << "ERROR: wrong format of the anisotropic file" << endl;
                        }
                        for( int i=0; i<num_dimensions; i++ ) indx[i] = (int) (float_anisotropic[i] + 0.4);
                        delete[] float_anisotropic;
                }else{
                        for( int i=0; i<num_dimensions; i++ ) indx[i] = depth;
                }
                double ab[2]; ab[0] = alpha; ab[1] = beta;
                grid.makeFullTensorGrid( num_dimensions, num_outputs, indx, oned, ab );
        }else{
                if ( (oned == TasGrid::rule_pwpolynomial) || (oned == TasGrid::rule_pwpolynomial0) ){
                        grid.makeLocalPolynomialGrid( num_dimensions, num_outputs, depth, order, oned );
                }else if ( oned == TasGrid::rule_wavelet ){
                        grid.makeWaveletGrid( num_dimensions, num_outputs, depth, order );
                }else{
                        int *anisotropic = 0;
                        if ( anisotropic_filename != 0 ){
                                int rows, cols;
                                double *float_anisotropic = 0;
                                readMatrix( rows, cols, float_anisotropic, anisotropic_filename );
                                if ( (rows != num_dimensions) || (cols != 1) ){
                                        cerr << "ERROR: wrong format of the anisotropic file" << endl;
                                        return;
                                }
                                anisotropic = new int[num_dimensions];
                                for( int i=0; i<num_dimensions; i++ ){
                                        anisotropic[i] = (int) (float_anisotropic[i] + 0.4); // rounding to the nearest ineger
                                }
                                delete[] float_anisotropic;
                        }
                        double ab[2]; ab[0] = alpha; ab[1] = beta;
                        grid.makeGlobalGrid( num_dimensions, num_outputs, depth, type, oned, anisotropic, ab );
                        if ( anisotropic != 0 ){ delete[] anisotropic; anisotropic = 0; }
                }
        }
}
bool GridWrapper::recycleGrid(){
        if ( !readGrid() ) return false;
        if ( grid.getOneDRule() == TasGrid::rule_pwpolynomial ){
                grid.recycleLocalPolynomialGrid( depth, order );
        }else if ( grid.getOneDRule() == TasGrid::rule_wavelet ){
                grid.recycleWaveletGrid( depth, order );
        }else{
                if ( grid.isFullTensor() ){
                        int indx[num_dimensions];
                        if ( anisotropic_filename != 0 ){
                                int rows, cols;
                                double *float_anisotropic = 0;
                                readMatrix( rows, cols, float_anisotropic, anisotropic_filename );
                                if ( (rows != num_dimensions) || (cols != 1) ){
                                        cerr << "ERROR: wrong format of the anisotropic file" << endl;
                                }
                                for( int i=0; i<num_dimensions; i++ ) indx[i] = (int) (float_anisotropic[i] + 0.4);
                                delete[] float_anisotropic;
                        }else{
                                for( int i=0; i<num_dimensions; i++ ) indx[i] = depth;
                        }
                        grid.recycleFullTensorGrid( indx );
                }else{
                        int *anisotropic = 0;
                        if ( anisotropic_filename != 0 ){
                                int rows, cols;
                                double *float_anisotropic = 0;
                                readMatrix( rows, cols, float_anisotropic, anisotropic_filename );
                                if ( (rows != grid.getNumDimensions()) || (cols != 1) ){
                                        cerr << "ERROR: wrong format of the anisotropic file" << endl;
                                }
                                anisotropic = new int[grid.getNumDimensions()];
                                for( int i=0; i<num_dimensions; i++ ){
                                        anisotropic[i] = (int) (float_anisotropic[i] + 0.4); // rounding to the nearest ineger
                                }
                                delete[] float_anisotropic;
                        }
                        grid.recycleGlobalGrid( depth, type, anisotropic );
                        if ( anisotropic != 0 ){ delete[] anisotropic; anisotropic = 0; }
                }
        }
        writeGrid();
        writePrintPoints( true );
        return true;
}
bool GridWrapper::readGrid(){
        if ( !(grid.read(grid_filename)) ){
                cerr << "ERROR: could not read from grid file" << grid_filename << endl;
                return false;
        }
        return true;
}
void GridWrapper::writeGrid(){
        if ( grid_filename != 0 ){
                grid.write( grid_filename );
        }
}
bool GridWrapper::refine(){
        if ( !readGrid() ) return false;
        grid.setRefinement( tolerance, refinement );
        writeGrid();
        if ( out_filename != 0 ){
                writePrintPoints( true );
        }
        return true;
}

#endif
