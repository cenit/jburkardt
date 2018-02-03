# include <cmath>
# include <cstdlib>
# include <ctime>
# include <iomanip>
# include <iostream>

using namespace std;

# include "ns3de.hpp"

int main ( );
void uvwp_burgers_test ( );
void resid_burgers_test ( );
void uvwp_ethier_test ( );
void resid_ethier_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    NS3DE_PRB tests the NS3DE library.
//
//  Location:
//
//    http://people.sc.fsu.edu/~jburkardt/master/navier_stokes_3d_exact/ns3de_prb.cpp
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    30 July 2015
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "NS3DE_PRB\n";
  cout << "  C++ version\n";
  cout << "  Test the NS3DE library.\n";

  uvwp_burgers_test ( );
  resid_burgers_test ( );

  uvwp_ethier_test ( );
  resid_ethier_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "NS3DE_PRB\n";
  cout << "  Normal end of execution.\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void uvwp_burgers_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    UVWP_BURGERS_TEST tests UVWP_BURGERS.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    30 July 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n;
  double nu;
  double *p;
  int seed;
  double *t;
  double *u;
  double *v;
  double *w;
  double *x;
  double xyz_hi;
  double xyz_lo;
  double *y;
  double *z;

  nu = 0.25;

  cout << "\n";
  cout << "UVWP_BURGERS_TEST\n";
  cout << "  UVWP_BURGERS evaluates the Burgers solution.\n";
  cout << "  Estimate the range of velocity and pressure\n";
  cout << "  at the initial time T = 0, in a region that is the\n";
  cout << "  cube centered at (0,0,0) with 'radius' 1.0.\n";
  cout << "  Viscosity = " << nu << "\n";

  n = 1000;

  p = new double[n];
  u = new double[n];
  v = new double[n];
  w = new double[n];

  xyz_lo = -1.0;
  xyz_hi = +1.0;
  seed = 123456789;

  x = r8vec_uniform_ab_new ( n, xyz_lo, xyz_hi, seed );
  y = r8vec_uniform_ab_new ( n, xyz_lo, xyz_hi, seed );
  z = r8vec_uniform_ab_new ( n, xyz_lo, xyz_hi, seed );
  t = r8vec_zeros_new ( n );

  uvwp_burgers ( nu, n, x, y, z, t, u, v, w, p );

  cout << "\n";
  cout << "           Minimum       Maximum\n";
  cout << "\n";
  cout << "  U:  " 
       << "  " << setw(14) << r8vec_amin ( n, u )
       << "  " << setw(14) << r8vec_amax ( n, u ) << "\n";
  cout << "  V:  " 
       << "  " << setw(14) << r8vec_amin ( n, v )
       << "  " << setw(14) << r8vec_amax ( n, v ) << "\n";
  cout << "  W:  " 
       << "  " << setw(14) << r8vec_amin ( n, w )
       << "  " << setw(14) << r8vec_amax ( n, w ) << "\n";
  cout << "  P:  "
       << "  " << setw(14) << r8vec_amin ( n, p )
       << "  " << setw(14) << r8vec_amax ( n, p ) << "\n";

  delete [] p;
  delete [] t;
  delete [] u;
  delete [] v;
  delete [] w;
  delete [] x;
  delete [] y;
  delete [] z;

  return;
}
//****************************************************************************80

void resid_burgers_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    RESID_BURGERS_TEST tests RESID_BURGERS.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    30 July 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n;
  double nu;
  double *pr;
  int seed;
  double *t;
  double *ur;
  double *vr;
  double *wr;
  double *x;
  double xyz_hi;
  double xyz_lo;
  double *y;
  double *z;

  nu = 0.25;

  cout << "\n";
  cout << "RESID_BURGERS_TEST\n";
  cout << "  RESID_BURGERS evaluates the Burgers residual.\n";
  cout << "  Sample the Navier-Stokes residuals\n";
  cout << "  at the initial time T = 0, using a region that is\n";
  cout << "  the cube centered at (0,0,0) with 'radius' 1.0,\n";
  cout << "  Viscosity = " << nu << "\n";

  n = 1000;

  pr = new double[n];
  ur = new double[n];
  vr = new double[n];
  wr = new double[n];

  xyz_lo = -1.0;
  xyz_hi = +1.0;
  seed = 123456789;

  x = r8vec_uniform_ab_new ( n, xyz_lo, xyz_hi, seed );
  y = r8vec_uniform_ab_new ( n, xyz_lo, xyz_hi, seed );
  z = r8vec_uniform_ab_new ( n, xyz_lo, xyz_hi, seed );
  t = r8vec_zeros_new ( n );

  resid_burgers ( nu, n, x, y, z, t, ur, vr, wr, pr );

  cout << "\n";
  cout << "           Minimum       Maximum\n";
  cout << "\n";
  cout << "  Ur:  " 
       << "  " << setw(14) << r8vec_amin ( n, ur )
       << "  " << setw(14) << r8vec_amax ( n, ur ) << "\n";
  cout << "  Vr:  " 
       << "  " << setw(14) << r8vec_amin ( n, vr )
       << "  " << setw(14) << r8vec_amax ( n, vr ) << "\n";
  cout << "  Wr:  " 
       << "  " << setw(14) << r8vec_amin ( n, wr )
       << "  " << setw(14) << r8vec_amax ( n, wr ) << "\n";
  cout << "  Pr:  " 
       << "  " << setw(14) << r8vec_amin ( n, pr )
       << "  " << setw(14) << r8vec_amax ( n, pr ) << "\n";

  delete [] pr;
  delete [] t;
  delete [] ur;
  delete [] vr;
  delete [] wr;
  delete [] x;
  delete [] y;
  delete [] z;

  return;
}
//****************************************************************************80

