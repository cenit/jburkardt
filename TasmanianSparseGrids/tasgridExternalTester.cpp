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

#ifndef __TASMANIAN_TASGRID_EXTERNAL_TESTER_CPP
#define __TASMANIAN_TASGRID_EXTERNAL_TESTER_CPP

#include "tasgridExternalTester.hpp"


using std::cout;
using std::endl;
using std::setw;

ExternalTester::ExternalTester(int num_mc) : num_mc(num_mc), num_tests(4){ srand( time(0) ); };
ExternalTester::~ExternalTester(){};

int ExternalTester::getNumTests() const{
        return num_tests;
};

void ExternalTester::performTests( const bool *tests ){
        for( int t=0; t<num_tests; t++ ){
                if ( (tests == 0) || tests[t] ){ Test(t); };
        }
};

void ExternalTester::Test( int t ){
        if ( t == 0 ){
                functionalityTest();
        }else if ( t == 1 ){
                allRefinementTest();
        }else if ( t == 2 ){
                IntegrationTest();
        }else if ( t == 3 ){
                debugTest(); // this is for debug purposes only
        }
}

TestResults ExternalTester::getError( BaseFunction *f, TasGrid::TasmanianSparseGrid *grid, TestType type, const double *x ){ // compares the error between the grid and f
        TestResults R;
        int num_dimensions = f->getNumInputs();
        int num_outputs = f->getNumOutputs();
        int num_points = grid->getNumPoints();
        if ( (type == type_integration) || (type == type_nodal_interpolation) ){
                double *points = 0, *weights = 0;
                grid->getPoints( points );
                if ( type == type_integration ){
                        grid->getWeights( weights );
                }else{
                        grid->getInterpolantWeights( x, weights );
                }

                double y[num_outputs];
                double r[num_outputs];
                for( int j=0; j<num_outputs; j++ ){ r[j] = 0.0; };

                for( int i=0; i<num_points; i++ ){
                        f->eval( &(points[i*num_dimensions]), y );
                        for( int j=0; j<num_outputs; j++ ){
                                r[j] += weights[i] * y[j];
                        };
                };

                double err = 0.0;
                if ( type == type_integration ){
                        f->getIntegral( y );
                }else{
                        f->eval( x, y );
                }
                for( int j=0; j<num_outputs; j++ ){
                        err += fabs( y[j] - r[j] );
                };
                R.error = err;

                delete[] points;
                delete[] weights;
        }else if ( type == type_internal_interpolation ){
                // load needed points
                int num_needed_points = grid->getNumNeededPoints();
                if ( num_needed_points > 0 ){
                        double *needed_points = 0;
                        double *values = new double[num_outputs * num_needed_points];

                        grid->getNeededPoints( needed_points );
                        for( int i=0; i<num_needed_points; i++ ){
                                f->eval( &(needed_points[i*num_dimensions]), &(values[i*num_outputs]) );
                        }
                        //cout << " Loading needed points " << endl;
                        grid->loadNeededPoints( values ); //cout << " Loaded " << endl;

                        delete[] values;
                        delete[] needed_points;
                }

                double x[num_dimensions];
                double y[num_outputs], s[num_outputs], r[num_outputs], n[num_outputs];
                for( int i=0; i<num_outputs; i++ ){
                        y[i] = s[i] = r[i] = n[i] = 0.0;
                }
                for( int k=0; k<num_mc; k++ ){
                        setRandomX( num_dimensions, x );
                        f->eval( x, y );
                        grid->evaluate( x, s );
                        for( int j=0; j<num_outputs; j++ ){
                                r[j] = ( r[j] > fabs( y[j] - s[j] ) ) ? r[j] : fabs( y[j] - s[j] );
                                n[j] = ( n[j] > fabs( y[j] ) ) ? n[j] : fabs( y[j] );
                        }
                }

                double err = r[0] / n[0];
                for( int j=1; j<num_outputs; j++ ){
                        err = ( err > r[j] / n[j] ) ? err : r[j] / n[j];
                };
                R.error = err;
        }
        R.num_points = grid->getNumPoints();
        return R;
}

void ExternalTester::allRefinementTest(){

        testAllRefinement( &f21nx2, 1.E-4, 3, 10, 1 );
        testAllRefinement( &f21sinsin, 1.E-4, 5, 10, 1 );
        testAllRefinement( &f21coscos, 1.E-4, 5, 10, 1 );
        testAllRefinement( &f21cos, 1.E-4, 5, 10, 1 );
        //testAllRefinement( &f21expm40, 1.E-4, 5, 16, 1 );

}

