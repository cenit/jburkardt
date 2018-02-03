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

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  On the purpose of this file:
//
//
//  Hardcoding constants is a bad coding prectice and as such, it should be avoided.
//  On the other hand, numerical algorithms depend on many small tweaking parameters.
//  For example, this code computes the nodes and abscissas of Gauss-Legendre rule on the fly,
//  this is done with an iterative Newton method that needs a stopping criteria,
//  we can add another user specified parameter to the corresponding "makeGlobalGrid()" rule,
//  however, this is another tweaking variable that the user has to understand and cotnrol.
//  The goal of this code is to provide a most seamless experience to the user,
//  one should think about the desired properties of a quadrature rule/interpolant and not
//  about convergence of an inerative scheme.
//  Therefore, the tolerance for such convergence criteria needs to be set inside the code to
//  a "reasonable" value, which is a value that would work well for the overwhelming majority
//  of use cases.
//
//  On the other hand, every application is different and the usage of the code will change
//  over time. It is unreasonable to belive that one single value would work for absolutely
//  everyone. Instead of "hiding" hardcoded constant throughout the code, they will all be
//  all exposed here so they can be adjusted at compile time.
//
//  Long story short, do not adjust those variables unless you have a good reason.
//
///////////////////////////////////////////////////////////////////////////////////////////////


#ifndef __TASMANIAN_SPARSE_GRID_HARDCODED_HPP
#define __TASMANIAN_SPARSE_GRID_HARDCODED_HPP


namespace TasGrid{


//  NUM_TOL is used as a stoping criteria for various iterative schemes (e.g. Newton solvers)
// it is also used to compare two double precision numbers and determine if they are the same
// comparison of floating point numbers is unstable, hence we need to use ((fabs(a-b)<NUM_TOL)
// as opposed to (a==b)
#define NUM_TOL 1.E-12

// this determines the number of Gauss-Legendre points that would be used in computing the
// integrals of arbitrary piece-wise local polynomial functions
// if polynomials of order higher than 2*PW_QUAD_POINTS-1 are used,
// integration operations of the local grid will slow down
#define PW_QUAD_POINTS 4

// this controls the relative vs absolute treshold for refinement
// the code uses relative error by computing the L-\infinity norm of the interpolant
// if L-\infinity is less than this treshold, the code switches to absolute error
// this is done to avoid division by a very small number
#define RELATIVE_ABSOLUTE_TRESHOLD 1.E-8


}

#endif
