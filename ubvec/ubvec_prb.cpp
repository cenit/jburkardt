# include <cmath>
# include <cstdlib>
# include <iomanip>
# include <iostream>

using namespace std;

# include "ubvec.hpp"

int main ( );
void i4_choose_test ( );
void i4_uniform_ab_test ( );
void ksubset_enum_test ( );
void ksubset_colex_unrank_test ( );
void morse_thue_test ( );
void nim_sum_test ( );
void ubvec_add_test ( );
void ubvec_and_test ( );
void ubvec_complement1_test ( );
void ubvec_enum_test ( );
void ubvec_next_test ( );
void ubvec_next_gray_test ( );
void ubvec_next_grlex_test ( );
void ubvec_or_test ( );
void ubvec_print_test ( );
void ubvec_random_test ( );
void ubvec_rank_gray_test ( );
void ubvec_reverse_test ( );
void ubvec_to_ui4_test ( );
void ubvec_unrank_gray_test ( );
void ubvec_unrank_grlex_test ( );
void ubvec_xor_test ( );
void ui4_rank_gray_test ( );
void ui4_to_ubvec_test ( );
void ui4_unrank_gray_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for UBVEC_PRB.
//
//  Discussion:
//
//    UBVEC_PRB tests the UBVEC library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "UBVEC_PRB\n";
  cout << "  C++ version\n";
  cout << "  Test the UBVEC library.\n";

  i4_choose_test ( );
  i4_uniform_ab_test ( );

  ksubset_enum_test ( );
  ksubset_colex_unrank_test ( );

  morse_thue_test ( );

  nim_sum_test ( );

  ubvec_add_test ( );
  ubvec_and_test ( );
  ubvec_complement1_test ( );
  ubvec_enum_test ( );
  ubvec_next_test ( );
  ubvec_next_gray_test ( );
  ubvec_next_grlex_test ( );
  ubvec_or_test ( );
  ubvec_print_test ( );
  ubvec_random_test ( );
  ubvec_rank_gray_test ( );
  ubvec_reverse_test ( );
  ubvec_to_ui4_test ( );
  ubvec_unrank_gray_test ( );
  ubvec_unrank_grlex_test ( );
  ubvec_xor_test ( );

  ui4_rank_gray_test ( );
  ui4_to_ubvec_test ( );
  ui4_unrank_gray_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "UBVEC_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void i4_choose_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4_CHOOSE_TEST tests I4_CHOOSE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    27 October 2014
//
//  Author:
//
//    John Burkardt
//
{
  int cnk;
  int k;
  int n;

  cout << "\n";
  cout << "I4_CHOOSE_TEST\n";
  cout << "  I4_CHOOSE evaluates C(N,K).\n";
  cout << "\n";
  cout << "       N       K     CNK\n";

  for ( n = 0; n <= 4; n++ )
  {
    cout << "\n";
    for ( k = 0; k <= n; k++ )
    {
      cnk = i4_choose ( n, k );

      cout << "  " << setw(6) << n
           << "  " << setw(6) << k
           << "  " << setw(6) << cnk << "\n";
    }
  }

  return;
}
//****************************************************************************80

void i4_uniform_ab_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    I4_UNIFORM_TEST tests I4_UNIFORM_AB.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    27 October 2014
//
//  Author:
//
//    John Burkardt
//
{
  int a = -100;
  int b = 200;
  int i;
  int j;
  int seed = 123456789;

  cout << "\n";
  cout << "I4_UNIFORM_TEST\n";
  cout << "  I4_UNIFORM_AB computes pseudorandom values\n";
  cout << "  in an interval [A,B].\n";

  cout << "\n";
  cout << "  The lower endpoint A = " << a << "\n";
  cout << "  The upper endpoint B = " << b << "\n";
  cout << "  The initial seed is " << seed << "\n";
  cout << "\n";

  for ( i = 1; i <= 20; i++ )
  {
    j = i4_uniform_ab ( a, b, seed );
    cout << "  " << setw(8) << i
         << "  " << setw(8) << j << "\n";
  }

  return;
}
//****************************************************************************80

