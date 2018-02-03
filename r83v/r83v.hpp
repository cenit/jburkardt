int i4_log_10 ( int i );
void i4_log_10_test ( );
int i4_max ( int i1, int i2 );
void i4_max_test ( );
int i4_min ( int i1, int i2 );
void i4_min_test ( );
int i4_power ( int i, int j );
void i4_power_test ( );
int i4_uniform_ab ( int a, int b, int &seed );
void i4_uniform_ab_test ( );

double r8_uniform_01 ( int &seed );
void r8_uniform_01_test ( );

double *r83_indicator ( int m, int n );
void r83_indicator_test ( );
void r83_print ( int m, int n, double a[], string title );
void r83_print_test ( );
void r83_print_some ( int m, int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title );
void r83_print_some_test ( );

void r83v_cg ( int n, double a1[], double a2[], double a3[], double b[], 
  double x[] );
void r83v_cg_test ( );
void r83v_copy ( int m, int n, double a1[], double a2[], double a3[], 
  double b1[], double b2[], double b3[] );
void r83v_copy_test ( );
double *r83v_cr_fa ( int n, double a1[], double a2[], double a3[] );
void r83v_cr_fa_test ( );
double *r83v_cr_sl ( int n, double a_cr[], double b[] );
void r83v_cr_sl_test ( );
double *r83v_cr_sls ( int n, double a_cr[], int nb, double b[] );
void r83v_cr_sls_test ( );
void r83v_dif2 ( int m, int n, double a[], double b[], double c[] );
void r83v_dif2_test ( );
double *r83v_fs ( int n, double a1[], double a2[], double a3[], double b[] );
void r83v_fs_test ( );;
void r83v_gs_sl ( int n, double a1[], double a2[], double a3[], double b[], 
  double x[], int it_max );
void r83v_gs_sl_test ( );
void r83v_indicator ( int m, int n, double a[], double b[], double c[] );
void r83v_indicator_test ( );
void r83v_jac_sl ( int n, double a1[], double a2[], double a3[], double b[], 
  double x[], int it_max );
void r83v_jac_sl_test ( );
double *r83v_mtv ( int m, int n, double a1[], double a2[], double a3[],
  double x[] );
void r83v_mtv_test ( );
double *r83v_mv ( int m, int n, double a[], double b[], double c[], double x[] );
void r83v_mv_test ( );
void r83v_print ( int m, int n, double a[], double b[], double c[], 
  string title );
void r83v_print_test ( );
void r83v_print_some ( int m, int n, double a[], double b[], double c[],
  int ilo, int jlo, int ihi, int jhi, string title );
void r83v_print_some_test ( );
void r83v_random ( int m, int n, int &seed, double a[], double b[], double c[] );
void r83v_random_test ( );
double *r83v_res ( int m, int n, double a[], double b[], double c[],
  double x[], double ax[] );
void r83v_res_test ( );
double *r83v_to_r8ge ( int m, int n, double a1[], double a2[], double a3[] );
void r83v_to_r8ge_test ( );
double *r83v_to_r8vec ( int m, int n, double a1[], double a2[], double a3[] );
void r83v_to_r8vec_test ( );
void r83v_transpose ( int m, int n, double a1[], double a2[], double a3[], 
  double b1[], double b2[], double b3[] );
void r83v_transpose_test ( );
void r83v_zeros ( int m, int n, double a[], double b[], double c[] );
void r83v_zeros_test ( );

double *r8ge_indicator ( int m, int n );
void r8ge_indicator_test ( );
double *r8ge_mtv ( int m, int n, double a[], double x[] );
void r8ge_mtv_test ( );
double *r8ge_mv ( int m, int n, double a[], double x[] );
void r8ge_mv_test ( );
void r8ge_print ( int m, int n, double a[], string title );
void r8ge_print_test ( );
void r8ge_print_some ( int m, int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title );
void r8ge_print_some_test ( );
void r8ge_to_r83v ( int m, int n, double a[], double a1[], double a2[], 
  double a3[] );
void r8ge_to_r83v_test ( );

double r8vec_dot_product ( int n, double a1[], double a2[] );
void r8vec_dot_product_test ( );
double *r8vec_indicator1_new ( int n );
void r8vec_indicator1_new_test ( );
double r8vec_norm ( int n, double a[] );
void r8vec_norm_test ( );
double r8vec_norm_affine ( int n, double v0[], double v1[] );
void r8vec_norm_affine_test ( );
void r8vec_print ( int n, double a[], string title );
void r8vec_print_test ( );
void r8vec_to_r83v ( int m, int n, double a[], double a1[], double a2[], 
  double a3[] );
void r8vec_to_r83v_test ( );
void r8vec_uniform_01 ( int n, int &seed, double x[] );
void r8vec_uniform_01_test ( );
double *r8vec_uniform_01_new ( int n, int &seed );
void r8vec_uniform_01_new_test ( );
double *r8vec_zeros_new ( int n );
void r8vec_zeros_new_test ( );

void r8vec2_print ( int n, double a1[], double a2[], string title );
void r8vec2_print_test ( );

void timestamp ( );

