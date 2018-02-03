//
//  I4 Utilities.
//
int i4_log_10 ( int i );
int i4_max ( int i1, int i2 );
int i4_min ( int i1, int i2 );
int i4_power ( int i, int j );
//
//  I4VEC utilities.
//
int *i4vec_zeros_new ( int n );
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
//
//  Real double precision Positive Definite Symmetric Band, Lower.
//
double *r8pbl_dif2 ( int n, int mu );
double *r8pbl_indicator ( int n, int mu );
double *r8pbl_mv ( int n, int ml, double a[], double x[] );
void r8pbl_print ( int n, int mu, double a[], string title );
void r8pbl_print_some ( int n, int mu, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title );
double *r8pbl_random ( int n, int mu, int &seed );
double *r8pbl_to_r8ge ( int n, int mu, double a[] );
double *r8pbl_zeros ( int n, int mu );
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
