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
double r8_factorial ( int n );
double r8_uniform_01 ( int &seed );
//
//  Real double precision General.
//
void r8ge_print ( int m, int n, double a[], string title );
void r8ge_print_some ( int m, int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title );
double *r8ge_random ( int m, int n, int &seed );
double *r8ge_to_r8vm ( int m, int n, double a_ge[] );
//
//  R8VEC utilities.
//
double *r8vec_indicator1_new ( int n );
void r8vec_print ( int n, double a[], string title );
void r8vec_print_some ( int n, double a[], int i_lo, int i_hi, string title );
double *r8vec_uniform_01_new ( int n, int &seed );
double *r8vec_zeros_new ( int n );
//
//  Real double precision Vandermonde.
//
double r8vm_det ( int n, double a[] );
double *r8vm_indicator ( int m, int n );
double r8vm_indicator_det ( int n );
double *r8vm_mtv ( int m, int n, double a[], double x[] );
double *r8vm_mv ( int m, int n, double a[], double x[] );
void r8vm_print ( int m, int n, double a[], string title );
void r8vm_print_some ( int m, int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title );
double *r8vm_random ( int m, int n, int &seed );
void r8vm_sl ( int n, double a[], double b[], double x[], int *info );
double *r8vm_sl_new ( int n, double a[], double b[], int *info );
void r8vm_slt ( int n, double a[], double b[], double x[], int *info );
double *r8vm_slt_new ( int n, double a[], double b[], int *info );
double *r8vm_to_r8ge ( int m, int n, double a[] );
double *r8vm_zeros ( int m, int n );
//
//  Utility to print the time.
//
void timestamp ( );
