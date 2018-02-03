/*
 * Copyright (c) 2005, Andrew Fernandes (andrew@fernandes.org);
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 
 * - Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 * 
 * - Redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution.
 * 
 * - Neither the name of the North Carolina State University nor the
 * names of its contributors may be used to endorse or promote products
 * derived from this software without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 */
# include "gaussqr.h"

# include <algorithm>
using std::min;
using std::max;

# include <iostream>
using std::cout;
using std::endl;

# include <iomanip>

# include <cmath>
# include <iomanip>
using std::fabs;

#include <float.h>

using namespace std;

int main ( );
void test01 ( );
void test02 ( );
void test03 ( );

//****************************************************************************80

static real_t pow_ru ( real_t x , unsigned n )

//****************************************************************************80
{
  real_t y = 1.0;
    
  while ( n > 0 )
  {
    if ( n & 1 ) y *= x;
    if ( n >>= 1 ) x *= x;
  }
    
  return ( y );
}
//****************************************************************************80

static real_t p0 ( const real_t &x ) 

//****************************************************************************80
{ 
  return( (0.74e2 + (0.6e1 + (-0.92e2 + (0.75e2 + 0.23e2 * pow_ru(x,3)) * pow_ru(x,4)) * x) * x) * x * x ); } // degree 11

//****************************************************************************80

static real_t p1 ( const real_t &x ) 

//****************************************************************************80
{ 
  return( (-0.8e1 + (-0.61e2 + (0.10e2 + (-0.23e2 + 0.98e2 * pow_ru(x,8)) * pow_ru(x,3)) * x) * pow_ru(x,3)) * pow_ru(x,6) ); } // degree 21

//****************************************************************************80

static real_t p2 ( const real_t &x ) 

//****************************************************************************80

{ 
  return( (0.68e2 + (0.91e2 + (-0.81e2 + (0.40e2 - 0.47e2 * pow_ru(x,4)) * pow_ru(x,7)) * x) * pow_ru(x,4)) * pow_ru(x,3) ); } // degree 19
//****************************************************************************80

static real_t p3 ( const real_t &x ) 

//****************************************************************************80

{
  return( (-0.15e2 + (-0.27e2 + (0.30e2 + (0.16e2 - 0.28e2 * x) * x * x) * pow_ru(x,5)) * pow_ru(x,7)) * pow_ru(x,5) ); } // degree 20
//****************************************************************************80

static real_t p4 ( const real_t &x ) 

//****************************************************************************80

{ 
  return( (-0.91e2 + (0.92e2 + (0.43e2 + (-0.90e2 + 0.47e2 * pow_ru(x,3)) * x * x) * pow_ru(x,3)) * x) * pow_ru(x,9) ); } // degree 18

//****************************************************************************80

real_t absolute_error( const integer_t n , const real_t *estimated , const real_t *actual )

//****************************************************************************80

{
    if ( n < 1 || estimated == 0 || actual == 0 )
        return(FLT_MAX);
    
    real_t err = 0.0;
    for ( integer_t i = 0; i < n; i++ ) {
        if ( actual[i] == 0.0 ) return(FLT_MAX);
        err = max( err , std::fabs( (estimated[i]-actual[i])/actual[i] ) );
    }
    
    return(err);
}
//****************************************************************************80

static real_t abs_err( const real_t &approx , const real_t &exact )

//****************************************************************************80
{
    return ( fabs((approx-exact)/exact) );
}

//****************************************************************************80

gaussqr_result test_distribution ( distribution_type distribution, 
  const real_t left, const real_t right, const domain_type domain, 
  integer_t n_rcoefs, const real_t *p ) 

