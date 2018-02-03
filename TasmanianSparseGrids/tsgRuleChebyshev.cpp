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

#ifndef __TASMANIAN_SPARSE_GRID_RULE_CC_CPP
#define __TASMANIAN_SPARSE_GRID_RULE_CC_CPP

#include "tsgRuleChebyshev.hpp"

namespace TasGrid{

RuleChebyshev::RuleChebyshev( const int level ) : max_level(level), tol(NUM_TOL), OneDRule(){
        int total_points = 0;
        levels = new int[max_level+1]; levels[0] = 0;
        for( int l=0; l<max_level; l++ ){
                levels[l+1] = levels[l] + getNumPoints(l);
                total_points += getNumPoints(l);
        }

        level_points = new int[total_points];
        weights = new double[total_points];

        int num_known_points = 0;
        double *known_x = new double[total_points];

        double *x = 0, *w = 0;

        for( int l=0; l<max_level; l++ ){
                int num_points = getNumPoints( l );
                buildOneLevel( l, w, x);
                for( int i=0; i<num_points; i++ ){
                        weights[ levels[l] + i ] = w[i];

                        int point = -1;
                        for( int j=0; j<num_known_points; j++ ){
                                if ( fabs( x[i] - known_x[j] ) < tol ){
                                        point = j;
                                        break;
                                }
                        }
                        if ( point == - 1){ // new point found
                                known_x[num_known_points] = x[i];
                                point = num_known_points;
                                num_known_points++;
                        }
                        level_points[levels[l] + i] = point;
                }
        }

        nodes = new double[num_known_points];
        tcopy( num_known_points, known_x, nodes );

        delete[] known_x;
        delete[] x;
        delete[] w;
}

RuleChebyshev::~RuleChebyshev(){
        if ( nodes != 0 ){ delete[] nodes; };
        if ( levels != 0 ){ delete[] levels; };
        if ( weights != 0 ){ delete[] weights; };
        if ( level_points != 0 ){ delete[] level_points; };
}

int RuleChebyshev::getMaxLevel() const{ return max_level; }

TypeOneDRule RuleChebyshev::getType() const{
        return rule_chebyshev;
}

int RuleChebyshev::getNumPoints( int level ) const{
        return level+1;
}

int RuleChebyshev::getBasisLevel( int level ) const{
        return level;
}

void RuleChebyshev::getPoints( int level, int* &pnts ) const{
        if ( pnts != 0 ){ delete[] pnts; }
        pnts = new int[getNumPoints( level )];
        tcopy( getNumPoints( level ), &( level_points[levels[level]] ), pnts );
}

const char* RuleChebyshev::getDescription() const{
        return "Chebychev points with Clenshaw-Curtis quadrature weights and Lagrange Polynomials";
}

double RuleChebyshev::getX( int point ) const{ return nodes[point]; }

double RuleChebyshev::getWeight( int level, int point ) const{
        for( int i=levels[level]; i<levels[level+1]; i++ ){
                if ( level_points[i] == point ){ return weights[i]; }
        }
        return 0.0; // this should never happen
}

double RuleChebyshev::eval( int level, int point, double x ) const{
        double value = 1.0, d = nodes[point];
        for( int i=levels[level]; i<levels[level+1]; i++ ){
                value *= ( level_points[i] != point ) ? ( x - nodes[level_points[i]] ) / ( d - nodes[level_points[i]] ) : 1.0;
        }
        return value;
}

void RuleChebyshev::buildOneLevel( int level, double* &w, double* &x ){
        // get Clanshaw-Curtis quadrature points
        int m = getNumPoints( level );
        if ( w != 0 ){ delete[] w; }
        if ( x != 0 ){ delete[] x; }
        w = new double[m];
        x = new double[m];
        int i, j;
        double theta, b;
        if ( m == 1 ){
                w[0] = 2.0; x[0] = 0.0;
                return;
        };

        for( i=0; i<m; i++ ){
                x[i] = cos( ( (double) (m-i-1) ) * M_PI / ( (double) (m-1) ) );
        };

        // may also have to set the mid-point to 0.0
        x[0] = -1.0; x[m-1] = 1.0;

        for( i=0; i<m; i++ ){
                w[i] = 1.0;
                theta = ( (double) i ) * M_PI / ( (double) (m-1) );
                for( j=1; j<=(m-1)/2; j++ ){
                        if ( 2*j == (m-1) ){
                                b = 1.0;
                        }else{
                                b = 2.0;
                        };
                        w[i] = w[i] - b * cos( 2.0 * j * theta ) / ( (double) (4*j*j - 1 ) );
                };
        };

        w[0] = w[0] / ( (double) (m-1) );
        for( i=1; i<m-1; i++ ){
                w[i] = 2.0 * w[i] / ( (double) (m-1) );
        };
        w[m-1] = w[m-1] / ( (double) (m-1) );
}

}


#endif
