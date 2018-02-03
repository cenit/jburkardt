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
//  Real double precision Border Banded.
//
void r8bb_add ( int n1, int n2, int ml, int mu, double a[], int i, int j, 
  double value );
double *r8bb_dif2 ( int n1, int n2, int ml, int mu );
int r8bb_fa ( int n1, int n2, int ml, int mu, double a[], int pivot[] );
double r8bb_get ( int n1, int n2, int ml, int mu, double a[], int i, int j );
double *r8bb_indicator ( int n1, int n2, int ml, int mu );
double *r8bb_mtv ( int n1, int n2, int ml, int mu, double a[], double x[] );
double *r8bb_mv ( int n1, int n2, int ml, int mu, double a[], double x[] );
void r8bb_print ( int n1, int n2, int ml, int mu, double a[], string title );
void r8bb_print_some ( int n1, int n2, int ml, int mu, double a[], int ilo, 
  int jlo, int ihi, int jhi, string title );
double *r8bb_random ( int n1, int n2, int ml, int mu, int &seed );
void r8bb_set ( int n1, int n2, int ml, int mu, double a[], int i, int j, 
  double value );
double *r8bb_sl ( int n1, int n2, int ml, int mu, double a[], int pivot[], 
  double b[] );
double *r8bb_to_r8ge ( int n1, int n2, int ml, int mu, double a[] );
double *r8bb_zeros ( int n1, int n2, int ml, int mu );
//
//  Real double precision General Banded.
//
int r8gb_fa ( int n, int ml, int mu, double a[], int pivot[] );
double *r8gb_sl ( int n, int ml, int mu, double a[], int pivot[], 
  double b[], int job );
//
//  Real double precision General Diagonal.
//
bool r8gd_error ( int n, int ndiag );
double *r8gd_indicator ( int n, int ndiag, int offset[] );
double *r8gd_mv ( int n, int ndiag, int offset[], double a[], double x[] );
double *r8gd_mtv ( int n, int ndiag, int offset[], double a[], double x[] );
void r8gd_print ( int n, int ndiag, int offset[], double a[], string title );
void r8gd_print_some ( int n, int ndiag, int offset[], double a[], int ilo, 
  int jlo, int ihi, int jhi, string title );
double *r8gd_random ( int n, int ndiag, int offset[], int &seed );
double *r8gd_to_r8ge ( int n, int ndiag, int offset[], double a[] );
double *r8gd_zeros ( int n, int ndiag );
//
//  Real double precision General.
//
int r8ge_fa ( int n, double a[], int pivot[] );
void r8ge_print ( int m, int n, double a[], string title );
void r8ge_print_some ( int m, int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title );
double *r8ge_sl_new ( int n, double a[], int pivot[], double b[], int job );
double *r8ge_zeros ( int m, int n );
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
