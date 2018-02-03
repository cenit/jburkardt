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

#ifndef __TASMANIAN_SPARSE_GRID_INDEXSET_CPP
#define __TASMANIAN_SPARSE_GRID_INDEXSET_CPP

#include "tsgIndexSet.hpp"

using std::cout;
using std::endl;

namespace TasGrid{

IndexSet::IndexSet( const int dimensions, const int slots, const int values )
        : num_dimensions(dimensions), num_slots(slots), num_values(values), num_points(0), pList(0), vMap(0), vList(0){
        reset();
};

IndexSet::~IndexSet(){
        num_dimensions = 0;
        num_slots = 0;
        num_values = 0;
        if ( pList != 0 ){ delete[] pList; pList = 0; };
        if ( vMap != 0 ){ delete[] vMap; vMap = 0; };
        if ( vList != 0 ){ delete[] vList; vList = 0; };
};

void IndexSet::reset(){
        if ( pList != 0 ){ delete[] pList; pList = 0; };
        if ( vMap != 0 ){ delete[] vMap; vMap = 0; };
        if ( vList != 0 ){ delete[] vList; vList = 0; };
        num_slots = ( num_slots == 0 ) ? 1 : num_slots;
        pList = new int[num_dimensions*num_slots];
        tzero( num_dimensions*num_slots, pList );
        if ( num_values > 0 ){
                vMap = new int[num_slots];
                for( int i=0; i<num_slots; i++ ){ vMap[i] = i; }
                vList = new double[num_values*num_slots];
                tzero( num_values*num_slots, vList );
        }
        num_points = 0;
}

void IndexSet::resetValues( int new_values ){
        if ( vMap != 0 ){ delete[] vMap; vMap = 0; };
        if ( vList != 0 ){ delete[] vList; vList = 0; };
        num_values = new_values;
        vMap = ( num_values > 0 ) ? new int[num_slots] : 0;
        for( int i=0; i<num_slots; i++ ){ vMap[i] = i; }
        vList = ( num_values > 0 ) ? new double[num_values*num_slots] : 0;
        tzero(num_values*num_slots, vList );
};

void IndexSet::resetIndexSet( int new_dimensions, int new_slots, int new_values ){
        num_dimensions = new_dimensions;
        num_slots = new_slots;
        num_values = new_values;
        reset();
}

void IndexSet::copy( const IndexSet *set ){
        num_dimensions = set->getNumDimensions();
        num_slots = set->getNumIndexes();
        num_values = set->getNumValues();
        reset();
        tcopy( num_dimensions * set->getNumIndexes(), set->getIndexList(), pList );
        if ( num_values > 0 ){
                for( int i=0; i<set->getNumIndexes(); i++ ){
                        tcopy( num_values, set->getValueList( i ), &(vList[i*num_values]) );
                }
        };
        num_points = num_slots;
};

const int* IndexSet::getIndexList( int j) const{ return &(pList[j*num_dimensions]); };
const double* IndexSet::getValueList( int j ) const{ return &(vList[ vMap[j]*num_values]); };

int IndexSet::getNumIndexes() const{ return num_points; };
int IndexSet::getNumDimensions() const{ return num_dimensions; };
int IndexSet::getNumValues() const{ return num_values; };

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


void IndexSet::write( std::ofstream &ofs ) const{
        ofs << num_dimensions << " " << num_slots << " " << num_values << " " << num_points << std::endl;
        twrite( num_points*num_dimensions, pList, ofs );
        if ( num_values > 0 ){
                for( int i=0; i<num_points; i++ ){
                        twrite( num_values, &(vList[ vMap[i] * num_values ]), ofs );
                }
        }
}

void IndexSet::read( std::ifstream &ifs ){
        ifs >> num_dimensions >> num_slots >> num_values;
        reset();
        ifs >> num_points;
        tread( num_dimensions*num_points, pList, ifs );
        if ( num_values > 0 ){
                tread( num_values*num_points, vList, ifs );
        }
};

void IndexSet::add( const int index[], const double *value ){ // this my be optimized
        if ( getSlot( index ) != -1 ) return;
        if ( num_points + 1 > num_slots ){
                //allocate more storage for the grid
                int *old_pList = pList; pList = 0;
                int *old_vMap = vMap; vMap = 0;
                double *old_vList = vList; vList = 0;
                int old_num_points = num_points;
                num_slots += 100;
                reset();
                tcopy( num_dimensions*old_num_points, old_pList, pList );
                if ( num_values > 0 ){
                        tcopy( num_points, old_vMap, vMap );
                        tcopy( num_values*old_num_points, old_vList, vList );
                }
                num_points = old_num_points;
                if ( old_pList != 0 ){ delete[] old_pList; old_pList = 0; }
                if ( old_vMap != 0 ){ delete[] old_vMap; old_vMap = 0; }
                if ( old_vList != 0 ){ delete[] old_vList; old_vList = 0; }
        }
        int i = num_points;
        while ( (i>0) && (compareIndexes( num_dimensions, &(pList[ (i-1)*num_dimensions ]), index ) == type_bbeforea) ){
                tcopy( num_dimensions, &(pList[ (i-1)*num_dimensions ]), &(pList[ i*num_dimensions ]) );
                if ( num_values > 0 ){ vMap[i] = vMap[i-1]; }
                i--;
        };
        tcopy( num_dimensions, index, &(pList[i*num_dimensions]) );
        if ( num_values > 0 ){
                vMap[i] = num_points;
                if ( value != 0 ){
                        tcopy( num_values, value, &(vList[vMap[i]*num_values]) );
                }else{
                        tzero( num_values, &(vList[vMap[i]*num_values]) );
                }
        }
        num_points++;
}

void IndexSet::add( const IndexSet *set ){
        int *old_pList = pList; pList = 0;
        int *old_vMap = vMap; vMap = 0;
        double *old_vList = vList; vList = 0;
        int old_num_points = num_points;
        int set_num_points = set->getNumIndexes();
        num_slots = num_points + set_num_points;
        reset();
        const int *set_pList = set->getIndexList();
        TypeIndexRelation relation;
        bool copyVals = (( num_values > 0 ) && ( num_values == set->getNumValues() ));

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
                        if ( copyVals ){ tcopy( num_values, &(old_vList[old_vMap[offset_old]*num_values]), &(vList[offset_new*num_values]) ); };
                        offset_old++;  offset_new++;
                }else{
                        tcopy( num_dimensions, &(set_pList[offset_set*num_dimensions]), &(pList[offset_new*num_dimensions]) );
                        if ( copyVals ){ tcopy( num_values, set->getValueList(offset_set), &(vList[offset_new*num_values]) ); };
                        offset_set++;  offset_new++;
                        offset_old += ( relation == type_asameb ) ? 1 : 0; // if the entries are the same, increment the old offset
                }
        }
        num_points = offset_new;
        if ( old_pList != 0 ){ delete[] old_pList; }
        if ( old_vMap != 0 ){ delete[] old_vMap; }
        if ( old_vList != 0 ){ delete[] old_vList; }
};


void IndexSet::setValue( int i, const double val[] ){
        tcopy( num_values, val, &(vList[vMap[i]*num_values]) );
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

};

#endif
