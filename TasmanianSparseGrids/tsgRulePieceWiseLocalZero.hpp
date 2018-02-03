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

#ifndef __TASMANIAN_SPARSE_GRID_PWLOCAL_ZERO_RULE_HPP
#define __TASMANIAN_SPARSE_GRID_PWLOCAL_ZERO_RULE_HPP

#include "tsgHardcodedConstants.hpp"

#include "tsgEnumerate.hpp"
#include "tsgHelperFunctions.hpp"

#include "tsgBase1DHierarchicalRule.hpp"

#include "tsgRuleGaussLegendre.hpp"

#include "math.h"


namespace TasGrid{

// this class doesn't inherit from OneDRule because the structure is different
// this is a hierarchical rule and it is different from rules like Gauss-Legrande

class RulePieceWiseLocalZero : public OneDHierarchicalRule{
public:
        RulePieceWiseLocalZero( int max_order = 1 );
        ~RulePieceWiseLocalZero();

        int getMaxOrder() const;
        void setMaxOrder( int max_order );

        // Interface to Extend
        int getNumPoints( int level ) const; // get the number of points associated with level (also the index of the first point on the level+1)
        int getBasisLevel( int level ) const; // returns the basis level associated with the level, i.e. 0, 2, 4, 8, 16, 32 for CC points, or 1, 3, 5, 7, 9 for Gaussian, 0, 1, 2, 3, 4 for PW-Power

        const char * getDescription() const;

        double getX( int point ) const; // returns the x-value of a point

        double getWeight( int level, int point ) const; // get the quadrature weight associated with the point
        double eval( int level, int point, double x ) const; // returns the value of point at location x (there is assumed 1-1 corresponcence between points and functions)

        TypeOneDRule getType() const; // returns the type of rule

        int getLevel( int point ) const; // returns the hierarchical level of a point
        void getChildren( int point, int &first, int &second ) const;
        void getParents( int point, int &first, int &second ) const;

        double getSupport( int level ) const; // this is actually half of the support (i.e. only one sided)


protected:
        int intexp2( int i ) const; // returns 2^i, where i is an integer
        int intlog2( int i ) const; // returns the log base 2 of an integer

        double evalPWConstant( int level, int point, double x ) const;

        double evalPWLinear( int level, int point, double x ) const;
        double evalPWQuadratic( int level, int point, double x ) const;
        double evalPWCubic( int level, int point, double x ) const;

        double evalPWPower( int level, int point, double x ) const;

        double evalPWPowerNormalized( int level, int point, double x ) const;

private:
        int order;

        int firstFewParents[3];// = { -1, 0, 0, 1, 2 };

        double *gl_w, *gl_x; // points and weights for the Gauss-Legendre rule
        int gl_n; // Gauss-Legendre number of points
};


};

#endif