void ExternalTester::testAllRefinement( BaseFunction *f, double tol, int min_level, int max_iteration, int order ){
        TasGrid::TasmanianSparseGrid gridc, gridp, gridd, gridf; // classic, parents, direction, family-direction-selective

        gridc.makeLocalPolynomialGrid( 2, 1, min_level, order, TasGrid::rule_pwpolynomial );
        gridp.makeLocalPolynomialGrid( 2, 1, min_level, order, TasGrid::rule_pwpolynomial );
        gridd.makeLocalPolynomialGrid( 2, 1, min_level, order, TasGrid::rule_pwpolynomial );
        gridf.makeLocalPolynomialGrid( 2, 1, min_level, order, TasGrid::rule_pwpolynomial );


        TestResults Rc = getError( f, &gridc, type_internal_interpolation );
        TestResults Rp = getError( f, &gridp, type_internal_interpolation );
        TestResults Rd = getError( f, &gridd, type_internal_interpolation );
        TestResults Rf = getError( f, &gridf, type_internal_interpolation );

        cout << gridc.getOneDRuleDescription() << endl;
        cout << "              Using: " << f->getDescription() << endl;
        cout << std::scientific; cout.precision(4);
        cout << "                Tol: " << tol << endl;
        cout << setw(12) << "Iteration" << setw(18) << "Classic" << setw(24) << "Parents" << setw(24) << "Direction" << setw(30) << "Family-Direction" << endl;
        cout << setw(24) << "Points" << setw(12) << "Error" << setw(12) << "Points" << setw(12) << "Error" << setw(12) << "Points" << setw(12) << "Error" << setw(12) << "Points" << setw(12) << "Error" << endl;
        cout << setw(12) << "0" << setw(12) << Rc.num_points << setw(12) << Rc.error << setw(12) << Rp.num_points << setw(12) << Rp.error
                                << setw(12) << Rd.num_points << setw(12) << Rd.error << setw(12) << Rf.num_points << setw(12) << Rf.error << endl;

        int itr = 1;
        bool doc = true, dop = true, dod = true, dof = true;
        while( (itr <= max_iteration) && (itr > 0) ){
                if ( doc ) gridc.setRefinement( tol, TasGrid::refine_classic );
                if ( dop ) gridp.setRefinement( tol, TasGrid::refine_parents_first );
                if ( dod ) gridd.setRefinement( tol, TasGrid::refine_direction_selective );
                if ( dof ) gridf.setRefinement( tol, TasGrid::refine_fds );

                doc = !( (!doc) || (gridc.getNumNeededPoints() == 0) );
                dop = !( (!dop) || (gridp.getNumNeededPoints() == 0) );
                dod = !( (!dod) || (gridd.getNumNeededPoints() == 0) );
                dof = !( (!dof) || (gridf.getNumNeededPoints() == 0) );

                if ( (!doc) && (!dop) && (!dod) && (!dof) ){  itr = -2;  };

                Rc = getError( f, &gridc, type_internal_interpolation );
                Rp = getError( f, &gridp, type_internal_interpolation );
                Rd = getError( f, &gridd, type_internal_interpolation );
                Rf = getError( f, &gridf, type_internal_interpolation );

                if ( itr > 0 ){
                        cout << setw(12) << itr;
                }else{
                        cout << setw(12) << "final";
                }

                cout << setw(12) << Rc.num_points << setw(12) << Rc.error << setw(12) << Rp.num_points << setw(12) << Rp.error
                                        << setw(12) << Rd.num_points << setw(12) << Rd.error << setw(12) << Rf.num_points << setw(12) << Rf.error << endl;
                itr++;
        }
        cout << "------------------------------------------------------------------------------------------------------------" << endl;
        gridc.makeWaveletGrid( 2, 1, min_level - 3, order );
        Rc = getError( f, &gridc, type_internal_interpolation );
        cout << "------------------------------------------------------------------------------------------------------------" << endl;
        cout << gridc.getOneDRuleDescription() << endl;
        cout << "              Using: " << f->getDescription() << endl;
        cout << std::scientific; cout.precision(4);
        cout << "              Tolerance: " << tol << endl;
        cout << setw(12) << "Iteration" << setw(18) << "Classic" << setw(24) << "Parents" << setw(24) << "Direction" << setw(30) << "Family-Direction" << endl;
        cout << setw(24) << "Points" << setw(12) << "Error" << setw(12) << "Points" << setw(12) << "Error" << setw(12) << "Points" << setw(12) << "Error" << setw(12) << "Points" << setw(12) << "Error" << endl;
        cout << setw(12) << "0" << setw(12) << Rc.num_points << setw(12) << Rc.error << setw(12) << "---" << setw(12) << "---"
        		<< setw(12) << "---" << setw(12) << "---" << setw(12) << "---" << setw(12) << "---" << endl;

        itr = 1;
        doc = true;//, dop = true, dod = true, dof = true;
        while( (itr <= max_iteration) && (itr > 0) ){
        	if ( doc ) gridc.setRefinement( tol, TasGrid::refine_classic );
        	//                if ( dop ) gridp.setRefinement( tol, TasGrid::refine_parents_first );
        	//                if ( dod ) gridd.setRefinement( tol, TasGrid::refine_direction_selective );
        	//                if ( dof ) gridf.setRefinement( tol, TasGrid::refine_fds );

        	doc = !( (!doc) || (gridc.getNumNeededPoints() == 0) );
        	//                dop = !( (!dop) || (gridp.getNumNeededPoints() == 0) );
        	//                dod = !( (!dod) || (gridd.getNumNeededPoints() == 0) );
        	//                dof = !( (!dof) || (gridf.getNumNeededPoints() == 0) );

        	if ( (!doc)  ){  itr = -2;  };

        	Rc = getError( f, &gridc, type_internal_interpolation );
        	//                Rp = getError( f, &gridp, type_internal_interpolation );
        	//                Rd = getError( f, &gridd, type_internal_interpolation );
        	//                Rf = getError( f, &gridf, type_internal_interpolation );

        	if ( itr > 0 ){
        		cout << setw(12) << itr;
        	}else{
        		cout << setw(12) << "final";
        	}

        	cout << setw(12) << Rc.num_points << setw(12) << Rc.error << setw(12) << "---" << setw(12) << "---"
        			<< setw(12) << "---" << setw(12) << "---" << setw(12) << "---" << setw(12) << "---" << endl;
        	itr++;
        }
        cout << "------------------------------------------------------------------------------------------------------------" << endl;

}

void ExternalTester::IntegrationTest(){
        TasGrid::TasmanianSparseGrid grid;

        int i = 0;
        TestResults Rb, Rl; Rb.num_points = 0;

        cout << setw(20) << "Number of Points" << setw(20) << "Level Error" << setw(20) << "Number of Points" << setw(20) << "Basis Error" << endl;
        cout << std::scientific; cout.precision(4);

        for( int l=1; l<20; l++ ){
                grid.makeGlobalGrid( 2, 0, l, TasGrid::type_level, TasGrid::rule_chebyshev );
                Rl = getError( &f21nx2, &grid, type_integration );

                while( Rb.num_points < Rl.num_points ){
                        i++;
                        grid.makeGlobalGrid( 2, 0, i, TasGrid::type_level, TasGrid::rule_gausslegendre );
                        Rb = getError( &f21nx2, &grid, type_integration );
                }

                cout << setw(20) << Rl.num_points << setw(20) << Rl.error << setw(20) << Rb.num_points << setw(20) << Rb.error << endl;
        }
}

