//
//  I4 Utilities.
//
int i4_log_10 ( int i );
int i4_max ( int i1, int i2 );
int i4_min ( int i1, int i2 );
int i4_power ( int i, int j );
//
//  Real double precision Tridiagonal No Pivoting.
//
int r83_np_fa ( int n, double a[] );
double *r83_np_ml ( int n, double a[], double x[], int job );
double *r83_np_sl ( int n, double a[], double b[], int job );
//
//  Real double precision Tridiagonal Periodic.
//
double r83p_det ( int n, double a[], double work4 );
int r83p_fa ( int n, double a[], double work2[], double work3[], double *work4 );
double *r83p_indicator ( int n );
double *r83p_ml ( int n, double a[], double x[], int job );
double *r83p_mtv ( int n, double a[], double x[] );
double *r83p_mv ( int n, double a[], double x[] );
void r83p_print ( int n, double a[], string title );
void r83p_print_some ( int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title );
double *r83p_random ( int n, int &seed );
double *r83p_sl ( int n, double a[], double b[], int job, double work2[], 
  double work3[], double work4 );
double *r83p_to_r8ge ( int n, double a[] );
double *r83p_zeros ( int n );
//
//  Real double precision General.
//
double r8ge_det ( int n, double a[], int pivot[] );
int r8ge_fa ( int n, double a[], int pivot[] );
void r8ge_print ( int m, int n, double a[], string title );
void r8ge_print_some ( int m, int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title );
//
//  Utilities for real matrices.
//
double *r8mat_uniform_01_new ( int m, int n, int &seed );
//
//  R8VEC utilities.
//
double *r8vec_indicator1_new ( int n );
void r8vec_print ( int n, double a[], string title );
//
//  R8VEC2 Utilities.
//
void r8vec2_print_some ( int n, double x1[], double x2[], int max_print, 
  string title );
//
//  Utility to print the time.
//
void timestamp ( );
