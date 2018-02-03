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

#ifndef __TASMANIAN_SPARSE_GRID_HELPER_HPP
#define __TASMANIAN_SPARSE_GRID_HELPER_HPP

#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "math.h"

#include "tsgHardcodedConstants.hpp"

#include "tsgEnumerate.hpp"

using std::cout;
using std::cerr;
using std::endl;


namespace TasGrid{

void tzero( int size, int list[] );
void tzero( int size, double list[] );
// this sets the first size ints or doubles of list to zero

void tcopy( int size, const int source[], int destination[]  );
void tcopy( int size, const double source[], double destination[]  );
// this copies the lists

int tsum( int size, const int index[] );
// this sums all the indexes

void twrite( int size, const int list[], std::ofstream &ofs );
void twrite( int size, const double list[], std::ofstream &ofs );

void tread( int size, int list[], std::ifstream &ifs );
void tread( int size, double list[], std::ifstream &ifs );

TypeIndexRelation compareIndexes( int num_entries, const int a[], const int b[] );

void decompose( int n, double d[], double s[], double z[] );


};

#endif
