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

#ifndef __TASMANIAN_SPARSE_GRID_BASE_1D_RULE_HPP
#define __TASMANIAN_SPARSE_GRID_BASE_1D_RULE_HPP

#include "tsgEnumerate.hpp"
#include  "tsgHelperFunctions.hpp"

namespace TasGrid{

class OneDRule{
public:
        OneDRule();
        ~OneDRule();

        virtual int getMaxLevel() const;

        // Interface to Extend
        virtual int getNumPoints( int level ) const; // get the number of points associated with level
        virtual int getBasisLevel( int level ) const; // returns the basis level associated with the level, i.e. 0, 2, 4, 8, 16, 32 for CC points, or 1, 3, 5, 7, 9 for Gaussian, 0, 1, 2, 3, 4 for PW-Power
        virtual void getPoints( int level, int* &pnts ) const; // returns the points associated with level

        virtual TypeOneDRule getType() const; // returns the type of rule
        virtual const char * getDescription() const;

        virtual double getX( int point ) const; // returns the x-value of a point

        virtual double getWeight( int level, int point ) const; // get the quadrature weight associated with the point
        virtual double eval( int level, int point, double x ) const; // returns the value of point at location x (there is assumed 1-1 corresponcence between points and functions)
};


};

#endif
