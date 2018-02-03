//
//  I4 Utilities.
//
int i4_max ( int i1, int i2 );
int i4_min ( int i1, int i2 );
//
//
//  R8 Utilities.
//
double r8_uniform_01 ( int &seed );
//
//  Real double precision General.
//
double *r8ge_dif2 ( int m, int n );
double *r8ge_mm ( int n1, int n2, int n3, double a[], double b[] );
double *r8ge_mtv ( int m, int n, double a[], double x[] );
double *r8ge_mv ( int m, int n, double a[], double x[] );
void r8ge_print ( int m, int n, double a[], string title );
void r8ge_print_some ( int m, int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title );
double *r8ge_random ( int m, int n, int &seed );
double *r8ge_to_r8vec ( int m, int n, double *a );
double *r8ge_zeros ( int m, int n );
//
//  Real double precision General, No Pivoting.
//
double r8ge_np_det ( int n, double a[] );
int r8ge_np_fa ( int n, double a[] );
double *r8ge_np_inverse ( int n, double a[] );
double *r8ge_np_ml ( int n, double a[], double x[], int job );
double *r8ge_np_sl ( int n, double a[], double b[], int job );
double *r8ge_np_trm ( int m, int n, double a[], double x[], int job );
int r8ge_np_trf ( int m, int n, double a[] );
double *r8ge_np_trs ( int n, int nrhs, char trans, double a[], double b[] );
//
//  R8VEC utilities.
//
double *r8vec_indicator1_new ( int n );
void r8vec_print ( int n, double a[], string title );
void r8vec_print_some ( int n, double a[], int max_print, string title );
double *r8vec_to_r8ge ( int m, int n, double *x );
double *r8vec_zeros_new ( int n );
//
//  R8VEC2 Utilities.
//
void r8vec2_print_some ( int n, double x1[], double x2[], int max_print, 
  string title );
//
//  Utility to print the time.
//
void timestamp ( );
