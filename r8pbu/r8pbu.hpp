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
double r8_max ( double x, double y );
double r8_uniform_01 ( int &seed );
//
//  Real double precision General.
//
double r8ge_det ( int n, double a[], int pivot[] );
int r8ge_fa ( int n, double a[], int pivot[] );
void r8ge_print ( int m, int n, double a[], string title );
void r8ge_print_some ( int m, int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title );
//
//  Real double precision Positive Definite Symmetric Band, Upper.
//
double *r8pbu_cg ( int n, int mu, double a[], double b[], double xinit[] );
double r8pbu_det ( int n, int mu, double a[] );
double *r8pbu_dif2 ( int m, int n, int mu );
double *r8pbu_fa ( int n, int mu, double a[] );
double *r8pbu_indicator ( int n, int mu );
double *r8pbu_ml ( int n, int mu, double a[], double x[] );
double *r8pbu_mv ( int m, int n, int mu, double a[], double x[] );
void r8pbu_print ( int n, int mu, double a[], string title );
void r8pbu_print_some ( int n, int mu, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title );
double *r8pbu_random ( int n, int mu, int &seed );
double *r8pbu_res ( int m, int n, int mu, double a[], double x[], double b[] );
double *r8pbu_sl ( int n, int mu, double a[], double b[] );
double *r8pbu_sor ( int n, int mu, double a[], double b[], double eps, int itchk, 
  int itmax, double omega, double x_init[] );
double *r8pbu_to_r8ge ( int n, int mu, double a[] );
double *r8pbu_zeros ( int n, int mu );
//
//  R8VEC utilities.
//
double *r8vec_indicator1_new ( int n );
void r8vec_print ( int n, double a[], string title );
void r8vec_print_some ( int n, double a[], int max_print, string title );
double *r8vec_uniform_01_new ( int n, int &seed );
double *r8vec_zeros_new ( int n );
//
//  R8VEC2 Utilities.
//
void r8vec2_print_some ( int n, double x1[], double x2[], int max_print, 
  string title );
//
//  Utility to print the time.
//
void timestamp ( );
