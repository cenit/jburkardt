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

#ifndef __TASMANIAN_SPARSE_GRID_BASE_GRID_HPP
#define __TASMANIAN_SPARSE_GRID_BASE_GRID_HPP

#include "tsgEnumerate.hpp"
#include "tsgHelperFunctions.hpp"

#include "tsgIndexSet.hpp"

namespace TasGrid{

class Grid{
public:
        Grid();
        virtual ~Grid();

        //virtual void reset( int dimensions, int outputs, int depth, DepthType type, OneDRules oned );
        //virtual void reset( int outputs );

        virtual int getNumDimensions() const;
        virtual int getNumOutputs() const;
        virtual TypeOneDRule getOneDRule() const;
        virtual const char *getOneDRuleDescription() const;

        virtual void write( std::ofstream &ofs ) const; // write the grid to a file
        virtual bool read( std::ifstream &ifs ); // reads the grid

        virtual int getNumPoints() const;

        virtual void getPoints( double* &pnts ) const;
        virtual void getWeights( double* &weights ) const;
        virtual void getInterpolantWeights( const double x[], double* &weights ) const;

        virtual int getNumNeededPoints() const;
        virtual void getNeededPoints( double* &pnts ) const;
        virtual void loadNeededPoints( const double vals[] );
        virtual void loadNeededPoints( const IndexSet *data );

        virtual void evaluate( const double x[], double y[] ) const;
        virtual void integrate( double y[] ) const;

        // refinement functions
        virtual const IndexSet* getState() const; // returns enough information to rebuild the grid (i.e. the tensor list or the points list)
        virtual void setState( const IndexSet* state ); // copy the tensors and/or points
        //virtual const IndexSet* getData() const; // returns the point set associated with the values (if any)
        virtual void getData( IndexSet* &data ); // returns a list of the set points and their values
        virtual void getUpdateState( IndexSet* &update, double tol, TypeRefinement criteria ) const; // give the new set of points or tensors
        virtual void setUpdate( const IndexSet *update ); // creates a grid with the data updates
        // setUpdate loses all loaded data
};

}
#endif
