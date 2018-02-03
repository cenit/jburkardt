# include <math.h>
# include <stdbool.h>
# include <stdlib.h>
# include <stdio.h>

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
/*
  Purpose:

    MAIN is the main program for UBVEC_PRB.

  Discussion:

    UBVEC_PRB tests the UBVEC library.

  Licensing:

    This code is distributed under the GNU LGPL license. 

  Modified:

    02 December 2015

  Author:

    John Burkardt
*/
{
  timestamp ( );
  printf ( "\n" );
  printf ( "UBVEC_PRB\n" );
  printf ( "  C version\n" );
  printf ( "  Test the UBVEC library.\n" );

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
/*
  Terminate.
*/
  printf ( "\n" );
  printf ( "UBVEC_PRB\n" );
  printf ( "  Normal end of execution.\n" );
  printf ( "\n" );
  timestamp ( );

  return 0;
}
//****************************************************************************80

void i4_choose_test ( )

//****************************************************************************80
/*
  Purpose:

    I4_CHOOSE_TEST tests I4_CHOOSE.

  Licensing:

    This code is distributed under the GNU LGPL license. 

  Modified:

    27 October 2014

  Author:

    John Burkardt
*/
{
  int cnk;
  int k;
  int n;

  printf ( "\n" );
  printf ( "I4_CHOOSE_TEST\n" );
  printf ( "  I4_CHOOSE evaluates C(N,K).\n" );
  printf ( "\n" );
  printf ( "       N       K     CNK\n" );

  for ( n = 0; n <= 4; n++ )
  {
    printf ( "\n" );
    for ( k = 0; k <= n; k++ )
    {
      cnk = i4_choose ( n, k );

      printf ( "  %6d  %6d  %6d\n", n, k, cnk );
    }
  }

  return;
}
//****************************************************************************80

void i4_uniform_ab_test ( )

//****************************************************************************80
/*
  Purpose:

    I4_UNIFORM_TEST tests I4_UNIFORM_AB.

  Licensing:

    This code is distributed under the GNU LGPL license. 

  Modified:

    27 October 2014

  Author:

    John Burkardt
*/
{
  int a = -100;
  int b = 200;
  int i;
  int j;
  int seed = 123456789;

  printf ( "\n" );
  printf ( "I4_UNIFORM_TEST\n" );
  printf ( "  I4_UNIFORM_AB computes pseudorandom values\n" );
  printf ( "  in an interval [A,B].\n" );

  printf ( "\n" );
  printf ( "  The lower endpoint A = %d\n", a );
  printf ( "  The upper endpoint B = %d\n", b );
  printf ( "  The initial seed is %d\n", seed );
  printf ( "\n" );

  for ( i = 1; i <= 20; i++ )
  {
    j = i4_uniform_ab ( a, b, &seed );
    printf ( "  %8d  %d\n", i, j );
  }

  return;
}
//****************************************************************************80

void ksubset_enum_test ( )

//****************************************************************************80
/*
  Purpose:

    KSUBSET_ENUM_TEST tests KSUBSET_ENUM.

  Licensing:

    This code is distributed under the GNU LGPL license.

  Modified:

    27 November 2015

  Author:

    John Burkardt
*/
{
  int k;
  int n;

  printf ( "\n" );
  printf ( "KSUBSET_ENUM_TEST\n" );
  printf ( "  KSUBSET_ENUM enumerates K subsets of an N set.\n" );
  printf ( "\n" );
  printf ( "      N:      0       1       2       3       4       5\n" );
  printf ( "   M\n" );

  for ( n = 0; n <= 10; n++ )
  {
    printf ( "  %2d:  ", n );
    for ( k = 0; k <= i4_min ( 5, n ); k++ )
    {
      printf ( "  %6d", ksubset_enum ( k, n ) );
    }
    printf ( "\n" );
  }

  return;
}
//****************************************************************************80

void ksubset_colex_unrank_test ( )

