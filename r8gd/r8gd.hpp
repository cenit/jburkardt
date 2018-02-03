//
//  I4 Utilities.
//
int i4_log_10 ( int i );
int i4_max ( int i1, int i2 );
int i4_min ( int i1, int i2 );
int i4_power ( int i, int j );
//
//  I4VEC Utilities.
//
void i4vec_print ( int n, int a[], string title );
//
//  R8 Utilities.
//
double r8_uniform_01 ( int &seed );
//
//  Real double precision General Diagonal.
//
double *r8gd_dif2 ( int n, int ndiag, int offset[] );
double *r8gd_indicator ( int n, int ndiag, int offset[] );
double *r8gd_mv ( int n, int ndiag, int offset[], double a[], double x[] );
double *r8gd_mtv ( int n, int ndiag, int offset[], double a[], double x[] );
void r8gd_print ( int n, int ndiag, int offset[], double a[], string title );
void r8gd_print_some ( int n, int ndiag, int offset[], double a[], int ilo, 
  int jlo, int ihi, int jhi, string title );
double *r8gd_random ( int n, int ndiag, int offset[], int &seed );
double *r8gd_to_r8ge ( int n, int ndiag, int offset[], double a[] );
double *r8gd_zeros ( int n, int ndiag, int offset[] );
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
double *r8vec_zeros_new ( int n );
//
//  Utility to print the time.
//
void timestamp ( );
