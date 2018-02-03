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

#ifndef __TASMANIAN_SPARSE_GRID_RULE_CCN2P_CPP
#define __TASMANIAN_SPARSE_GRID_RULE_CCN2P_CPP

#include "tsgRuleChebyshevNestedTwoPoint.hpp"

namespace TasGrid{

RuleChebyshevN2P::RuleChebyshevN2P( const int level ) : nodes(0), levels(0), weights(0), max_level(level), tol(NUM_TOL), OneDRule(){

        int total_points = 0;
        levels = new int[max_level+1]; levels[0] = 0;
        for( int l=0; l<max_level; l++ ){
                levels[l+1] = levels[l] + getNumPoints(l);
                total_points += getNumPoints(l);
        }

        weights = new double[total_points];
        nodes = new double[getNumPoints(max_level-1)];

        for( int l=0; l<max_level; l++ ){
                int np = getNumPoints(l);
                double *x = 0, *w = 0;

                getOneLevelPoints( np, x );

                tcopy( np, x, nodes );

                int n = ( np + 1) / 2 + ( np + 1) % 2;
                buildGLQuad( n, w, x );

                for( int i=0; i<np; i++ ){
                        weights[ levels[l] + i] = 0.0;
                        for( int j=0; j<n; j++ ){
                                weights[ levels[l] + i] += w[j] * eval( l, i, x[j] );
                        }
                }

                delete[] x;
                delete[] w;
        }
}

RuleChebyshevN2P::~RuleChebyshevN2P(){
        if ( nodes != 0 ){ delete[] nodes; };
        if ( levels != 0 ){ delete[] levels; };
        if ( weights != 0 ){ delete[] weights; };
}

int RuleChebyshevN2P::getMaxLevel() const{ return max_level; }

TypeOneDRule RuleChebyshevN2P::getType() const{
        return rule_chebyshevN2P;
}

int RuleChebyshevN2P::getNumPoints( int level ) const{
        return 2*level+1;
}

int RuleChebyshevN2P::getBasisLevel( int level ) const{
        return 2*level;
}

void RuleChebyshevN2P::getPoints( int level, int* &pnts ) const{
        if ( pnts != 0 ){ delete[] pnts; }
        pnts = new int[getNumPoints( level )];
        //tcopy( getNumPoints( level ), &( level_points[levels[level]] ), pnts );
        for( int i=0; i<getNumPoints( level ); i++ ){ pnts[i] = i; };
}

const char* RuleChebyshevN2P::getDescription() const{
        return "Chebychev points nested growing two point at a time";
}

double RuleChebyshevN2P::getX( int point ) const{ return nodes[point]; } // TODO: nodes

double RuleChebyshevN2P::getWeight( int level, int point ) const{ // TODO: weights
        return weights[levels[level] + point];
}

double RuleChebyshevN2P::eval( int level, int point, double x ) const{
        double value = 1.0, d = nodes[point];
        for( int i=0; i<getNumPoints(level); i++ ){
                value *= ( i != point ) ? ( x - nodes[i] ) / ( d - nodes[i] ) : 1.0;
        }
        return value;
}

int RuleChebyshevN2P::getNumPointsExp( int level ) const{
        int power = 1; power = power << level;
        return (level == 0 ) ? 1 : ( power + 1 );
}

void RuleChebyshevN2P::loadWeightsPerNumberOfPoints( int num_points, double* &weights ){
        int i, j;
        double theta, b;
        if ( weights != 0 ){ delete[] weights; }; weights = new double[num_points];
        if ( num_points == 1 ){
                weights[0] = 2.0;
                return;
        };

        for( i=0; i<num_points; i++ ){
                weights[i] = 1.0;
                theta = ( (double) i ) * M_PI / ( (double) (num_points-1) );
                for( j=1; j<=(num_points-1)/2; j++ ){
                        if ( 2*j == (num_points-1) ){
                                b = 1.0;
                        }else{
                                b = 2.0;
                        };
                        weights[i] = weights[i] - b * cos( 2.0 * j * theta ) / ( (double) (4*j*j - 1 ) );
                };
        };

        weights[0] = weights[0] / ( (double) (num_points-1) );
        for( i=1; i<num_points-1; i++ ){
                weights[i] = 2.0 * weights[i] / ( (double) (num_points-1) );
        };
        weights[num_points-1] = weights[num_points-1] / ( (double) (num_points-1) );
}

void RuleChebyshevN2P::makePointToLevelMap( int max_level, int* &map ) const{
        int i, l, num_points = getNumPointsExp(max_level-1);
        if ( map != 0 ){ delete[] map; }; map = new int[num_points];
	for( i=0; i<num_points; i++ ){ map[i] = -1; }

	map[ (num_points-1)/2 ] = 0; // zeroth level is in the middle
	if ( max_level > 1 ){
		map[0] = 1; // level one is at the two end points
		map[num_points-1] = 1;
	}

	int increment = ( num_points - 1 ) / 4;
	l = 2;
	while ( increment > 0 ){
		for( i=0; i*increment < num_points; i++ ){
			map[ i*increment ] = ( map[i*increment] == - 1 ) ? l : map[i*increment];
		};
		increment /= 2;
		l++;
	}
}

void RuleChebyshevN2P::buildOneLevel( int level, double* &w, double* &x ) const{ // TODO: HERE
        // get Clanshaw-Curtis quadrature points
        int m = getNumPointsExp( level );
        if ( w != 0 ){ delete[] w; }
        if ( x != 0 ){ delete[] x; }
        w = new double[m];
        x = new double[m];
        int i, j;
        double theta, b;
        if ( m == 1 ){
                w[0] = 2.0; x[0] = 0.0;
                return;
        }

        for( i=0; i<m; i++ ){
                x[i] = cos( ( (double) (m-i-1) ) * M_PI / ( (double) (m-1) ) );
        }

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
                        }
                        w[i] = w[i] - b * cos( 2.0 * j * theta ) / ( (double) (4*j*j - 1 ) );
                }
        }

        w[0] = w[0] / ( (double) (m-1) );
        for( i=1; i<m-1; i++ ){
                w[i] = 2.0 * w[i] / ( (double) (m-1) );
        }
        w[m-1] = w[m-1] / ( (double) (m-1) );
}

