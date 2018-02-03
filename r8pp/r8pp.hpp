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
//  Real double precision General.
//
void r8ge_print ( int m, int n, double a[], string title );
void r8ge_print_some ( int m, int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title );
//
//  Real double precision Positive Definite Symmetric Packed.
//
double r8pp_det ( int n, double a[] );
double *r8pp_dif2 ( int n );
double *r8pp_fa ( int n, double a[] );
double *r8pp_indicator ( int n );
double *r8pp_mv ( int n, double a[], double x[] );
void r8pp_print ( int n, double a[], string title );
void r8pp_print_some ( int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title );
double *r8pp_random ( int n, int &seed );
double *r8pp_sl ( int n, double a[], double b[] );
double *r8pp_to_r8ge ( int n, double a[] );
double *r8pp_zeros ( int n );
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
