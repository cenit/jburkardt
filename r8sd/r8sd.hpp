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
double r8_min ( double x, double y );
double r8_uniform_01 ( int &seed );
//
//  Real double precision General.
//
void r8ge_print ( int m, int n, double a[], string title );
void r8ge_print_some ( int m, int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title );
//
//  Real double precision Symmetric Diagonal
//
double *r8sd_cg ( int n, int ndiag, int offset[], double a[], double b[], 
  double x_init[] );
double *r8sd_dif2 ( int n, int ndiag, int offset[] );
double *r8sd_indicator ( int n, int ndiag, int offset[] );
double *r8sd_mv ( int m, int n, int ndiag, int offset[], double a[], double x[] );
void r8sd_print ( int n, int ndiag, int offset[], double a[], string title );
void r8sd_print_some ( int n, int ndiag, int offset[], double a[], int ilo, 
  int jlo, int ihi, int jhi, string title );
double *r8sd_random ( int n, int ndiag, int offset[], int &seed );
double *r8sd_res ( int m, int n, int ndiag, int offset[], double a[], 
  double x[], double b[] );
double *r8sd_to_r8ge ( int n, int ndiag, int offset[], double a[] );
double *r8sd_zeros ( int n, int ndiag, int offset[] );
//
//  R8VEC utilities.
//
double r8vec_dot_product ( int n, double x[], double y[] );
double *r8vec_indicator1_new ( int n );
void r8vec_print ( int n, double a[], string title );
void r8vec_print_some ( int n, double a[], int max_print, string title );
double *r8vec_zeros_new ( int n );
//
//  Utility to print the time.
//
void timestamp ( );