//****************************************************************************80
/*
  Purpose:

    KSUBSET_COLEX_UNRANK_TEST tests KSUBSET_COLEX_UNRANK.

  Licensing:

    This code is distributed under the GNU LGPL license.

  Modified:

    29 November 2015

  Author:

    John Burkardt
*/
{
  int k;
  int n;
  int rank;
  int *t;

  printf ( "\n" );
  printf ( "KSUBSET_COLEX_UNRANK_TEST\n" );
  printf ( "  KSUBSET_COLEX_UNRANK unranks\n" );
  printf ( "  K-subsets of an N set,\n" );
  printf ( "  using the colexicographic ordering:\n" );

  rank = 5;
  k = 3;
  n = 5;

  t = ksubset_colex_unrank ( rank, k, n );

  printf ( "\n" );
  printf ( "  The element of rank %d\n", rank );
  printf ( "\n" );
  i4vec_transpose_print ( k, t, "" );

  free ( t );

  return;
}
//****************************************************************************80

void morse_thue_test ( )

//****************************************************************************80
/*
  Purpose:

    MORSE_THUE_TEST tests MORSE_THUE.

  Licensing:

    This code is distributed under the GNU LGPL license. 

  Modified:

    10 March 2014

  Author:

    John Burkardt
*/
{
# define N 100

  unsigned int i;
  int ihi;
  int ilo;
  int s[N+1];

  printf ( "\n" );
  printf ( "MORSE_THUE_TEST\n" );
  printf ( "  MORSE_THUE computes the Morse-Thue numbers.\n" );
  printf ( "\n" );

  for ( i = 0; i <= N; i++ )
  {
    s[i] = morse_thue ( i );
  }

  for ( ilo = 0; ilo <= N; ilo = ilo + 10 )
  {
    printf ( "  " );
    ihi = i4_min ( ilo + 9, N );
    for ( i = ilo; i <= ihi; i++ )
    {
      printf ( "%d", s[i] );
    }
    printf ( "\n" );
  }

  return;
# undef N
}
//****************************************************************************80

void nim_sum_test ( )

//****************************************************************************80
/*
  Purpose:

    NIM_SUM_TEST tests NIM_SUM.

  Licensing:

    This code is distributed under the GNU LGPL license. 

  Modified:

    10 March 2014

  Author:

    John Burkardt
*/
{
  int i;
  int ihi = 1000;
  int ilo = 0;
  int n = 32;
  int seed;
  int *ubvec1;
  int *ubvec2;
  int *ubvec3;
  unsigned int ui1;
  unsigned int ui2;
  unsigned int ui3;

  printf ( "\n" );
  printf ( "NIM_SUM_TEST\n" );
  printf ( "  NIM_SUM computes the Nim sum of two integers.\n" );
  printf ( "\n" );
  printf ( "    I    J    Nim(I+J)\n" );
  printf ( "\n" );

  seed = 123456789;

  for ( i = 1; i <= 5; i++ )
  {
    ui1 = ( unsigned int ) i4_uniform_ab ( ilo, ihi, &seed );
    ubvec1 = ui4_to_ubvec ( ui1, n );

    ui2 = ( unsigned int ) i4_uniform_ab ( ilo, ihi, &seed );
    ubvec2 = ui4_to_ubvec ( ui2, n );

    ui3 = nim_sum ( ui1, ui2 );
    ubvec3 = ui4_to_ubvec ( ui3, n );

    printf ( "\n" );
    printf ( "  UI1, UI2, UI3 in decimal:\n" );
    printf ( "\n" );

    printf ( "  %5d", ui1 );
    printf ( "  %5d", ui2 );
    printf ( "  %5d", ui3 );

    printf ( "\n" );
    printf ( "  I1, I2, I3 in binary:\n" );
    printf ( "\n" );

    ubvec_print ( n, ubvec1, "" );
    ubvec_print ( n, ubvec2, "" );
    ubvec_print ( n, ubvec3, "" );

    free ( ubvec1 );
    free ( ubvec2 );
    free ( ubvec3 );
  }

  return;
}
//****************************************************************************80

