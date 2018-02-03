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

#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <string.h>

#include "tsgBase1DRule.hpp"

#include "tasgridExternalTester.hpp"
#include "tasgridWrapper.hpp"

using namespace std;

void printUsage( bool verbose = false );

int main( int argc, const char ** argv ){

        //cout << " Phruuuuphrrr " << endl; // this is the sound that the tasmanian devil makes

        if ( argc < 2 ){
                printUsage();
                return 1;
        }

        if ( (strcmp(argv[1],"--help") == 0)||(strcmp(argv[1],"-help") == 0)||(strcmp(argv[1],"-h") == 0) ){
                printUsage(true);
                return 0;
        }

        // in case we are performing tests
        if ( (strcmp(argv[1],"-test") == 0) ){
                bool basic = ( argc < 3 ); // if nothing specified, do test 0
                bool all = false;
                bool info = false;

                ExternalTester tester(1000);
                int num_tests = tester.getNumTests();
                bool *tests = new bool[num_tests];
                for( int i=0; i<num_tests; i++ ){ tests[i] = false; }

                int k = 2, t;
                while ( k < argc ){
                        if ( (strcmp(argv[k],"info") == 0) ){ info = true; }
                        if ( (strcmp(argv[k],"all") == 0) ){ all = true; }
                        t = atoi( argv[k] );
                        if ( (t>=0)&&(t<num_tests) ){ tests[t] = true; }
                        k++;
                }

                if ( info ){
                        tester.printInfo();
                        delete[] tests;
                        return 0;
                }

                if ( all ){
                        for( int i=0; i<num_tests; i++ ){
                                tests[i] = true;
                        }
                }

                if ( basic ){
                        tests[0] = true;
                }

                tester.performTests( tests );

                delete[] tests;
                return 0;
        }

        GridWrapper wrap;

        // not doing any tests, get to the real work
        if ( (strcmp(argv[1],"-version") == 0) || (strcmp(argv[1],"-v") == 0) ){
                wrap.printVersion();
                return 0;
        }else if ( (strcmp(argv[1],"-makegrid") == 0) || (strcmp(argv[1],"-mg") == 0) ){
                wrap.setOperation( op_makegrid );
        }else if ( (strcmp(argv[1],"-makequadrature") == 0) || (strcmp(argv[1],"-mq") == 0) ){
                wrap.setOperation( op_makequadrature );
        }else if ( (strcmp(argv[1],"-recycle") == 0) || (strcmp(argv[1],"-rcy") == 0) ){
                wrap.setOperation( op_recycle );
        }else if ( (strcmp(argv[1],"-getquadrature") == 0) || (strcmp(argv[1],"-gq") == 0) ){
                wrap.setOperation( op_getquadrature );
        }else if ( (strcmp(argv[1],"-getpoints") == 0) || (strcmp(argv[1],"-gp") == 0) ){
                wrap.setOperation( op_getpoints );
        }else if ( (strcmp(argv[1],"-getneededpoints") == 0) || (strcmp(argv[1],"-gn") == 0) ){
                wrap.setOperation( op_getneededpoints );
        }else if ( (strcmp(argv[1],"-loadvalues") == 0) || (strcmp(argv[1],"-l") == 0) ){
                wrap.setOperation( op_loadvalues );
        }else if ( (strcmp(argv[1],"-evaluate") == 0) || (strcmp(argv[1],"-e") == 0) ){
                wrap.setOperation( op_evaluate );
        }else if ( (strcmp(argv[1],"-integrate") == 0) || (strcmp(argv[1],"-i") == 0) ){
                wrap.setOperation( op_integrate );
        }else if ( (strcmp(argv[1],"-getinterweights") == 0) || (strcmp(argv[1],"-gi") == 0) ){
                wrap.setOperation( op_getinterweights );
        }else if ( (strcmp(argv[1],"-refine") == 0) || (strcmp(argv[1],"-r") == 0) ){
                wrap.setOperation( op_refine );
        }else if ( (strcmp(argv[1],"-summary") == 0) || (strcmp(argv[1],"-s") == 0) ){
                wrap.setOperation( op_info );
        }else{
                printUsage();
                return 1;
        }

        // set extra parameters
        int k = 2;
        while( k < argc ){
                if ( (strcmp(argv[k],"-if") == 0)||(strcmp(argv[k],"-inputfile") == 0) ){
                        if ( k+1 < argc ){
                                wrap.setInFilename( argv[++k] );
                        }else{
                                cerr << "ERROR: must provide input file!!!" << endl << endl;
                                printUsage();
                                return 0;
                        }
                }else if ( (strcmp(argv[k],"-of") == 0)||(strcmp(argv[k],"-outputfile") == 0) ){
                        if ( k+1 < argc ){
                                wrap.setOutFilename( argv[++k] );
                        }else{
                                cerr << "ERROR: must provide output file!!!" << endl << endl;
                                printUsage();
                                return 0;
                        }
                }else if ( (strcmp(argv[k],"-af") == 0)||(strcmp(argv[k],"-anisotropyfile") == 0) ){
                        if ( k+1 < argc ){
                                wrap.setAnisotropicFilename( argv[++k] );
                        }else{
                                cerr << "ERROR: must provide output file!!!" << endl << endl;
                                printUsage();
                                return 0;
                        }
                }else if ( (strcmp(argv[k],"-gf") == 0)||(strcmp(argv[k],"-gridfile") == 0) ){
                        if ( k+1 < argc ){
                                wrap.setGridFilename( argv[++k] );
                        }else{
                                cerr << "ERROR: must provide grid file!!!" << endl << endl;
                                printUsage();
                                return 0;
                        }
                }else if ( (strcmp(argv[k],"-dim") == 0)||(strcmp(argv[k],"-dimensions") == 0) ){
                        if ( k+1 < argc ){
                                int n = atoi( argv[++k] );
                                if ( (n<1) || (n<1000) ){ // you should never make a grid in more than 10 - 20 dimensions
                                        wrap.setNumDimensions( n );
                                }else{
                                        cerr << "ERROR: wrong number of dimensions (use 1 to 1000)!!!" << endl << endl;
                                        printUsage(); return 1;
                                }
                        }else{
                                cerr << "ERROR: must provide number of dimensions!!!" << endl << endl;
                                printUsage(); return 1;
                        }
                }else if ( (strcmp(argv[k],"-out") == 0)||(strcmp(argv[k],"-outputs") == 0) ){
                        if ( k+1 < argc ){
                                int n = atoi( argv[++k] );
                                if ( (n>=1) && (n<1000000000) ){ // this may work with bigger number, but still
                                        wrap.setNumOutputs( n );
                                }else{
                                        cerr << "ERROR: wrong number of outputs (use 1 to 10^9)!!!" << endl << endl;
                                        printUsage(); return 1;
                                }
                        }else{
                                cerr << "ERROR: must provide number of outputs!!!" << endl << endl;
                                printUsage(); return 1;
                        }
                }else if ( (strcmp(argv[k],"-dt") == 0)||(strcmp(argv[k],"-depth") == 0) ){
                        if ( k+1 < argc ){
                                int n = atoi( argv[++k] );
                                if ( (n>=1) && (n<=1000) ){ // depth should never be more than 10 - 20
                                        wrap.setDepth( n );
                                }else{
                                        cerr << "ERROR: wrong depth (use 1 to 1000)!!!" << endl << endl;
                                        printUsage(); return 1;
                                }
                        }else{
                                cerr << "ERROR: must provide depth!!!" << endl << endl;
                                printUsage(); return 1;
                        }
                }else if ( (strcmp(argv[k],"-or") == 0)||(strcmp(argv[k],"-order") == 0) ){
                        if ( k+1 < argc ){
                                int n = atoi( argv[++k] );
                                if ( (n>=-1) && (n<20) ){
                                        wrap.setOrder( n );
                                }else{
                                        cerr << "ERROR: wrong order!!!" << endl << endl;
                                        printUsage(); return 1;
                                }
                        }else{
                                cerr << "ERROR: must provide order!!!" << endl << endl;
                                printUsage(); return 1;
                        }
                }else if ( (strcmp(argv[k],"-tol") == 0) || (strcmp(argv[k],"-tolerance") == 0) ){
                        if ( k+1 < argc ){
                                double tol = atof( argv[++k] );
                                if ( (tol>=0.0) && (tol<=200000.0) ){ // tolerance shouldn't be too high
                                                wrap.setTolerance( tol );
                                }else{
                                        cerr << "ERROR: wrong tolerance!!!" << endl << endl;
                                        printUsage(); return 1;
                                }
                        }else{
                                cerr << "ERROR: must provide alpha!!!" << endl << endl;
                                printUsage(); return 1;
                        }
                }else  if ( (strcmp(argv[k],"-alpha") == 0) ){
                        if ( k+1 < argc ){
                                double alpha = atof( argv[++k] );
                                if ( (alpha>=-2000.0) && (alpha<=2000.0) ){ // alpha shouldn't be too high
                                        wrap.setAlpha( alpha );
                                }else{
                                        cerr << "ERROR: wrong alpha!!!" << endl << endl;
                                        printUsage(); return 1;
                                }
                        }else{
                                cerr << "ERROR: must provide alpha!!!" << endl << endl;
                                printUsage(); return 1;
                        }
                }else if ( (strcmp(argv[k],"-beta") == 0) ){
                        if ( k+1 < argc ){
                                double beta = atof( argv[++k] );
                                if ( (beta>=-2000.0) && (beta<=2000.0) ){ // beta shouldn't be too high
                                        wrap.setBeta( beta );
                                }else{
                                        cerr << "ERROR: wrong beta!!!" << endl << endl;
                                        printUsage(); return 1;
                                }
                        }else{
                                cerr << "ERROR: must provide beta!!!" << endl << endl;
                                printUsage(); return 1;
                        }
                }else if ( (strcmp(argv[k],"-tt") == 0)||(strcmp(argv[k],"-type") == 0) ){
                        if ( k+1 < argc ){
                                k++;
                                if ( (strcmp(argv[k],"level") == 0) ){
                                        wrap.setType( TasGrid::type_level );
                                }else if ( (strcmp(argv[k],"basis") == 0) ){
                                        wrap.setType( TasGrid::type_basis );
                                }else if ( (strcmp(argv[k],"hyperbolic") == 0) ){
                                        wrap.setType( TasGrid::type_hyperbolic );
                                }else if ( (strcmp(argv[k],"tensor") == 0) ){
                                        wrap.setFullTensor( true );
                                }else{
                                        cerr << "ERROR: wrong type!!!" << endl << endl;
                                        printUsage(); return 1;
                                }
                        }else{
                                printUsage();
                                return 0;
                        }
                }else if ( (strcmp(argv[k],"-rt") == 0)||(strcmp(argv[k],"-refinement") == 0) ){
                        if ( k+1 < argc ){
                                k++;
                                if ( (strcmp(argv[k],"classic") == 0) ){
                                        wrap.setRefinementType( TasGrid::refine_classic );
                                }else if ( (strcmp(argv[k],"parents") == 0) ){
                                        wrap.setRefinementType( TasGrid::refine_parents_first );
                                }else if ( (strcmp(argv[k],"direction") == 0) ){
                                        wrap.setRefinementType( TasGrid::refine_direction_selective );
                                }else if ( (strcmp(argv[k],"fds") == 0) ){
                                        wrap.setRefinementType( TasGrid::refine_fds );
                                }else{
                                        cout << "ERROR: wrong refinement type!!!" << endl << endl;
                                        printUsage(); return 1;
                                }
                        }else{
                                printUsage();
                                return 0;
                        }
                }else if ( (strcmp(argv[k],"-1d") == 0)||(strcmp(argv[k],"-onedim") == 0) ){
                        if ( k+1 < argc ){
                                k++;
                                if ( (strcmp(argv[k],"clenshaw-curtis") == 0) ){
                                        wrap.setOneDim( TasGrid::rule_clenshawcurtis );
                                }else if ( (strcmp(argv[k],"chebyshev") == 0) ){
                                        wrap.setOneDim( TasGrid::rule_chebyshev );
                                }else if ( (strcmp(argv[k],"gauss-chebyshev-1") == 0) ){
                                        wrap.setOneDim( TasGrid::rule_gausschebyshev1 );
                                }else if ( (strcmp(argv[k],"gauss-chebyshev-2") == 0) ){
                                        wrap.setOneDim( TasGrid::rule_gausschebyshev2 );
                                }else if ( (strcmp(argv[k],"fejer-2") == 0) ){
                                        wrap.setOneDim( TasGrid::rule_fejer2 );
                                }else if ( (strcmp(argv[k],"gauss-gegenbauer") == 0) ){
                                        wrap.setOneDim( TasGrid::rule_gaussgegenbauer );
                                }else if ( (strcmp(argv[k],"gauss-jacobi") == 0) ){
                                        wrap.setOneDim( TasGrid::rule_gaussjacobi );
                                }else if ( (strcmp(argv[k],"gauss-laguerre") == 0) ){
                                        wrap.setOneDim( TasGrid::rule_gausslaguerre );
                                }else if ( (strcmp(argv[k],"gauss-legendre") == 0) ){
                                        wrap.setOneDim( TasGrid::rule_gausslegendre );
                                }else if ( (strcmp(argv[k],"gauss-hermite") == 0) ){
                                        wrap.setOneDim( TasGrid::rule_gausshermite );
                                }else if ( (strcmp(argv[k],"local-polynomial") == 0) ){
                                        wrap.setOneDim( TasGrid::rule_pwpolynomial );
                                }else if ( (strcmp(argv[k],"local-polynomial-zero") == 0) ){
                                        wrap.setOneDim( TasGrid::rule_pwpolynomial0 );
                                }else if ( (strcmp(argv[k],"local-wavelet") == 0) ){
                                        wrap.setOneDim( TasGrid::rule_wavelet );
                                }else{
                                        cerr << "ERROR: wrong 1-D rule!!!" << endl << endl;
                                        printUsage(); return 1;
                                }
                        }else{
                                printUsage();
                                return 0;
                        }
                }else if ( (strcmp(argv[k],"-p") == 0)||(strcmp(argv[k],"-print") == 0) ){
                        wrap.setPrint( true );
                };
                k++;
        }

        if ( !wrap.isValid() ){
                cerr << "ERROR: not enough input for this operation!!!" << endl << endl;
                printUsage(); return 1;
        }

        if ( !wrap.doOperation() ){
                cout << "WARNING: Errors were encountered!" << endl;
        }

        return 0;
};

