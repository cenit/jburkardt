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

#ifndef __TASMANIAN_SPARSE_GRID_RULE_CCN2P_HPP
#define __TASMANIAN_SPARSE_GRID_RULE_CCN2P_HPP

#include "tsgHardcodedConstants.hpp"

#include "tsgHelperFunctions.hpp"

#include "tsgBase1DRule.hpp"
#include "math.h"

#include <iostream>

namespace TasGrid{

class RuleChebyshevN2P : public OneDRule{
public:
        RuleChebyshevN2P( const int level );
        ~RuleChebyshevN2P();

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
        void getOneLevelPoints( int num_points, double* &x ) const; // returns the points and weights

        void buildOneLevel( int level, double* &w, double* &x ) const; // copy from Clenshaw-Curtis

        void loadWeightsPerNumberOfPoints( int num_points, double* &weights );

        void makePointToLevelMap( int max_level, int* &map ) const;

        int getNumPointsExp( int level ) const;

        // Build Gauss-Lagrande quadrature
        void buildGLQuad( int level, double* &w, double* &x ) const;
        void evalPdPGL( int n, double x, double &p, double &dp ) const;
        void findOnePointGL( int n, double &x, double &w ) const;


private:
        int max_level;
        int *levels; // gives the cumulative offset of each level

        double *weights; // contains the weight associated with each level

        double *nodes; // contains the x-coordinate of each sample point
        const double tol; // needed to compare points, if points are within tol of each other, assume they are the same point
};


};

#endif

