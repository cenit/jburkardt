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

#ifndef __TASMANIAN_SPARSE_GRID_RULE_GGL_HPP
#define __TASMANIAN_SPARSE_GRID_RULE_GGL_HPP

#include "tsgHardcodedConstants.hpp"

#include "tsgBase1DRule.hpp"
#include "math.h"

#include <iostream>

namespace TasGrid{

class RuleGaussLaguerre : public OneDRule{
public:
        RuleGaussLaguerre( const int max_level, double walpha );
        ~RuleGaussLaguerre();

        int getMaxLevel() const;

        int getNumPoints( int level ) const;
        int getBasisLevel( int level ) const;
        void getPoints( int level, int* &pnts ) const;

        const char * getDescription() const;

        double getX( int point ) const;

        double getWeight( int level, int point ) const;
        double eval( int level, int point, double x ) const;

        TypeOneDRule getType() const;

protected:
        void buildOneLevel( int level, double* &w, double* &x );


private:
        int max_level;
        int *levels; // gives the cumulative offset of each level

        int *level_points; // gives a list of the points associated with each level
        double *weights; // contains the weight associated with each level

        double *nodes; // contains the x-coordinate of each sample point
        const double tol; // needed to compare points, if points are within tol of each other, assume they are the same point

        double alpha;
};

};

#endif