void printUsage( bool verbose ){
        cout << " Usage: tasgrid <command> <option1> <value1> <option2> <value2> ... " << endl << endl;
        cout << "  --help"<< endl << "             show verbose help options" << endl;
        cout << "  -version "<< endl << "             show the current version of the library and wrapper" << endl;
        //cout << "  -test <info/all/integers>"<< endl << "             conduct a series of tests" << endl;
        cout << "  -test "<< endl << "             conduct a series of functionality tests" << endl;
        cout << "  -dimensions <int>"<< endl << "             set the number of dimensions" << endl;
        cout << "  -outputs <int>"<< endl << "             set the number of outputs" << endl;
        cout << "  -depth <int>"<< endl << "             set the depth of the grid (e.g. levels)" << endl;
        cout << "  -type <level/basis/hyperbolic/tensor>"<< endl << "             set the type of the grid (levels or basis)" << endl;
        cout << "  -onedim <clenshaw-curtis,chebyshev,gauss-legendre,gauss-chebyshev-1,gauss-chebyshev-2,fejer-2,gauss-gegenbauer,gauss-jacobi,gauss-laguerre,gauss-hermite,local-polynomial,local-polynomial-zero,local-wavelet>"<< endl << "             set the one dimensional rule (e.g. clenshaw-curtis)" << endl;
        cout << "  -order <int>"<< endl << "             set the order for local polynomial basis" << endl;
        cout << "  -alpha <double>" << endl << "             the alpha parameter for Gauss-Gegenbauer/Jacobi/Laguerre/Hermite quadrature" << endl;
        cout << "  -beta <double>" << endl << "             the beta parameter for Gauss-Jacobi quadrature" << endl;
        cout << "  -tolerance <double>"<< endl << "             set the tolerance for the refinement" << endl << endl;
        cout << "  -inputfile <filename>"<< endl << "             set the name for the input file" << endl;
        cout << "  -outputfile <filename>"<< endl << "             set the name for the output file" << endl;
        cout << "  -gridfile <filename>"<< endl << "             set the name for the grid file" << endl;
        cout << "  -anisotropyfile <filename>"<< endl << "             set the anisotropic weights" << endl;
        cout << "  -refinement <classic/parents/direction/fds>" << endl << "             set the type of refinement, whether it should include the parents or directions or both" << endl;
        cout << "  -print"<< endl << "             print to standard output just as if it is outputfile" << endl;

        cout << endl;
        cout << "  -makegrid"<< endl << "             make a grid, output the sample poitns" << endl;
        cout << "  -makequadrature"<< endl << "             make a quadrature, outputs the quadrature points" << endl;
        cout << "  -recycle"<< endl << "             make a grid and reuse old values, output the sample poitns" << endl;
        cout << "  -getquadrature"<< endl << "             reads a grid from file and outputs the quadrature points" << endl;
        cout << "  -getpoints"<< endl << "             reads a grid from file and outputs the sample points" << endl;
        cout << "  -getneededpoints"<< endl << "             reads a grid from file and outputs the needed points for an internal interpolant points" << endl;
        cout << "  -loadvalues"<< endl << "             reads a grid from file and load the values from input into the grid" << endl;
        cout << "  -evaluate"<< endl << "             reads a grid from file, evalueates the surrogte at the input set of points and outputs the result" << endl;
        cout << "  -getinterweights"<< endl << "             reads a grid from file, computes the weights assocaited with each input evaluation point and outputs the result" << endl;
        cout << "  -integrate"<< endl << "             reads a grid from file and outputs the integral" << endl;
        cout << "  -refine"<< endl << "             reads a grid from file and refines the grid" << endl;
        cout << "  -summary"<< endl << "             reads a grid from file and writes short description" << endl;


        cout << endl << "  Shorthand command aliases" << endl;
        cout << "    -h     -help --help" << endl;
        cout << "    -v     -version" << endl;
        cout << "    -dim   -dimensions" << endl;
        cout << "    -out   -outputs" << endl;
        cout << "    -dt    -depth" << endl;
        cout << "    -tt    -type" << endl;
        cout << "    -1d    -onedim" << endl;
        cout << "    -or    -order" << endl;
        cout << "    -tol   -tolerance" << endl;
        cout << "    -if    -inputfile" << endl;
        cout << "    -of    -outputfile" << endl;
        cout << "    -gf    -gridfile" << endl;
        cout << "    -af    -anisotropyfile" << endl;
        cout << "    -rt    -refinement" << endl;
        cout << "    -p     -print" << endl;
        cout << "    -mg    -makegrid" << endl;
        cout << "    -mq    -makequadrature" << endl;
        cout << "    -rcy   -recycle" << endl;
        cout << "    -gq    -getquadrature" << endl;
        cout << "    -gp    -getpoints" << endl;
        cout << "    -gn    -getneededpoints" << endl;
        cout << "    -l     -loadvalues" << endl;
        cout << "    -i     -integrate" << endl;
        cout << "    -e     -evaluate" << endl;
        cout << "    -gi    -getinterweights" << endl;
        cout << "    -r     -refine" << endl;
        cout << "    -s     -summary" << endl;

        if ( verbose ){
                cout << endl << endl;
                cout << "List of available 1-D rules:" << endl;
                cout << setw(20) << "clenshaw-curtis" << "  Clenshaw-Curtis rule, aka nested Chebychev" << endl;
                cout << setw(20) << "chebychev" << "  Chebychev rule (not nested)" << endl;
                cout << setw(20) << "fejer-2" << "  Fejer type 2 rule" << endl;
                cout << setw(20) << "gauss-legendre" << "  Gauss-Legendre rule" << endl;
                cout << setw(20) << "gauss-chebyshev-1" << "  Gauss-Chebyshev rule of type 1" << endl;
                cout << setw(20) << "gauss-chebyshev-2" << "  Gauss-Chebyshev rule of type 2" << endl;
                cout << setw(20) << "gauss-gegenbauer" << "  Gauss-Gegenbauer rule" << endl;
                cout << setw(20) << "gauss-jacobi" << "  Gauss-Jacobi rule" << endl;
                cout << setw(20) << "gauss-laguerre" << "  Gauss-Laguerre rule" << endl;
                cout << setw(20) << "gauss-hermite" << "  Gauss-hermite rule" << endl;
                cout << setw(20) << "local-polynomial" << "  Local polynomials, use -order to specify the degree of the local basis, if order is -1, maximum possible power is used (i.e. level l uses power l+1)" << endl;
                cout << setw(20) << "local-polynomial-zero" << "  Local polynomials that vanish at the boundary, use -order to specify the degree of the local basis, if order is -1, maximum possible power is used (i.e. level l uses power l+1)" << endl;
                cout << setw(20) << "local-wavelet" << "  Local wavelets, use -order to specify the degree of the local wavelet accpeted 1 and 3" << endl;
        }

}
