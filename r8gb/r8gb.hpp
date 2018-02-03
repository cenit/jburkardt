//
//  I4 utilities.
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
//  Real double precision General Banded.
//
double r8gb_det ( int n, int ml, int mu, double a[], int pivot[] );
double *r8gb_dif2 ( int m, int n, int ml, int mu );
int r8gb_fa ( int n, int ml, int mu, double a[], int pivot[] );
double *r8gb_indicator ( int m, int n, int ml, int mu );
double *r8gb_ml ( int n, int ml, int mu, double a[], int pivot[], double x[], 
  int job );
double *r8gb_mtv ( int m, int n, int ml, int mu, double a[], double x[] );
double *r8gb_mu ( int n, int ml, int mu, double a[], int pivot[], double x[], 
  int job );
double *r8gb_mv ( int m, int n, int ml, int mu, double a[], double x[] );
int r8gb_nz_num ( int m, int n, int ml, int mu, double a[] );
void r8gb_print ( int m, int n, int ml, int mu, double a[], string title );
void r8gb_print_some ( int m, int n, int ml, int mu, double a[], int ilo, 
  int jlo, int ihi, int jhi, string title );
double *r8gb_random ( int m, int n, int ml, int mu, int &seed );
double *r8gb_sl ( int n, int ml, int mu, double a[], int pivot[], 
  double b[], int job );
double *r8gb_to_r8ge ( int m, int n, int ml, int mu, double a[] );
double *r8gb_to_r8vec ( int m, int n, int ml, int mu, double a[] );
int r8gb_trf ( int m, int n, int ml, int mu, double a[], int pivot[] );
double *r8gb_trs ( int n, int ml, int mu, int nrhs, char trans, double a[], 
  int pivot[], double b[] );
double *r8gb_zeros ( int m, int n, int ml, int mu );
//
//  Real double precision General.
//
double r8ge_det ( int n, double a[], int pivot[] );
int r8ge_fa ( int n, double a[], int pivot[] );
void r8ge_print ( int m, int n, double a[], string title );
void r8ge_print_some ( int m, int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title );
double *r8ge_random ( int m, int n, int &seed );
double *r8ge_to_r8gb ( int m, int n, int ml, int mu, double a[] );
//
//  R8VEC Utilities.
//
double *r8vec_indicator1_new ( int n );
void r8vec_print ( int n, double a[], string title );
double *r8vec_to_r8gb ( int m, int n, int ml, int mu, double *x );
double *r8vec_zeros_new ( int n );
//
//  R8VEC2 Utilities.
//
void r8vec2_print ( int n, double a1[], double a2[], string title );
//
//  Utility to print the time.
//
void timestamp ( );

