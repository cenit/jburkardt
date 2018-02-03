//
//  I4 Utilities.
//
int i4_log_10 ( int i );
int i4_max ( int i1, int i2 );
int i4_min ( int i1, int i2 );
int i4_power ( int i, int j );
int i4_uniform_ab ( int a, int b, int &seed );
//
//  R8 Utilities.
//
double r8_uniform_01 ( int &seed );
//
//  Real double precision Compact Banded.
//
int r8cb_np_fa ( int n, int ml, int mu, double a[] );
double *r8cb_np_sl ( int n, int ml, int mu, double a[], double b[], int job );
double *r8cb_to_r8vec ( int m, int n, int ml, int mu, double *a );
//
//  Real double precision Compact Border Banded.
//
void r8cbb_add ( int n1, int n2, int ml, int mu, double a[], int i, int j, 
  double value );
double *r8cbb_dif2 ( int n1, int n2, int ml, int mu );
int r8cbb_fa ( int n1, int n2, int ml, int mu, double a[] );
double r8cbb_get ( int n1, int n2, int ml, int mu, double a[], int i, int j );
double *r8cbb_indicator ( int n1, int n2, int ml, int mu );
double *r8cbb_mtv ( int n1, int n2, int ml, int mu, double a[], double x[] );
double *r8cbb_mv ( int n1, int n2, int ml, int mu, double a[], double x[] );
void r8cbb_print ( int n1, int n2, int ml, int mu, double a[], string title );
void r8cbb_print_some ( int n1, int n2, int ml, int mu, double a[], int ilo, 
  int jlo, int ihi, int jhi, string title );
double *r8cbb_random ( int n1, int n2, int ml, int mu, int &seed );
void r8cbb_set ( int n1, int n2, int ml, int mu, double a[], int i, int j, 
  double value );
double *r8cbb_sl ( int n1, int n2, int ml, int mu, double a[], double b[] );
double *r8cbb_to_r8ge ( int n1, int n2, int ml, int mu, double a[] );
double *r8cbb_zeros ( int n1, int n2, int ml, int mu );
//
//  Real double precision General.
//
int r8ge_np_fa ( int n, double a[] );
double *r8ge_np_sl ( int n, double a[], double b[], int job );
void r8ge_print ( int m, int n, double a[], string title );
void r8ge_print_some ( int m, int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title );
//
//  R8VEC utilities.
//
double *r8vec_indicator1_new ( int n );
void r8vec_print ( int n, double a[], string title );
double *r8vec_to_r8cb ( int m, int n, int ml, int mu, double *x );
double *r8vec_zeros_new ( int n );
//
//  Utility to print the time.
//
void timestamp ( );