void ksubset_enum_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    KSUBSET_ENUM_TEST tests KSUBSET_ENUM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    27 November 2015
//
//  Author:
//
//    John Burkardt
//
{
  int k;
  int n;

  cout << "\n";
  cout << "KSUBSET_ENUM_TEST\n";
  cout << "  KSUBSET_ENUM enumerates K subsets of an N set.\n";
  cout << "\n";
  cout << "      N:      0       1       2       3       4       5\n";
  cout << "   M\n";

  for ( n = 0; n <= 10; n++ )
  {
    cout << "  " << setw(2) << n << ":  ";
    for ( k = 0; k <= i4_min ( 5, n ); k++ )
    {
      cout << "  " << setw(6) << ksubset_enum ( k, n );
    }
    cout << "\n";
  }

  return;
}
//****************************************************************************80

void ksubset_colex_unrank_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    KSUBSET_COLEX_UNRANK_TEST tests KSUBSET_COLEX_UNRANK.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    29 November 2015
//
//  Author:
//
//    John Burkardt
//
{
  int k;
  int n;
  int rank;
  int *t;

  cout << "\n";
  cout << "KSUBSET_COLEX_UNRANK_TEST\n";
  cout << "  KSUBSET_COLEX_UNRANK unranks\n";
  cout << "  K-subsets of an N set,\n";
  cout << "  using the colexicographic ordering:\n";

  rank = 5;
  k = 3;
  n = 5;

  t = ksubset_colex_unrank ( rank, k, n );

  cout << "\n";
  cout << "  The element of rank " << rank << "\n";
  cout << "\n";
  i4vec_transpose_print ( k, t, "" );

  delete [] t;

  return;
}
//****************************************************************************80

void morse_thue_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    MORSE_THUE_TEST tests MORSE_THUE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    10 March 2014
//
//  Author:
//
//    John Burkardt
//
{
# define N 100

  int i;
  int ihi;
  int ilo;
  int s[N+1];

  cout << "\n";
  cout << "MORSE_THUE_TEST\n";
  cout << "  MORSE_THUE computes the Morse-Thue numbers.\n";
  cout << "\n";

  for ( i = 0; i <= N; i++ )
  {
    s[i] = morse_thue ( i );
  }

  for ( ilo = 0; ilo <= N; ilo = ilo + 10 )
  {
    cout << "  ";
    ihi = i4_min ( ilo + 9, N );
    for ( i = ilo; i <= ihi; i++ )
    {
      cout << s[i];
    }
    cout << "\n";
  }

  return;
# undef N
}
//****************************************************************************80

void nim_sum_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    NIM_SUM_TEST tests NIM_SUM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    10 March 2014
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int ihi = 1000;
  int ilo = 0;
  int n = 32;
  int seed;
  int *ubvec1;
  int *ubvec2;
  int *ubvec3;
  int ui1;
  int ui2;
  int ui3;

  cout << "\n";
  cout << "NIM_SUM_TEST\n";
  cout << "  NIM_SUM computes the Nim sum of two integers.\n";
  cout << "\n";
  cout << "    I    J    Nim(I+J)\n";
  cout << "\n";

  seed = 123456789;

  for ( i = 1; i <= 5; i++ )
  {
    ui1 = i4_uniform_ab ( ilo, ihi, seed );
    ubvec1 = ui4_to_ubvec ( ui1, n );

    ui2 = i4_uniform_ab ( ilo, ihi, seed );
    ubvec2 = ui4_to_ubvec ( ui2, n );

    ui3 = nim_sum ( ui1, ui2 );
    ubvec3 = ui4_to_ubvec ( ui3, n );

    cout << "\n";
    cout << "  UI1, UI2, UI3 in decimal:\n";
    cout << "\n";

    cout << "  " << setw(5) << ui1
         << "  " << setw(5) << ui2
         << "  " << setw(5) << ui3 << "\n";

    cout << "\n";
    cout << "  I1, I2, I3 in binary:\n";
    cout << "\n";

    ubvec_print ( n, ubvec1, "" );
    ubvec_print ( n, ubvec2, "" );
    ubvec_print ( n, ubvec3, "" );

    delete [] ubvec1;
    delete [] ubvec2;
    delete [] ubvec3;
  }

  return;
}
//****************************************************************************80

