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

#ifndef __TASMANIAN_SPARSE_GRID_CPP
#define __TASMANIAN_SPARSE_GRID_CPP

#include "TasmanianSparseGrid.hpp"

namespace TasGrid{

const char* TasmanianSparseGrid::getVersion() const{ return "1.0"; }
const char* TasmanianSparseGrid::getLicense() const{ return "License GPLv3"; }

TasmanianSparseGrid::TasmanianSparseGrid() : global(0), plocal(0), grid(0), new_global(0), new_plocal(0), new_grid(0), rule(rule_base), transform_a(0), transform_b(0),
                wavelet(0), new_wavelet(0), fgrid(0), new_fgrid(0)
{
        srand(time(0));
}

TasmanianSparseGrid::~TasmanianSparseGrid (){
        clear();
}

void TasmanianSparseGrid::write( const char* filename ) const{ // write the grid to a file
        std::ofstream ofs; ofs.open( filename );
        write( ofs );
        ofs.close();
}
bool TasmanianSparseGrid::read( const char* filename ){ // reads the grid
        std::ifstream ifs; ifs.open( filename );
        bool pass = read( ifs );
        ifs.close();
        return pass;
}

void TasmanianSparseGrid::write( std::ofstream &ofs ) const{ // adds the class to an already opened stream
        int num_dimension = getNumDimensions();
        ofs << "TASMANIAN SPARSE GRID version " << getVersion() << endl;
        ofs << "WARNING: do not edit this manually" << endl;
        ofs << "Domain: ";
        if ( transform_a == 0  ){
                ofs << "Canonical" << endl;
        }else{
                ofs << "Custom" << endl;
                ofs << num_dimension << endl;
                twrite( num_dimension, transform_a, ofs );
                twrite( num_dimension, transform_b, ofs );
        }
        ofs << "Grid: ";
        if ( rule == rule_base ){
                ofs << "Empty" << endl;
        }else if ( (rule == rule_pwpolynomial) || (rule == rule_pwpolynomial0) ){
                ofs << "LocalPolynomial" << endl;
                plocal->write( ofs );
        }else if ( rule == rule_fulltensor ){
                ofs << "FullTensor" << endl;
                fgrid->write( ofs );
        }else if ( rule == rule_wavelet)  {
        	ofs << "Wavelet" << endl;
        	wavelet->write(ofs);
        }else{ // default is Global Polynomial Grid, it has the largest number of rules
                ofs << "GlobalPolynomial" << endl;
                global->write( ofs );
        }
        ofs << "NewGrid: ";
        if ( new_grid != 0 ){
                ofs << "yes" << endl;
                if ( rule == rule_pwpolynomial ){
                        new_plocal->write( ofs );
                }else if( rule == rule_wavelet ){
                	new_wavelet->write(ofs);
                }else if ( rule == rule_fulltensor ){
                        ofs << "FullTensor" << endl;
                        new_fgrid->write( ofs );
                }else{
                        new_global->write( ofs );
                };
                ofs << "no" << endl;
        }
        ofs << "TASMANIAN SPARSE GRID end" << endl;
}
bool TasmanianSparseGrid::read( std::ifstream &ifs ){
        bool empty = false;
        bool pw = false, free_bound = true;
        bool gl = false;
        bool ft = false;
        bool wv = false;
        bool custom = false;
        int dim = 1;

        std::string T;
        ifs >> T; if ( !(T.compare("TASMANIAN") == 0) ){  cerr << "ERROR: wrong file format code 1" << endl; return false; }
        ifs >> T; if ( !(T.compare("SPARSE") == 0) ){  cerr << "ERROR: wrong file format code 2" << endl; return false; }
        ifs >> T; if ( !(T.compare("GRID") == 0) ){  cerr << "ERROR: wrong file format code 3" << endl; return false; }
        ifs >> T; if ( !(T.compare("version") == 0) ){  cerr << "ERROR: wrong file format code 4" << endl; return false; }
        getline( ifs, T ); T.erase(0,1); if ( !(T.compare(getVersion()) == 0) ){ cout << "WARNING: Version Mismatch, Possibly Undefined Behavior!" << endl; }
        getline( ifs, T ); if ( !(T.compare("WARNING: do not edit this manually") == 0) ){ cerr << "ERROR: wrong file format code 5" << endl; return false; }
        ifs >> T; if ( !(T.compare("Domain:") == 0) ){ cerr << "ERROR: wrong file format code 6" << endl; return false; }
        ifs >> T;
        if ( T.compare("Custom") == 0 ){
                ifs >> dim;
                custom = true;
        }else if ( T.compare("Canonical") == 0 ){
                custom = false;
        }else{
                cerr << "ERROR: wrong file format code 7" << endl; return false;
        }

        double read_xmin[dim], read_xmax[dim];
        if ( custom ){
                tread( dim, read_xmin, ifs );
                tread( dim, read_xmax, ifs );
        }

        ifs >> T; if ( !(T.compare("Grid:") == 0) ){ cerr << "ERROR: wrong file format code 8" << endl; return false; }
        ifs >> T;
        if ( T.compare("Empty") == 0 ){ empty = true; }else
        if ( T.compare("LocalPolynomial") == 0 ){
                pw = true;
        }else
        if ( T.compare("FullTensor") == 0 ){ ft = true; }else
        if ( T.compare("GlobalPolynomial") == 0 ){ gl = true; }else
        if ( T.compare("Wavelet") == 0 ){ wv = true; }else{
                cerr << "ERROR: wrong file format code 9" << endl; return false;
        }
        clear();
        bool pass = true;
        if ( pw ){
                plocal = new LocalPolynomialGrid();
                pass = plocal -> read( ifs );
                grid = plocal;
        }
        if ( gl ){
                global = new GlobalGrid();
                pass = global -> read( ifs );
                grid = global;
        }
        if ( wv ){
        	wavelet = new WaveletGrid();
        	pass = wavelet->read(ifs);
        	grid = wavelet;
        }
        if ( ft ){
                fgrid = new FullTensorGrid();
                pass = fgrid -> read( ifs );
                grid = fgrid;
        }
        if ( pass ){ // if everything so far is good, remove the last line and copy the min/max
                rule = grid->getOneDRule();
                if ( custom ){
                        setTransformAB( read_xmin, read_xmax );
                }
                ifs >> T; if ( !(T.compare("NewGrid:") == 0) ){ cerr << "ERROR: wrong file format code 10" << endl; return false; }
                ifs >> T;
                if ( T.compare("yes") == 0 ){
                        if ( pw ){
                                new_plocal = new LocalPolynomialGrid();
                                new_grid = new_plocal;
                                pass = new_plocal -> read( ifs );
                        }
                        if ( gl ){
                                new_global = new GlobalGrid();
                                new_grid = new_global;
                                pass = new_global -> read( ifs );

                        }
                        if ( wv ){
                        	new_wavelet = new WaveletGrid();
                        	new_grid = new_wavelet;
                        	pass = new_wavelet->read(ifs);
                        }
                        if ( ft ){
                                new_fgrid = new FullTensorGrid();
                                new_grid = new_fgrid;
                                pass = new_fgrid -> read( ifs );

                        }
                }
                if ( pass ){ // if everything so far is good, remove the last line
                        getline( ifs, T );
                }
        }
        return pass;
}

void TasmanianSparseGrid::makeGlobalGrid( int dimensions, int outputs, int depth, TypeDepth type, TypeOneDRule oned, const int *anisotropic, const double *alpha_beta ){
        clear();
        global = new GlobalGrid( dimensions, outputs, depth, type, oned, anisotropic, alpha_beta );
        grid = global;
        rule = oned;
}
void TasmanianSparseGrid::makeLocalPolynomialGrid( int dimensions, int outputs, int depth, int order, TypeOneDRule boundary ){
        clear();
        plocal = new LocalPolynomialGrid( dimensions, outputs, depth, order, boundary );
        grid = plocal;
        rule = boundary;
}

void TasmanianSparseGrid::makeWaveletGrid(int dimensions, int outputs, int depth, int order){
	clear();
	wavelet = new WaveletGrid(dimensions, outputs, depth, order);
	grid = wavelet;
	rule = rule_wavelet;
}
void TasmanianSparseGrid::makeFullTensorGrid( int dimensions, int outputs, int order[], TypeOneDRule oned, const double *alpha_beta ){
        clear();
        fgrid = new FullTensorGrid( dimensions, outputs, order, oned, alpha_beta );
        grid = fgrid;
        rule = rule_fulltensor;
}
void TasmanianSparseGrid::recycleFullTensorGrid( int order[] ){
        if ( fgrid == 0 ){
                cerr << "ERROR: cannot recycle a grid from a different type! Use getOneDRule() to verify the type of grid you have." << endl;
        }
        new_fgrid = new FullTensorGrid( fgrid->getNumDimensions(), fgrid->getNumOutputs(), order, fgrid->getOneDRule() );
        new_grid = new_fgrid;
        recycleData();
}
bool TasmanianSparseGrid::isFullTensor() const{
        return ( fgrid != 0 );
}

void TasmanianSparseGrid::recycleGlobalGrid( int depth, TypeDepth type, const int *anisotropic_weights ){
        if ( global == 0 ){
                cerr << "ERROR: cannot recycle a grid from a different type! Use getOneDRule() to verify the type of grid you have." << endl;
                return;
        }
        new_global = new GlobalGrid( global->getNumDimensions(), global->getNumOutputs(), depth, type, global->getOneDRule(), anisotropic_weights );
        new_grid = new_global;
        recycleData();
}
void TasmanianSparseGrid::recycleLocalPolynomialGrid( int depth, int order ){
        if ( plocal == 0 ){
                cerr << "ERROR: cannot recycle a grid from a different type! Use getOneDRule() to verify the type of grid you have." << endl;
                return;
        }
        new_plocal = new LocalPolynomialGrid( plocal->getNumDimensions(), plocal->getNumOutputs(), depth, order, plocal->getOneDRule() );
        new_grid = new_plocal;
        recycleData();
}
void TasmanianSparseGrid::recycleWaveletGrid( int depth, int order ){
        if ( wavelet == 0 ){
                cerr << "ERROR: cannot recycle a grid from a different type! Use getOneDRule() to verify the type of grid you have." << endl;
                return;
        }
        new_wavelet = new WaveletGrid( wavelet->getNumDimensions(), wavelet->getNumOutputs(), depth, order );
        new_grid = new_wavelet;
        recycleData();
}

void TasmanianSparseGrid::setTransformAB( const double *a, const double *b ){
        int num_dimensions = getNumDimensions();
        transform_a = new double[num_dimensions];
        transform_b = new double[num_dimensions];
        tcopy( num_dimensions, a, transform_a );
        tcopy( num_dimensions, b, transform_b );
}
void TasmanianSparseGrid::clearTransformAB(){
        if ( transform_a != 0 ){ delete[] transform_a; transform_a = 0; };
        if ( transform_b != 0 ){ delete[] transform_b; transform_b = 0; };
}
void TasmanianSparseGrid::getTransformAB( double* &a, double* &b ) const{
        int num_dimensions = getNumDimensions();
        if ( a != 0 ){ delete[] a; }; a = new double[num_dimensions];
        if ( b != 0 ){ delete[] b; }; b = new double[num_dimensions];
        if ( transform_a == 0 ){
                if ( (rule == rule_gausslaguerre) || (rule == rule_gausshermite) ){
                        for(int i = 0; i < num_dimensions; i++){
                                a[i] = 0.0; b[i] = 1.0;
                        }
                }else{ // working on the box [-1,1]^num_dimensions
                        for(int i = 0; i < num_dimensions; i++){
                                a[i] = -1.0; b[i] = 1.0;
                        }
                }
        }else{
                tcopy( num_dimensions, transform_a, a );
                tcopy( num_dimensions, transform_b, b );
        }
}

int TasmanianSparseGrid::getNumDimensions() const{ return grid->getNumDimensions(); }
int TasmanianSparseGrid::getNumOutputs() const{ return grid->getNumOutputs(); }
TypeOneDRule TasmanianSparseGrid::getOneDRule() const{ return grid->getOneDRule(); }
const char* TasmanianSparseGrid::getOneDRuleDescription() const{ return grid->getOneDRuleDescription(); }

int TasmanianSparseGrid::getNumPoints() const{ return grid->getNumPoints(); }

void TasmanianSparseGrid::getPoints( double* &pnts ) const{
        grid->getPoints( pnts );
        if ( transform_a != 0 ){
                int num_dimnensions = getNumDimensions();
                for( int i=0; i<getNumPoints(); i++ ){
                        mapCanonicalToDomain( &(pnts[i*num_dimnensions]) );
                }
        }
}
void TasmanianSparseGrid::getWeights( double* &weights ) const{
        grid->getWeights( weights );
        if ( transform_a != 0 ){
                double scale = getWeightsScale();
                for( int i=0; i<getNumPoints(); i++ ) weights[i] *= scale;
        }

};
void TasmanianSparseGrid::getInterpolantWeights( const double x[], double* &weights ) const{
        if ( transform_a == 0 ){
                grid->getInterpolantWeights( x, weights );
        }else{
                double x_canonical[getNumDimensions()];
                tcopy( getNumDimensions(), x, x_canonical );
                mapDomainToCanonical( x_canonical );
                grid->getInterpolantWeights( x_canonical, weights );
        }
};

int TasmanianSparseGrid::getNumNeededPoints() const{ return ( new_grid == 0) ? grid->getNumNeededPoints() : new_grid->getNumNeededPoints(); }
void TasmanianSparseGrid::getNeededPoints( double* &pnts ) const{
        if ( new_grid == 0 ){
                grid->getNeededPoints( pnts );
        }else{
                new_grid->getNeededPoints( pnts );
        }
        if ( transform_a != 0 ){
                int num_dimnensions = getNumDimensions();
                for( int i=0; i<getNumNeededPoints(); i++ ){
                        mapCanonicalToDomain( &(pnts[i*num_dimnensions]) );
                }
        }
}
void TasmanianSparseGrid::loadNeededPoints( const double vals[] ){
        if ( new_grid == 0 ){
                grid->loadNeededPoints( vals );
        }else{
                new_grid->loadNeededPoints( vals );

                swapGrids();
        }
}

void TasmanianSparseGrid::evaluate( const double x[], double y[] ) const{
        if ( transform_a == 0 ){
                grid->evaluate(x, y);
        }else{
                double *x_canonical = new double[getNumDimensions()];
                tcopy( getNumDimensions(), x, x_canonical );
                mapDomainToCanonical( x_canonical );
                grid->evaluate( x_canonical, y );
        }
}
void TasmanianSparseGrid::integrate( double y[] ) const{
        grid->integrate(y);
        if ( transform_a != 0 ){
                double scale = getWeightsScale();
                for( int i=0; i<getNumOutputs(); i++ ) y[i] *= scale;
        }
}

void TasmanianSparseGrid::clear(){
        clearRefinement();
        if ( global != 0 ){ delete global; }; global = 0;
        if ( plocal != 0 ){ delete plocal; }; plocal = 0;
        if ( fgrid != 0 ){ delete fgrid; }; fgrid = 0;
        if ( wavelet != 0){ delete wavelet; }; wavelet = 0;
        grid = 0;
        if ( transform_a != 0 ){ delete[] transform_a; } transform_a = 0;
        if ( transform_b != 0 ){ delete[] transform_b; } transform_b = 0;
}

void TasmanianSparseGrid::mapCanonicalToDomain( double x[] ) const {
        if ( rule == rule_gausslaguerre ){
                for( int i=0; i<getNumDimensions(); i++ ){
                        x[i] /= transform_b[i];
                        x[i] += transform_a[i];
                }
        }else if ( rule == rule_gausshermite ){
                for( int i=0; i<getNumDimensions(); i++ ){
                        x[i] *= sqrt( transform_b[i] );
                        x[i] += transform_a[i];
                }
        }else{
                for( int i=0; i<getNumDimensions(); i++ ){
                        x[i] *= 0.5* ( transform_b[i] - transform_a[i] );
                        x[i] += 0.5* ( transform_b[i] + transform_a[i] );
                }
        }
}
void TasmanianSparseGrid::mapDomainToCanonical( double x[] ) const {
        if ( rule == rule_gausslaguerre ){
                for( int i=0; i<getNumDimensions(); i++ ){
                        x[i] -= transform_a[i];
                        x[i] *= transform_b[i];
                }
        }else if ( rule == rule_gausshermite ){
                for( int i=0; i<getNumDimensions(); i++ ){
                        x[i] -= transform_a[i];
                        x[i] /= sqrt( transform_b[i] );
                }
        }else{
                for( int i=0; i<grid->getNumDimensions(); i++ ){
                        x[i] *= 2.0;
                        x[i] -= ( transform_b[i] + transform_a[i] );
                        x[i] /= ( transform_b[i] - transform_a[i] );
                }
        }
}
double TasmanianSparseGrid::getWeightsScale() const{
        double scale = 1.0;
        if ( (rule == rule_gausschebyshev1) || (rule == rule_gausschebyshev2) || (rule == rule_gaussgegenbauer) || (rule == rule_gaussjacobi) ){
                double alpha = ( rule == rule_gausschebyshev1 ) ? -0.5 : ( rule == rule_gausschebyshev2 ) ? 0.5 : global->getAlpha();
                double beta = ( rule == rule_gausschebyshev1 ) ? -0.5 : ( rule == rule_gausschebyshev2 ) ? 0.5 : ( rule == rule_gaussgegenbauer ) ? global->getAlpha() : global->getBeta();
                for( int i=0; i<getNumDimensions(); i++ ) scale *= pow( 0.5*( transform_b[i] - transform_a[i] ), alpha + beta + 1.0 );
        }else if ( rule == rule_gausslaguerre ){
                for( int i=0; i<getNumDimensions(); i++ ) scale *= exp( -transform_a[i] * transform_b[i] ) / transform_b[i];
        }else if ( rule == rule_gausshermite ){
                double power = 0.5 * ( 1.0 - global->getAlpha() );
                for( int i=0; i<getNumDimensions(); i++ ) scale *= pow( transform_b[i], power );
        }else{
                for( int i=0; i<getNumDimensions(); i++ ) scale *= (transform_b[i] - transform_a[i] ) / 2.0;
        }
        return scale;
}

void TasmanianSparseGrid::clearRefinement(){
        if ( new_global != 0 ){ delete new_global; }; new_global = 0;
        if ( new_plocal != 0 ){ delete new_plocal; }; new_plocal = 0;
        if ( new_wavelet != 0 ){ delete new_wavelet; }; new_wavelet = 0;
        if ( new_fgrid != 0 ){ delete new_fgrid; }; new_fgrid = 0;
	new_grid = 0;
}

void TasmanianSparseGrid::setRefinement( double tolerance, TypeRefinement criteria ){
        clearRefinement();
        if ( rule == rule_pwpolynomial ){ // local rule
        	new_plocal = new LocalPolynomialGrid( grid->getNumDimensions(), grid->getNumOutputs(), 1, plocal->getOrder(), plocal->getOneDRule() );
        	new_grid = new_plocal;
        }
        else if ( rule == rule_wavelet ){ // wavelets
        	new_wavelet = new WaveletGrid(grid->getNumDimensions(), grid->getNumOutputs(), 1, wavelet->getOrder() );
        	new_grid = new_wavelet;
        }else if ( rule == rule_fulltensor ){ // local rule
        	int indx[ grid->getNumDimensions() ];
        	tzero( grid->getNumDimensions(), indx );
        	new_fgrid = new FullTensorGrid( grid->getNumDimensions(), grid->getNumOutputs(), indx, fgrid->getOneDRule() );
        }else{ // global
                new_global = new GlobalGrid( grid->getNumDimensions(), grid->getNumOutputs(), 1, type_level, rule, global->getAnisotropic() );
                new_grid = new_global;
        }

        new_grid->setState( grid->getState() );

        IndexSet *update = 0;
        grid->getUpdateState( update, tolerance, criteria );

        new_grid->setUpdate( update );

        delete update;

        recycleData();
}

void TasmanianSparseGrid::swapGrids(){
        grid = new_grid; new_grid = 0;

        if ( global != 0 ){ delete global; }; global = new_global; new_global = 0;
        if ( plocal != 0 ){ delete plocal; }; plocal = new_plocal; new_plocal = 0;
        if ( wavelet != 0 ){ delete wavelet; }; wavelet = new_wavelet; new_wavelet = 0;
        if ( fgrid != 0 ){ delete fgrid; }; fgrid = new_fgrid; new_fgrid = 0;
}

void TasmanianSparseGrid::recycleData(){
        if ( grid->getNumOutputs() > 0 ){
                IndexSet *data = 0;
                grid->getData( data );
                new_grid->loadNeededPoints( data );
                delete data;

                if ( new_grid->getNumNeededPoints() == 0 ){ // there is nothign to wait for, swap the grids
                        swapGrids();
                }
        }else{ // there is nothign to load, swap the grids
                swapGrids();
        }
}

void TasmanianSparseGrid::printStats(){
        const int col1 = 25, col2 = 20;
        if ( rule == rule_base ){
                cout << "Empty Grid" << endl;
                return;
        }else if ( (rule == rule_pwpolynomial) || (rule == rule_pwpolynomial0) ){
                cout <<  std::setw(30) << "Local Polynomial Grid";
                if ( rule == rule_pwpolynomial0 ){ cout << " Zero Boundary"; }
                cout << endl;
                cout << std::setw(col1) << "order:";
                int order = plocal->getOrder();
                switch (order){
                        case -1: cout << std::setw(col2) << "maximal possible" << endl; break;
                        case 0: cout << std::setw(col2) << "zero (constant)" << endl; break;
                        case 1: cout << std::setw(col2) << "linear" << endl; break;
                        case 2: cout << std::setw(col2) << "quadratic" << endl; break;
                        case 3: cout << std::setw(col2) << "cubic" << endl; break;
                        case 4: cout << std::setw(col2) << "quartic" << endl; break;
                        case 5: cout << std::setw(col2) << "quintic" << endl; break;
                        case 6: cout << std::setw(col2) << "hexic" << endl; break;
                        case 7: cout << std::setw(col2) << "septic" << endl; break;
                        case 8: cout << std::setw(col2) << "octic" << endl; break;
                        case 9: cout << std::setw(col2) << "nonic" << endl; break;
                        case 10: cout << std::setw(col2) << "decic" << endl; break;
                        default: cout << std::setw(col2) << order << endl; break;
                }
        }else if ( rule == rule_fulltensor ){
                cout <<  std::setw(30) << "Full Tensor Grid" << endl;
                if ( grid->getOneDRule() == rule_chebyshev ){
                        cout << std::setw(col2) << "Chebyshev" << endl;
                }else if ( grid->getOneDRule() == rule_clenshawcurtis ){
                        cout << std::setw(col2) << "Clenshaw-Curtis" << endl;
                }else if ( grid->getOneDRule() == rule_gausslegendre ){
                        cout << std::setw(col2) << "Gauss-Legendre" << endl;
                }else if ( rule == rule_gausschebyshev1 ){
                        cout << std::setw(col2) << "Gauss-Chebyshev type 1" << endl;
                }else if ( rule == rule_gausschebyshev2 ){
                        cout << std::setw(col2) << "Gauss-Chebyshev type 2" << endl;
                }else if ( rule == rule_gausslaguerre ){
                        cout << std::setw(col2) << "Gauss-Laguerre" << endl;
                }else if ( rule == rule_gaussjacobi ){
                        cout << std::setw(col2) << "Gauss-Jacobi" << endl;
                }else if ( rule == rule_gausshermite ){
                        cout << std::setw(col2) << "Gauss-Hermite" << endl;
                }else if ( rule == rule_gaussgegenbauer ){
                        cout << std::setw(col2) << "Gauss-Gegenbauer" << endl;
                }else if ( rule == rule_fejer2 ){
                        cout << std::setw(col2) << "Fejer type 2" << endl;
                }
        }else{
                cout <<  std::setw(30) << "Global Grid" << endl;
                cout << std::setw(col1) << "base rule:";
                if ( rule == rule_chebyshev ){
                        cout << std::setw(col2) << "Chebyshev" << endl;
                }else if ( rule == rule_clenshawcurtis ){
                        cout << std::setw(col2) << "Clenshaw-Curtis" << endl;
                }else if ( rule == rule_gausslegendre ){
                        cout << std::setw(col2) << "Gauss-Legendre" << endl;
                }else if ( rule == rule_gausschebyshev1 ){
                        cout << std::setw(col2) << "Gauss-Chebyshev type 1" << endl;
                }else if ( rule == rule_gausschebyshev2 ){
                        cout << std::setw(col2) << "Gauss-Chebyshev type 2" << endl;
                }else if ( rule == rule_gausslaguerre ){
                        cout << std::setw(col2) << "Gauss-Laguerre" << endl;
                }else if ( rule == rule_gaussjacobi ){
                        cout << std::setw(col2) << "Gauss-Jacobi" << endl;
                }else if ( rule == rule_gausshermite ){
                        cout << std::setw(col2) << "Gauss-Hermite" << endl;
                }else if ( rule == rule_gaussgegenbauer ){
                        cout << std::setw(col2) << "Gauss-Gegenbauer" << endl;
                }else if ( rule == rule_fejer2 ){
                        cout << std::setw(col2) << "Fejer type 2" << endl;
                }
        }

        cout << std::setw(col1) << "number of dimensions:" << std::setw(col2) << grid->getNumDimensions() << endl;
        cout << std::setw(col1) << "number of points:" << std::setw(col2) << grid->getNumPoints() << endl;
        if ( grid->getNumOutputs() != 0 ){
                cout << std::setw(col1) << "interpolant outputs:" << std::setw(col2) << grid->getNumOutputs() << endl;
                cout << std::setw(col1) << "interpolant status:";
                //cout << grid->getNumNeededPoints() << endl;
                if ( grid->getNumNeededPoints() != 0 ){
                        cout << std::setw(col2) << "needs data" << endl;
                        cout << std::setw(col1) << "extra points needed:" << std::setw(col2) << getNumNeededPoints() << endl;
                }else{
                        cout << std::setw(col2) << "ready" << endl;
                        if ( (new_grid != 0) && (new_grid->getNumNeededPoints()) ){
                                cout << std::setw(col1) << "points needed:" << std::setw(col2) << getNumNeededPoints() << endl;
                        }
                }
        }
}

}

#endif
