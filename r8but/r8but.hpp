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
//  Real double precision Banded Upper Triangular.
//
double r8but_det ( int n, int mu, double a[] );
double *r8but_indicator ( int n, int mu );
double *r8but_mtv ( int n, int mu, double a[], double x[] );
double *r8but_mv ( int n, int mu, double a[], double x[] );
void r8but_print ( int n, int mu, double a[], string title );
void r8but_print_some ( int n, int mu, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title );
double *r8but_random ( int n, int mu, int &seed );
double *r8but_sl ( int n, int mu, double a[], double b[] );
double *r8but_slt ( int n, int mu, double a[], double b[] );
double *r8but_to_r8ge ( int n, int mu, double a[] );
double *r8but_zeros ( int n, int mu );
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