void ubvec_add_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    UBVEC_ADD_TEST tests UBVEC_ADD;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    19 March 2014
//
//  Author:
//
//    John Burkardt
//
{
  int n = 10;
  int seed = 123456789;
  int test;
  int *ubvec1;
  int *ubvec2;
  int *ubvec3;
  int ui;
  int uj;
  int uk;

  cout << "\n";
  cout << "UBVEC_ADD_TEST\n";
  cout << "  UBVEC_ADD adds unsigned binary vectors \n";
  cout << "  representing unsigned integers;\n";
  cout << "\n";
  cout << "        I        J        K = I + J\n";
  cout << "\n";

  for ( test = 1; test <= 10; test++ )
  { 
    ui = i4_uniform_ab ( 0, 100, seed );
    uj = i4_uniform_ab ( 0, 100, seed );

    cout << "\n";
    cout << "  " << setw(8) << ui
         << "  " << setw(8) << uj << "\n";

    uk = ui + uj;

    cout << "  Directly:           " << setw(8) << uk << "\n";

    ubvec1 = ui4_to_ubvec ( ui, n );
    ubvec2 = ui4_to_ubvec ( uj, n );

    ubvec3 = ubvec_add ( n, ubvec1, ubvec2 );
    uk = ubvec_to_ui4 ( n, ubvec3 );

    cout << "  UBVEC_ADD           " << setw(8) << uk << "\n";

    delete [] ubvec1;
    delete [] ubvec2;
    delete [] ubvec3;
  }

  return;
}
//****************************************************************************80

void ubvec_and_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    UBVEC_AND_TEST tests UBVEC_AND;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int j;
  int k;
  int n;
  int seed;
  int test;
  int *ubvec1;
  int *ubvec2;
  int *ubvec3;

  cout << "\n";
  cout << "UBVEC_AND_TEST\n";
  cout << "  UBVEC_AND computes the AND of two\n";
  cout << "  unsigned binary vectors representing unsigned integers;\n";
  cout << "\n";
  cout << "        I        J        K = I AND J\n";
  cout << "\n";

  seed = 123456789;
  n = 10;

  for ( test = 1; test <= 10; test++ )
  {
    i = i4_uniform_ab ( 0, 100, seed );
    j = i4_uniform_ab ( 0, 100, seed );

    ubvec1 = ui4_to_ubvec ( i, n );
    ubvec2 = ui4_to_ubvec ( j, n );
    ubvec3 = ubvec_and ( n, ubvec1, ubvec2 );

    k = ubvec_to_ui4 ( n, ubvec3 );

    cout << "  " << setw(8) << i
         << "  " << setw(8) << j
         << "  " << setw(8) << k << "\n";

    delete [] ubvec1;
    delete [] ubvec2;
    delete [] ubvec3;
  }

  return;
}
//****************************************************************************80