void ubvec_add_test ( )

//****************************************************************************80
/*
  Purpose:

    UBVEC_ADD_TEST tests UBVEC_ADD;

  Licensing:

    This code is distributed under the GNU LGPL license. 

  Modified:

    19 March 2014

  Author:

    John Burkardt
*/
{
  int n = 10;
  int seed = 123456789;
  int test;
  int *ubvec1;
  int *ubvec2;
  int *ubvec3;
  unsigned int ui;
  unsigned int uj;
  unsigned int uk;

  printf ( "\n" );
  printf ( "UBVEC_ADD_TEST\n" );
  printf ( "  UBVEC_ADD adds unsigned binary vectors \n" );
  printf ( "  representing unsigned integers;\n" );
  printf ( "\n" );
  printf ( "        I        J        K = I + J\n" );
  printf ( "\n" );

  for ( test = 1; test <= 10; test++ )
  { 
    ui = i4_uniform_ab ( 0, 100, &seed );
    uj = i4_uniform_ab ( 0, 100, &seed );

    printf ( "\n" );
    printf ( "  %8d  %8d\n", ui, uj );

    uk = ui + uj;

    printf ( "  Directly:           %8d\n", uk );

    ubvec1 = ui4_to_ubvec ( ui, n );
    ubvec2 = ui4_to_ubvec ( uj, n );

    ubvec3 = ubvec_add ( n, ubvec1, ubvec2 );
    uk = ubvec_to_ui4 ( n, ubvec3 );

    printf ( "  UBVEC_ADD           %8d\n", uk );

    free ( ubvec1 );
    free ( ubvec2 );
    free ( ubvec3 );
  }

  return;
}
//****************************************************************************80

void ubvec_and_test ( )

//****************************************************************************80
/*
  Purpose:

    UBVEC_AND_TEST tests UBVEC_AND;

  Licensing:

    This code is distributed under the GNU LGPL license. 

  Modified:

    02 December 2015

  Author:

    John Burkardt
*/
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

  printf ( "\n" );
  printf ( "UBVEC_AND_TEST\n" );
  printf ( "  UBVEC_AND computes the AND of two\n" );
  printf ( "  unsigned binary vectors representing unsigned integers;\n" );
  printf ( "\n" );
  printf ( "        I        J        K = I AND J\n" );
  printf ( "\n" );

  seed = 123456789;
  n = 10;

  for ( test = 1; test <= 10; test++ )
  {
    i = i4_uniform_ab ( 0, 100, &seed );
    j = i4_uniform_ab ( 0, 100, &seed );

    ubvec1 = ui4_to_ubvec ( i, n );
    ubvec2 = ui4_to_ubvec ( j, n );
    ubvec3 = ubvec_and ( n, ubvec1, ubvec2 );

    k = ubvec_to_ui4 ( n, ubvec3 );

    printf ( "  %8d  %8d  %8d\n", i, j, k );

    free ( ubvec1 );
    free ( ubvec2 );
    free ( ubvec3 );
  }

  return;
}
//****************************************************************************80

void ubvec_complement1_test ( )

