
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

#ifndef __TASMANIAN_SPARSE_GRID_RULE_CC_NESTED_CPP
#define __TASMANIAN_SPARSE_GRID_RULE_CC_NESTED_CPP

#include "tsgRuleClenshawCurtis.hpp"

namespace TasGrid{

RuleClenshawCurtis::RuleClenshawCurtis( int level ) : max_level(0), num_weights(0), num_nodes(0), levels(0), weights(0), nodes(0), OneDRule(){
        update(level);
};

void RuleClenshawCurtis::update( int new_max_level ){
        //if ( new_max_level <= max_level ){ return; } // there is no point in lowering the levels
        double *old_nodes = nodes; nodes = 0;
        double *old_weights = weights; weights = 0;
        int *old_levels = levels; levels = 0;
        int old_max_level = max_level;
        int old_num_weights = num_weights;
        int old_num_nodes = num_nodes;

        max_level = new_max_level;
        for( int l=old_max_level; l < max_level; l++ ){
                num_weights += getNumPoints( l );
        }

        levels = new int[max_level+1];
        nodes = new double[getNumPoints( max_level-1 )];
        weights = new double[num_weights];

        tcopy( old_max_level, old_levels, levels );
        tcopy( old_num_nodes, old_nodes, nodes );
        tcopy( old_num_weights, old_weights, weights );

        if ( old_nodes != 0 ){ delete[] old_nodes; }
        if ( old_weights != 0 ){ delete[] old_weights; }
        if ( old_levels != 0 ){ delete[] old_levels; }

        nodes[0] = 0.0; num_nodes = 1;
        if ( max_level > 1 ){ nodes[1] = -1.0; nodes[2] = 1.0; }; num_nodes = 3;

        // build the map to the offset of each level
        if ( max_level > 2 ){
                int count = ( old_max_level < 2 ) ? 3 : old_num_nodes;
                for( int l = (( old_max_level < 2 ) ? 2 : old_max_level); l < max_level; l++ ){
                        int num_points_level = getNumPoints( l );
                        for( int i = 1; i < num_points_level; i += 2 ){
                                nodes[count++] = cos( M_PI * ( (double) (num_points_level-i-1) ) / ( (double) (num_points_level - 1) ) );
                        };
                };
                num_nodes = count;
        };

        // build the map to the offset of each level
        levels[0] = 0;
        for( int l=old_max_level; l<max_level; l++ ){
                levels[l+1] = levels[l] + getNumPoints( l );
        };

        // build the weights per level
        int count = old_num_weights;
        for( int l=old_max_level; l<max_level; l++ ){
                int num_points  = getNumPoints( l );
                double * wlevel = 0; int *ilevel = 0;
                loadWeightsPerNumberOfPoints( num_points, wlevel );
                makePointToLevelMap( l+1, ilevel );
                for( int i=0; i<=l; i++ ){
                        for( int j=0; j<num_points; j++ ){
                                if ( ilevel[j] == i ){
                                        weights[count++] = wlevel[j];
                                };
                        };
                };
                if ( wlevel != 0 ){ delete[] wlevel; };
                if ( ilevel != 0 ){ delete[] ilevel; };
        };
        num_weights = count;
}

RuleClenshawCurtis::~RuleClenshawCurtis(){
        if ( nodes != 0 ){ delete[] nodes; }
        if ( levels != 0 ){ delete[] levels; }
        if ( weights != 0 ){ delete[] weights; }
}

int RuleClenshawCurtis::getMaxLevel() const{ return max_level; }

void RuleClenshawCurtis::resetLevels( int new_level ){
        if ( new_level <= max_level ) return;
        update( new_level );
}

TypeOneDRule RuleClenshawCurtis::getType() const{
        return rule_clenshawcurtis;
}

int RuleClenshawCurtis::getNumPoints( int level ) const{
        int power = 1; power = power << level;
        return (level == 0 ) ? 1 : ( power + 1 );
}

int RuleClenshawCurtis::getBasisLevel( int level ) const{
        return ( level <= 0 ) ? 0 : getNumPoints( level -1 );
}

void RuleClenshawCurtis::getPoints( int level, int* &pnts ) const{
        if ( pnts != 0 ){ delete[] pnts; };
        int num_points = getNumPoints( level );
        pnts = new int[num_points];
        for( int i=0; i<num_points; i++ ){ pnts[i] = i; };
}

const char* RuleClenshawCurtis::getDescription() const{
        return "Clenshaw-Curtis quadrature and Lagrange Polynomials (i.e. nested Chebychev)";
}

double RuleClenshawCurtis::getX( int point ) const{
        return nodes[point];
}

double RuleClenshawCurtis::getWeight( int level, int point ) const{
        return weights[ levels[level] + point ];
}

double RuleClenshawCurtis::eval( int level, int point, double x ) const{
        double value = 1.0, d = nodes[point];
        for( int j=0; j<getNumPoints(level); j++ ){
                value *= ( j != point ) ? ( x - nodes[j] ) / ( d - nodes[j] ) : 1.0;
        }
        return value;
}


void RuleClenshawCurtis::loadWeightsPerNumberOfPoints( int num_points, double* &weights ){
        int i, j;
        double theta, b;
        if ( weights != 0 ){ delete[] weights; }; weights = new double[num_points];
        if ( num_points == 1 ){
                weights[0] = 2.0;
                return;
        }

        for( i=0; i<num_points; i++ ){
                weights[i] = 1.0;
                theta = ( (double) i ) * M_PI / ( (double) (num_points-1) );
                for( j=1; j<=(num_points-1)/2; j++ ){
                        if ( 2*j == (num_points-1) ){
                                b = 1.0;
                        }else{
                                b = 2.0;
                        }
                        weights[i] = weights[i] - b * cos( 2.0 * j * theta ) / ( (double) (4*j*j - 1 ) );
                }
        }

        weights[0] = weights[0] / ( (double) (num_points-1) );
        for( i=1; i<num_points-1; i++ ){
                weights[i] = 2.0 * weights[i] / ( (double) (num_points-1) );
        }
        weights[num_points-1] = weights[num_points-1] / ( (double) (num_points-1) );
}

void RuleClenshawCurtis::makePointToLevelMap( int max_level, int* &map ){
        int i, l, num_points = getNumPoints(max_level-1);
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


}

#endif
