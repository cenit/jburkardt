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

#ifndef __TASMANIAN_SPARSE_GRID_RULE_GL_CPP
#define __TASMANIAN_SPARSE_GRID_RULE_GL_CPP

#include "tsgRuleGaussLegendre.hpp"

namespace TasGrid{

using std::cout;
using std::endl;

RuleGaussLegendre::RuleGaussLegendre( const int level ) : tol(NUM_TOL), max_level(level), OneDRule(){
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
        for( int i=0; i<num_known_points; i++ ){
                nodes[i] = known_x[i];
        }

        delete[] known_x;
        delete[] x;
        delete[] w;
};

RuleGaussLegendre::~RuleGaussLegendre(){
        if ( nodes != 0 ){ delete[] nodes; }
        if ( levels != 0 ){ delete[] levels; }
        if ( weights != 0 ){ delete[] weights; }
        if ( level_points != 0 ){ delete[] level_points; }
}

int RuleGaussLegendre::getMaxLevel() const{ return max_level; }

TypeOneDRule RuleGaussLegendre::getType() const{
        return rule_gausslegendre;
}

int RuleGaussLegendre::getNumPoints( int level ) const{
        return level+1;
}

int RuleGaussLegendre::getBasisLevel( int level ) const{
        return 2*level;
}

void RuleGaussLegendre::getPoints( int level, int* &pnts ) const{
        if ( pnts != 0 ){ delete[] pnts; }
        pnts = new int[getNumPoints( level )];
        tcopy( getNumPoints( level ), &( level_points[levels[level]] ), pnts );
}

const char* RuleGaussLegendre::getDescription() const{
        return "Gauss–Legendre quadrature";
}

double RuleGaussLegendre::getX( int point ) const{ return nodes[point]; }

double RuleGaussLegendre::getWeight( int level, int point ) const{
        for( int i=levels[level]; i<levels[level+1]; i++ ){
                if ( level_points[i] == point ){ return weights[i]; }
        }
        return 0.0; // this should never happen
}

double RuleGaussLegendre::eval( int level, int point, double x ) const{
        double value = 1.0, d = nodes[point];
        for( int i=levels[level]; i<levels[level+1]; i++ ){
                value *= ( level_points[i] != point ) ? ( x - nodes[level_points[i]] ) / ( d - nodes[level_points[i]] ) : 1.0;
        }
        return value;
}

void RuleGaussLegendre::buildOneLevel( int level, double* &w, double* &x ){
        // get Gauss-Legendre
        int n = getNumPoints(level);

        if ( w != 0 ){ delete[] w; }; w = new double[n];
        if ( x != 0 ){ delete[] x; }; x = new double[n];

        for( int i=0; i<n; i++ ){
                x[i] = -cos( M_PI * ((double)( 2*i + 1 )) / ((double)(2*n)) );
                findOnePoint( n, x[i], w[i] );
        }
}

void RuleGaussLegendre::evalPdP( int n, double x, double &p, double &dp ) const{
        if ( n == 0 ){ p = 1.0; dp = 0.0; }
        if ( n == 1 ){ p = x; dp = 1.0; }
        double P, Pm, Pp; // P - value, P-minus, P-plus
        Pm = 1.0; P = x;
        for( int i=2; i<=n; i++ ){
                Pp = ( ( (double)(2*i-1) ) / ( (double)(i) ) ) * x * P - ( ( (double)(i-1) ) / ( (double)(i) ) ) * Pm;
                Pm = P; P = Pp;
        }
        p = P;
        dp = ( (double)(n) ) * ( x * P - Pm ) / ( x*x - 1.0 );
}
void RuleGaussLegendre::findOnePoint( int n, double &x, double &w ) const{
        double dx = 1.0 + tol;
        double p, dp;

        while ( dx > tol ){
                evalPdP( n, x, p, dp );
                x -= p / dp;
                dx = fabs( p / dp );
        }

        w = 2.0 / ( (1.0 - x*x) * dp * dp );
}


}

#endif
