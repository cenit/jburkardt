# include <cmath>
# include <cstdlib>
# include <iomanip>
# include <iostream>

using namespace std;

# include "r8bto.hpp"

int main ( );
void r8bto_dif2_test ( );
void r8bto_indicator_test ( );
void r8bto_mtv_test ( );
void r8bto_mv_test ( );
void r8bto_print_test ( );
void r8bto_print_some_test ( );
void r8bto_random_test ( );
void r8bto_to_r8ge_test ( );
void r8bto_zeros_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for R8BTO_PRB.
//
//  Discussion:
//
//    R8BTO_PRB tests the R8BTO library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    09 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "R8BTO_PRB\n";
  cout << "  C++ version\n";
  cout << "  Test the R8BTO library.\n";

  r8bto_dif2_test ( );
  r8bto_indicator_test ( );
  r8bto_mtv_test ( );
  r8bto_mv_test ( );
  r8bto_print_test ( );
  r8bto_print_some_test ( );
  r8bto_random_test ( );
  r8bto_to_r8ge_test ( );
  r8bto_zeros_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "R8BTO_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void r8bto_dif2_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8BTO_DIF2_TEST tests R8BTO_DIF2.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    05 July 2016
//
//  Author:
//
//    John Burkardt
//
{
  double *a;
  int l = 5;
  int m = 1;

  cout << "\n";
  cout << "R8BTO_DIF2_TEST\n";
  cout << "  R8BTO_DIF2 sets up an R8BTO second difference matrix.\n";
  cout << "\n";
  cout << "  Block order M =  " << m << "\n";
  cout << "  Block number L = " << l << "\n";
  cout << "  Matrix order N = " << m * l << "\n";

  a = r8bto_dif2 ( m, l );

  r8bto_print ( m, l, a, "  The R8BTO second difference matrix:" );

  delete [] a;

  return;
}
//****************************************************************************80

void r8bto_indicator_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8BTO_INDICATOR_TEST tests R8BTO_INDICATOR.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    26 August 2006
//
//  Author:
//
//    John Burkardt
//
{
# define L 3
# define M 2

  double *a;

  cout << "\n";
  cout << "R8BTO_INDICATOR_TEST\n";
  cout << "  R8BTO_INDICATOR sets up an R8BTO indicator matrix.\n";
  cout << "\n";
  cout << "  Block order M =  " << M << "\n";
  cout << "  Block number L = " << L << "\n";
  cout << "  Matrix order N = " << M * L << "\n";

  a = r8bto_indicator ( M, L );

  r8bto_print ( M, L, a, "  The block Toeplitz matrix:" );

  delete [] a;

  return;
# undef L
# undef M
}
//****************************************************************************80

void r8bto_mtv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8BTO_MTV_TEST tests R8BTO_MTV.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 March 2004
//
//  Author:
//
//    John Burkardt
//
{
# define L 3
# define M 2
# define N ( M * L )

  double a[M*M*(2*L-1)] = {
    1.0, 5.0, 2.0, 5.0, 
    3.0, 6.0, 4.0, 6.0, 
    5.0, 7.0, 6.0, 7.0, 
    7.0, 8.0, 8.0, 8.0, 
    9.0, 9.0, 0.0, 9.0 };
  double *b;
  double *x;

  cout << "\n";
  cout << "R8BTO_MTV_TEST\n";
  cout << "  R8BTO_MTV computes A'* x where A is an R8BTO matrix.\n";
  cout << "\n";
  cout << "  Block order M =  " << M << "\n";
  cout << "  Block number L = " << L << "\n";
  cout << "  Matrix order N = " << N << "\n";

  r8bto_print ( M, L, a, "  The block Toeplitz matrix:" );

  x = r8ge_indicator ( M, L );

  r8ge_print ( M, L, x, "  The 'vector' x:" );

  b = r8bto_mtv ( M, L, a, x );

  r8ge_print ( M, L, b, "  The product A'*x:" );

  delete [] b;
  delete [] x;

  return;
# undef L
# undef M
# undef N
}
//****************************************************************************80

void r8bto_mv_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8BTO_MV_TEST tests R8BTO_MV.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    24 March 2004
//
//  Author:
//
//    John Burkardt
//
{
# define L 3
# define M 2
# define N ( M * L )

  double a[M*M*(2*L-1)] = {
    1.0, 5.0, 2.0, 5.0, 
    3.0, 6.0, 4.0, 6.0, 
    5.0, 7.0, 6.0, 7.0, 
    7.0, 8.0, 8.0, 8.0, 
    9.0, 9.0, 0.0, 9.0 };
  double *b;
  double *x;

  cout << "\n";
  cout << "R8BTO_MV_TEST\n";
  cout << "  R8BTO_MV computes A * x where A is an R8BTO matrix.\n";
  cout << "\n";
  cout << "  Block order M =  " << M << "\n";
  cout << "  Block number L = " << L << "\n";
  cout << "  Matrix order N = " << N << "\n";

  r8bto_print ( M, L, a, "  The block Toeplitz matrix:" );

  x = r8ge_indicator ( M, L );

  r8ge_print ( M, L, x, "  The 'vector' x:" );

  b = r8bto_mv ( M, L, a, x );

  r8ge_print ( M, L, b, "  The product A*x:" );

  delete [] b;
  delete [] x;

  return;
# undef L
# undef M
# undef N
}
//****************************************************************************80

