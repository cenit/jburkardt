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
double *r8ge_to_r8po ( int n, double a[] );
//
//  Real double precision Positive Definite Symmetric.
//
double r8po_det ( int n, double a[] );
double *r8po_dif2 ( int n );
double *r8po_fa ( int n, double a[] );
double *r8po_indicator ( int n );
double *r8po_inverse ( int n, double a[] );
double *r8po_ml ( int n, double a[], double x[] );
double *r8po_mm ( int n, double a[], double b[] );
double *r8po_mv ( int n, double a[], double x[] );
void r8po_print ( int n, double a[], string title );
void r8po_print_some ( int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title );
double *r8po_random ( int n, int &seed );
double *r8po_sl ( int n, double a[], double b[] );
double *r8po_to_r8ge ( int n, double a[] );
double *r8po_zeros ( int n );
//
//  Real double precision Upper Triangular.
//
void r8ut_print ( int m, int n, double a[], string title );
void r8ut_print_some ( int m, int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title );
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
