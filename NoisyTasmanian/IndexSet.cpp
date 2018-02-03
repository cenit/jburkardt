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

#ifndef __INDEXSET_CPP
#define __INDEXSET_CPP

#include "IndexSet.hpp"

using std::cout;
using std::endl;

IndexSet::IndexSet( const int dimensions, const int slots )
        : num_dimensions(dimensions), num_slots(slots), num_points(0), pList(0){
        reset();
};

IndexSet::~IndexSet(){
        num_dimensions = 0;
        num_slots = 0;
        if ( pList != 0 ){ delete[] pList; pList = 0; };
};

void IndexSet::reset(){
        if ( pList != 0 ){ delete[] pList; pList = 0; };
        num_slots = ( num_slots == 0 ) ? 1 : num_slots;
        pList = new int[num_dimensions*num_slots];
        tzero( num_dimensions*num_slots, pList );
        num_points = 0;
}


void IndexSet::resetIndexSet( int new_dimensions, int new_slots, int new_values ){
        num_dimensions = new_dimensions;
        num_slots = new_slots;
        reset();
}


const int* IndexSet::getIndexList( int j) const{ return &(pList[j*num_dimensions]); };

int IndexSet::getNumIndexes() const{ return num_points; };
int IndexSet::getNumDimensions() const{ return num_dimensions; };

int IndexSet::getSlot( const int index[] ) const{
        if ( num_points == 0 ){ return -1; };
        int start = 0, end = num_points - 1;
        int current = (start + end) / 2;
        TypeIndexRelation t;
        while ( start <= end ){
                t = compareIndexes( num_dimensions, &(pList[num_dimensions * current]), index );
                if ( t == type_abeforeb ){
                        start = current+1;
                }else if ( t == type_bbeforea ){
                        end = current-1;
                }else{
                        return current;
                };
                current = (start + end) / 2;
        };
        return -1;
};



void IndexSet::add( const int index[] ){ // this my be optimized
        if ( getSlot( index ) != -1 ) return;
        if ( num_points + 1 > num_slots ){
                //allocate more storage for the grid
                int *old_pList = pList; pList = 0;
                int old_num_points = num_points;
                num_slots += 100;
                reset();
                num_points = old_num_points;
                tcopy( num_points*num_dimensions, old_pList, pList );
                if ( old_pList != 0 ){ delete[] old_pList; old_pList = 0; }
        }
        int i = num_points;
        while ( (i>0) && (compareIndexes( num_dimensions, &(pList[ (i-1)*num_dimensions ]), index ) == type_bbeforea) ){
                tcopy( num_dimensions, &(pList[ (i-1)*num_dimensions ]), &(pList[ i*num_dimensions ]) );
                i--;
        };
        tcopy( num_dimensions, index, &(pList[i*num_dimensions]) );
        num_points++;
}

void IndexSet::add( const IndexSet *set ){
        int *old_pList = pList; pList = 0;
        int old_num_points = num_points;
        int set_num_points = set->getNumIndexes();
        num_slots = num_points + set_num_points;
        reset();
        const int *set_pList = set->getIndexList();
        TypeIndexRelation relation;

        int offset_set = 0, offset_old = 0, offset_new = 0;
        while ( (offset_set < set_num_points) || (offset_old < old_num_points) ){
                if ( offset_set >= set_num_points ){
                        relation = type_abeforeb;
                }else if ( offset_old >= old_num_points ){
                        relation = type_bbeforea;
                }else{
                        relation = compareIndexes( num_dimensions, &(old_pList[offset_old*num_dimensions]), &(set_pList[offset_set*num_dimensions]) );
                }
                if ( relation == type_abeforeb ){
                        tcopy( num_dimensions, &(old_pList[offset_old*num_dimensions]), &(pList[offset_new*num_dimensions]) );
                        offset_old++;  offset_new++;
                }else{
                        tcopy( num_dimensions, &(set_pList[offset_set*num_dimensions]), &(pList[offset_new*num_dimensions]) );
                        offset_set++;  offset_new++;
                        offset_old += ( relation == type_asameb ) ? 1 : 0; // if the entries are the same, increment the old offset
                }
        }
        num_points = offset_new;
        if ( old_pList != 0 ){ delete[] old_pList; }
};


void tzero( int size, int list[] ){ for( int i=0; i<size; i++ ) list[i] = 0; }

TypeIndexRelation compareIndexes( int num_entries, const int a[], const int b[] ){
        for( int i=0; i<num_entries; i++ ){
                if ( a[i] < b[i] ) return type_abeforeb;
                if ( a[i] > b[i] ) return type_bbeforea;
        };
        return type_asameb;
}

void tcopy( int size, const int source[], int destination[]  ){
        for( int i=0; i<size; i++ ){ destination[i] = source[i]; }
}

// DEBUG
//void IndexSet::writeList() const{
//        for( int i=0; i<num_points; i++ ){
//                for( int j=0; j<num_dimensions; j++ ){
//                        cout << pList[i*num_dimensions + j] << " ";
//                }
//                cout << "   ";
//                for( int j=0; j<num_values; j++ ){
//                        cout << vList[vMap[i]*num_values + j] << " ";
//                }
//                cout << endl;
//        }
//        cout << endl;
//};


#endif
