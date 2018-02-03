void daxpy ( int n, double da, double dx[], int incx, double dy[], int incy );
double ddot ( int n, double dx[], int incx, double dy[], int incy );
double dnrm2 ( int n, double x[], int incx );
void drot ( int n, double x[], int incx, double y[], int incy, double c,
  double s );
void drotg ( double *sa, double *sb, double *c, double *s );
void dscal ( int n, double sa, double x[], int incx );
int dsvdc ( double a[], int lda, int m, int n, double s[], double e[], 
  double u[], int ldu, double v[], int ldv, double work[], int job );
void dswap ( int n, double x[], int incx, double y[], int incy );

int i4_max ( int i1, int i2 );
int i4_min ( int i1, int i2 );
string i4_to_string ( int i4, string format );
int i4_uniform_ab ( int a, int b, int &seed );

int i4vec_max ( int n, int a[] );

void imtqlx ( int n, double d[], double e[], double z[] );

double r8_choose ( int n, int k );
double r8_epsilon ( );
double r8_factorial ( int n );
double r8_hyper_2f1 ( double a, double b, double c, double x );
double r8_max ( double x, double y );
double r8_mop ( int i );
double r8_psi ( double xx );
double r8_sign ( double x );
double r8_uniform_ab ( double a, double b, int &seed );

double *r8mat_copy_new ( int m, int n, double a1[] );
double *r8mat_mm_new ( int n1, int n2, int n3, double a[], double b[] );
double *r8mat_mtv_new ( int m, int n, double a[], double x[] );
double *r8mat_mv_new ( int m, int n, double a[], double x[] );
void    r8mat_print ( int m, int n, double a[], string title );
void    r8mat_print_some ( int m, int n, double a[], int ilo, int jlo, int ihi,
  int jhi, string title );

void r8poly_print ( int n, double a[], string title );

double  r8vec_dot_product ( int n, double a1[], double a2[] );
bool    r8vec_in_ab ( int n, double x[], double a, double b );
double *r8vec_linspace_new ( int n, double a_first, double a_last );
double  r8vec_max ( int n, double r8vec[] );
void    r8vec_print ( int n, double a[], string title );
double *r8vec_uniform_01_new ( int n, int &seed );
double *r8vec_uniform_ab_new ( int n, double b, double c, int &seed );
void    r8vec2_print ( int n, double a1[], double a2[], string title );

double *svd_solve ( int m, int n, double a[], double b[] );

double *t_mass_matrix ( int n );
double  t_moment ( int e );
double *t_polynomial ( int m, int n, double x[] );
void    t_polynomial_01_values ( int &n_data, int &n, double &x, double &fx );
double *t_polynomial_ab ( double a, double b, int m, int n, double x[] );
double  t_polynomial_ab_value ( double a, double b, int n, double x );
double *t_polynomial_coefficients ( int n );
void    t_polynomial_plot ( int n_num, int n_val[], string output_filename );
double  t_polynomial_value ( int n, double x );
void    t_polynomial_values ( int &n_data, int &n, double &x, double &fx );
double *t_polynomial_zeros ( int n );
double *t_project_coefficients ( int n, double f ( double x ) );
double *t_project_coefficients_ab ( int n, double f ( double x ), double a, 
  double b );
double *t_project_coefficients_data ( double a, double b, int m, int n, 
  double x[], double d[] );
double *t_project_value ( int m, int n, double x[], double c[] );
double *t_project_value_ab ( int m, int n, double x[], double c[], double a, 
  double b );
void    t_quadrature_rule ( int n, double t[], double w[] );
double  tt_product ( int i, int j, double x );
double  tt_product_integral ( int i, int j );
double  ttt_product_integral ( int i, int j, int k );
double  tu_product ( int i, int j, double x );

void timestamp ( );

double *u_mass_matrix ( int n );
double  u_moment ( int e );
double *u_polynomial ( int m, int n, double x[] );
void    u_polynomial_01_values ( int &n_data, int &n, double &x, double &fx );
double *u_polynomial_ab ( double a, double b, int m, int n, double x[] );
double  u_polynomial_ab_value ( double a, double b, int n, double x );
double *u_polynomial_coefficients ( int n );
void    u_polynomial_plot ( int n_num, int n_val[], string output_filename );
double  u_polynomial_value ( int n, double x );
void    u_polynomial_values ( int &n_data, int &n, double &x, double &fx );
double *u_polynomial_zeros ( int n );
void    u_quadrature_rule ( int n, double t[], double w[] );
double  uu_product ( int i, int j, double x );
double  uu_product_integral ( int i, int j );

double *v_mass_matrix ( int n );
double  v_moment ( int e );
double *v_polynomial ( int m, int n, double x[] );
void    v_polynomial_01_values ( int &n_data, int &n, double &x, double &fx );
double *v_polynomial_ab ( double a, double b, int m, int n, double x[] );
double  v_polynomial_ab_value ( double a, double b, int n, double x );
double *v_polynomial_coefficients ( int n );
void    v_polynomial_plot ( int n_num, int n_val[], string output_filename );
double  v_polynomial_value ( int n, double x );
void    v_polynomial_values ( int &n_data, int &n, double &x, double &fx );
double *v_polynomial_zeros ( int n );
void    v_quadrature_rule ( int n, double t[], double w[] );
double  vv_product_integral ( int i, int j );

double *w_mass_matrix ( int n );
double  w_moment ( int e );
double *w_polynomial ( int m, int n, double x[] );
void    w_polynomial_01_values ( int &n_data, int &n, double &x, double &fx );
double *w_polynomial_ab ( double a, double b, int m, int n, double x[] );
double  w_polynomial_ab_value ( double a, double b, int n, double x );
double *w_polynomial_coefficients ( int n );
void    w_polynomial_plot ( int n_num, int n_val[], string output_filename );
double  w_polynomial_value ( int n, double x );
void    w_polynomial_values ( int &n_data, int &n, double &x, double &fx );
double *w_polynomial_zeros ( int n );
void    w_quadrature_rule ( int n, double t[], double w[] );
double  ww_product_integral ( int i, int j );

