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

#ifndef __TASMANIAN_SPARSE_GRID_BASE_1D_HIERARCHICAL_RULE_CPP
#define __TASMANIAN_SPARSE_GRID_BASE_1D_HIERARCHICAL_RULE_CPP

#include "tsgBase1DHierarchicalRule.hpp"

namespace TasGrid{

OneDHierarchicalRule::OneDHierarchicalRule(){};

OneDHierarchicalRule::~OneDHierarchicalRule(){};

int OneDHierarchicalRule::getMaxOrder() const{ return -1; };
void OneDHierarchicalRule::setMaxOrder( int max_order ){};

int OneDHierarchicalRule::getNumPoints( int level ) const{ return -1; };
int OneDHierarchicalRule::getBasisLevel( int level ) const{ return -1; };

TypeOneDRule OneDHierarchicalRule::getType() const{ return rule_base; };
const char * OneDHierarchicalRule::getDescription() const{ return "ERROR: calling base hierarchical rule"; };

double OneDHierarchicalRule::getX( int point ) const{ return 0.0; };

double OneDHierarchicalRule::getWeight( int level, int point ) const{ return 0.0; };
double OneDHierarchicalRule::eval( int level, int point, double x ) const{ return 0.0; };

int OneDHierarchicalRule::getLevel( int point ) const{ return -1; };
void OneDHierarchicalRule::getChildren( int point, int &first, int &second ) const{};
void OneDHierarchicalRule::getParents( int point,  int &first, int &second ) const{};

double OneDHierarchicalRule::getSupport( int level ) const{ return 0.0; };

}

#endif
