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

#ifndef __TASMANIAN_TASGRID_WRAPPER_HPP
#define __TASMANIAN_TASGRID_WRAPPER_HPP

#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <fstream>
#include <iomanip>

#include "TasmanianSparseGrid.hpp"

enum Operations{
        op_none, op_version, op_makegrid, op_getpoints, op_getneededpoints,
        op_getquadrature, op_makequadrature,
        op_loadvalues, op_evaluate, op_getinterweights, op_integrate,
        op_refine, op_recycle,
        op_info
};

class GridWrapper{
public:
        GridWrapper();
        ~GridWrapper();

        void setGridFilename( const char * filename );
        void setInFilename( const char * filename );
        void setOutFilename( const char * filename );
        void setAnisotropicFilename( const char * filename );

        void setNumDimensions( int n );
        void setNumOutputs( int n );
        void setDepth( int n );
        void setType( TasGrid::TypeDepth t );
        void setOneDim( TasGrid::TypeOneDRule r );
        void setOrder( int new_order );

        void setFullTensor( bool t );

        void setRefinementType( TasGrid::TypeRefinement ref );

        void setTolerance( double tol );

        void setPrint( bool p );

        void setAlpha( double a );
        void setBeta( double b );

        void setOperation( Operations op );

        bool isValid() const; // checks if we have all files set to do the operation

        bool doOperation(); // using everythnig set, do whatever

        const char* getVersion() const;
        const char* getLicense() const;
        void printVersion() const;

protected:
        bool makeCanonicalGrid();
        bool makeCanonicalQuadrature();
        bool recycleGrid();
        bool readPrintPoints();
        bool readPrintNeededPoints();
        bool getQuadrature();
        bool loadValues(); // loads the values from a file into the grid
        bool evaluate(); // evaluates the surrogate model at the points
        bool getInterWeights(); // get the interpolation weights for a bunch of points
        bool integrate();
        bool refine();
        bool printInfo(); // prints info about the grid

        void makeGrid();
        bool readGrid();
        void writePrintPoints( bool use_needed_points = false );
        void writeGrid();

        void writePrintQuadrature( int num_points, int num_dimensions, double w[], double x[] ) const;

        void writeMatrix( int rows, int cols, double x[], const char *filename ) const;
        void printMatrix( int rows, int cols, double x[] ) const;
        void readMatrix( int &rows, int &cols, double* &x, const char *filename ) const;

private:
        Operations todo;

        int num_dimensions;
        int num_outputs;
        int depth;
        int order; // only for Local grid
        TasGrid::TypeOneDRule oned; // only for Global Grid
        TasGrid::TypeDepth type; // only for Global Grid
        bool isTensor; // shall we use a tensor grid

        TasGrid::TypeRefinement refinement; // refinement type

        double tolerance;

        bool print;

        const char * grid_filename;
        const char * in_filename;
        const char * out_filename;
        const char * anisotropic_filename;

        TasGrid::TasmanianSparseGrid grid;

        double alpha, beta;
};


#endif
