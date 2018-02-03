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

#ifndef __TASMANIAN_SPARSE_GRID_TENSOR_RULE_CPP
#define __TASMANIAN_SPARSE_GRID_TENSOR_RULE_CPP

#include "tsgTensorRule.hpp"

using std::cout;
using std::endl;

namespace TasGrid{

TensorRule::TensorRule( int dimensions, const int *lindex, OneDRule *inducedRule ) : num_dimensions(dimensions), index(0), points(0), base(inducedRule), database(0), refs(0) {
        if ( dimensions > 0 ){
                index = new int[num_dimensions];
                tcopy( dimensions, lindex, index );
        }
        reset();
}

TensorRule::~TensorRule(){
        num_dimensions = 0;
        reset();
}

void TensorRule::reset(){
        database = 0;
        if ( refs != 0 ){ delete[] refs; refs = 0; };
        if ( num_dimensions == 0 ){
                if ( index != 0 ){ delete[] index; index = 0; };
                if ( points != 0 ){ delete points; points = 0; };
        }else{
                int num_points = 1;
                for( int i=0; i<num_dimensions; i++ ){ num_points *= base->getNumPoints( index[i] ); };
                if ( points != 0 ){ delete points; };
                points = new IndexSet( num_dimensions, num_points );

                int *pnt = new int[num_dimensions];

                recurseAddTensorPoints( 0, index, base, pnt, points );

                delete[] pnt;
        }
}

void TensorRule::rebuild( int dimensions, const int *lindex, OneDRule *inducedRule ){
        num_dimensions = dimensions;
        if ( num_dimensions > 0 ){
                if ( index != 0 ){ delete index; }; index = new int[num_dimensions];
                tcopy( num_dimensions, lindex, index );
                base = inducedRule;
                database = 0;
                if ( points != 0 ){ delete points; };
                reset();
        }
}

int TensorRule::getNumPoints() const{
        return points->getNumIndexes();
}

const IndexSet* TensorRule::getPoints() const{
        return points;
}

const int* TensorRule::getPoint( int i ) const{
        return points->getIndexList( i );
}

void TensorRule::getWeights( double* &weights ) const{
        int num_points = points->getNumIndexes();
        if ( weights != 0 ){ delete[] weights; }; weights = new double[num_points];

        for( int i=0; i<num_points; i++ ){
                weights[i] = 1.0;
                const int *point = points->getIndexList( i );
                for( int j=0; j<num_dimensions; j++ ){
                        weights[i] *= base->getWeight( index[j], point[j] );
                }
        }
}

void TensorRule::getInterpolantWeights( const double x[], double* &weights ) const{
        int num_points = points->getNumIndexes();
        if ( weights != 0 ){ delete[] weights; }; weights = new double[num_points];

        #pragma omp parallel for
        for( int i=0; i<num_points; i++ ){
                weights[i] = 1.0;
                const int *point = points->getIndexList( i );
                for( int j=0; j<num_dimensions; j++ ){
                        weights[i] *= base->eval( index[j], point[j], x[j] );
                }
        }
}


void TensorRule::referenceValues( const IndexSet *data ){
        int num_points = points->getNumIndexes();
        database = data;
        if ( refs != 0 ){ delete[] refs; }
        refs = new int[num_points];
        for( int i=0; i<num_points; i++ ){
                refs[i] = database->getSlot( points->getIndexList( i ) );
        }
}

void TensorRule::eval( const double x[], double y[] ) const{
        int num_points = points->getNumIndexes();
        int num_values = database->getNumValues();

#ifdef _OPENMP
        double *basis_values = new double[ num_points ];
        #pragma omp parallel for
        for( int i=0; i<num_points; i++ ){
                basis_values[i] = 1.0;
                const int *point = points->getIndexList( i );
                for( int j=0; j<num_dimensions; j++ ){
                        basis_values[i] *= base->eval( index[j], point[j], x[j] );
                }
        }

        for( int k=0; k<num_values; k++ ){
                double sum = 0.0;
                #pragma omp parallel for reduction( + : sum )
                for( int i=0; i<num_points; i++ ){
                        const double *value = database->getValueList( refs[i] );
                        sum += basis_values[i] * value[k];
                }
                y[k] = sum;
        }
        delete[] basis_values;
#else
        tzero( num_values, y );
        double basis_value;
        for( int i=0; i<num_points; i++ ){
                basis_value = 1.0;
                const int *point = points->getIndexList( i );
                const double *value = database->getValueList( refs[i] );
                for( int j=0; j<num_dimensions; j++ ){
                        basis_value *= base->eval( index[j], point[j], x[j] );
                }
                for( int k=0; k<num_values; k++ ){
                        y[k] += basis_value * value[k];
                }
        }
#endif
};

void recurseAddTensorPoints( const int dimension, const int tensor[], OneDRule *rule1D, int point[], IndexSet *set ){
        int *pnts = 0;
        rule1D->getPoints( tensor[dimension], pnts );
        if ( dimension == set->getNumDimensions()-1 ){
                for( int i = 0; i < rule1D->getNumPoints( tensor[dimension] ); i++ ){
                        point[dimension] = pnts[i];
                        set->add( point );
                }
        }else{
                for( int i = 0; i < rule1D->getNumPoints( tensor[dimension] ); i++ ){
                        point[dimension] = pnts[i];
                        recurseAddTensorPoints( dimension + 1, tensor, rule1D, point, set );
                }
        }
        delete[] pnts;
}

}

#endif
