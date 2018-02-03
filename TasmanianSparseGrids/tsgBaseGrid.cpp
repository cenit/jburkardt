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

#ifndef __TASMANIAN_SPARSE_GRID_BASE_GRID_CPP
#define __TASMANIAN_SPARSE_GRID_BASE_GRID_CPP

#include "tsgBaseGrid.hpp"

namespace TasGrid{

Grid::Grid(){};
Grid::~Grid(){};

//void Grid::reset( int dimensions, int outputs, int depth, DepthType type, OneDRules oned ){};
//  void reset( int outputs );

int Grid::getNumDimensions() const{ return -1; };
int Grid::getNumOutputs() const{ return -1; };
TypeOneDRule Grid::getOneDRule() const{ return rule_base; };
const char *Grid::getOneDRuleDescription() const{ return "ERROR: calling the base grid class"; };

void Grid::write( std::ofstream &ofs ) const{}; // write the grid to a file
bool Grid::read( std::ifstream &ifs ){ return false; }; // reads the grid

int Grid::getNumPoints() const{ return -1; };

void Grid::getPoints( double* &pnts ) const{};
void Grid::getWeights( double* &pnts ) const{};
void Grid::getInterpolantWeights( const double x[], double* &weights ) const{};

int Grid::getNumNeededPoints() const{ return -1; };
void Grid::getNeededPoints( double* &pnts ) const{};
void Grid::loadNeededPoints( const double vals[] ){};
void Grid::loadNeededPoints( const IndexSet *data ){}

void Grid::evaluate( const double x[], double y[] ) const{};
void Grid::integrate( double y[] ) const{};

const IndexSet* Grid::getState() const{ return 0; }; // returns enough information to rebuild the grid (i.e. the tensor list or the points list)
void Grid::setState( const IndexSet* state ) {}; // copy the tensors and/or points
//const IndexSet* Grid::getData() const{}; // returns the point set associated with the values (if any)
void Grid::getData( IndexSet* &data ){};
void Grid::getUpdateState( IndexSet* &update, double tol, TypeRefinement criteria ) const{};
void Grid::setUpdate( const IndexSet *update ){}; // creates a grid with the data updates
}

#endif