//****************************************************************************80
/*
  Purpose:

    UBVEC_COMPLEMENT1_TEST tests UBVEC_COMPLEMENT1.

  Licensing:

    This code is distributed under the GNU LGPL license. 

  Modified:

    02 December 2015

  Author:

    John Burkardt
*/
{
  int i; 
  int j;
  int n = 5;
  int seed;
  int *ubvec1;
  int *ubvec2;

  printf ( "\n" );
  printf ( "UBVEC_COMPLEMENT1_TEST\n" );
  printf ( "  UBVEC_COMPLEMENT1 returns the 1's complement\n" );
  printf ( "  of an unsigned binary vector.\n" );
  printf ( "\n" );
  printf ( "  UBVEC  Comp1\n" );
  printf ( "\n" );

  seed = 123456789;

  for ( i = 1; i <= 5; i++ )
  {
    ubvec1 = ubvec_random ( n, &seed );
    ubvec2 = ubvec_complement1 ( n, ubvec1 );
    printf ( "  " );
    for ( j = 0; j < n; j++ )
    {
      printf ( "%d", ubvec1[j] );
    }
    printf ( "  " );
    for ( j = 0; j < n; j++ )
    {
      printf ( "%d", ubvec2[j] );
    }
    printf ( "\n" );
    free ( ubvec1 );
    free ( ubvec2 );
  }

  return;
}
//****************************************************************************80

void ubvec_enum_test ( )

//****************************************************************************80
/*
  Purpose:

    UBVEC_ENUM_TEST tests UBVEC_ENUM.

  Licensing:

    This code is distributed under the GNU LGPL license. 

  Modified:

    02 December 2015

  Author:

    John Burkardt
*/
{
  int n;
  int n2;

  printf ( "\n" );
  printf ( "UBVEC_ENUM_TEST\n" );
  printf ( "  UBVEC_ENUM enumerates unsigned binary vectors\n" );
  printf ( "  of N digits\n" );
  printf ( "\n" );
  printf ( "   N      Number\n" );
  printf ( "\n" );

  for ( n = 0; n <= 10; n++ )
  {
    n2 = ubvec_enum ( n );
    printf ( "  %2d  %8d\n", n, n2 );
  }

  return;
}
//****************************************************************************80

void ubvec_next_test ( )

//****************************************************************************80
/*
  Purpose:

    UBVEC_NEXT_TEST tests UBVEC_NEXT.

  Licensing:

    This code is distributed under the GNU LGPL license. 

  Modified:

    02 December 2015

  Author:

    John Burkardt
*/
{
  int i;
  int n = 4;
  int *ubvec;

  printf ( "\n" );
  printf ( "UBVEC_NEXT_TEST\n" );
  printf ( "  UBVEC_NEXT computes the next unsigned binary vector.\n" );
  printf ( "\n" );

  ubvec = ( int * ) malloc ( n * sizeof ( int ) );

  for ( i = 0; i < n; i++ )
  {
    ubvec[i] = 0;
  }

  for ( i = 0; i < 16; i++ )
  {
    ubvec_print ( n, ubvec, "" );
    ubvec_next ( n, ubvec );
  }

  free ( ubvec );

  return;
}
//****************************************************************************80

void ubvec_next_gray_test ( )

//****************************************************************************80
/*
  Purpose:

    UBVEC_NEXT_GRAY_TEST tests UBVEC_NEXT_GRAY.

  Licensing:

    This code is distributed under the GNU LGPL license. 

  Modified:

    02 December 2015

  Author:

    John Burkardt
*/
{
  int i;
  int k;
  int n = 4;
  int *ubvec;

  printf ( "\n" );
  printf ( "UBVEC_NEXT_GRAY_TEST\n" );
  printf ( "  UBVEC_NEXT_GRAY returns the next UBVEC in the Gray code.\n" );

  printf ( "\n" );
  printf ( "   K  UBVEC\n" );
  printf ( "\n" );

  k = 0;

  ubvec = ( int * ) malloc ( n * sizeof ( int ) );

  for ( i = 0; i < n; i++ )
  {
    ubvec[i] = 0;
  }

  for ( ; ; )
  {
   
    printf ( "  %2d:  ", i );
    for ( i = 0; i < n; i++ )
    {
      printf ( "%d", ubvec[i] );
    }
    printf ( "\n" );

    k = k + 1;
    ubvec_next_gray ( n, ubvec );

    if ( i4vec_sum ( n, ubvec ) == 0 )
    {
      break;
    } 
  }

  free ( ubvec );

  return;
}
//****************************************************************************80

