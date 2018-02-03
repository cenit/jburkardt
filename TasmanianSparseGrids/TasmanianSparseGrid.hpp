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

#ifndef __TASMANIAN_SPARSE_GRID_HPP
#define __TASMANIAN_SPARSE_GRID_HPP

#include "tsgEnumerate.hpp"
#include "tsgHelperFunctions.hpp"

#include "tsgGlobalGrid.hpp"
#include "tsgLocalPolynomialGrid.hpp"
#include "tsgWaveletGrid.hpp"

#include "tsgFullTensorGrid.hpp"

namespace TasGrid{

// this is the main class that wraps around the global and local grids for easy access

class TasmanianSparseGrid{
public:
        TasmanianSparseGrid();
        ~TasmanianSparseGrid();

        const char* getVersion() const;
        const char* getLicense() const;

        void makeGlobalGrid( int dimensions, int outputs, int depth, TypeDepth type, TypeOneDRule oned, const int *anisotropic_weights = 0, const double *alpha_beta = 0 );
        void makeLocalPolynomialGrid( int dimensions, int outputs, int depth, int order, TypeOneDRule boundary );
        void makeWaveletGrid(int dimensions, int outputs, int depth, int order = 1);
        void makeFullTensorGrid( int dimensions, int outputs, int order[], TypeOneDRule oned, const double *alpha_beta = 0 );

        void recycleGlobalGrid( int depth, TypeDepth type, const int *anisotropic_weights = 0 );
        void recycleLocalPolynomialGrid( int depth, int order = 1 );
        void recycleWaveletGrid( int depth, int order = 1 );
        void recycleFullTensorGrid( int order[] );

        bool isFullTensor() const; // returns true if this is a full tensor grid

        void setTransformAB( const double *a, const double *b ); // set the ranges of the box
        void clearTransformAB();
        void getTransformAB( double* &a, double* &b ) const;

        int getNumDimensions() const;
        int getNumOutputs() const;
        TypeOneDRule getOneDRule() const;
        const char *getOneDRuleDescription() const;

        void write( const char* filename ) const; // write the grid to a file
        bool read( const char* filename ); // reads the grid

        void write( std::ofstream &ofs ) const; // adds the class to an already opened stream
        bool read( std::ifstream &ifs );

        int getNumPoints() const;

        void getPoints( double* &pnts ) const;
        void getWeights( double* &weights ) const;
        void getInterpolantWeights( const double x[], double* &weights ) const;

        int getNumNeededPoints() const;
        void getNeededPoints( double* &pnts ) const;
        void loadNeededPoints( const double vals[] );

        void evaluate( const double x[], double y[] ) const;
        void integrate( double y[] ) const;

        void setRefinement( double tolerance, TypeRefinement criteria ); // add other falgs later

        void printStats(); // writes out the statistics of the grid


protected:
        void clear(); // free all memory
        void clearRefinement(); // free all memory associated with the refinement

        void recycleData();
        void swapGrids(); // swaps the new_grid with grid

        void mapCanonicalToDomain( double x[] ) const;
        void mapDomainToCanonical( double x[] ) const;
        double getWeightsScale() const;

private:
        Grid *grid;

        GlobalGrid *global;
        LocalPolynomialGrid *plocal;
        WaveletGrid *wavelet;
        FullTensorGrid *fgrid;

        Grid *new_grid;

        GlobalGrid *new_global;
        LocalPolynomialGrid *new_plocal;
        WaveletGrid *new_wavelet;
        FullTensorGrid *new_fgrid;

        double *transform_a, *transform_b; // transformation on the interval of integration

        TypeOneDRule rule;
};


}


#endif
