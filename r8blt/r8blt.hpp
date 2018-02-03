//
//  I4 Utilities.
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
//  Real double precision Banded Lower Triangular.
//
double r8blt_det ( int n, int ml, double a[] );
double *r8blt_indicator ( int n, int ml );
double *r8blt_mtv ( int n, int ml, double a[], double x[] );
double *r8blt_mv ( int n, int ml, double a[], double x[] );
void r8blt_print ( int n, int ml, double a[], string title );
void r8blt_print_some ( int n, int ml, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title );
double *r8blt_random ( int n, int ml, int &seed );
double *r8blt_sl ( int n, int ml, double a[], double b[] );
double *r8blt_slt ( int n, int ml, double a[], double b[] );
double *r8blt_to_r8ge ( int n, int ml, double a[] );
double *r8blt_zeros ( int n, int ml );
//
//  Real double precision General.
//
void r8ge_print ( int m, int n, double a[], string title );
void r8ge_print_some ( int m, int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title );
//
//  R8VEC utilities.
//
double *r8vec_indicator1_new ( int n );
void r8vec_print ( int n, double a[], string title );
double *r8vec_uniform_01_new ( int n, int &seed );
double *r8vec_zeros_new ( int n );
//
//  Utility to print the time.
//
void timestamp ( );
