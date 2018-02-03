//
//  Utilities for integers.
//
int i4_log_10 ( int i );
int i4_max ( int i1, int i2 );
int i4_min ( int i1, int i2 );
int i4_power ( int i, int j );
//
//  R8 Utilities.
//
double r8_uniform_01 ( int &seed );
//
//  Real double precision General.
//
void r8ge_print ( int m, int n, double a[], string title );
void r8ge_print_some ( int m, int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title );
double *r8ge_random ( int m, int n, int &seed );
double *r8ge_to_r8ut ( int m, int n, double a_ge[] );
//
//  Real double precision Upper Triangular.
//
double r8ut_det ( int n, double a[] );
double *r8ut_indicator ( int m, int n );
double *r8ut_inverse ( int n, double a[] );
double *r8ut_mm ( int n, double a[], double b[] );
double *r8ut_mtm ( int n, double a[], double b[] );
double *r8ut_mtv ( int m, int n, double a[], double x[] );
double *r8ut_mv ( int m, int n, double a[], double x[] );
void r8ut_print ( int m, int n, double a[], string title );
void r8ut_print_some ( int m, int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title );
double *r8ut_random ( int m, int n, int &seed );
double *r8ut_sl ( int n, double a[], double b[] );
double *r8ut_slt ( int n, double a[], double b[] );
double *r8ut_to_r8ge ( int m, int n, double a_ut[] );
double *r8ut_zeros ( int m, int n );
//
//  R8VEC utilities.
//
double *r8vec_indicator1_new ( int n );
void r8vec_print ( int n, double a[], string title );
double *r8vec_zeros_new ( int n );
//
//  Utility to print the time.
//
void timestamp ( );
