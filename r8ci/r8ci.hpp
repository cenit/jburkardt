//
//  C8VEC Utilities.
//
void c8vec_print ( int n, complex <double> a[], string title );
void c8vec_sort_a_l2 ( int n, complex <double> x[] );
complex <double> *c8vec_unity_new ( int n );
//
//  I4 Utilities.
//
int i4_log_10 ( int i );
int i4_max ( int i1, int i2 );
int i4_min ( int i1, int i2 );
int i4_modp ( int i, int j );
int i4_power ( int i, int j );
//
//  R8 Utilities.
//
double r8_uniform_01 ( int &seed );
//
//  Real double precision Circulant.
//
double r8ci_det ( int n, double a[] );
double *r8ci_dif2 ( int n );
complex <double> *r8ci_eval ( int n, double a[] );
double *r8ci_indicator ( int n );
double *r8ci_mtv ( int n, double a[], double x[] );
double *r8ci_mv ( int n, double a[], double x[] );
void r8ci_print ( int n, double a[], string title );
void r8ci_print_some ( int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title );
double *r8ci_random ( int n, int &seed );
double *r8ci_sl ( int n, double a[], double b[], int job );
double *r8ci_to_r8ge ( int n, double a[] );
double *r8ci_zeros ( int n );
//
//  Real double precision General.
//
void r8ge_print ( int m, int n, double a[], string title );
void r8ge_print_some ( int m, int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title );
//
//  R8VEC utilities.
//
double *r8vec_indicator1_new ( int n );
void r8vec_print ( int n, double a[], string title );
double *r8vec_zeros_new ( int n );
//
//  Utility routine for external heap sort.
//
void sort_heap_external ( int n, int &indx, int &i, int &j, int isgn );
//
//  Utility to print the time.
//
void timestamp ( );
