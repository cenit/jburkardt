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
//  Real double precision Tridiagonal, 3xN storage.
//
void r83_cg ( int n, double a[], double b[], double x[] );
double *r83_cr_fa ( int n, double a[] );
double *r83_cr_sl ( int n, double a_cr[], double b[] );
double *r83_cr_sls ( int n, double a_cr[], int nb, double b[] );
double *r83_dif2 ( int m, int n );
void r83_gs_sl ( int n, double a[], double b[], double x[], int it_max );
double *r83_indicator ( int m, int n );
void r83_jac_sl ( int n, double a[], double b[], double x[], int it_max );
double *r83_mtv ( int m, int n, double a[], double x[] );
double *r83_mv ( int m, int n, double a[], double x[] );
void r83_print ( int m, int n, double a[], string title );
void r83_print_some ( int m, int n, double a[], int ilo, int jlo, int ihi, int jhi, 
  string title );
double *r83_random ( int m, int n, int &seed );
double *r83_res ( int m, int n, double a[], double x[], double b[] );
double *r83_to_r8ge ( int m, int n, double a[] );
double *r83_zeros ( int m, int n );
//
//  Real double precision Tridiagonal, packed format.
//
double *r83np_fs ( int n, double a[], double b[] )
//
//  Real double precision General.
//
double *r8ge_mtv ( int m, int n, double a[], double x[] );
double *r8ge_mv ( int m, int n, double a[], double x[] );
void r8ge_print ( int m, int n, double a[], string title );
void r8ge_print_some ( int m, int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title );
double *r8ge_zeros_new ( int m, int n );
//
//  R8VEC utilities.
//
double r8vec_dot_product ( int n, double x[], double y[] );
double *r8vec_indicator1_new ( int n );
double r8vec_norm ( int n, double a[] );
double r8vec_norm_affine ( int n, double v0[], double v1[] );
void r8vec_print ( int n, double a[], string title );
double *r8vec_uniform_01_new ( int n, int &seed );
void r8vec2_print ( int n, double a1[], double a2[], string title );
//
//  Utility to print the time.
//
void timestamp ( );
