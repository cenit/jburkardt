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
double r8_max ( double x, double y );
double r8_sign ( double x );
double r8_uniform_01 ( int &seed );
double r8_uniform_ab ( double rlo, double rhi, int &seed );
//
//  Real double precision General.
//
void r8ge_cg ( int n, double a[], double b[], double x[] );
double r8ge_co ( int n, double a[], int pivot[] );
void r8ge_copy ( int m, int n, double a1[], double a2[] );
double *r8ge_copy_new ( int m, int n, double a1[] );
double r8ge_det ( int n, double a[], int pivot[] );
double *r8ge_dif2 ( int m, int n );
double *r8ge_dilu ( int m, int n, double a[] );
int r8ge_fa ( int n, double a[], int pivot[] );
void r8ge_fs ( int n, double a[], double x[] );
double *r8ge_fs_new ( int n, double a[], double b[] );
void r8ge_fss ( int n, double a[], int nb, double b[] );
double *r8ge_fss_new ( int n, double a[], int nb, double b[] );
double *r8ge_hilbert ( int m, int );
double *r8ge_hilbert_inverse ( int n );
void r8ge_identity ( int m, int n, double a[] );
double *r8ge_identity_new ( int m, int n );
void r8ge_ilu ( int m, int n, double a[], double l[], double u[] );
double *r8ge_indicator ( int m, int n );
double *r8ge_inverse ( int n, double a[], int pivot[] );
double *r8ge_ml ( int n, double a[], int pivot[], double x[], int job );
double *r8ge_mu ( int m, int n, double a[], char trans, int pivot[], double x[] );
double *r8ge_mm_new ( int n1, int n2, int n3, double a[], double b[] );
double *r8ge_mtm_new ( int n1, int n2, int n3, double a[], double b[] );
double *r8ge_mtv ( int m, int n, double a[], double x[] );
double *r8ge_mv ( int m, int n, double a[], double x[] );
void r8ge_plu ( int m, int n, double a[], double p[], double l[], double u[] );
double *r8ge_poly ( int n, double a[] );
void r8ge_print ( int m, int n, double a[], string title );
void r8ge_print_some ( int m, int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title );
double *r8ge_random ( int m, int n, int &seed );
double *r8ge_res ( int m, int n, double a[], double x[], double b[] );
void r8ge_sl ( int n, double a[], int pivot[], double b[], int job );
double *r8ge_sl_it ( int n, double a[], double alu[], int pivot[], double b[], 
  int job, double x[] );
double *r8ge_sl_new ( int n, double a[], int pivot[], double b[], int job );
double *r8ge_to_r8gb ( int m, int n, int ml, int mu, double a[] );
double *r8ge_to_r8lt ( int m, int n, double a_ge[] );
double *r8ge_to_r8po ( int n, double a[] );
void r8ge_to_r8ri ( int n, double a[], int nz, int ija[], double sa[] );
int r8ge_to_r8ri_size ( int n, double a[] );
double *r8ge_to_r8ut ( int m, int n, double a_ge[] );
double *r8ge_to_r8vec ( int m, int n, double *a );
double *r8ge_to_r8vm ( int m, int n, double a_ge[] );
double *r8ge_transpose_new ( int m, int n, double a[] );
void r8ge_transpose_print ( int m, int n, double a[], string title );
void r8ge_transpose_print_some ( int m, int n, double a[], int ilo, int jlo,
  int ihi, int jhi, string title );
int r8ge_trf ( int m, int n, double a[], int pivot[] );
double *r8ge_trs ( int n, int nrhs, char trans, double a[], int pivot[], double b[] );
double *r8ge_zeros ( int m, int n );
//
//  R8VEC utilities.
//
double r8vec_dot_product ( int n, double x[], double y[] );
double *r8vec_indicator1_new ( int n );
double r8vec_norm ( int n, double a[] );
double r8vec_norm_affine ( int n, double v0[], double v1[] );
void r8vec_print ( int n, double a[], string title );
void r8vec_print_some ( int n, double a[], int max_print, string title );
double *r8vec_to_r8ge ( int m, int n, double *x );
double *r8vec_uniform_01_new ( int n, int &seed );
double *r8vec_zeros_new ( int n );
//
//  R8VEC2 Utilities.
//
void r8vec2_print ( int n, double a1[], double a2[], string title );
void r8vec2_print_some ( int n, double x1[], double x2[], int max_print, 
  string title );
//
//  Utility to print the time.
//
void timestamp ( );