//****************************************************************************80
{
  gaussqr_result gqr = gaussqr_success;
    
  const integer_t n = 1023;
  real_t a0[n];
  real_t a1[n];
  real_t b0[n];
  real_t b1[n];
  real_t dx[n];
  real_t z[n], q[n], x[n], f[n], w[n];
  real_t err = FLT_MAX;
//
//  Get the Fejer2 abscissas.
//
  cout << "  Get Fejer2 rule of order " << n << ".\n";

  gqr = fejer2_abscissae ( n, z, q );
  if ( gqr != gaussqr_success ) 
  {
    return gqr;
  }

  cout << "  Map Fejer2 rule from [-1,+1] to this domain.\n";
    
  gqr = map_fejer2_domain ( left, right, domain, n, z, x, dx );
  if ( gqr != gaussqr_success ) 
  {
    return gqr;
  }

  cout << "  Evaluate PDF.\n";

  for ( integer_t i = 0; i < n; i++ )
  {
    gqr = standard_distribution_pdf(distribution,x[i],&f[i],p);
    if ( gqr != gaussqr_success ) 
    {
      return gqr;
    }
    w[i] = f[i] * q[i] * dx[i];
  }
//    
//  Calculate the recursion coefficients A0 and B0 from the quadrature scheme
//
  cout << "  Use Lanczos to calculate A0 and B0 from quadrature scheme.\n";

  gqr = lanczos_tridiagonalize(n,x,w,a0,b0);
  if ( gqr != gaussqr_success ) 
  {
    return gqr;
  }
//    
// calculate the recursion coefficients A1 and B1 from the known recurrences.
//
  cout << "  Look up recursion coefficients A1 and B1.\n";

  gqr = standard_distribution_rcoeffs ( distribution, n, a1, b1, p );
  if ( gqr != gaussqr_success ) 
  {
    return gqr;
  }
//    
//  Calculate abscissa and weights
//
  cout << "  Get QR\n";

  gqr = gaussqr_from_rcoeffs(n_rcoefs,a0,b0,x,w);
  if ( gqr != gaussqr_success ) 
  {
    return gqr;
  }
//        
//  Compare recurrence coefficients, theoretical vs derived
//
  cout << "  Compare.\n";

  cout << "[i]\ta0\ta1\tb0\tb1" << endl << endl;
  for ( integer_t i = 0; i < min(n,n_rcoefs); i++ ) 
  {
        cout << '[' << i << ']' 
             << '\t' << a0[i] 
             << '\t' << a1[i] 
             << '\t' << b0[i] 
             << '\t' << b1[i] << endl;
  }
  cout << endl;   

  err = absolute_error(n_rcoefs,b0,b1);
  if ( gqr != gaussqr_success ) 
  {
    return gqr;
  }

    cout << "max(b_err) => " << err*100.0 << '%' << endl;
    if ( err > 0.01 ) {
        cout << "WARNING: large error detected; check the first few" << endl;
        cout << "         entries for convergence..." << endl;
    }
    cout << endl;
//    
// print abscissa and weights
//
  cout << "[i]\tabscissa\tweight" << endl;
  cout << endl;
  for ( integer_t i = 0; i < min(n,n_rcoefs); i++ ) 
  {
    cout << '[' << std::setw(2) << i << ']' 
         << "  " << std::setw(24) << std::setprecision(16) << x[i] 
         << "  " << std::setw(24) << std::setprecision(16) << w[i] << endl;
  }
  cout << endl;

  return gqr;
}
//****************************************************************************80

int main ( int argc , char *argv[] )

