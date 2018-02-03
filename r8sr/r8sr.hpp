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
//  Real double precision General.
//
void r8ge_print ( int m, int n, double a[], string title );
void r8ge_print_some ( int m, int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title );
//
//  Real double precision Sparse Row storage.
//
void r8sr_dif2 ( int n, int &nz, int row[], int col[], double diag[], 
  double off[] );
void r8sr_indicator ( int n, int nz, int row[], int col[], double diag[], 
  double off[] );
double *r8sr_mtv ( int n, int nz, int row[], int col[], double diag[], 
  double off[], double x[] );
double *r8sr_mv ( int n, int nz, int row[], int col[], double diag[], 
  double off[], double x[] );
void r8sr_print ( int n, int nz, int row[], int col[], double diag[], 
  double off[], string title );
void r8sr_print_some ( int n, int nz, int row[], int col[], double diag[], 
  double off[], int ilo, int jlo, int ihi, int jhi, string title );
void r8sr_random ( int n, int nz, int row[], int col[], double diag[], 
  double off[], int &seed );
double *r8sr_to_r8ge ( int n, int nz, int row[], int col[], double diag[], 
  double off[] );
void r8sr_zeros ( int n, int nz, int row[], int col[], double diag[], 
  double off[] );
//
//  R8VEC utilities.
//
void r8vec_print ( int n, double a[], string title );
//
//  Utility to print the time.
//
void timestamp ( );