void ubvec_complement1_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    UBVEC_COMPLEMENT1_TEST tests UBVEC_COMPLEMENT1.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int i; 
  int j;
  int n = 5;
  int seed;
  int *ubvec1;
  int *ubvec2;

  cout << "\n";
  cout << "UBVEC_COMPLEMENT1_TEST\n";
  cout << "  UBVEC_COMPLEMENT1 returns the 1's complement\n";
  cout << "  of an unsigned binary vector.\n";
  cout << "\n";
  cout << "  UBVEC  Comp1\n";
  cout << "\n";

  seed = 123456789;

  for ( i = 1; i <= 5; i++ )
  {
    ubvec1 = ubvec_random ( n, seed );
    ubvec2 = ubvec_complement1 ( n, ubvec1 );
    cout << "  ";
    for ( j = 0; j < n; j++ )
    {
      cout << ubvec1[j];
    }
    cout << "  ";
    for ( j = 0; j < n; j++ )
    {
      cout << ubvec2[j];
    }
    cout << "\n";

    delete [] ubvec1;
    delete [] ubvec2;
  }

  return;
}
//****************************************************************************80

void ubvec_enum_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    UBVEC_ENUM_TEST tests UBVEC_ENUM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n;
  int n2;

  cout << "\n";
  cout << "UBVEC_ENUM_TEST\n";
  cout << "  UBVEC_ENUM enumerates unsigned binary vectors\n";
  cout << "  of N digits\n";
  cout << "\n";
  cout << "   N      Number\n";
  cout << "\n";

  for ( n = 0; n <= 10; n++ )
  {
    n2 = ubvec_enum ( n );
    cout << "  " << setw(2) << n
         << "  " << setw(8) << n2 << "\n";
  }

  return;
}
//****************************************************************************80

void ubvec_next_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    UBVEC_NEXT_TEST tests UBVEC_NEXT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int n = 4;
  int *ubvec;

  cout << "\n";
  cout << "UBVEC_NEXT_TEST\n";
  cout << "  UBVEC_NEXT computes the next unsigned binary vector.\n";
  cout << "\n";

  ubvec = new int[n];

  for ( i = 0; i < n; i++ )
  {
    ubvec[i] = 0;
  }

  for ( i = 0; i < 16; i++ )
  {
    ubvec_print ( n, ubvec, "" );
    ubvec_next ( n, ubvec );
  }

  delete [] ubvec;

  return;
}
//****************************************************************************80

void ubvec_next_gray_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    UBVEC_NEXT_GRAY_TEST tests UBVEC_NEXT_GRAY.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int k;
  int n = 4;
  int *ubvec;

  cout << "\n";
  cout << "UBVEC_NEXT_GRAY_TEST\n";
  cout << "  UBVEC_NEXT_GRAY returns the next UBVEC in the Gray code.\n";

  cout << "\n";
  cout << "   K  UBVEC\n";
  cout << "\n";

  k = 0;

  ubvec = new int[n];

  for ( i = 0; i < n; i++ )
  {
    ubvec[i] = 0;
  }

  for ( ; ; )
  {
   
    cout << "  " << setw(2) << i << ":  ";
    for ( i = 0; i < n; i++ )
    {
      cout << ubvec[i];
    }
    cout << "\n";

    k = k + 1;
    ubvec_next_gray ( n, ubvec );

    if ( i4vec_sum ( n, ubvec ) == 0 )
    {
      break;
    } 
  }

  delete [] ubvec;

  return;
}
//****************************************************************************80

void ubvec_next_grlex_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    UBVEC_NEXT_GRLEX_TEST tests UBVEC_NEXT_GRLEX.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int j;
  int n = 4;
  int *ubvec;

  cout << "\n";
  cout << "UBVEC_NEXT_GRLEX_TEST\n";
  cout << "  UBVEC_NEXT_GRLEX computes unsigned binary vectors in GRLEX order.\n";
  cout << "\n";

  ubvec = new int[n];

  for ( i = 0; i < n; i++ )
  {
    ubvec[i] = 0;
  }

  for ( i = 0; i <= 16; i++ )
  {
    cout << "  " << setw(2) << i << ":  ";
    for ( j = 0; j < n; j++ )
    {
      cout << ubvec[j];
    }
    cout << "\n";
    ubvec_next_grlex ( n, ubvec );
  }

  delete [] ubvec;

  return;
}
//****************************************************************************80