void ubvec_next_grlex_test ( )

//****************************************************************************80
/*
  Purpose:

    UBVEC_NEXT_GRLEX_TEST tests UBVEC_NEXT_GRLEX.

  Licensing:

    This code is distributed under the GNU LGPL license. 

  Modified:

    02 December 2015

  Author:

    John Burkardt
*/
{
  int i;
  int j;
  int n = 4;
  int *ubvec;

  printf ( "\n" );
  printf ( "UBVEC_NEXT_GRLEX_TEST\n" );
  printf ( "  UBVEC_NEXT_GRLEX computes unsigned binary vectors in GRLEX order.\n" );
  printf ( "\n" );

  ubvec = ( int * ) malloc ( n * sizeof ( int ) );

  for ( i = 0; i < n; i++ )
  {
    ubvec[i] = 0;
  }

  for ( i = 0; i <= 16; i++ )
  {
    printf ( "  %2d:  ", i );
    for ( j = 0; j < n; j++ )
    {
      printf ( "%d", ubvec[j] );
    }
    printf ( "\n" );
    ubvec_next_grlex ( n, ubvec );
  }

  free ( ubvec );

  return;
}
//****************************************************************************80

void ubvec_or_test ( )

//****************************************************************************80
/*
  Purpose:

    UBVEC_OR_TEST tests UBVEC_OR;

  Licensing:

    This code is distributed under the GNU LGPL license. 

  Modified:

    02 December 2015

  Author:

    John Burkardt
*/
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

  printf ( "\n" );
  printf ( "UBVEC_OR_TEST\n" );
  printf ( "  UBVEC_OR computes the OR of two\n" );
  printf ( "  unsigned binary vectors representing unsigned integers;\n" );
  printf ( "\n" );
  printf ( "        I        J        K = I OR J\n" );
  printf ( "\n" );

  for ( test = 1; test <= 10; test++ )
  { 
    i = i4_uniform_ab ( 0, 100, &seed );
    j = i4_uniform_ab ( 0, 100, &seed );

    ubvec1 = ui4_to_ubvec ( i, n );
    ubvec2 = ui4_to_ubvec ( j, n );
    ubvec3 = ubvec_or ( n, ubvec1, ubvec2 );

    k = ubvec_to_ui4 ( n, ubvec3 );

    printf ( "  %8d  %8d  %8d\n", i, j, k );

    free ( ubvec1 );
    free ( ubvec2 );
    free ( ubvec3 );
  }

  return;
}
//****************************************************************************80

void ubvec_print_test ( )

//****************************************************************************80
/*
  Purpose:

    UBVEC_PRINT_TEST tests UBVEC_PRINT.

  Licensing:

    This code is distributed under the GNU LGPL license. 

  Modified:

    26 May 2015

  Author:

    John Burkardt
*/
{
  int n = 10;
  unsigned int ubvec[10] = { 1, 0, 0, 1, 0, 1, 1, 1, 0, 0 };

  printf ( "\n" );
  printf ( "UBVEC_PRINT_TEST\n" );
  printf ( "  UBVEC_PRINT prints an unsigned binary vector.\n" );

  ubvec_print ( n, ubvec, "  UBVEC:" );

  return;
}
//****************************************************************************80

void ubvec_random_test ( )

//****************************************************************************80
/*
  Purpose:

    UBVEC_RANDOM_TEST tests UBVEC_RANDOM.

  Licensing:

    This code is distributed under the GNU LGPL license. 

  Modified:

    02 December 2015

  Author:

    John Burkardt
*/
{
  int i;
  int n = 5;
  int seed;
  int *ubvec;

  printf ( "\n" );
  printf ( "UBVEC_RANDOM_TEST\n" );
  printf ( "  UBVEC_RANDOM randomizes an unsigned binary vector.\n" );
  printf ( "\n" );

  seed = 123456789;

  for ( i = 1; i <= 5; i++ )
  {
    ubvec = ubvec_random ( n, &seed );
    ubvec_print ( n, ubvec, "" );
    free ( ubvec );
  }

  return;
}
//****************************************************************************80

