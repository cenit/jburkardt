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

#ifndef __TASMANIAN_TASGRID_EXTERNAL_TESTER_HPP
#define __TASMANIAN_TASGRID_EXTERNAL_TESTER_HPP

#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <iomanip>

#include <stdlib.h>
#include <time.h>

#include "TasmanianSparseGrid.hpp"
#include "tasgridTestFunctions.hpp"

struct TestResults{
        double error;
        int num_points;
};

enum TestType{
        type_integration, type_nodal_interpolation, type_internal_interpolation
};

class ExternalTester{
public:
        ExternalTester(int num_mc = 1);
        ~ExternalTester();

        int getNumTests() const; // get the number of available tests

        void performTests( const bool *tests = 0 ); // perform the tests marked with true

        void printInfo() const;

protected:
        TestResults getError( BaseFunction *f, TasGrid::TasmanianSparseGrid *grid, TestType type, const double *x = 0 ); // compares the error between the grid and f (x is used only for w-interpolation)

        bool testRefinement( BaseFunction *f, TasGrid::TasmanianSparseGrid *grid, double tol, const double errs[], int max_iterations ); // does a series of refinements

        void testAllRefinement( BaseFunction *f, double tol, int min_level, int max_iteration, int order = 1 );

        void allRefinementTest(); // puts side by side the various refinment types

        void functionalityTest(); // test convergence for the different grids

        void IntegrationTest(); // do a bunch of integration tests

        void Test( int t ); // do a test

        void setRandomX( int size, double x[] );

        void writeRule( TasGrid::TypeOneDRule oned, int order = 0 );
        void writeType( TasGrid::TypeDepth type );

        void debugTest();

private:
        const int num_tests;
        int num_mc;

        OneOneP0 f11p0;
        OneOneP3 f11p3;
        OneOneP4 f11p4;
        OneOneExpMX f11expmx;
        TwoOneConstGC1 f21constGC1;
        TwoOneConstGC2 f21constGC2;
        TwoOneConstGG f21constGG;
        TwoOneConstGJ f21constGJ;
        TwoOneConstGGL f21constGGL;
        TwoOneConstGH f21constGH;

        TwoOneP4 f21p4;
        TwoOneP5 f21p5;
        TwoOneExpNX2 f21nx2;
        TwoOneCos f21cos;
        TwoOneCosCos f21coscos;

        TwoOneSinSin f21sinsin;
        TwoOneExpm40 f21expm40;

        ThreeOneExpNX2 f31nx2;

        ThreeOneUnitBall f31ball;

        FiveOneExpSum f51expsum;
};

#endif