void ubvec_or_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    UBVEC_OR_TEST tests UBVEC_OR;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int j;
  int k;
  int n = 10;
  int seed = 123456789;
  int test;
  int *ubvec1;
  int *ubvec2;
  int *ubvec3;

  cout << "\n";
  cout << "UBVEC_OR_TEST\n";
  cout << "  UBVEC_OR computes the OR of two\n";
  cout << "  unsigned binary vectors representing unsigned integers;\n";
  cout << "\n";
  cout << "        I        J        K = I OR J\n";
  cout << "\n";

  for ( test = 1; test <= 10; test++ )
  { 
    i = i4_uniform_ab ( 0, 100, seed );
    j = i4_uniform_ab ( 0, 100, seed );

    ubvec1 = ui4_to_ubvec ( i, n );
    ubvec2 = ui4_to_ubvec ( j, n );
    ubvec3 = ubvec_or ( n, ubvec1, ubvec2 );

    k = ubvec_to_ui4 ( n, ubvec3 );

    cout << "  " << setw(8) << i
         << "  " << setw(8) << j
         << "  " << setw(8) << k << "\n";

    delete [] ubvec1;
    delete [] ubvec2;
    delete [] ubvec3;
  }

  return;
}
//****************************************************************************80

void ubvec_print_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    UBVEC_PRINT_TEST tests UBVEC_PRINT.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    26 May 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n = 10;
  int ubvec[10] = { 1, 0, 0, 1, 0, 1, 1, 1, 0, 0 };

  cout << "\n";
  cout << "UBVEC_PRINT_TEST\n";
  cout << "  UBVEC_PRINT prints an unsigned binary vector.\n";

  ubvec_print ( n, ubvec, "  UBVEC:" );

  return;
}
//****************************************************************************80

void ubvec_random_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    UBVEC_RANDOM_TEST tests UBVEC_RANDOM.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int n = 5;
  int seed;
  int *ubvec;

  cout << "\n";
  cout << "UBVEC_RANDOM_TEST\n";
  cout << "  UBVEC_RANDOM randomizes an unsigned binary vector.\n";
  cout << "\n";

  seed = 123456789;

  for ( i = 1; i <= 5; i++ )
  {
    ubvec = ubvec_random ( n, seed );
    ubvec_print ( n, ubvec, "" );
    delete [] ubvec;
  }

  return;
}
//****************************************************************************80

void ubvec_rank_gray_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    UBVEC_RANK_GRAY_TEST tests UBVEC_RANK_GRAY.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int i4;
  int n = 5;
  int rank;
  int *ubvec;

  cout << "\n";
  cout << "UBVEC_RANK_GRAY_TEST\n";
  cout << "  UBVEC_RANK_GRAY ranks a UBVEC in the Gray ordering.\n";
  cout << "\n";
  cout << "  UBVEC   Rank\n";
  cout << "\n";
 
  for ( i4 = 0; i4 < 32; i4++ )
  {
    ubvec = ui4_to_ubvec ( i4, n );
    rank = ubvec_rank_gray ( n, ubvec );
    cout << "  ";
    for ( i = 0; i < n; i++ )
    {
      cout << ubvec[i];
    }
    cout << "  " << setw(2) << rank << "\n";
    delete [] ubvec;
  }

  return;
}
//****************************************************************************80

void ubvec_reverse_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    UBVEC_REVERSE_TEST tests UBVEC_REVERSE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int j;
  int n = 5;
  int seed;
  int *ubvec1;
  int *ubvec2;

  cout << "\n";
  cout << "UBVEC_REVERSE_TEST\n";
  cout << "  UBVEC_REVERSE reverses an unsigned binary vector.\n";
  cout << "\n";
  cout << "  UBVEC  Reversed\n";
  cout << "\n";

  seed = 123456789;

  for ( i = 1; i <= 5; i++ )
  {
    ubvec1 = ubvec_random ( n, seed );
    ubvec2 = ubvec_reverse ( n, ubvec1 );
    cout << "  ";
    for ( j = 0; j < n; j++ )
    {
      cout << ubvec1[j];
    }
    cout << "  ";
    for ( j = 0; j < n; j++ )
    {
      cout << ubvec2[j];
    }
    cout << "\n";

    delete [] ubvec1;
    delete [] ubvec2;
  }

  return;
}
//****************************************************************************80