void ubvec_rank_gray_test ( )

//****************************************************************************80
/*
  Purpose:

    UBVEC_RANK_GRAY_TEST tests UBVEC_RANK_GRAY.

  Licensing:

    This code is distributed under the GNU LGPL license. 

  Modified:

    02 December 2015

  Author:

    John Burkardt
*/
{
  int i;
  int i4;
  int n = 5;
  int rank;
  int *ubvec;

  printf ( "\n" );
  printf ( "UBVEC_RANK_GRAY_TEST\n" );
  printf ( "  UBVEC_RANK_GRAY ranks a UBVEC in the Gray ordering.\n" );
  printf ( "\n" );
  printf ( "  UBVEC   Rank\n" );
  printf ( "\n" );
 
  for ( i4 = 0; i4 < 32; i4++ )
  {
    ubvec = ui4_to_ubvec ( i4, n );
    rank = ubvec_rank_gray ( n, ubvec );
    printf ( "  " );
    for ( i = 0; i < n; i++ )
    {
      printf ( "%d", ubvec[i] );
    }
    printf ( "  %2d\n", rank );
    free ( ubvec );
  }

  return;
}
//****************************************************************************80

void ubvec_reverse_test ( )

//****************************************************************************80
/*
  Purpose:

    UBVEC_REVERSE_TEST tests UBVEC_REVERSE.

  Licensing:

    This code is distributed under the GNU LGPL license. 

  Modified:

    02 December 2015

  Author:

    John Burkardt
*/
{
  int i;
  int j;
  int n = 5;
  int seed;
  int *ubvec1;
  int *ubvec2;

  printf ( "\n" );
  printf ( "UBVEC_REVERSE_TEST\n" );
  printf ( "  UBVEC_REVERSE reverses an unsigned binary vector.\n" );
  printf ( "\n" );
  printf ( "  UBVEC  Reversed\n" );
  printf ( "\n" );

  seed = 123456789;

  for ( i = 1; i <= 5; i++ )
  {
    ubvec1 = ubvec_random ( n, &seed );
    ubvec2 = ubvec_reverse ( n, ubvec1 );
    printf ( "  " );
    for ( j = 0; j < n; j++ )
    {
      printf ( "%d", ubvec1[j] );
    }
    printf ( "  " );
    for ( j = 0; j < n; j++ )
    {
      printf ( "%d", ubvec2[j] );
    }
    printf ( "\n" );
    free ( ubvec1 );
    free ( ubvec2 );
  }

  return;
}
//****************************************************************************80

void ubvec_to_ui4_test ( )

//****************************************************************************80
/*
  Purpose:

    UBVEC_TO_UI4_TEST tests UBVEC_TO_UI4;

  Licensing:

    This code is distributed under the GNU LGPL license. 

  Modified:

    19 March 2014

  Author:

    John Burkardt
*/
{
# define N 10

  int bvec[N];
  int i;
  int j;
  int n = 10;
  int *ubvec;
  unsigned int ui1;
  unsigned int ui2;

  printf ( "\n" );
  printf ( "UBVEC_TO_UI4_TEST\n" );
  printf ( "  UBVEC_TO_UI4 converts an unsigned binary vector\n" );
  printf ( "  to an unsigned integer;\n" );
  printf ( "\n" );
  printf ( "  I --> UBVEC  -->  I\n" );
  printf ( "\n" );

  for ( i = 0; i <= 10; i++ )
  {
    ui1 = ( unsigned int ) ( i );
    ubvec = ui4_to_ubvec ( ui1, n );

    ui2 = ubvec_to_ui4 ( n, ubvec );

    printf ( "%3d  ", ui1 );
    for ( j = 0; j < n; j++ )
    {
      printf ( "%d", ubvec[j] );
    }
    printf ( "  " );
    printf ( "%3d\n", ui2 );

    free ( ubvec );
  }

  return;
# undef N
}
//****************************************************************************80

