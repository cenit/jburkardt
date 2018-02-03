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

#ifndef __TASMANIAN_SPARSE_GRID_RULE_CC_NESTED_HPP
#define __TASMANIAN_SPARSE_GRID_RULE_CC_NESTED_HPP

#include "tsgEnumerate.hpp"
#include "tsgHelperFunctions.hpp"

#include "tsgBase1DRule.hpp"
#include "math.h"

//#include <iostream>

namespace TasGrid{

class RuleClenshawCurtis : public OneDRule{
public:
        RuleClenshawCurtis( int level = 3 );
        ~RuleClenshawCurtis();

        int getMaxLevel() const;

        void resetLevels( int new_level );

        int getNumPoints( int level ) const;
        int getBasisLevel( int level ) const;
        void getPoints( int level, int* &pnts ) const;

        const char * getDescription() const;

        double getX( int point ) const;

        double getWeight( int level, int point ) const;
        double eval( int level, int point, double x ) const;

        TypeOneDRule getType() const;

protected:
        //int countNumPoints( int level ) const;
        void loadWeightsPerNumberOfPoints( int num_points, double* &weights );
        void makePointToLevelMap( int max_level, int* &map );

        void update( int new_max_level );

private:
        int max_level;
        int num_weights;
        int num_nodes;
        int *levels; // gives the cumulative offset of each level

        double *nodes; // contains the x-coordinate of each sample point

        double *weights; // contains the weight associated with each level
};


};

#endif