void ubvec_to_ui4_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    UBVEC_TO_UI4_TEST tests UBVEC_TO_UI4;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    19 March 2014
//
//  Author:
//
//    John Burkardt
//
{
# define N 10

  int bvec[N];
  int i;
  int j;
  int n = 10;
  int *ubvec;
  int ui1;
  int ui2;

  cout << "\n";
  cout << "UBVEC_TO_UI4_TEST\n";
  cout << "  UBVEC_TO_UI4 converts an unsigned binary vector\n";
  cout << "  to an unsigned integer;\n";
  cout << "\n";
  cout << "  I --> UBVEC  -->  I\n";
  cout << "\n";

  for ( i = 0; i <= 10; i++ )
  {
    ui1 = ( unsigned int ) ( i );
    ubvec = ui4_to_ubvec ( ui1, n );

    ui2 = ubvec_to_ui4 ( n, ubvec );

    cout << "  " << setw(3) << ui1 << "  ";
    for ( j = 0; j < n; j++ )
    {
      cout << ubvec[j];
    }
    cout << "  " << setw(3) << ui2 << "\n";

    delete [] ubvec;
  }

  return;
# undef N
}
//****************************************************************************80

void ubvec_unrank_gray_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    UBVEC_UNRANK_GRAY_TEST tests UBVEC_UNRANK_GRAY.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int n = 5;
  int rank;
  int *ubvec;

  cout << "\n";
  cout << "UBVEC_UNRANK_GRAY_TEST\n";
  cout << "  UBVEC_UNRANK_GRAY unranks a UBVEC.\n";
  cout << "\n";
  cout << "  Rank  UBVEC\n";
  cout << "\n";
 
  for ( rank = 0; rank < 32; rank++ )
  {
    ubvec = ubvec_unrank_gray ( rank, n );
    cout << "  " << setw(2) << rank << "  ";
    for ( i = 0; i < n; i++ )
    {
      cout << ubvec[i];
    }
    cout << "\n";
    delete [] ubvec;
  }

  return;
}
//****************************************************************************80

void ubvec_unrank_grlex_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    UBVEC_UNRANK_GRLEX_TEST tests UBVEC_UNRANK_GRLEX.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int n = 4;
  int rank;
  int s;
  int *ubvec;

  cout << "\n";
  cout << "UBVEC_UNRANK_GRLEX_TEST\n";
  cout << "  UBVEC_UNRANK_GRLEX returns the UBVEC of given rank\n";
  cout << "  in the graded lexicographical ordering.\n";

  s = -1;

  for ( rank = 0; rank < 16; rank++ )
  {
    ubvec = ubvec_unrank_grlex ( rank, n );
    if ( s < i4vec_sum ( n, ubvec ) )
    {
      cout << "  --  --------\n";
      s = i4vec_sum ( n, ubvec );
    }
    cout << "  " << setw(2) << rank << "  ";
    for ( i = 0; i < n; i++ )
    {
      cout << ubvec[i];
    }
    cout << "\n";
    delete [] ubvec;
  }

  return;
}
//****************************************************************************80