void ubvec_unrank_gray_test ( )

//****************************************************************************80
/*
  Purpose:

    UBVEC_UNRANK_GRAY_TEST tests UBVEC_UNRANK_GRAY.

  Licensing:

    This code is distributed under the GNU LGPL license. 

  Modified:

    02 December 2015

  Author:

    John Burkardt
*/
{
  int i;
  int n = 5;
  int rank;
  int *ubvec;

  printf ( "\n" );
  printf ( "UBVEC_UNRANK_GRAY_TEST\n" );
  printf ( "  UBVEC_UNRANK_GRAY unranks a UBVEC.\n" );
  printf ( "\n" );
  printf ( "  Rank  UBVEC\n" );
  printf ( "\n" );
 
  for ( rank = 0; rank < 32; rank++ )
  {
    ubvec = ubvec_unrank_gray ( rank, n );
    printf ( "  %2d  ", rank );
    for ( i = 0; i < n; i++ )
    {
      printf ( "%d", ubvec[i] );
    }
    printf ( "\n" );
    free ( ubvec );
  }

  return;
}
//****************************************************************************80

void ubvec_unrank_grlex_test ( )

//****************************************************************************80
/*
  Purpose:

    UBVEC_UNRANK_GRLEX_TEST tests UBVEC_UNRANK_GRLEX.

  Licensing:

    This code is distributed under the GNU LGPL license. 

  Modified:

    02 December 2015

  Author:

    John Burkardt
*/
{
  int i;
  int n = 4;
  int rank;
  int s;
  int *ubvec;

  printf ( "\n" );
  printf ( "UBVEC_UNRANK_GRLEX_TEST\n" );
  printf ( "  UBVEC_UNRANK_GRLEX returns the UBVEC of given rank\n" );
  printf ( "  in the graded lexicographical ordering.\n" );

  s = -1;

  for ( rank = 0; rank < 16; rank++ )
  {
    ubvec = ubvec_unrank_grlex ( rank, n );
    if ( s < i4vec_sum ( n, ubvec ) )
    {
      printf ( "  --  --------\n" );
      s = i4vec_sum ( n, ubvec );
    }
    printf ( "  %2d  ", rank );
    for ( i = 0; i < n; i++ )
    {
      printf ( "%d", ubvec[i] );
    }
    printf ( "\n" );
    free ( ubvec );
  }

  return;
}
//****************************************************************************80

void ubvec_xor_test ( )

//****************************************************************************80
/*
  Purpose:

    UBVEC_XOR_TEST tests UBVEC_XOR;

  Licensing:

    This code is distributed under the GNU LGPL license. 

  Modified:

    02 December 2015

  Author:

    John Burkardt
*/
{
  int n = 10;
  int seed = 123456789;
  int test;
  int test_num = 10;
  int *ubvec1;
  int *ubvec2;
  int *ubvec3;
  unsigned int ui;
  unsigned int uj;
  unsigned int uk;

  printf ( "\n" );
  printf ( "UBVEC_XOR_TEST\n" );
  printf ( "  UBVEC_XOR exclusive-ors two unsigned binary vectors \n" );
  printf ( "  representing unsigned integers;\n" );
  printf ( "\n" );
  printf ( "        I        J        K = I XOR J\n" );
  printf ( "\n" );

  for ( test = 1; test <= test_num; test++ )
  { 
    ui = i4_uniform_ab ( 0, 100, &seed );
    uj = i4_uniform_ab ( 0, 100, &seed );
    ubvec1 = ui4_to_ubvec ( ui, n );
    ubvec2 = ui4_to_ubvec ( uj, n );
    ubvec3 = ubvec_add ( n, ubvec1, ubvec2 );
    uk = ubvec_to_ui4 ( n, ubvec3 );
    printf ( "  %8d  %8d  %8d\n", ui, uj, uk );
    free ( ubvec1 );
    free ( ubvec2 );
    free ( ubvec3 );
  }

  return;
}
//****************************************************************************80

