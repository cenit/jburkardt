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

#ifndef __TASMANIAN_SPARSE_GRID_INDEXSET_HPP
#define __TASMANIAN_SPARSE_GRID_INDEXSET_HPP

#include "tsgHelperFunctions.hpp"


namespace TasGrid{

class IndexSet{
public:
        IndexSet( const int dimensions, const int slots = 0, const int values = 0 );
        // initialize for num_dimensions and initial memory for num_slots
        ~IndexSet();

        void resetValues( int new_values );
        void resetIndexSet( int new_dimensions, int new_slots = 0, int new_values = 0 );

        void copy( const IndexSet *set ); // copy set into the current set

        void write( std::ofstream &ofs ) const;
        void read( std::ifstream &ifs );

        int getNumIndexes() const;
        int getNumDimensions() const;
        int getNumValues() const;

        int getSlot( const int index[] ) const;

        void add( const int index[], const double *value = 0 );
        void add( const IndexSet *set ); // adds both the points and the corresponding values (assume dimension and num values are the same)

        //void setAllValues( const double vals[] ); // this assumes that the values are aligned with the indexes
        void setValue( int i, const double val[] ); // sets the value for entry i

        const int* getIndexList( int j = 0) const; // WARNING: no error checking here, if j >= num_points this will crash
        const double* getValueList( int j ) const; // WARNING: no error checking here, if (j >= num_points or num_values == 0) this will crash


        // DEBUG
        //void writeList() const; // writes the list to cout

protected:
        void reset();

private:
        int num_dimensions;
        int num_points;
        int num_slots;
        int num_values;
        int *pList;
        int *vMap; // maps the indexes in pList to the values in vList so that vList doesn't have to be shuffeled all the time
        double *vList;
};

};

#endif