void r8bto_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8BTO_PRINT_TEST tests R8BTO_PRINT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    08 July 2016
//
//  Author:
//
//    John Burkardt
//
{
# define L 3
# define M 2

  double *a;
  int n;

  n = M * L;

  cout << "\n";
  cout << "R8BTO_PRINT_TEST\n";
  cout << "  R8BTO_PRINT prints an R8BTO matrix.\n";
  cout << "\n";
  cout << "  Block order M =  " << M << "\n";
  cout << "  Block number L = " << L << "\n";
  cout << "  Matrix order N = " << n << "\n";

  a = r8bto_indicator ( M, L );

  r8bto_print ( M, L, a, "  The R8BTO matrix:" );

  delete [] a;

  return;
# undef L
# undef M
}
//****************************************************************************80

void r8bto_print_some_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8BTO_PRINT_SOME_TEST tests R8BTO_PRINT_SOME.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    08 July 2016
//
//  Author:
//
//    John Burkardt
//
{
# define L 3
# define M 2

  double *a;
  int n;

  n = M * L;

  cout << "\n";
  cout << "R8BTO_PRINT_SOME_TEST\n";
  cout << "  R8BTO_PRINT_SOME prints some of an R8BTO matrix.\n";
  cout << "\n";
  cout << "  Block order M =  " << M << "\n";
  cout << "  Block number L = " << L << "\n";
  cout << "  Matrix order N = " << n << "\n";

  a = r8bto_indicator ( M, L );

  r8bto_print_some ( M, L, a, 0, 2, 5, 3, "  Row (0:5), Cols (2:3):" );

  delete [] a;

  return;
# undef L
# undef M
}
//****************************************************************************80

void r8bto_random_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8BTO_RANDOM_TEST tests R8BTO_RANDOM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    08 July 2016
//
//  Author:
//
//    John Burkardt
//
{
# define L 3
# define M 2

  double *a;
  int n;
  int seed;

  n = M * L;

  cout << "\n";
  cout << "R8BTO_RANDOM_TEST\n";
  cout << "  R8BTO_RANDOM randomizes an R8BTO matrix.\n";
  cout << "\n";
  cout << "  Block order M =  " << M << "\n";
  cout << "  Block number L = " << L << "\n";
  cout << "  Matrix order N = " << n << "\n";

  seed = 123456789;
  a = r8bto_random ( M, L, seed );

  r8bto_print ( M, L, a, "  The random R8BTO matrix:" );

  delete [] a;

  return;
# undef L
# undef M
}
//****************************************************************************80

void r8bto_to_r8ge_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8BTO_TO_R8GE_TEST tests R8BTO_TO_R8GE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    08 July 2016
//
//  Author:
//
//    John Burkardt
//
{
# define L 3
# define M 2

  double *a;
  double *a_r8ge;
  int n;

  n = M * L;

  cout << "\n";
  cout << "R8BTO_TO_R8GE_TEST\n";
  cout << "  R8BTO_TO_R8GE converts an R8BTO matrix to R8GE format.\n";
  cout << "\n";
  cout << "  Block order M =  " << M << "\n";
  cout << "  Block number L = " << L << "\n";
  cout << "  Matrix order N = " << n << "\n";

  a = r8bto_indicator ( M, L );

  r8bto_print ( M, L, a, "  The R8BTO matrix:" );

  a_r8ge = r8bto_to_r8ge ( M, L, a );

  r8ge_print ( n, n, a_r8ge, "  The R8GE matrix:" );

  delete [] a;
  delete [] a_r8ge;

  return;
# undef L
# undef M
}
//****************************************************************************80

void r8bto_zeros_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    R8BTO_ZEROS_TEST tests R8BTO_ZEROS.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    08 July 2016
//
//  Author:
//
//    John Burkardt
//
{
# define L 3
# define M 2

  double *a;
  int n;

  n = M * L;

  cout << "\n";
  cout << "R8BTO_ZEROS_TEST\n";
  cout << "  R8BTO_ZEROS zeros an R8BTO matrix.\n";
  cout << "\n";
  cout << "  Block order M =  " << M << "\n";
  cout << "  Block number L = " << L << "\n";
  cout << "  Matrix order N = " << n << "\n";

  a = r8bto_zeros ( M, L );

  r8bto_print ( M, L, a, "  The zero R8BTO matrix:" );

  delete [] a;

  return;
# undef L
# undef M
}
