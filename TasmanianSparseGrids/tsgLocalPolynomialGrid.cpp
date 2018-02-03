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

#ifndef __TASMANIAN_SPARSE_GRID_LOCAL_POLYNOMIAL_GRID_CPP
#define __TASMANIAN_SPARSE_GRID_LOCAL_POLYNOMIAL_GRID_CPP

#include "tsgLocalPolynomialGrid.hpp"

namespace TasGrid{

LocalPolynomialGrid::LocalPolynomialGrid() : num_dimensions(0), num_outputs(0), points(0), needed_points(0), surplus(0), rule1D(0), rule(rule_pwpolynomial){
        rule1D = &pwp;
};

LocalPolynomialGrid::LocalPolynomialGrid( int dimensions, int outputs, int depth, int order, TypeOneDRule boundary ) : num_dimensions(0), num_outputs(0), points(0), needed_points(0), surplus(0),
                rule1D(0), rule(rule_pwpolynomial){
        reset( dimensions, outputs, depth, order, boundary );
};

LocalPolynomialGrid::~LocalPolynomialGrid(){
        clear();
}

void LocalPolynomialGrid::reset( int dimensions, int outputs, int depth, int order, TypeOneDRule boundary ){
        clear();

        if ( boundary == rule_pwpolynomial0 ){
                rule1D = &pwp0;
                rule = rule_pwpolynomial0;
        }

        rule1D->setMaxOrder( order );

        num_dimensions = dimensions;  num_outputs = outputs;

        // add the points on zero level
        int num_p = 1;
        int num_zero = rule1D->getNumPoints(0);
        for( int i=0; i<num_dimensions; i++ ){
                num_p *= num_zero;
        }

        points = new IndexSet( num_dimensions, num_p, num_outputs );
        int root[num_dimensions];

        for( int i=0; i<num_p; i++ ){
                int tmp = i;
                for( int j=0; j<num_dimensions; j++ ){
                        root[j] = tmp % num_zero;
                        tmp /= num_zero;
                }
                points->add(root);
        }

        // add all the points on the next levels
        for( int l=1; l<depth; l++ ){
                needed_points = new IndexSet( num_dimensions, 0, num_outputs );
                for( int i=0; i<points->getNumIndexes(); i++ ){
                        const int *point = points->getIndexList(i);
                        for( int j=0; j<num_dimensions; j++ ){
                                addChild( point, j, needed_points, points );
                        }
                }
                points->add(needed_points);
                delete needed_points; needed_points = 0;
        }

        if ( num_outputs > 0 ){
                needed_points = new IndexSet( num_dimensions, 0, num_outputs );
                needed_points->add( points );
        }
}

void LocalPolynomialGrid::updateOrder( int new_order ){
        rule1D->setMaxOrder( new_order );
        if ( surplus != 0 ){
                recomputeSurpluses();
        }
}
int LocalPolynomialGrid::getOrder() const{ return rule1D->getMaxOrder(); }

int LocalPolynomialGrid::getNumDimensions() const{ return num_dimensions; }
int LocalPolynomialGrid::getNumOutputs() const{ return num_outputs; };
TypeOneDRule LocalPolynomialGrid::getOneDRule() const{ return rule; };
const char *LocalPolynomialGrid::getOneDRuleDescription() const{ return rule1D->getDescription(); };

void LocalPolynomialGrid::write( std::ofstream &ofs ) const{ // write the grid to a file
        ofs << "num_dimensions: " << num_dimensions << endl;
        ofs << "num_outputs: " << num_outputs << endl;
        ofs << "order: " << rule1D->getMaxOrder() << endl;
        ofs << "boundary: ";
        if ( rule == rule_pwpolynomial ){
                ofs << "free" << endl;
        }else{
                ofs << "zero" << endl;
        }
        ofs << "Points: ";
        if ( points != 0 ){
                ofs << "yes" << endl;
                points->write( ofs );
        }else{
                ofs << "no" << endl;
        }
        ofs << "Needed_Points: ";
        if ( needed_points != 0 ){
                ofs << "yes"  << endl;
                needed_points->write(ofs);
        }else{
                ofs << "no" << endl;
        }
        ofs << "Surplusses: ";
        if ( surplus != 0 ){
                ofs << "yes" << endl;
                twrite( points->getNumIndexes() * num_outputs, surplus, ofs );
        }else{
                ofs << "no" << endl;
        }
}

bool LocalPolynomialGrid::read( std::ifstream &ifs ){ // reads the grid
        clear();
        std::string T;
        ifs >> T; if ( !(T.compare( "num_dimensions:" ) == 0) ){ cerr << "ERROR: Wrong File Format! code LPG 1" << endl; ifs.close(); clear(); return false; }
        ifs >> num_dimensions;
        ifs >> T; if ( !(T.compare( "num_outputs:" ) == 0) ){ cerr << "ERROR: Wrong File Format! code LPG 2" << endl; ifs.close(); clear(); return false; }
        ifs >> num_outputs;
        ifs >> T; if ( !(T.compare( "order:" ) == 0) ){ cerr << "ERROR: Wrong File Format! code LPG 3" << endl; ifs.close(); clear(); return false; }
        int order; ifs >> order; rule1D->setMaxOrder(order);
        ifs >> T; if ( !(T.compare( "boundary:" ) == 0) ){ cerr << "ERROR: Wrong File Format! code LPG 4" << endl; ifs.close(); clear(); return false; }
        ifs >> T;
        if ( T.compare("zero") == 0 ){
                rule = rule_pwpolynomial0;
                rule1D = &pwp0;
        }
        ifs >> T; if ( !(T.compare( "Points:" ) == 0) ){ cerr << "ERROR: Wrong File Format! code LPG 5" << endl; ifs.close(); clear(); return false; }
        ifs >> T;
        if ( T.compare("yes") == 0 ){
                points = new IndexSet(1);
                points->read( ifs );
        }
        ifs >> T; if ( !(T.compare( "Needed_Points:" ) == 0) ){ cerr << "ERROR: Wrong File Format! code LPG 6" << endl; ifs.close(); clear(); return false; }
        ifs >> T;
        if ( T.compare("yes") == 0 ){
                needed_points = new IndexSet(1);
                needed_points->read( ifs );
        }
        ifs >> T; if ( !(T.compare( "Surplusses:" ) == 0) ){ cerr << "ERROR: Wrong File Format! code LPG 7" << endl; ifs.close(); clear(); return false; }
        ifs >> T;
        if ( T.compare("yes") == 0 ){
                surplus = new double[points->getNumIndexes() * num_outputs];
                tread( points->getNumIndexes() * num_outputs, surplus, ifs );
        }
        return true;
}

int LocalPolynomialGrid::getNumPoints() const{ return ( points == 0 ) ? 0 : points->getNumIndexes(); }

void LocalPolynomialGrid::getPoints( double* &pnts ) const{
        if ( pnts != 0 ){ delete[] pnts; }
        pnts = new double[ num_dimensions * points->getNumIndexes() ];
        for( int i=0; i<points->getNumIndexes(); i++ ){
                const int *point = points->getIndexList(i);
                for( int j=0; j<num_dimensions; j++ ){
                        pnts[ i*num_dimensions + j ] = rule1D->getX( point[j] );
                }
        }
};
void LocalPolynomialGrid::getWeights( double* &weights ) const{
        int num_points = points->getNumIndexes();
        if ( weights != 0 ){ delete[] weights; }
        weights = new double[num_points];
        #pragma omp parallel for
        for( int i=0; i<num_points; i++ ){
                weights[i] = evalIntegral( points->getIndexList(i) );
        }
        applySurplusMapTransposed( weights );
};
void LocalPolynomialGrid::getInterpolantWeights( const double x[], double* &weights ) const{
        int num_points = points->getNumIndexes();
        if ( weights != 0 ){ delete[] weights; }
        weights = new double[num_points];
        #pragma omp parallel for
        for( int i=0; i<num_points; i++ ){
                weights[i] = evalBasis( points->getIndexList(i), x );
        }
        applySurplusMapTransposed( weights );
};

int LocalPolynomialGrid::getNumNeededPoints() const{ return (needed_points == 0) ? 0 : needed_points->getNumIndexes(); };
void LocalPolynomialGrid::getNeededPoints( double* &pnts ) const{
        if ( pnts != 0 ){ delete[] pnts; }
        pnts = new double[ num_dimensions * needed_points->getNumIndexes() ];
        for( int i=0; i<needed_points->getNumIndexes(); i++ ){
                const int *point = needed_points->getIndexList(i);
                for( int j=0; j<num_dimensions; j++ ){
                        pnts[ i*num_dimensions + j ] = rule1D->getX( point[j] );
                }
        }
};
void LocalPolynomialGrid::loadNeededPoints( const double vals[] ){
        for( int i=0; i<needed_points->getNumIndexes(); i++ ){
                points->setValue( points->getSlot( needed_points->getIndexList(i) ), &(vals[num_outputs * i]) );
        }
        delete needed_points; needed_points = 0;
        recomputeSurpluses();
};
void LocalPolynomialGrid::loadNeededPoints( const IndexSet *data ){
        if ( needed_points == 0 ){ return; }
        IndexSet *old_needed = needed_points;
        needed_points = new IndexSet( num_dimensions, num_outputs );
        for( int i=0; i<old_needed->getNumIndexes(); i++ ){
                const int *np = old_needed->getIndexList(i);
                int dataSlot = data->getSlot( np );
                if ( dataSlot == -1 ){
                        needed_points->add( np ); // point was needed and is not in the data
                }else{
                        points->setValue( points->getSlot(np), data->getValueList(dataSlot) ); // set the data
                }
        }
        delete old_needed;
        if ( needed_points->getNumIndexes() == 0 ){
                delete needed_points; needed_points = 0;
                recomputeSurpluses();
        }
};

void LocalPolynomialGrid::evaluate( const double x[], double y[] ) const{
        int num_points = points->getNumIndexes();
        double *basis_values = new double[num_points];
        #pragma omp parallel for
        for( int i=0; i<num_points; i++ ){
                basis_values[i] = evalBasis( points->getIndexList(i), x );
        }
        for( int j=0; j<num_outputs; j++ ){
                double sum = 0.0;
                #pragma omp parallel for reduction( + : sum )
                for( int i=0; i<num_points; i++ ){
                        sum += basis_values[i] * surplus[i*num_outputs + j];
                }
                y[j] = sum;
        }
        delete[] basis_values;
}
void LocalPolynomialGrid::integrate( double y[] ) const{
        int num_points = points->getNumIndexes();
        double *basis_integrals = new double[num_points];
        #pragma omp parallel for
        for( int i=0; i<num_points; i++ ){
                basis_integrals[i] = evalIntegral( points->getIndexList(i) );
        }
        for( int j=0; j<num_outputs; j++ ){
                double sum = 0.0;
                #pragma omp parallel for reduction( + : sum )
                for( int i=0; i<num_points; i++ ){
                        sum += basis_integrals[i] * surplus[i*num_outputs + j];
                }
                y[j] = sum;
        }
        delete[] basis_integrals;
}

// refinement functions
const IndexSet* LocalPolynomialGrid::getState() const{ return points; };
void LocalPolynomialGrid::setState( const IndexSet* state ){
        clear();

        num_dimensions = state->getNumDimensions();
        num_outputs = state->getNumValues();

        points = new IndexSet( num_dimensions, 0, num_outputs );
        points->add( state );

        if ( num_outputs > 0 ){
                needed_points = new IndexSet( num_dimensions, 0, num_outputs );
                needed_points->add( points );
        }
};

void LocalPolynomialGrid::getData( IndexSet* &data ){
        if ( data != 0 ){ delete data; };
        data = new IndexSet( num_dimensions, 0, num_outputs );

        if ( num_outputs == 0 ){ return; } // nothing to load

        if ( needed_points == 0 ){
                data->add( points );
        }else{
                for( int i=0; i<points->getNumIndexes(); i++ ){
                        const int *p = points->getIndexList(i);
                        if ( needed_points->getSlot(p) == -1 ){
                                data->add( p, points->getValueList(i) );
                        }
                }
        }
}

void LocalPolynomialGrid::getUpdateState( IndexSet* &update, double tol, TypeRefinement criteria ) const{ // the magic of deciding what should and should not be added
        // implement classical refinement first
        if ( update != 0 ){ delete update; };
        update = new IndexSet( num_dimensions, 0, num_outputs );

        int *map = 0;
        buildUpdateMap( map, tol, criteria );

        bool parents = (criteria == refine_fds) || (criteria == refine_parents_first);

        int num_points = points->getNumIndexes();

        for( int i=0; i<num_points; i++ ){
                for( int j=0; j<num_dimensions; j++ ){
                        if ( map[i*num_dimensions+j] == 1 ){ // if this dimension needs to be refined
                                if ( !(parents && addParent( points->getIndexList(i), j, update, points )) ){
                                //if ( !(parents && isChildless( points->getIndexList(i), j ) && addParent( points->getIndexList(i), j, update, points )) ){
                                        addChild( points->getIndexList(i), j, update, points );
                                }
                        }
                }
        }

        delete[] map;
};

void LocalPolynomialGrid::setUpdate( const IndexSet *update ){
        if ( surplus != 0 ){ delete[] surplus; surplus = 0; }
        if ( needed_points != 0 ){ delete needed_points; needed_points = 0; }

        points->add( update );

        if ( num_outputs > 0 ){
                needed_points = new IndexSet( num_dimensions, 0, num_outputs );
                needed_points->add( points );
        }
};

void LocalPolynomialGrid::clear(){
        rule1D = &pwp;
        rule = rule_pwpolynomial;
        if ( points != 0 ){ delete points; } points = 0;
        if ( surplus != 0 ){ delete[] surplus; } surplus = 0;
        if ( needed_points != 0 ){ delete needed_points; } needed_points = 0;
        num_dimensions = 0; num_outputs = 0;
}

void LocalPolynomialGrid::addChild( const int point[], int direction, IndexSet *destination, IndexSet *exclude )const{
        int first, second;
        rule1D->getChildren( point[direction], first, second );
        int kid[num_dimensions];
        tcopy( num_dimensions, point, kid );
        kid[direction] = first;
        if ( (exclude == 0 ) || (exclude->getSlot(kid) == -1 ) ){ destination->add( kid ); }
        if ( second != -1 ){
                kid[direction] = second;
                if ( (exclude == 0 ) || (exclude->getSlot( kid ) == -1 ) ){ destination->add( kid ); }
        }
}

bool LocalPolynomialGrid::addParent( const int point[], int direction, IndexSet *destination, IndexSet *exclude ) const{
        int parenta, parentb;
        rule1D->getParents( point[direction], parenta, parentb );
        int dad[num_dimensions];
        tcopy( num_dimensions, point, dad );
        bool bAdded = false;
        if ( parenta != -1 ){
                dad[direction] = parenta;
                if ( (exclude == 0 ) || (exclude->getSlot(dad) == -1 ) ){ destination->add( dad ); bAdded = true; }
                dad[direction] = point[direction];
        }
        if ( parentb != -1 ){
                dad[direction] = parentb;
                if ( (exclude == 0 ) || (exclude->getSlot(dad) == -1 ) ){ destination->add( dad ); bAdded = true; }
                dad[direction] = point[direction];
        }
        return bAdded;
}
/*bool LocalPolynomialGrid::isChildless( const int point[], int direction ) const {
        int childa, childb;
        rule1D->getChildren( point[direction], childa, childb );
        int kid[num_dimensions];
        tcopy( num_dimensions, point, kid );
        kid[direction] = childa;
        return ( points->getSlot( kid ) == -1 );
}*/

double cnoise_uniform01(){
	return ( ( (double) rand() + 1.0 ) / ( (double) RAND_MAX + 1.0 ) );
};

void LocalPolynomialGrid::recomputeSurpluses(){
        int num_points = points->getNumIndexes();
        if ( surplus != 0 ){ delete[] surplus; }
        surplus = new double[num_points * num_outputs];

        for( int i=0; i<num_points; i++ ){
                tcopy( num_outputs, points->getValueList( i ), &(surplus[i*num_outputs]) );
        }

        int * map = 0;
        int max_level = makeLevelMap(map);

        double *nodes = 0; getPoints(nodes);

        for( int l=0; l<max_level; l++ ){
                for( int i=0; i<num_points; i++ ){
                        if ( map[i] == l ){ // we found a point on this level
                                #pragma omp parallel for schedule(guided)
                                for( int j=0; j<num_points; j++ ){
                                        if ( map[j] > l){ // we found a point on a lower level
                                                double basis_value = evalBasis( points->getIndexList(i), &(nodes[j*num_dimensions]) );
                                                for( int k=0; k<num_outputs; k++ ){
                                                        surplus[ j*num_outputs + k ] -= basis_value * surplus[ i*num_outputs + k ];
                                                }
                                        }
                                }
                        }
                }
        }

        delete[] nodes;
        delete[] map;
}

void LocalPolynomialGrid::applySurplusMapTransposed( double w[] ) const{
        int num_points = points->getNumIndexes();
        int * map = 0;
        int max_level = makeLevelMap(map);

        double *nodes = 0; getPoints(nodes);

        for( int l=max_level-1; l>=0; l-- ){
                #pragma omp parallel for schedule(guided)
                for( int i=0; i<num_points; i++ ){
                        if ( map[i] == l ){
                                for( int j=0; j<num_points; j++ ){
                                        if ( map[j] > l ){
                                                w[i] -= w[j] * evalBasis( points->getIndexList(i), &(nodes[j*num_dimensions]) );
                                        }
                                }
                        }
                }
        }

        delete[] nodes;
        delete[] map;
}

int LocalPolynomialGrid::makeLevelMap( int* &map ) const{
        if ( map != 0 ){ delete[] map; }
        map = new int[points->getNumIndexes()];
        int max = 0;
        for( int i=0; i<points->getNumIndexes(); i++ ){
                map[i] = 0;
                const int * p = points->getIndexList( i );
                for( int j=0; j<num_dimensions; j++ ){
                        map[i] += rule1D->getLevel( p[j] );
                }
                max = ( map[i] > max ) ? map[i] : max;
        }
        return max;
}

double LocalPolynomialGrid::evalBasis( const int p[], const double x[] ) const{
        double val = 1.0;
        for( int j=0; j<num_dimensions; j++ ){
                val *= rule1D->eval( rule1D->getLevel(p[j]), p[j], x[j] );
        }
        return val;
}

double LocalPolynomialGrid::evalIntegral( const int p[] ) const{
        double w = 1.0;
        for( int j=0; j<num_dimensions; j++ ){
                w *= rule1D->getWeight( rule1D->getLevel(p[j]), p[j] );
        }
        return w;
}

void LocalPolynomialGrid::buildUpdateMap( int* &map, double tol, TypeRefinement criteria ) const{
        if ( map != 0 ){ delete[] map; }
        int num_points = points->getNumIndexes();
        map = new int[ num_dimensions * num_points ];

        if ( surplus == 0 ){ for( int i=0; i<num_dimensions * num_points; i++ ){ map[i] = 1; }; return; }
        tzero( num_dimensions * num_points, map );

        double *norm = 0;
        computeOutputNormalization( norm );

        if ( (criteria == refine_classic) || (criteria == refine_parents_first) ){
                // classic refinement
                #pragma omp parallel for
                for( int i=0; i<num_points; i++ ){
                        bool refine = false;
                        for( int j=0; j<num_outputs; j++ ){
                                refine = refine || ( fabs( surplus[i*num_outputs + j] ) / norm[j] > tol );
                        }
                        if ( refine ){
                                for( int j=0; j<num_dimensions; j++ ){ map[i*num_dimensions + j] = 1; }
                        }
                }
        }else{
                // direction selective
                double *nodes = 0; getPoints(nodes);

                for( int s=0; s<num_points; s++ ){
                        for( int d=0; d<num_dimensions; d++ ){
                                if ( map[s*num_dimensions + d] == 0 ){
                                        const int *point = points->getIndexList( s );
                                        // count the number of points on the line
                                        int count = 0;
                                        for( int i=0; i<num_points; i++ ){
                                                count += sameLine( point, points->getIndexList(i), d ) ? 1 : 0;
                                        }

                                        int *pnts    = new int[count];
                                        double *vals = new double[count * num_outputs];
                                        int *levels  = new int[count];

                                        count = 0;
                                        int max_level = 0;
                                        for( int i=0; i<num_points; i++ ){
                                                const int *line_point = points->getIndexList(i);
                                                if ( sameLine( point, line_point, d ) ){
                                                        pnts[count] = i;
                                                        tcopy( num_outputs, points->getValueList(i), &(vals[count*num_outputs]) );
                                                        levels[count] = rule1D->getLevel(line_point[d]);
                                                        max_level = ( levels[count] > max_level ) ? levels[count] : max_level;
                                                        count++;
                                                }
                                        }

                                        for( int l=0; l<max_level; l++ ){
                                                for( int i=0; i<count; i++ ){
                                                        if ( levels[i] == l ){ // we found a point on this level
                                                                #pragma omp parallel for
                                                                for( int j=0; j<count; j++ ){
                                                                        if ( levels[j] > l ){ // we found a point on a lower level
                                                                                double basis_value = evalBasis( points->getIndexList( pnts[i] ), &(nodes[pnts[j]*num_dimensions]) );
                                                                                for( int k=0; k<num_outputs; k++ ){
                                                                                        vals[ j*num_outputs + k ] -= basis_value * vals[ i*num_outputs + k ];
                                                                                }
                                                                        }
                                                                }
                                                        }
                                                }
                                        }

                                        for( int i=0; i<count; i++ ){
                                                bool refine = false;
                                                for( int j=0; j<num_outputs; j++ ){
                                                        refine = refine || ( (fabs( vals[i*num_outputs + j] ) > tol) && (fabs( surplus[pnts[i]*num_outputs + j] ) / norm[j] > tol) );
                                                }
                                                if ( refine ){
                                                        map[pnts[i]*num_dimensions + d] = 1;
                                                }else{
                                                        map[pnts[i]*num_dimensions + d] = -1;
                                                }
                                        }

                                        delete[] levels;
                                        delete[] pnts;
                                        delete[] vals;
                                }
                        }
                }
                delete[] nodes;
        }
        delete[] norm;
}

bool LocalPolynomialGrid::sameLine( const int a[], const int b[], int direction ) const{
        for( int i=0; i<num_dimensions; i++ ){
                if ( (i != direction) && (a[i] != b[i]) ) return false;
        }
        return true;
}

void LocalPolynomialGrid::computeOutputNormalization( double* &norm ) const{
        if ( norm != 0 ){ delete[] norm; }
        norm = new double[num_outputs];
        tzero( num_outputs, norm );
        for( int i=0; i<points->getNumIndexes(); i++ ){
                const double *vals = points->getValueList( i );
                for( int j=0; j<num_outputs; j++ ){
                        norm[j] = ( norm[j] > fabs( vals[j] ) ) ? norm[j] : fabs( vals[j] );
                }
        }
        for( int j=0; j<num_outputs; j++ ){
                norm[j] = ( norm[j] < RELATIVE_ABSOLUTE_TRESHOLD ) ? 1.0 : norm[j];
        }
}

}

#endif
