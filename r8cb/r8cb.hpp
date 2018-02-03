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
double r8cb_det ( int n, int ml, int mu, double a[] );
double *r8cb_dif2 ( int m, int n, int ml, int mu );
double *r8cb_indicator ( int m, int n, int ml, int mu );
double *r8cb_ml ( int n, int ml, int mu, double a[], double x[], int job );
double *r8cb_mtv ( int m, int n, int ml, int mu, double a[], double x[] );
double *r8cb_mv ( int m, int n, int ml, int mu, double a[], double x[] );
int r8cb_np_fa ( int n, int ml, int mu, double a[] );
double *r8cb_np_sl ( int n, int ml, int mu, double a[], double b[], int job );
void r8cb_print ( int m, int n, int ml, int mu, double a[], string title );
void r8cb_print_some ( int m, int n, int ml, int mu, double a[], int ilo, int jlo, 
  int ihi, int jhi, string title );
double *r8cb_random ( int m, int n, int ml, int mu, int &seed );
double *r8cb_to_r8vec ( int m, int n, int ml, int mu, double a[] );
double *r8cb_to_r8ge ( int m, int n, int ml, int mu, double a[] );
double *r8cb_zeros ( int n, int ml, int mu );
//
//  Real double precision General.
//
double r8ge_det ( int n, double a[], int pivot[] );
int r8ge_fa ( int n, double a[], int pivot[] );
void r8ge_print ( int m, int n, double a[], string title );
void r8ge_print_some ( int m, int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title );
//
//  Real double precision General, No Pivoting.
//
int r8ge_np_fa ( int n, double a[] );
double *r8ge_np_sl ( int n, double a[], double b[], int job );
//
//  R8VEC utilities.
//
double *r8vec_indicator1_new ( int n );
void r8vec_print ( int n, double a[], string title );
double *r8vec_to_r8cb ( int m, int n, int ml, int mu, double *x );
double *r8vec_zeros_new ( int n );
//
//  R8VEC2 Utilities.
// 
void r8vec2_print ( int n, double a1[], double a2[], string title );
//
//  Utility to print the time.
//
void timestamp ( );