//****************************************************************************80
{
  gaussqr_result gqr = gaussqr_success;
  real_t parameter[2] = { 0.0 , 0.0 };

  cout << "\n";
  cout << "GAUSSQR_PRB\n";
  cout << "  C++ version.\n";
  cout << "  Test the GAUSSQR library.\n";

  test01 ( );
  test02 ( );
  test03 ( );

    cout << "============= Gamma Coefficient Tests" << endl << endl;
    
    parameter[0] = 1.0;
    parameter[1] = 1.0;
    gqr = test_distribution(distribution_gamma,0,FLT_MAX,domain_right_infinite,16,parameter);
    cout << endl << endl;
    if ( gqr != gaussqr_success ) goto done;
    
    parameter[0] = 2.0;
    parameter[1] = 2.0;
    gqr = test_distribution(distribution_gamma,0,FLT_MAX,domain_right_infinite,16,parameter);
    cout << endl << endl;
    if ( gqr != gaussqr_success ) goto done;

    cout << "============= Log-Normal Coefficient Tests" << endl << endl;

    parameter[0] = 0.0;
    parameter[1] = 1.0;
    gqr = test_distribution(distribution_log_normal,0,FLT_MAX,domain_right_infinite,1,parameter);
    cout << endl << endl;
    if ( gqr != gaussqr_success ) goto done;

  if ( false )
  {
    parameter[0] = 0.0;
    parameter[1] = 1.0;
    gqr = test_distribution(distribution_log_normal,0,FLT_MAX,domain_right_infinite,2,parameter);
    cout << endl << endl;
    if ( gqr != gaussqr_success ) goto done;
  }

    parameter[0] = 0.0;
    parameter[1] = 1.0;
    gqr = test_distribution(distribution_log_normal,0,FLT_MAX,domain_right_infinite,3,parameter);
    cout << endl << endl;
    if ( gqr != gaussqr_success ) goto done;

    parameter[0] = 0.0;
    parameter[1] = 0.5;
    gqr = test_distribution(distribution_log_normal,0,FLT_MAX,domain_right_infinite,3,parameter);
    cout << endl << endl;
    if ( gqr != gaussqr_success ) goto done;

    parameter[0] = 0.0;
    parameter[1] = 1.0;
    gqr = test_distribution(distribution_log_normal,0,FLT_MAX,domain_right_infinite,4,parameter);
    cout << endl << endl;
    if ( gqr != gaussqr_success ) goto done;

    parameter[0] = 0.0;
    parameter[1] = 1.0;
    gqr = test_distribution(distribution_log_normal,0,FLT_MAX,domain_right_infinite,5,parameter);
    cout << endl << endl;
    if ( gqr != gaussqr_success ) goto done;

    parameter[0] = 0.0;
    parameter[1] = 1.0;
    gqr = test_distribution(distribution_log_normal,0,FLT_MAX,domain_right_infinite,6,parameter);
    cout << endl << endl;
    if ( gqr != gaussqr_success ) goto done;

    parameter[0] = 0.0;
    parameter[1] = 1.0;
    gqr = test_distribution(distribution_log_normal,0,FLT_MAX,domain_right_infinite,7,parameter);
    cout << endl << endl;
    if ( gqr != gaussqr_success ) goto done;

    parameter[0] = 0.0;
    parameter[1] = 1.0;
    gqr = test_distribution(distribution_log_normal,0,FLT_MAX,domain_right_infinite,8,parameter);
    cout << endl << endl;
    if ( gqr != gaussqr_success ) goto done;

    parameter[0] = 0.0;
    parameter[1] = 1.0;
    gqr = test_distribution(distribution_log_normal,0,FLT_MAX,domain_right_infinite,9,parameter);
    cout << endl << endl;
    if ( gqr != gaussqr_success ) goto done;

    cout << "============= Student's T Coefficient Tests" << endl << endl;
    
    parameter[0] = 18.0;
    gqr = test_distribution(distribution_students_t,-FLT_MAX,FLT_MAX,domain_infinite,9,parameter);
    cout << endl << endl;
    if ( gqr != gaussqr_success ) goto done;
    
    parameter[0] = 25.0;
    gqr = test_distribution(distribution_students_t,-FLT_MAX,FLT_MAX,domain_infinite,13,parameter);
    cout << endl << endl;
    if ( gqr != gaussqr_success ) goto done;

    cout << "============= Inverse-Gamma Coefficient Tests" << endl << endl;
    
    parameter[0] = 12.0;
    parameter[1] = 1.0;
    gqr = test_distribution(distribution_inverse_gamma,0,FLT_MAX,domain_right_infinite,6,parameter);
    cout << endl << endl;
    if ( gqr != gaussqr_success ) goto done;
    
    parameter[0] = 25.0;
    parameter[1] = 2.0;
    gqr = test_distribution(distribution_inverse_gamma,0,FLT_MAX,domain_right_infinite,12,parameter);
    cout << endl << endl;
    if ( gqr != gaussqr_success ) goto done;
    
    cout << "============= Beta Coefficient Tests" << endl << endl;
    
    parameter[0] = 1.0;
    parameter[1] = 1.0;
    gqr = test_distribution(distribution_beta,0,1,domain_finite,16,parameter);
    cout << endl << endl;
    if ( gqr != gaussqr_success ) goto done;
    
    parameter[0] = 1.0;
    parameter[1] = 2.25;
    gqr = test_distribution(distribution_beta,0,1,domain_finite,16,parameter);
    cout << endl << endl;
    if ( gqr != gaussqr_success ) goto done;
    
    parameter[0] = 2.25;
    parameter[1] = 1.0;
    gqr = test_distribution(distribution_beta,0,1,domain_finite,16,parameter);
    cout << endl << endl;
    if ( gqr != gaussqr_success ) goto done;
    
    parameter[0] = 1.5;
    parameter[1] = 3.5;
    gqr = test_distribution(distribution_beta,0,1,domain_finite,16,parameter);
    cout << endl << endl;
    if ( gqr != gaussqr_success ) goto done;
    
    parameter[0] = 2.0;
    parameter[1] = 2.0;
    gqr = test_distribution(distribution_beta,0,1,domain_finite,16,parameter);
    cout << endl << endl;
    if ( gqr != gaussqr_success ) goto done;
    
    cout << "============= Fisher's F Coefficient Tests" << endl << endl;
    
    parameter[0] = 37.0;
    parameter[1] = 121.0;
    gqr = test_distribution(distribution_fishers_f,0,FLT_MAX,domain_right_infinite,16,parameter);
    cout << endl << endl;
    if ( gqr != gaussqr_success ) goto done;
    
    parameter[0] = 25.0;
    parameter[1] = 32.0;
    gqr = test_distribution(distribution_fishers_f,0,FLT_MAX,domain_right_infinite,8,parameter);
    cout << endl << endl;
    if ( gqr != gaussqr_success ) goto done;
    
done:
    if ( gqr != gaussqr_success ) {
        cout << "FAILED: code " << static_cast<int>(gqr) << endl;
    }
    return static_cast<int>(gqr);
}
//****************************************************************************80