void ui4_rank_gray_test ( )

//****************************************************************************80
/*
  Purpose:

    UI4_RANK_GRAY_TEST tests UI4_RANK_GRAY.

  Licensing:

    This code is distributed under the GNU LGPL license. 

  Modified:

    02 December 2015

  Author:

    John Burkardt
*/
{
  int i;
  int i4;
  int n = 5;
  int rank;
  int *ubvec;

  printf ( "\n" );
  printf ( "UI4_RANK_GRAY_TEST\n" );
  printf ( "  UI4_RANK_GRAY ranks an unsigned I4 in the Gray ordering.\n" );
  printf ( "\n" );
  printf ( " UI4  Rank  (binary)\n" );
  printf ( "\n" );
 
  for ( i4 = 0; i4 < 32; i4++ )
  {
    rank = ui4_rank_gray ( i4 );
    ubvec = ui4_to_ubvec ( i4, n );
    printf ( "  %2d    %2d  ", i4, rank );
    for ( i = 0; i < n; i++ )
    {
      printf ( "%d", ubvec[i] );
    }
    printf ( "\n" );
    free ( ubvec );
  }

  return;
}
//****************************************************************************80

void ui4_to_ubvec_test ( )

//****************************************************************************80
/*
  Purpose:

    UI4_TO_UBVEC_TEST tests UI4_TO_UBVEC;

  Licensing:

    This code is distributed under the GNU LGPL license. 

  Modified:

    19 March 2014

  Author:

    John Burkardt
*/
{
  int i;
  int j;
  int n = 10;
  int *ubvec;
  unsigned int ui1;
  unsigned int ui2;

  printf ( "\n" );
  printf ( "UI4_TO_UBVEC_TEST\n" );
  printf ( "  UI4_TO_UBVEC converts an unsigned integer to an \n" );
  printf ( "  unsigned binary vector;\n" );
  printf ( "\n" );
  printf ( "  I --> UBVEC  -->  I\n" );
  printf ( "\n" );

  for ( i = 0; i <= 10; i++ )
  {
    ui1 = ( unsigned int ) ( i );
    ubvec = ui4_to_ubvec ( ui1, n );

    ui2 = ubvec_to_ui4 ( n, ubvec );

    printf ( "%3d  ", ui1 );
    for ( j = 0; j < n; j++ )
    {
      printf ( "%d", ubvec[j] );
    }
    printf ( "  " );
    printf ( "%3d\n", ui2 );

    free ( ubvec );
  }

  return;
}
//****************************************************************************80

void ui4_unrank_gray_test ( )

//****************************************************************************80
/*
  Purpose:

    UI4_UNRANK_GRAY_TEST tests UI4_UNRANK_GRAY.

  Licensing:

    This code is distributed under the GNU LGPL license. 

  Modified:

    02 December 2015

  Author:

    John Burkardt
*/
{
  int i;
  int i4;
  int n = 5;
  int rank;
  int *ubvec;

  printf ( "\n" );
  printf ( "UI4_UNRANK_GRAY_TEST\n" );
  printf ( "  UI4_UNRANK_GRAY unranks a Gray code.\n" );
  printf ( "\n" );
  printf ( "  Rank   I  (binary)\n" );
  printf ( "\n" );
 
  for ( rank = 0; rank < 32; rank++ )
  {
    i4 = ui4_unrank_gray ( rank );
    ubvec = ui4_to_ubvec ( i4, n );

    printf ( "  %2d    %2d  ", rank, i4 );
    for ( i = 0; i < n; i++ )
    {
      printf ( "%d", ubvec[i] );
    }
    printf ( "\n" );
    free ( ubvec );
  }
  return;
}
