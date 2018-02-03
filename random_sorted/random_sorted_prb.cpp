# include <cmath>
# include <cstdlib>
# include <ctime>
# include <iomanip>
# include <iostream>

using namespace std;

# include "random_sorted.hpp"

int main ( );
void r8vec_normal_01_sorted_test ( );
void r8vec_uniform_01_test ( );
void r8vec_uniform_01_sorted1_test ( );
void r8vec_uniform_01_sorted2_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    RANDOM_SORTED_TEST tests the RANDOM_SORTED library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    29 March 2016
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "RANDOM_SORTED_TEST\n";
  cout << "  C++ version\n";
  cout << "  Test the RANDOM_SORTED library.\n";

  r8vec_normal_01_sorted_test ( );
  r8vec_uniform_01_test ( );
  r8vec_uniform_01_sorted1_test ( );
  r8vec_uniform_01_sorted2_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "RANDOM_SORTED_TEST:\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void r8vec_normal_01_sorted_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_NORMAL_01_SORTED_TEST tests R8VEC_NORMAL_01_SORTED_TEST,
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    29 March 2016
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int n = 5;
  double *r8vec;
  int seed;

  cout << "\n";
  cout << "R8VEC_NORMAL_01_SORTED_TEST:\n";
  cout << "  R8VEC_NORMAL_01_SORTED generates a vector of N normal 01\n";
  cout << "  random values in ascending sorted order.\n";
  cout << "\n";
  cout << "  Generate several examples:\n";
  cout << "\n";

  seed = 123456789;

  for ( i = 1; i <= 10; i++ )
  {
    r8vec = r8vec_normal_01_sorted ( n, seed );
    r8vec_transpose_print ( n, r8vec, "  R8VEC:" );
    delete [] r8vec;
  }

  return;
}
//****************************************************************************80

void r8vec_uniform_01_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_UNIFORM_01_TEST tests R8VEC_UNIFORM_01.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    29 March 2016
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int n = 10;
  double *r8vec;
  int seed;

  cout << "\n";
  cout << "R8VEC_UNIFORM_01_TEST\n";
  cout << "  R8VEC_UNIFORM_01 returns a random R8VEC\n";
  cout << "  with entries in [ 0.0, 1.0 ]\n";

  seed = 123456789;

  for ( i = 1; i <= 3; i++ )
  {
    cout << "\n";
    cout << "  Input SEED = " << seed << "\n";
    r8vec = r8vec_uniform_01_new ( n, seed );
    r8vec_print ( n, r8vec, "  Random R8VEC:" );
    delete [] r8vec;
  }

  return;
}
//****************************************************************************80

void r8vec_uniform_01_sorted1_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_UNIFORM_01_SORTED1_TEST tests R8VEC_UNIFORM_01_SORTED1_TEST,
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    29 March 2016
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int n = 5;
  double *r8vec;
  int seed;

  cout << "\n";
  cout << "R8VEC_UNIFORM_01_SORTED1_TEST:\n";
  cout << "  R8VEC_UNIFORM_01_SORTED1 generates a vector of N random\n";
  cout << "  values in ascending sorted order.\n";
  cout << "\n";
  cout << "  Generate several examples:\n";
  cout << "\n";

  seed = 123456789;

  for ( i = 1; i <= 10; i++ )
  {
    r8vec = r8vec_uniform_01_sorted1 ( n, seed );
    r8vec_transpose_print ( n, r8vec, "  R8VEC:" );
    delete [] r8vec;
  }

  return;
}
//****************************************************************************80

void r8vec_uniform_01_sorted2_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8VEC_UNIFORM_01_SORTED2_TEST tests R8VEC_UNIFORM_01_SORTED2_TEST.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    29 March 2016
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int n = 5;
  double *r8vec;
  int seed;

  cout << "\n";
  cout << "R8VEC_UNIFORM_01_SORTED2_TEST:\n";
  cout << "  R8VEC_UNIFORM_01_SORTED2 generates a vector of N random\n";
  cout << "  values in ascending sorted order.\n";
  cout << "\n";
  cout << "  Generate several examples:\n";
  cout << "\n";

  seed = 123456789;

  for ( i = 1; i <= 10; i++ )
  {
    r8vec = r8vec_uniform_01_sorted2 ( n, seed );
    r8vec_transpose_print ( n, r8vec, "  R8VEC:" );
    delete [] r8vec;
  }

  return;
}
