/*
 * Code Author: Drayton Munster, Jul 2013
 *
 * Copyright (C) 2013  Drayton Munster
 *
 * This file is part of
 * Toolkit for Adaptive Stochastic Modeling And Non-Intrusive Approximation
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

#ifndef __TASMANIAN_SPARSE_GRID_WAVELET_RULE_HPP
#define __TASMANIAN_SPARSE_GRID_WAVELET_RULE_HPP

#include "tsgEnumerate.hpp"
#include "tsgHelperFunctions.hpp"

#include "tsgBase1DRule.hpp"

#include "math.h"
#include <sstream>



namespace TasGrid {
// These macros are used in accessing coarse and fine level coefficients for the cascade
// algorithm.
#define ACCESS_FINE(I, LEVEL, DEPTH) ((1 << ((DEPTH)-(LEVEL)-1)) * (2 * (I) + 1))
#define ACCESS_COARSE(I, LEVEL, DEPTH) (I) * (1 << ((DEPTH) - (LEVEL)))

class RuleWavelet {
public:
	RuleWavelet(int order = 1, int iter_depth = 10);
	~RuleWavelet();

	// Interface to Extend
	int getNumPoints( int level ) const; // get the number of points associated with level (also the index of the first point on the level+1)
//	int getBasisLevel( int level ) const; // returns the basis level associated with the level, i.e. 0, 2, 4, 8, 16, 32 for CC points, or 1, 3, 5, 7, 9 for Gaussian, 0, 1, 2, 3, 4 for PW-Power

	const char * getDescription() const;

	double getX( int point ) const; // returns the x-value of a point
	int getOrder() const;
	void updateOrder(int new_order); // Sets the order of the underlying wavelet rule. Involves recalculating approximations if order==3.

	double getWeight( int point ) const; // get the quadrature weight associated with the point
	double eval(int point, double x ) const; // returns the value of point at location x (there is assumed 1-1 corresponcence between points and functions)

	TypeOneDRule getType() const; // returns the type of rule

	static int intlog2( int i ); // returns the log base 2 of an integer

	int getLevel( int point ) const; // returns the hierarchical level of a point
	void getChildren( int point, int &first, int &second ) const; // Given a point, return the children (if any)
	int getParent( int point ) const; // Returns the parent of the given node

protected:
	double eval_linear(int pt, double x) const;
	double eval_cubic(int pt, double x) const;
	double linear_boundary_wavelet(double x) const;
	double linear_central_wavelet(double x) const;
	int order;
	int iteration_depth;
	static void cubic_cascade(double *y, int starting_level, int iteration_depth);

	int find_index(double x) const;
	double interpolate(const double *y, double x, int interpolation_order = 3) const;

	double **data;
};

} /* namespace TasGrid */
#endif /* __TASMANIAN_SPARSE_GRID_WAVELET_RULE_HPP */
