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

#ifndef __TASMANIAN_SPARSE_GRID_BASE_1D_RULE_CPP
#define __TASMANIAN_SPARSE_GRID_BASE_1D_RULE_CPP

#include "tsgBase1DRule.hpp"

namespace TasGrid{

OneDRule::OneDRule(){};

OneDRule::~OneDRule(){};

int OneDRule::getMaxLevel() const{ return -1; };

int OneDRule::getNumPoints( int level ) const{ return -1; };
int OneDRule::getBasisLevel( int level ) const{ return -1; };
void OneDRule::getPoints( int level, int* &pnts ) const{};
const char * OneDRule::getDescription() const{ return "ERROR: calling the base rule class"; };
double OneDRule::getX( int point ) const{ return 0.0; };
double OneDRule::getWeight( int level, int point ) const{ return 0.0; };
double OneDRule::eval( int level, int point, double x ) const{ return 0.0; };
TypeOneDRule OneDRule::getType() const{ return rule_base; };

};

#endif