bool ExternalTester::testRefinement( BaseFunction *f, TasGrid::TasmanianSparseGrid *grid, double tol, const double errs[], int max_iterations ){
        bool tpass = true;
        int itr = 0;
        TestResults R;

        R  = getError( f, grid, type_internal_interpolation );
        tpass = tpass && ( R.error < errs[itr] );


        while( tpass && (itr<max_iterations) ){

        	grid->setRefinement( tol, TasGrid::refine_classic );
//        	cout << itr << " ";
        	R  = getError( f, grid, type_internal_interpolation );
//        	cout << R.error << endl;
        	 tpass = R.error < errs[itr] ; //cout << R.error << "  " << errs[itr] << endl;
        	if((grid->getNumNeededPoints() > 0)) break;
        	itr++;
        }
        //cout << tpass << "  " << itr << endl;
        return tpass;
}

void ExternalTester::setRandomX( int size, double x[] ){
        for( int i=0; i<size; i++ ){
                x[i] = 2.0 * ((double) rand()) / ( (double) RAND_MAX ) -1.0;
        };
};

void ExternalTester::writeRule( TasGrid::TypeOneDRule oned, int order ){
        if ( oned == TasGrid::rule_clenshawcurtis ){ cout << setw(25) << "clenshaw-curtis"; }else
        if ( oned == TasGrid::rule_chebyshev ){ cout << setw(25) << "chebyshev"; }else
        if ( oned == TasGrid::rule_chebyshevN2P ){ cout << setw(25) << "chebyshev-2-point"; }else
        if ( oned == TasGrid::rule_gausslegendre ){ cout << setw(25) << "gauss-legendre"; }else
        if ( oned == TasGrid::rule_fejer2 ){ cout << setw(25) << "fejer-2"; }else
        if ( oned == TasGrid::rule_gausschebyshev1 ){ cout << setw(25) << "gauss-chebyshev-1"; }else
        if ( oned == TasGrid::rule_gausschebyshev2 ){ cout << setw(25) << "gauss-chebyshev-2"; }else
        if ( oned == TasGrid::rule_gaussgegenbauer ){ cout << setw(25) << "gauss-gegenbauer"; }else
        if ( oned == TasGrid::rule_gaussjacobi ){ cout << setw(25) << "gauss-jacobi"; }else
        if ( oned == TasGrid::rule_gausslaguerre ){ cout << setw(25) << "gauss-laguerre"; }else
        if ( oned == TasGrid::rule_gausshermite ){ cout << setw(25) << "gauss-hermite"; }else
        if ( oned == TasGrid::rule_pwpolynomial ){
                switch(order){
                        case 1: cout << setw(12) << "piece-wise" << setw(13) << "linear"; break;
                        case 2: cout << setw(12) << "piece-wise" << setw(13) << "quadratic"; break;
                        case 3: cout << setw(12) << "piece-wise" << setw(13) << "cubic"; break;
                }
        }else if( oned == TasGrid::rule_wavelet ){
        	cout << setw(12) << "wavelets";
        	switch(order){
        	case 1:
        		cout << setw(13) << "first order"; break;
        	case 3:
        		cout << setw(13) << "third order"; break;
        	default:
        		cout << setw(13) << "";break;
        	}
        }
}
void ExternalTester::writeType( TasGrid::TypeDepth type ){
        if ( type == TasGrid::type_level ){  cout << setw(15) << "level"; }else
        if ( type == TasGrid::type_basis ){  cout << setw(15) << "basis"; }
}

