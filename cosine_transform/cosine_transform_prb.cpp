# include <cmath>
# include <cstdlib>
# include <iomanip>
# include <iostream>
# include <ctime>

using namespace std;

# include "cosine_transform.hpp"

int main ( );
void cosine_transform_test01 ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for COSINE_TRANSFORM_PRB.
//
//  Discussion:
//
//    COSINE_TRANSFORM_PRB tests the COSINE_TRANSFORM library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 August 2015
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "COSINE_TRANSFORM_PRB\n";
  cout << "  C++ version.\n";
  cout << "  Test the COSINE_TRANSFORM library.\n";

  cosine_transform_test01 ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "COSINE_TRANSFORM_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void cosine_transform_test01 ( )

//****************************************************************************80
//
//  Purpose:
//
//    COSINE_TRANSFORM_TEST01 applies the DCT and its inverse.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 August 2015
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int n = 10;
  int seed;
  double *r;
  double *s;
  double *t;

  seed = 123456789;

  cout << "\n";
  cout << "COSINE_TRANSFORM_TEST01:\n";
  cout << "  COSINE_TRANSFORM_DATA does a cosine transform of data\n";
  cout << "  defined by a vector.\n";
  cout << "\n";
  cout << "  Apply the transform, then its inverse.\n";
  cout << "  Let R be a random N vector.\n";
  cout << "  Let S be the transform of D.\n";
  cout << "  Let T be the transform of E.\n";
  cout << "  Then R and T will be equal.\n";

  r = r8vec_uniform_01_new ( n, seed );
  s = cosine_transform_data ( n, r );
  t = cosine_transform_inverse ( n, s );

  cout << "\n";
  cout << "     I      R(I)        S(I)        T(I)\n";
  cout << "\n";

  for ( i = 0; i < n; i++ )
  {
    cout << "  " << setw(4) << i
         << "  " << setw(10) << r[i]
         << "  " << setw(10) << s[i]
         << "  " << setw(10) << t[i] << "\n";
  }

  delete [] r;
  delete [] s;
  delete [] t;

  return;
}