void test01 ( )

//****************************************************************************80
//
//  Purpose:
//
//    TEST01 tests FEJER2_ABSCISSAE.
//
//  Modified:
//
//    29 April 2013
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  integer_t n;
  real_t *q;
  gaussqr_result result;
  real_t *z;

  cout << "\n";
  cout << "TEST01\n";
  cout << "  FEJER2_ABSCISSAE computes points and weights for a\n";
  cout << "  Fejer Type 2 quadrature rule.\n";

  for ( n = 1; n <= 10; n++ )
  {
    cout << "\n";
    cout << "   I          X[i]                      W[i]\n";
    cout << "\n";
    z = new real_t[n];
    q = new real_t[n];

    result = fejer2_abscissae ( n, z, q );

    for ( i = 0; i < n; i++ )
    {
      cout << "  " << std::setw(2) << i
           << "  " << std::setw(24) << std::setprecision(16) << z[i]
           << "  " << std::setw(24) << std::setprecision(16) << q[i] << "\n";
    }

    delete [] z;
    delete [] q;
  }
  return;
}
//****************************************************************************80

void test02 ( ) 

//****************************************************************************80
//
//  Purpose:
//
//    TEST02 tests FEJER2_ABSCISSAE.
//
//  Modified:
//
//    16 May 2013
//
{
  const integer_t np = 5;

  gaussqr_result gqr;
  real_t integral_p[np] = { 
    0.146e3/0.5e1, 
   -0.36e2/0.77e2,
   -18.0,
   -0.266e3/0.39e2,
    0.4530e4/0.209e3 };
  int m;
  const integer_t max_fejer2_degree = 13;
  const integer_t min_fejer2_degree = 5;
  int n;
  real_t (*p[np])( const real_t &x ) = { p0, p1 , p2 , p3 , p4 };
  double sum;

  cout << "\n";
  cout << "TEST02\n";
  cout << "  Test Fejer2 quadrature.\n";
  cout << "\n"; 
  cout << "   N poly         approx           exact     %abs_err\n";
  cout << "\n";
    
  for ( m = 0; m < np; m++ ) 
  {
    for ( n = min_fejer2_degree; n < max_fejer2_degree; n++ ) 
    {
      real_t z[max_fejer2_degree];
      real_t q[max_fejer2_degree];
      real_t f[max_fejer2_degree];
    
      gaussqr_result gqr = fejer2_abscissae ( n, z, q );

      if ( gqr != gaussqr_success )
      {
        return;
      }
      
      for ( integer_t i = 0; i < n; i++ ) 
      {
        f[i] = p[m]( z[i] );
      }

      sum = 0.0;
      for ( integer_t i = 0; i < n; i++ ) 
      {
        sum = sum + q[i] * f[i];
      }
            
      cout << "  " << setw(2) << n 
           << "  " << setw(2) << m 
           << "  " << setw(14) << setprecision(6) << sum 
           << "  " << setw(14) << integral_p[m] 
           << "  " << setw(8) << setprecision(2) << abs_err ( sum, integral_p[m] ) * 100.0 << '%' << endl;
    }
    cout << "\n";
  }
  return;
}
//****************************************************************************80

void test03 ( ) 

//****************************************************************************80
//
//  Purpose:
//
//    TEST03 checks the computations for the Normal distribution.
//
//  Modified:
//
//    18 May 2013
//
{
  gaussqr_result gqr;
  real_t parameter[2] = { 0.0 , 0.0 };

  cout << "\n";
  cout << "TEST03\n";
  cout << "  Compute quadrature rules for the normal distribution.\n";
    
  parameter[0] = 0.0;
  parameter[1] = 1.0;

  cout << "\n";
  cout << "  Mean MU                  = " << parameter[0] << "\n";
  cout << "  Standard deviation SIGMA = " << parameter[1] << "\n";

  gqr = test_distribution ( distribution_normal, -FLT_MAX, FLT_MAX, 
    domain_infinite, 16, parameter );
    
  parameter[0] = 1.0;
  parameter[1] = 0.5;
  cout << "\n";
  cout << "  Mean MU                  = " << parameter[0] << "\n";
  cout << "  Standard deviation SIGMA = " << parameter[1] << "\n";

  gqr = test_distribution ( distribution_normal, -FLT_MAX, FLT_MAX,
    domain_infinite, 16, parameter );

  return;
}
