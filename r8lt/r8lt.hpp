//
//  I4 Utilities
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
double *r8ge_to_r8lt ( int m, int n, double a_ge[] );
//
//  Real double precision Lower Triangular, Full Storage.
//
double r8lt_det ( int n, double a[] );
double *r8lt_indicator ( int m, int n );
double *r8lt_inverse ( int n, double a[] );
double *r8lt_mm ( int n, double a[], double b[] );
double *r8lt_mtm ( int n, double a[], double b[] );
double *r8lt_mtv ( int m, int n, double a[], double x[] );
double *r8lt_mv ( int m, int n, double a[], double x[] );
void r8lt_print ( int m, int n, double a[], string title );
void r8lt_print_some ( int m, int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title );
double *r8lt_random ( int m, int n, int &seed );
double *r8lt_sl ( int n, double a[], double b[] );
double *r8lt_slt ( int n, double a[], double b[] );
double *r8lt_to_r8ge ( int m, int n, double a_lt[] );
double *r8lt_zeros ( int m, int n );
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
