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

#include <iostream>

#ifndef __INDEXSET_HPP
#define __INDEXSET_HPP

enum TypeIndexRelation{
        type_abeforeb, type_bbeforea, type_asameb
};



class IndexSet{
public:
        IndexSet( const int dimensions, const int slots = 0 );
        // initialize for num_dimensions and initial memory for num_slots
        ~IndexSet();

        void resetValues( int new_values );
        void resetIndexSet( int new_dimensions, int new_slots = 0, int new_values = 0 );

        int getNumIndexes() const;
        int getNumDimensions() const;

        int getSlot( const int index[] ) const;

        void add( const int index[] );
        void add( const IndexSet *set ); // adds both the points and the corresponding values (assume dimension and num values are the same)


        const int* getIndexList( int j = 0) const; // WARNING: no error checking here, if j >= num_points this will crash

protected:
        void reset();

private:
        int num_dimensions;
        int num_points;
        int num_slots;
        int *pList;
};

void tzero( int size, int list[] );
void tcopy( int size, const int source[], int destination[]  );
TypeIndexRelation compareIndexes( int num_entries, const int a[], const int b[] );

#endif
