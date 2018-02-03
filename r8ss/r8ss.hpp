//
//  I4 Utilities.
//
int i4_log_10 ( int i );
int i4_max ( int i1, int i2 );
int i4_min ( int i1, int i2 );
int i4_power ( int i, int j );
int i4_uniform_ab ( int ilo, int ihi, int &seed );
//
//  I4VEC Utilities.
//
void i4vec_print ( int n, int a[], string title );
//
//  R8 Utilities.
//
double r8_uniform_01 ( int &seed );
//
//  Real double precision General.
//
double *r8ge_mv ( int m, int n, double a[], double x[] );
void r8ge_print ( int m, int n, double a[], string title );
void r8ge_print_some ( int m, int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title );
//
//  Real double precision Symmetric Skyline.
//
void r8ss_dif2 ( int n, int &na, int diag[], double a[] );
bool r8ss_error ( int diag[], int n, int na );
double *r8ss_indicator ( int n, int &na, int diag[]);
double *r8ss_mv ( int n, int na, int diag[], double a[], double x[] );
void r8ss_print ( int n, int na, int diag[], double a[], string title );
void r8ss_print_some ( int n, int na, int diag[], double a[], int ilo, int jlo, 
  int ihi, int jhi, string title );
void r8ss_random ( int n, int &na, int diag[], double a[], int &seed );
double *r8ss_to_r8ge ( int n, int na, int diag[], double a[] );
double *r8ss_zeros ( int n, int na, int diag[] );
//
//  R8VEC utilities.
//
double *r8vec_indicator1_new ( int n );
double *r8vec_zeros_new ( int n );
//
//  R8VEC2 Utilities.
//
void r8vec2_print ( int n, double a1[], double a2[], string title );
//
//  Utility to print the time.
//
void timestamp ( );