void uvwp_ethier_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    UVWP_ETHIER_TEST tests UVWP_ETHIER.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    29 July 2015
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double d;
  int n;
  double *p;
  const double r8_pi = 3.141592653589793;
  int seed;
  double *t;
  double *u;
  double *v;
  double *w;
  double *x;
  double xyz_hi;
  double xyz_lo;
  double *y;
  double *z;

  a = r8_pi / 4.0;
  d = r8_pi / 2.0;

  cout << "\n";
  cout << "UVWP_ETHIER_TEST\n";
  cout << "  UVWP_ETHIER evaluates the Ethier solution.\n";
  cout << "  Estimate the range of velocity and pressure\n";
  cout << "  at the initial time T = 0, in a region that is the\n";
  cout << "  cube centered at (0,0,0) with 'radius' 1.0.\n";
  cout << "  Parameter A = " << a << "\n";
  cout << "  Parameter D = " << d << "\n";

  n = 1000;

  p = new double[n];
  u = new double[n];
  v = new double[n];
  w = new double[n];

  xyz_lo = -1.0;
  xyz_hi = +1.0;
  seed = 123456789;

  x = r8vec_uniform_ab_new ( n, xyz_lo, xyz_hi, seed );
  y = r8vec_uniform_ab_new ( n, xyz_lo, xyz_hi, seed );
  z = r8vec_uniform_ab_new ( n, xyz_lo, xyz_hi, seed );
  t = r8vec_zeros_new ( n );

  uvwp_ethier ( a, d, n, x, y, z, t, u, v, w, p );

  cout << "\n";
  cout << "           Minimum       Maximum\n";
  cout << "\n";
  cout << "  U:  " 
       << "  " << setw(14) << r8vec_amin ( n, u )
       << "  " << setw(14) << r8vec_amax ( n, u ) << "\n";
  cout << "  V:  " 
       << "  " << setw(14) << r8vec_amin ( n, v )
       << "  " << setw(14) << r8vec_amax ( n, v ) << "\n";
  cout << "  W:  " 
       << "  " << setw(14) << r8vec_amin ( n, w )
       << "  " << setw(14) << r8vec_amax ( n, w ) << "\n";
  cout << "  P:  "
       << "  " << setw(14) << r8vec_amin ( n, p )
       << "  " << setw(14) << r8vec_amax ( n, p ) << "\n";

  delete [] p;
  delete [] t;
  delete [] u;
  delete [] v;
  delete [] w;
  delete [] x;
  delete [] y;
  delete [] z;

  return;
}
//****************************************************************************80

void resid_ethier_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    RESID_ETHIER_TEST tests RESID_ETHIER.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    29 July 2015
//
//  Author:
//
//    John Burkardt
//
{
  double a;
  double d;
  int n;
  double *pr;
  const double r8_pi = 3.141592653589793;
  int seed;
  double *t;
  double *ur;
  double *vr;
  double *wr;
  double *x;
  double xyz_hi;
  double xyz_lo;
  double *y;
  double *z;

  a = r8_pi / 4.0;
  d = r8_pi / 2.0;

  cout << "\n";
  cout << "RESID_ETHIER_TEST\n";
  cout << "  RESID_ETHIER evaluates the Ethier residual.\n";
  cout << "  Sample the Navier-Stokes residuals\n";
  cout << "  at the initial time T = 0, using a region that is\n";
  cout << "  the cube centered at (0,0,0) with 'radius' 1.0,\n";
  cout << "  Parameter A = " << a << "\n";
  cout << "  Parameter D = " << d << "\n";

  n = 1000;

  pr = new double[n];
  ur = new double[n];
  vr = new double[n];
  wr = new double[n];

  xyz_lo = -1.0;
  xyz_hi = +1.0;
  seed = 123456789;

  x = r8vec_uniform_ab_new ( n, xyz_lo, xyz_hi, seed );
  y = r8vec_uniform_ab_new ( n, xyz_lo, xyz_hi, seed );
  z = r8vec_uniform_ab_new ( n, xyz_lo, xyz_hi, seed );
  t = r8vec_zeros_new ( n );

  resid_ethier ( a, d, n, x, y, z, t, ur, vr, wr, pr );

  cout << "\n";
  cout << "           Minimum       Maximum\n";
  cout << "\n";
  cout << "  Ur:  " 
       << "  " << setw(14) << r8vec_amin ( n, ur )
       << "  " << setw(14) << r8vec_amax ( n, ur ) << "\n";
  cout << "  Vr:  " 
       << "  " << setw(14) << r8vec_amin ( n, vr )
       << "  " << setw(14) << r8vec_amax ( n, vr ) << "\n";
  cout << "  Wr:  " 
       << "  " << setw(14) << r8vec_amin ( n, wr )
       << "  " << setw(14) << r8vec_amax ( n, wr ) << "\n";
  cout << "  Pr:  " 
       << "  " << setw(14) << r8vec_amin ( n, pr )
       << "  " << setw(14) << r8vec_amax ( n, pr ) << "\n";

  delete [] pr;
  delete [] t;
  delete [] ur;
  delete [] vr;
  delete [] wr;
  delete [] x;
  delete [] y;
  delete [] z;

  return;
}

