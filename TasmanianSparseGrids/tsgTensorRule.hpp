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
 
#ifndef __TASMANIAN_SPARSE_GRID_TENSOR_RULE_HPP
#define __TASMANIAN_SPARSE_GRID_TENSOR_RULE_HPP

#include "tsgBase1DRule.hpp"
#include "tsgIndexSet.hpp"
#include "tsgHelperFunctions.hpp"

namespace TasGrid{

class TensorRule{
public:
        TensorRule( int dimensions = 0, const int *lindex = 0, OneDRule *inducedRule = 0 );
        ~TensorRule();
        
        void rebuild( int dimensions, const int *lindex, OneDRule *inducedRule );
        
        int getNumPoints() const;
        const IndexSet* getPoints() const;
        const int* getPoint( int i ) const;
        void getWeights( double* &weights ) const;
        void getInterpolantWeights( const double x[], double* &weights ) const;
        
        void referenceValues( const IndexSet *data ); // stores the pointer to the local database
        
        void eval( const double x[], double y[] ) const; // evals the interpolant at x and returns the result in r (call afer load/reference data)

protected:
        void reset();

private:
        int num_dimensions;
        int *index;
        
        OneDRule *base;
        IndexSet *points;
        
        const IndexSet *database;
        int *refs; // keeps the indexes of every point in the global database
};

void recurseAddTensorPoints( const int dimension, const int tensor[], OneDRule *rule1D, int point[], IndexSet *set );

};


#endif