void ExternalTester::functionalityTest(){
        cout << " Performing Basic Functionality Test, two functions per test must reach specified tolerance" << endl;
        bool pass = true;
        double x[5]; setRandomX(5,x); TestResults R, R2;
        TasGrid::TasmanianSparseGrid grid;

        const int N = 8;
        const TasGrid::TypeOneDRule rules[N] = { TasGrid::rule_clenshawcurtis, TasGrid::rule_clenshawcurtis,
                                              TasGrid::rule_chebyshev, TasGrid::rule_chebyshev,
                                              TasGrid::rule_chebyshevN2P, TasGrid::rule_chebyshevN2P,
                                              TasGrid::rule_gausslegendre, TasGrid::rule_gausslegendre };
        const TasGrid::TypeDepth types[N] = { TasGrid::type_level, TasGrid::type_basis,
                                              TasGrid::type_level, TasGrid::type_basis,
                                              TasGrid::type_level, TasGrid::type_basis,
                                              TasGrid::type_level, TasGrid::type_basis };

        const int depth[6*N] = {  8,  9,  9,  9,  8,  9, 20, 20, 20, 22, 18, 22, // clenshaw-curtis
                                 22, 22, 22, 24, 24, 24, 22, 22, 22, 24, 24, 24, // chebyshev
                                 20, 20, 22, 23, 24, 24, 24, 24, 22, 23, 22, 24, // chebyshev 2
                                 11, 12, 22, 24, 22, 24, 20, 24, 36, 36, 38, 38 }; // gauss-legendre
        const double tol[6*N] = { 1.E-12, 1.E-12, 1.E-12, 1.E-11, 1.E-09, 1.E-09, 1.E-12, 1.E-12, 1.E-12, 1.E-10, 1.E-11, 1.E-11, // clenshaw-curtis
                                  1.E-12, 1.E-12, 1.E-10, 1.E-10, 1.E-10, 1.E-10, 1.E-12, 1.E-12, 1.E-10, 1.E-10, 1.E-10, 1.E-10, // chebyshev
                                  1.E-11, 1.E-11, 1.E-10, 1.E-10, 1.E-08, 1.E-08, 1.E-12, 1.E-11, 1.E-09, 1.E-09, 1.E-09, 1.E-09, // chebyshev 2
                                  1.E-10, 1.E-10, 1.E-10, 1.E-10, 1.E-09, 1.E-09, 1.E-10, 1.E-10, 1.E-08, 1.E-08, 1.E-07, 1.E-07 }; // gauss-legendre

        cout << setw(25) << "One-D Rule" << setw(15) << "Selection" << setw(20) << "Goal" << setw(20) << "Status" << endl;

        double ab[2] = { 0.3, 0.7 };

        // Global Tests
        x[0] = 0.5; x[1] = 0.5;
        for( int i=0; i<N; i++ ){
                writeRule( rules[i] ); writeType( types[i] ); cout << setw(20) << "integration";
                grid.makeGlobalGrid( 2, 0, depth[6*i],   types[i], rules[i] );  R  = getError( &f21nx2, &grid, type_integration );
                grid.makeGlobalGrid( 2, 0, depth[6*i+1], types[i], rules[i] );  R2 = getError( &f21cos, &grid, type_integration );
                if ( (R.error < tol[6*i]) && (R2.error < tol[6*i+1]) ){ cout << setw(20) << "Pass" << endl; }else{ cout << setw(20) << "FAIL" << endl; pass = false; }
                //cout << R.error << "    " << R2.error << "     " << tol[6*i] << "     " << tol[6*i+1] << endl;

                writeRule( rules[i] ); writeType( types[i] ); cout << setw(20) << "w-interpolation";
                grid.makeGlobalGrid( 2, 0, depth[6*i+2], types[i], rules[i] );  R  = getError( &f21nx2, &grid, type_nodal_interpolation, x );
                grid.makeGlobalGrid( 2, 0, depth[6*i+3], types[i], rules[i] );  R2 = getError( &f21cos, &grid, type_nodal_interpolation, x );
                if ( (R.error < tol[6*i+2]) && (R2.error < tol[6*i+3]) ){ cout << setw(20) << "Pass" << endl; }else{ cout << setw(20) << "FAIL" << endl; pass = false; }
                //cout << R.error << "    " << R2.error << "     " << tol[6*i+2] << "     " << tol[6*i+3] << endl;

                writeRule( rules[i] ); writeType( types[i] ); cout << setw(20) << "interpolation";
                grid.makeGlobalGrid( 2, 1, depth[6*i+4], types[i], rules[i] );  R  = getError( &f21nx2, &grid, type_internal_interpolation );
                grid.makeGlobalGrid( 2, 1, depth[6*i+5], types[i], rules[i] );  R2 = getError( &f21cos, &grid, type_internal_interpolation );
                if ( (R.error < tol[6*i+4]) && (R2.error < tol[6*i+5]) ){ cout << setw(20) << "Pass" << endl; }else{ cout << setw(20) << "FAIL" << endl; pass = false; }
                //cout << R.error << "    " << R2.error << "     " << tol[6*i+4] << "     " << tol[6*i+5] << endl;
        }

        // special rules
        // fejer2 requires a function that vanishes at the domain end-points
        writeRule( TasGrid::rule_fejer2 ); writeType( TasGrid::type_level ); cout << setw(20) << "integration";
        grid.makeGlobalGrid( 2, 0, 9,   TasGrid::type_level, TasGrid::rule_fejer2 );  R  = getError( &f21sinsin, &grid, type_integration ); //cout << R.error << endl;
        if ( R.error < 1.E-14 ){ cout << setw(20) << "Pass" << endl; }else{ cout << setw(20) << "FAIL" << endl; pass = false; }
        writeRule( TasGrid::rule_fejer2 ); writeType( TasGrid::type_level ); cout << setw(20) << "w-interpolation";
        grid.makeGlobalGrid( 2, 1, 9,   TasGrid::type_level, TasGrid::rule_fejer2 );  R  = getError( &f21sinsin, &grid, type_nodal_interpolation, x ); //cout << R.error << endl;
        if ( R.error < 1.E-14 ){ cout << setw(20) << "Pass" << endl; }else{ cout << setw(20) << "FAIL" << endl; pass = false; }
        writeRule( TasGrid::rule_fejer2 ); writeType( TasGrid::type_level ); cout << setw(20) << "interpolation";
        grid.makeGlobalGrid( 2, 1, 9,   TasGrid::type_level, TasGrid::rule_fejer2 );  R  = getError( &f21sinsin, &grid, type_internal_interpolation ); //cout << R.error << endl;
        if ( R.error < 1.E-14 ){ cout << setw(20) << "Pass" << endl; }else{ cout << setw(20) << "FAIL" << endl; pass = false; }
        writeRule( TasGrid::rule_fejer2 ); writeType( TasGrid::type_basis ); cout << setw(20) << "integration";
        grid.makeGlobalGrid( 2, 0, 20,   TasGrid::type_basis, TasGrid::rule_fejer2 );  R  = getError( &f21sinsin, &grid, type_integration ); //cout << R.error << endl;
        if ( R.error < 1.E-14 ){ cout << setw(20) << "Pass" << endl; }else{ cout << setw(20) << "FAIL" << endl; pass = false; }
        writeRule( TasGrid::rule_fejer2 ); writeType( TasGrid::type_basis ); cout << setw(20) << "w-interpolation";
        grid.makeGlobalGrid( 2, 1, 40,   TasGrid::type_basis, TasGrid::rule_fejer2 );  R  = getError( &f21sinsin, &grid, type_nodal_interpolation, x ); //cout << R.error << endl;
        if ( R.error < 1.E-12 ){ cout << setw(20) << "Pass" << endl; }else{ cout << setw(20) << "FAIL" << endl; pass = false; }
        writeRule( TasGrid::rule_fejer2 ); writeType( TasGrid::type_basis ); cout << setw(20) << "interpolation";
        grid.makeGlobalGrid( 2, 1, 40,   TasGrid::type_basis, TasGrid::rule_fejer2 );  R  = getError( &f21sinsin, &grid, type_internal_interpolation ); //cout << R.error << endl;
        if ( R.error < 1.E-12 ){ cout << setw(20) << "Pass" << endl; }else{ cout << setw(20) << "FAIL" << endl; pass = false; }

        // gauss-chebyshev1 integrates against the weight 1 / sqrt( 1 - x^2 )
        writeRule( TasGrid::rule_gausschebyshev1 ); writeType( TasGrid::type_level ); cout << setw(20) << "integration";
        grid.makeGlobalGrid( 2, 0, 9,   TasGrid::type_level, TasGrid::rule_gausschebyshev1 );  R  = getError( &f21constGC1, &grid, type_integration ); //cout << R.error << endl;
        if ( R.error < 1.E-14 ){ cout << setw(20) << "Pass" << endl; }else{ cout << setw(20) << "FAIL" << endl; pass = false; }
        writeRule( TasGrid::rule_gausschebyshev1 ); writeType( TasGrid::type_level ); cout << setw(20) << "w-interpolation";
        grid.makeGlobalGrid( 2, 1, 9,   TasGrid::type_level, TasGrid::rule_gausschebyshev1 );  R  = getError( &f21constGC1, &grid, type_nodal_interpolation, x ); //cout << R.error << endl;
        if ( R.error < 1.E-5 ){ cout << setw(20) << "Pass" << endl; }else{ cout << setw(20) << "FAIL" << endl; pass = false; }
        writeRule( TasGrid::rule_gausschebyshev1 ); writeType( TasGrid::type_level ); cout << setw(20) << "interpolation";
        grid.makeGlobalGrid( 2, 1, 9,   TasGrid::type_level, TasGrid::rule_gausschebyshev1 );  R  = getError( &f21constGC1, &grid, type_internal_interpolation ); //cout << R.error << endl;
        if ( R.error < 1.E-5 ){ cout << setw(20) << "Pass" << endl; }else{ cout << setw(20) << "FAIL" << endl; pass = false; }
        writeRule( TasGrid::rule_gausschebyshev1 ); writeType( TasGrid::type_basis ); cout << setw(20) << "integration";
        grid.makeGlobalGrid( 2, 0, 20,   TasGrid::type_basis, TasGrid::rule_gausschebyshev1 );  R  = getError( &f21constGC1, &grid, type_integration ); //cout << R.error << endl;
        if ( R.error < 1.E-14 ){ cout << setw(20) << "Pass" << endl; }else{ cout << setw(20) << "FAIL" << endl; pass = false; }
        writeRule( TasGrid::rule_gausschebyshev1 ); writeType( TasGrid::type_basis ); cout << setw(20) << "w-interpolation";
        grid.makeGlobalGrid( 2, 1, 20,   TasGrid::type_basis, TasGrid::rule_gausschebyshev1 );  R  = getError( &f21constGC1, &grid, type_nodal_interpolation, x ); //cout << R.error << endl;
        if ( R.error < 1.E-5 ){ cout << setw(20) << "Pass" << endl; }else{ cout << setw(20) << "FAIL" << endl; pass = false; }
        writeRule( TasGrid::rule_gausschebyshev1 ); writeType( TasGrid::type_basis ); cout << setw(20) << "interpolation";
        grid.makeGlobalGrid( 2, 1, 20,   TasGrid::type_basis, TasGrid::rule_gausschebyshev1 );  R  = getError( &f21constGC1, &grid, type_internal_interpolation ); //cout << R.error << endl;
        if ( R.error < 1.E-5 ){ cout << setw(20) << "Pass" << endl; }else{ cout << setw(20) << "FAIL" << endl; pass = false; }

        // gauss-chebyshev2 integrates against the weight sqrt( 1 - x^2 )
        writeRule( TasGrid::rule_gausschebyshev2 ); writeType( TasGrid::type_level ); cout << setw(20) << "integration";
        grid.makeGlobalGrid( 2, 0, 9,   TasGrid::type_level, TasGrid::rule_gausschebyshev2 );  R  = getError( &f21constGC2, &grid, type_integration ); //cout << R.error << endl;
        if ( R.error < 1.E-14 ){ cout << setw(20) << "Pass" << endl; }else{ cout << setw(20) << "FAIL" << endl; pass = false; }
        writeRule( TasGrid::rule_gausschebyshev2 ); writeType( TasGrid::type_level ); cout << setw(20) << "w-interpolation";
        grid.makeGlobalGrid( 2, 1, 10,   TasGrid::type_level, TasGrid::rule_gausschebyshev2 );  R  = getError( &f21constGC2, &grid, type_nodal_interpolation, x ); //cout << R.error << endl;
        if ( R.error < 1.E-5 ){ cout << setw(20) << "Pass" << endl; }else{ cout << setw(20) << "FAIL" << endl; pass = false; }
        writeRule( TasGrid::rule_gausschebyshev2 ); writeType( TasGrid::type_level ); cout << setw(20) << "interpolation";
        grid.makeGlobalGrid( 2, 1, 10,   TasGrid::type_level, TasGrid::rule_gausschebyshev2 );  R  = getError( &f21constGC2, &grid, type_internal_interpolation ); //cout << R.error << endl;
        if ( R.error < 1.E-5 ){ cout << setw(20) << "Pass" << endl; }else{ cout << setw(20) << "FAIL" << endl; pass = false; }
        writeRule( TasGrid::rule_gausschebyshev2 ); writeType( TasGrid::type_basis ); cout << setw(20) << "integration";
        grid.makeGlobalGrid( 2, 0, 20,   TasGrid::type_basis, TasGrid::rule_gausschebyshev2 );  R  = getError( &f21constGC2, &grid, type_integration ); //cout << R.error << endl;
        if ( R.error < 1.E-14 ){ cout << setw(20) << "Pass" << endl; }else{ cout << setw(20) << "FAIL" << endl; pass = false; }
        writeRule( TasGrid::rule_gausschebyshev2 ); writeType( TasGrid::type_basis ); cout << setw(20) << "w-interpolation";
        grid.makeGlobalGrid( 2, 1, 20,   TasGrid::type_basis, TasGrid::rule_gausschebyshev2 );  R  = getError( &f21constGC2, &grid, type_nodal_interpolation, x ); //cout << R.error << endl;
        if ( R.error < 1.E-5 ){ cout << setw(20) << "Pass" << endl; }else{ cout << setw(20) << "FAIL" << endl; pass = false; }
        writeRule( TasGrid::rule_gausschebyshev2 ); writeType( TasGrid::type_basis ); cout << setw(20) << "interpolation";
        grid.makeGlobalGrid( 2, 1, 20,   TasGrid::type_basis, TasGrid::rule_gausschebyshev2 );  R  = getError( &f21constGC2, &grid, type_internal_interpolation ); //cout << R.error << endl;
        if ( R.error < 1.E-5 ){ cout << setw(20) << "Pass" << endl; }else{ cout << setw(20) << "FAIL" << endl; pass = false; }

        // gauss-gegenbauer integrates against the weight ( 1 - x^2 )^alpha, alpha = 0.3
        writeRule( TasGrid::rule_gaussgegenbauer ); writeType( TasGrid::type_level ); cout << setw(20) << "integration";
        grid.makeGlobalGrid( 2, 0, 9,   TasGrid::type_level, TasGrid::rule_gaussgegenbauer, 0, ab );  R  = getError( &f21constGG, &grid, type_integration );
        if ( R.error < 1.E-11 ){ cout << setw(20) << "Pass" << endl; }else{ cout << setw(20) << "FAIL" << endl; pass = false; }  //cout << R.error << endl;
        writeRule( TasGrid::rule_gaussgegenbauer ); writeType( TasGrid::type_level ); cout << setw(20) << "w-interpolation";
        grid.makeGlobalGrid( 2, 1, 10,   TasGrid::type_level, TasGrid::rule_gaussgegenbauer, 0, ab );  R  = getError( &f21constGG, &grid, type_nodal_interpolation, x );
        if ( R.error < 1.E-5 ){ cout << setw(20) << "Pass" << endl; }else{ cout << setw(20) << "FAIL" << endl; pass = false; }  //cout << R.error << endl;
        writeRule( TasGrid::rule_gaussgegenbauer ); writeType( TasGrid::type_level ); cout << setw(20) << "interpolation";
        grid.makeGlobalGrid( 2, 1, 10,   TasGrid::type_level, TasGrid::rule_gaussgegenbauer, 0, ab );  R  = getError( &f21constGG, &grid, type_internal_interpolation );
        if ( R.error < 1.E-5 ){ cout << setw(20) << "Pass" << endl; }else{ cout << setw(20) << "FAIL" << endl; pass = false; }  //cout << R.error << endl;
        writeRule( TasGrid::rule_gaussgegenbauer ); writeType( TasGrid::type_basis ); cout << setw(20) << "integration";
        grid.makeGlobalGrid( 2, 0, 20,   TasGrid::type_basis, TasGrid::rule_gaussgegenbauer, 0, ab );  R  = getError( &f21constGG, &grid, type_integration );
        if ( R.error < 1.E-11 ){ cout << setw(20) << "Pass" << endl; }else{ cout << setw(20) << "FAIL" << endl; pass = false; }  //cout << R.error << endl;
        writeRule( TasGrid::rule_gaussgegenbauer ); writeType( TasGrid::type_basis ); cout << setw(20) << "w-interpolation";
        grid.makeGlobalGrid( 2, 1, 20,   TasGrid::type_basis, TasGrid::rule_gaussgegenbauer, 0, ab );  R  = getError( &f21constGG, &grid, type_nodal_interpolation, x );
        if ( R.error < 1.E-5 ){ cout << setw(20) << "Pass" << endl; }else{ cout << setw(20) << "FAIL" << endl; pass = false; }  //cout << R.error << endl;
        writeRule( TasGrid::rule_gaussgegenbauer ); writeType( TasGrid::type_basis ); cout << setw(20) << "interpolation";
        grid.makeGlobalGrid( 2, 1, 20,   TasGrid::type_basis, TasGrid::rule_gaussgegenbauer, 0, ab );  R  = getError( &f21constGG, &grid, type_internal_interpolation );
        if ( R.error < 1.E-5 ){ cout << setw(20) << "Pass" << endl; }else{ cout << setw(20) << "FAIL" << endl; pass = false; }  //cout << R.error << endl;

        // gauss-jacobi integrates against the weight ( 1 - x )^alpha * ( 1 + x )^beta, alpha = 0.3, beta = 0.7
        writeRule( TasGrid::rule_gaussjacobi ); writeType( TasGrid::type_level ); cout << setw(20) << "integration";
        grid.makeGlobalGrid( 2, 0, 9,   TasGrid::type_level, TasGrid::rule_gaussjacobi, 0, ab );  R  = getError( &f21constGJ, &grid, type_integration );
        if ( R.error < 1.E-8 ){ cout << setw(20) << "Pass" << endl; }else{ cout << setw(20) << "FAIL" << endl; pass = false; }  //cout << R.error << endl;
        writeRule( TasGrid::rule_gaussjacobi ); writeType( TasGrid::type_level ); cout << setw(20) << "w-interpolation";
        grid.makeGlobalGrid( 2, 1, 10,   TasGrid::type_level, TasGrid::rule_gaussjacobi, 0, ab );  R  = getError( &f21constGJ, &grid, type_nodal_interpolation, x );
        if ( R.error < 1.E-5 ){ cout << setw(20) << "Pass" << endl; }else{ cout << setw(20) << "FAIL" << endl; pass = false; }  //cout << R.error << endl;
        writeRule( TasGrid::rule_gaussjacobi ); writeType( TasGrid::type_level ); cout << setw(20) << "interpolation";
        grid.makeGlobalGrid( 2, 1, 10,   TasGrid::type_level, TasGrid::rule_gaussjacobi, 0, ab );  R  = getError( &f21constGJ, &grid, type_internal_interpolation );
        if ( R.error < 1.E-5 ){ cout << setw(20) << "Pass" << endl; }else{ cout << setw(20) << "FAIL" << endl; pass = false; }  //cout << R.error << endl;
        writeRule( TasGrid::rule_gaussjacobi ); writeType( TasGrid::type_basis ); cout << setw(20) << "integration";
        grid.makeGlobalGrid( 2, 0, 20,   TasGrid::type_basis, TasGrid::rule_gaussjacobi, 0, ab );  R  = getError( &f21constGJ, &grid, type_integration );
        if ( R.error < 1.E-8 ){ cout << setw(20) << "Pass" << endl; }else{ cout << setw(20) << "FAIL" << endl; pass = false; }  //cout << R.error << endl;
        writeRule( TasGrid::rule_gaussjacobi ); writeType( TasGrid::type_basis ); cout << setw(20) << "w-interpolation";
        grid.makeGlobalGrid( 2, 1, 20,   TasGrid::type_basis, TasGrid::rule_gaussjacobi, 0, ab );  R  = getError( &f21constGJ, &grid, type_nodal_interpolation, x );
        if ( R.error < 1.E-5 ){ cout << setw(20) << "Pass" << endl; }else{ cout << setw(20) << "FAIL" << endl; pass = false; }  //cout << R.error << endl;
        writeRule( TasGrid::rule_gaussjacobi ); writeType( TasGrid::type_basis ); cout << setw(20) << "interpolation";
        grid.makeGlobalGrid( 2, 1, 20,   TasGrid::type_basis, TasGrid::rule_gaussjacobi, 0, ab );  R  = getError( &f21constGJ, &grid, type_internal_interpolation );
        if ( R.error < 1.E-5 ){ cout << setw(20) << "Pass" << endl; }else{ cout << setw(20) << "FAIL" << endl; pass = false; }  //cout << R.error << endl;

        // generalized-gauss-laguerre integrates against the weight ( x )^alpha * exp( -x ), alpha = 0.3
        writeRule( TasGrid::rule_gausslaguerre ); writeType( TasGrid::type_level ); cout << setw(20) << "integration";
        grid.makeGlobalGrid( 2, 0, 10,   TasGrid::type_level, TasGrid::rule_gausslaguerre, 0, ab );  R  = getError( &f21constGGL, &grid, type_integration );
        if ( R.error < 1.E-7 ){ cout << setw(20) << "Pass" << endl; }else{ cout << setw(20) << "FAIL" << endl; pass = false; }  //cout << R.error << endl;
        writeRule( TasGrid::rule_gausslaguerre ); writeType( TasGrid::type_basis ); cout << setw(20) << "integration";
        grid.makeGlobalGrid( 2, 0, 20,   TasGrid::type_basis, TasGrid::rule_gausslaguerre, 0, ab );  R  = getError( &f21constGGL, &grid, type_integration );
        if ( R.error < 1.E-8 ){ cout << setw(20) << "Pass" << endl; }else{ cout << setw(20) << "FAIL" << endl; pass = false; }  //cout << R.error << endl;

        // generalized-gauss-hermite integrates against the weight | x |^alpha * exp( -x^2 ), alpha = 0.3
        writeRule( TasGrid::rule_gausshermite ); writeType( TasGrid::type_level ); cout << setw(20) << "integration";
        grid.makeGlobalGrid( 2, 0, 10,   TasGrid::type_level, TasGrid::rule_gausshermite, 0, ab );  R  = getError( &f21constGH, &grid, type_integration );
        if ( R.error < 1.E-9 ){ cout << setw(20) << "Pass" << endl; }else{ cout << setw(20) << "FAIL" << endl; pass = false; }  //cout << R.error << endl;
        writeRule( TasGrid::rule_gausshermite ); writeType( TasGrid::type_basis ); cout << setw(20) << "integration";
        grid.makeGlobalGrid( 2, 0, 20,   TasGrid::type_basis, TasGrid::rule_gausshermite, 0, ab );  R  = getError( &f21constGH, &grid, type_integration );
        if ( R.error < 1.E-9 ){ cout << setw(20) << "Pass" << endl; }else{ cout << setw(20) << "FAIL" << endl; pass = false; }  //cout << R.error << endl;



        // Local Polynomial Tests
        const int M = 3;
        const int order[M] = { 1, 2, 3 };
        const double pwt[6*M] = { 1.E-04, 1.E-05, 1.E-04, 1.E-05, 1.E-04, 1.E-05,
                                  1.E-09, 1.E-09, 1.E-06, 1.E-07, 1.E-06, 1.E-07,
                                  1.E-09, 1.E-09, 1.E-07, 1.E-08, 1.E-07, 1.E-08 };

        x[0] = 1.0/3.0; x[1] = -1.0/3.0; // do not use a sample point
        for( int i=0; i<M; i++ ){
                writeRule( TasGrid::rule_pwpolynomial, order[i] ); cout << setw(15) << "-" << setw(20) << "integration";
                grid.makeLocalPolynomialGrid( 2, 0, 10, order[i], TasGrid::rule_pwpolynomial );  R  = getError( &f21nx2, &grid, type_integration );
                grid.makeLocalPolynomialGrid( 2, 0, 10, order[i], TasGrid::rule_pwpolynomial0 );  R2 = getError( &f21coscos, &grid, type_integration );
                if ( (R.error < pwt[6*i]) && (R2.error < pwt[6*i+1]) ){ cout << setw(20) << "Pass" << endl; }else{ cout << setw(20) << "FAIL" << endl; pass = false; }
                //cout << R.error << "   " << R2.error << "   " << pwt[6*i] << "  " << pwt[6*i+1] << endl;

                writeRule( TasGrid::rule_pwpolynomial, order[i] ); cout << setw(15) << "-" << setw(20) << "w-interpolation";
                grid.makeLocalPolynomialGrid( 2, 0, 10, order[i], TasGrid::rule_pwpolynomial );  R  = getError( &f21nx2, &grid, type_nodal_interpolation, x );
                grid.makeLocalPolynomialGrid( 2, 0, 10, order[i], TasGrid::rule_pwpolynomial0 ); R2 = getError( &f21coscos, &grid, type_nodal_interpolation, x );
                if ( (R.error < pwt[6*i+2]) && (R2.error < pwt[6*i+3]) ){ cout << setw(20) << "Pass" << endl; }else{ cout << setw(20) << "FAIL" << endl; pass = false; }
                //cout << R.error << "   " << R2.error << "   " << pwt[6*i+2] << "  " << pwt[6*i+3] << endl;

                writeRule( TasGrid::rule_pwpolynomial, order[i] ); cout << setw(15) << "-" << setw(20) << "interpolation";
                grid.makeLocalPolynomialGrid( 2, 1, 10, order[i], TasGrid::rule_pwpolynomial );   R  = getError( &f21nx2, &grid, type_internal_interpolation );
                grid.makeLocalPolynomialGrid( 2, 1, 10, order[i], TasGrid::rule_pwpolynomial0 );  R2 = getError( &f21coscos, &grid, type_internal_interpolation );
                if ( (R.error < pwt[6*i+4]) && (R2.error < pwt[6*i+5]) ){ cout << setw(20) << "Pass" << endl; }else{ cout << setw(20) << "FAIL" << endl; pass = false; }
                //cout << R.error << "   " << R2.error  << "   " << pwt[6*i+4] << "  " << pwt[6*i+5] << endl;
        }

        const double errs1[6] = { 1.5E-1, 1.E-2, 2.E-3, 1.E-3, 2.E-4, 1.E-4 };
        const double errs2[4] = { 1.E-2, 2.E-3, 5.E-4, 1.E-4 };
        const double errs3[5] = { 1.E-2, 1.E-3, 5.E-5, 3.E-6, 5.E-10 };

        grid.makeLocalPolynomialGrid( 2, 1, 5, 1, TasGrid::rule_pwpolynomial );
        writeRule( TasGrid::rule_pwpolynomial, 1 ); cout << setw(35) << "classical refinement interpolation";
        if ( testRefinement( &f21nx2, &grid, 1.E-4, errs1, 6 ) ){ cout << setw(20) << "Pass" << endl; }else{ cout << setw(20) << "FAIL" << endl; pass = false; }

        grid.makeLocalPolynomialGrid( 2, 1, 5, 2, TasGrid::rule_pwpolynomial );
        writeRule( TasGrid::rule_pwpolynomial, 2 ); cout << setw(35) << "classical refinement interpolation";
        if ( testRefinement( &f21nx2, &grid, 1.E-4, errs2, 4 ) ){cout << setw(20) << "Pass" << endl; }else{ cout << setw(20) << "FAIL" << endl; pass = false; }


        grid.makeWaveletGrid( 2, 1, 3, 1 );
		writeRule( TasGrid::rule_wavelet, 1 ); cout << setw(35) << "classical refinement interpolation";
		if ( testRefinement( &f21nx2, &grid, 1.E-4, errs1, 6 ) ){ cout << setw(20) << "Pass" << endl; }else{ cout << setw(20) << "FAIL" << endl; pass = false; }

        grid.makeWaveletGrid( 2, 1, 2, 3 );
		writeRule( TasGrid::rule_wavelet, 3 ); cout << setw(35) << "classical refinement interpolation";
		if ( testRefinement( &f21nx2, &grid, 1.E-4, errs2, 4 ) ){ cout << setw(20) << "Pass" << endl; }else{ cout << setw(20) << "FAIL" << endl; pass = false; }


        grid.makeGlobalGrid( 2, 1, 4, TasGrid::type_level, TasGrid::rule_clenshawcurtis );
        writeRule( TasGrid::rule_clenshawcurtis ); cout << setw(30) << "refinement interpolation";
        if ( testRefinement( &f21nx2, &grid, 0.0, errs3, 4 ) ){cout << setw(25) << "Pass" << endl; }else{ cout << setw(25) << "FAIL" << endl; pass = false; }

        if ( !pass ){
                cout << "FAIL FAIL FAIL FAIL FAIL FAIL FAIL FAIL" << endl;
                cout << "       Some Tests Have Failed" << endl;
                cout << "FAIL FAIL FAIL FAIL FAIL FAIL FAIL FAIL" << endl;
        }

        // Wavelet Tests
        const int L = 2;
        const int wave_order[L] = {1,3};
        const double wt[6*L] = {1.E-05, 1.E-04, 1.E-05, 1.E-04, 1.E-05, 1.E-04,
        		1.E-10, 1.E-09, 1.E-08, 1.E-07, 1.E-08, 1.E-07};

        for(int i = 0; i < L; i++){
        	writeRule( TasGrid::rule_wavelet, wave_order[i]);
        	cout << setw(15) << "-" << setw(20) << "integration";
        	grid.makeWaveletGrid( 2, 0, 9, wave_order[i] );
        	R  = getError( &f21nx2, &grid, type_integration );
        	R2 = getError( &f21cos, &grid, type_integration );
        	if ( (R.error < wt[6*i]) || (R2.error < wt[6*i+1]) ){
        		cout << setw(20) << "Pass" << endl;
        	}else{
        		cout << setw(20) << "FAIL" << endl;
        		pass = false;
        	}

        	writeRule( TasGrid::rule_wavelet, wave_order[i] );
        	cout << setw(15) << "-" << setw(20) << "w-interpolation";
        	R  = getError( &f21nx2, &grid, type_nodal_interpolation, x );
        	R2 = getError( &f21cos, &grid, type_nodal_interpolation, x );
        	if ( (R.error < wt[6*i+2]) || (R2.error < wt[6*i+3]) ){
        		cout << setw(20) << "Pass" << endl;
        	}else{
        		cout << setw(20) << "FAIL" << endl;
        		pass = false;
        	}
        	writeRule( TasGrid::rule_wavelet, wave_order[i] );
        	cout << setw(15) << "-" << setw(20) << "interpolation";
        	grid.makeWaveletGrid( 2, 1, 9, wave_order[i] );
        	R  = getError( &f21nx2, &grid, type_internal_interpolation );
        	grid.makeWaveletGrid( 2, 1, 9, wave_order[i] );
        	R2 = getError( &f21cos, &grid, type_internal_interpolation );
        	if ( (R.error < wt[6*i+4]) || (R2.error < wt[6*i+5]) ){
        		cout << setw(20) << "Pass" << endl;
        	}else{
        		cout << setw(20) << "FAIL" << endl;
        		pass = false;
        	}
        }
}

void ExternalTester::debugTest(){
        cout << " DEBUG TESTS " << endl;
        TasGrid::TasmanianSparseGrid grid;

        double ab[2] = { 0.3, 0.7 };

        for( int i=1; i<14; i++ ){
                grid.makeGlobalGrid( 2, 1, i, TasGrid::type_hyperbolic, TasGrid::rule_clenshawcurtis, 0 );
                TestResults R1 = getError( &f21nx2, &grid, type_integration );
                cout << setw(15) << R1.num_points << setw(15) << R1.error << endl;
        }
}

void ExternalTester::printInfo() const{
        cout << " List of Available Tests " << endl;
        cout << setw(6) << "Test" << setw(25) << "Point Type" << setw(15) << "Depth Type" << setw(25) << "Goal" << endl;
        cout << setw(6) << "0" << setw(25) << "all" << setw(15) << "all" << setw(25) << "basic functionality" << endl;
        cout << setw(6) << "1" << setw(25) << "local" << setw(15) << "-" << setw(25) << "refinement techniques" << endl;

        cout << endl << " w-interpolation means that only weight are computed by the library and no data is loaded into the SparseGrid class (i.e. getInterpolantWeights() is used)" << endl;
}

#endif