void ubvec_xor_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    UBVEC_XOR_TEST tests UBVEC_XOR;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int n = 10;
  int seed = 123456789;
  int test;
  int test_num = 10;
  int *ubvec1;
  int *ubvec2;
  int *ubvec3;
  int ui;
  int uj;
  int uk;

  cout << "\n";
  cout << "UBVEC_XOR_TEST\n";
  cout << "  UBVEC_XOR exclusive-ors two unsigned binary vectors \n";
  cout << "  representing unsigned integers;\n";
  cout << "\n";
  cout << "        I        J        K = I XOR J\n";
  cout << "\n";

  for ( test = 1; test <= test_num; test++ )
  { 
    ui = i4_uniform_ab ( 0, 100, seed );
    uj = i4_uniform_ab ( 0, 100, seed );
    ubvec1 = ui4_to_ubvec ( ui, n );
    ubvec2 = ui4_to_ubvec ( uj, n );
    ubvec3 = ubvec_add ( n, ubvec1, ubvec2 );
    uk = ubvec_to_ui4 ( n, ubvec3 );
    cout << "  " << setw(8) << ui
         << "  " << setw(8) << uj
         << "  " << setw(8) << uk << "\n";
    delete [] ubvec1;
    delete [] ubvec2;
    delete [] ubvec3;
  }

  return;
}
//****************************************************************************80

void ui4_rank_gray_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    UI4_RANK_GRAY_TEST tests UI4_RANK_GRAY.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int i4;
  int n = 5;
  int rank;
  int *ubvec;

  cout << "\n";
  cout << "UI4_RANK_GRAY_TEST\n";
  cout << "  UI4_RANK_GRAY ranks an unsigned I4 in the Gray ordering.\n";
  cout << "\n";
  cout << " UI4  Rank  (binary)\n";
  cout << "\n";
 
  for ( i4 = 0; i4 < 32; i4++ )
  {
    rank = ui4_rank_gray ( i4 );
    ubvec = ui4_to_ubvec ( i4, n );
    cout << "  " << setw(2) << i4
         << "  " << setw(2) << rank << "  ";
    for ( i = 0; i < n; i++ )
    {
      cout << ubvec[i];
    }
    cout << "\n";
    delete [] ubvec;
  }

  return;
}
//****************************************************************************80

void ui4_to_ubvec_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    UI4_TO_UBVEC_TEST tests UI4_TO_UBVEC;
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    19 March 2014
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int j;
  int n = 10;
  int *ubvec;
  int ui1;
  int ui2;

  cout << "\n";
  cout << "UI4_TO_UBVEC_TEST\n";
  cout << "  UI4_TO_UBVEC converts an unsigned integer to an \n";
  cout << "  unsigned binary vector;\n";
  cout << "\n";
  cout << "  I --> UBVEC  -->  I\n";
  cout << "\n";

  for ( i = 0; i <= 10; i++ )
  {
    ui1 = ( unsigned int ) ( i );
    ubvec = ui4_to_ubvec ( ui1, n );

    ui2 = ubvec_to_ui4 ( n, ubvec );

    cout << "  " << setw(3) << ui1 << "  ";
    for ( j = 0; j < n; j++ )
    {
      cout << ubvec[j];
    }
    cout << "  " << setw(3 ) << ui2 << "\n";

    delete [] ubvec;
  }

  return;
}
//****************************************************************************80

void ui4_unrank_gray_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    UI4_UNRANK_GRAY_TEST tests UI4_UNRANK_GRAY.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    02 December 2015
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int i4;
  int n = 5;
  int rank;
  int *ubvec;

  cout << "\n";
  cout << "UI4_UNRANK_GRAY_TEST\n";
  cout << "  UI4_UNRANK_GRAY unranks a Gray code.\n";
  cout << "\n";
  cout << "  Rank   I  (binary)\n";
  cout << "\n";
 
  for ( rank = 0; rank < 32; rank++ )
  {
    i4 = ui4_unrank_gray ( rank );
    ubvec = ui4_to_ubvec ( i4, n );

    cout << "  " << setw(2) << rank
         << "  " << setw(2) << i4 << "  ";
    for ( i = 0; i < n; i++ )
    {
      cout << ubvec[i];
    }
    cout << "\n";
    delete [] ubvec;
  }
  return;
}