void RuleChebyshevN2P::getOneLevelPoints( int num_points, double* &x ) const{
        if ( x != 0 ){ delete[] x; }; x = new double[num_points];

        // find the right level
        int level = 0;
        while ( getNumPointsExp(level) < num_points ){ level++; };

        double *xcc = 0, *wcc = 0;

        buildOneLevel( level, wcc, xcc );

        int *map = 0;
        makePointToLevelMap( level+1, map );

        int count = 0;
        int l = 0, i = getNumPointsExp(level)/2, j = i;
        while( count < num_points ){
                if ( map[i] == l ){
                        //cout << "saving" << xcc[i] << endl;
                        x[count++] = xcc[i];
                }
                i--;
                if ( (i+1!=j) && (map[j] == l) ){
                        //cout << "saving" << xcc[j] << endl;
                        x[count++] = xcc[j];
                }
                j++;
                if ( i == -1 ){
                        l++;
                        i = getNumPointsExp(level)/2; j = i;
                }
        }

        /* // this code adds two point from the outside to inside
        int count = 0;
        int l = 0, i = 0, j = getNumPointsExp(level)-1;
        while( count < num_points ){
                //cout << l << "    " << i <<  "    " << map[i] << endl;
                //cout << l << "    " << j <<  "    " << map[j] << endl;
                if ( map[i] == l ){
                        //cout << "saving" << xcc[i] << endl;
                        x[count++] = xcc[i];
                }
                i++;
                if ( (i-1!=j) && (map[j] == l) ){
                        //cout << "saving" << xcc[j] << endl;
                        x[count++] = xcc[j];
                }
                j--;
                if ( i == getNumPointsExp(level)/2 + 1 ){
                        i = 0;
                        l++;
                        j = getNumPointsExp(level)-1;
                }
        }*/

        delete[] map;
        delete[] xcc;
        delete[] wcc;
}


// Build Gauss-Lagrande quadrature
void RuleChebyshevN2P::buildGLQuad( int n, double* &w, double* &x ) const{
        // get Gauss-Legendre
        if ( w != 0 ){ delete[] w; }; w = new double[n];
        if ( x != 0 ){ delete[] x; }; x = new double[n];

        for( int i=0; i<n; i++ ){
                x[i] = -cos( M_PI * ((double)( 2*i + 1 )) / ((double)(2*n)) );
                findOnePointGL( n, x[i], w[i] );
        }
}
void RuleChebyshevN2P::evalPdPGL( int n, double x, double &p, double &dp ) const{
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
void RuleChebyshevN2P::findOnePointGL( int n, double &x, double &w ) const{
        double dx = 1.0 + tol;
        double p, dp;

        while ( dx > tol ){
                evalPdPGL( n, x, p, dp );
                x -= p / dp;
                dx = fabs( p / dp );
        }

        w = 2.0 / ( (1.0 - x*x) * dp * dp );
}


};


#endif
