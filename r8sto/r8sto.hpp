//
//  I4 Utilities.
//
int i4_log_10 ( int i );
int i4_max ( int i1, int i2 );
int i4_min ( int i1, int i2 );
int i4_power ( int i, int j );
//
//  Real double precision General.
//
double *r8ge_mm ( int n, double a[], double b[] );
void r8ge_print ( int m, int n, double a[], string title );
void r8ge_print_some ( int m, int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title );
//
//  Real double precision Symmetric Toeplitz.
//
double *r8sto_dif2 ( int n );
double *r8sto_indicator ( int n );
double *r8sto_inverse ( int n, double a[] );
double *r8sto_mv ( int n, double a[], double x[] );
void r8sto_print ( int n, double a[], string title );
void r8sto_print_some ( int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title );
double *r8sto_random ( int n, int &seed );
double *r8sto_sl ( int n, double a[], double b[] );
double *r8sto_to_r8ge ( int n, double a[] );
double *r8sto_yw_sl ( int n, double b[] );
double *r8sto_zeros ( int n );
//
//  R8VEC utilities.
//
double *r8vec_indicator1_new ( int n );
void r8vec_print ( int n, double a[], string title );
double *r8vec_uniform_01_new ( int n, int &seed );
double *r8vec_uniform_ab_new ( int n, double a, double b, int &seed );
double *r8vec_zeros_new ( int n );
//
//  Utility to print the time.
//
void timestamp ( );
