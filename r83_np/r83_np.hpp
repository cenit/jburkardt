//
//  I4 utilities.
//
int i4_max ( int i1, int i2 );
int i4_min ( int i1, int i2 );
//
//  R8 Utilities.
//
double r8_uniform_01 ( int &seed );
//
//  Real double precision Tridiagonal, 3xN storage.
//
double *r83_dif2 ( int m, int n );
double *r83_mtv ( int m, int n, double a[], double x[] );
double *r83_mv ( int m, int n, double a[], double x[] );
void r83_print ( int m, int n, double a[], string title );
void r83_print_some ( int m, int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title );
double *r83_random ( int m, int n, int &seed );
//
//  Real double precision Tridiagonal No Pivoting.
//
double r83_np_det ( int n, double a_lu[] );
int r83_np_fa ( int n, double a[] );
double *r83_np_fs ( int n, double a[], double b[] );
double *r83_np_ml ( int n, double a_lu[], double x[], int job );
double *r83_np_sl ( int n, double a_lu[], double b[], int job );
//
//  R8VEC Utilities.
//
double *r8vec_indicator1_new ( int n );
void r8vec_print ( int n, double a[], string title );
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
