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
//  Real double precision Pentagonal.
//
double *r85_dif2 ( int n );
double *r85_indicator ( int n );
double *r85_mtv ( int n, double a[], double x[] );
double *r85_mv ( int n, double a[], double x[] );
double *r85_np_fs ( int n, double a[], double b[] );
void r85_print ( int n, double a[], string title );
void r85_print_some ( int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title );
double *r85_random ( int n, int &seed );
double *r85_to_r8ge ( int n, double a[] );
double *r85_zeros ( int n );
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
