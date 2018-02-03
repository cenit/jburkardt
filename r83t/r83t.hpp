/*
  I4 utilities.
*/
int i4_log_10 ( int i );
int i4_max ( int i1, int i2 );
int i4_min ( int i1, int i2 );
int i4_power ( int i, int j );
/*
  R8 Utilities.
*/
double r8_uniform_01 ( int &seed );
/*
  Real double precision Tridiagonal, Mx3 storage.
*/
void r83t_cg ( int n, double a[], double b[], double x[] );
double *r83t_dif2 ( int m, int n );
void r83t_gs_sl ( int n, double a[], double b[], double x[], int it_max );
double *r83t_indicator ( int m, int n );
void r83t_jac_sl ( int n, double a[], double b[], double x[], int it_max );
double *r83t_mtv ( int m, int n, double a[], double x[] );
double *r83t_mv ( int m, int n, double a[], double x[] );
void r83t_print ( int m, int n, double a[], string title );
void r83t_print_some ( int m, int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title );
double *r83t_random ( int m, int n, int &seed );
double *r83t_res ( int m, int n, double a[], double x[], double b[] );
double *r83t_to_r8ge ( int m, int n, double a_r83t[] );
double *r83t_zeros ( int m, int n );
/*
  Real double precision General.
*/
double *r8ge_mtv ( int m, int n, double a[], double x[] );
double *r8ge_mv ( int m, int n, double a[], double x[] );
void r8ge_print ( int m, int n, double a[], string title );
void r8ge_print_some ( int m, int n, double a[], int ilo, 
  int jlo, int ihi, int jhi, string title );
/*
  R8VEC Utilities.
*/
double r8vec_dot_product ( int n, double a1[], double a2[] );
double *r8vec_indicator1_new ( int n );
double r8vec_norm ( int n, double a[] );
double r8vec_norm_affine ( int n, double v0[], double v1[] );
void r8vec_print ( int n, double a[], string title );
double *r8vec_uniform_01_new ( int n, int &seed );
double *r8vec_zeros_new ( int n );
/*
  R8VEC2 Utilities.
*/
void r8vec2_print ( int n, double a1[], double a2[], string title );
/*
  Utility to print the time.
*/
void timestamp ( );
