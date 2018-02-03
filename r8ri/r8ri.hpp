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
void r8ge_to_r8ri ( int n, double a[], int nz, int ija[], double sa[] );
int r8ge_to_r8ri_size ( int n, double a[] );
//
//  Real double precision Row Indexed.
//
double *r8ri_dif2 ( int n, int nz, int ija[], double a[] );
double *r8ri_indicator ( int n, int nz, int ija[] );
double *r8ri_mtv ( int n, int nz, int ija[], double a[], double x[] );
double *r8ri_mv ( int n, int nz, int ija[], double a[], double x[] );
void r8ri_print ( int n, int nz, int ija[], double a[], string title );
void r8ri_print_some ( int n, int nz, int ija[], double a[], int ilo, int jlo, 
  int ihi, int jhi, string title );
double *r8ri_random ( int n, int nz, int ija[], int &seed );
double *r8ri_to_r8ge ( int n, int nz, int ija[], double a[] );
double *r8ri_zeros ( int n, int nz, int ija[] );
//
//  R8VEC utilities.
//
double *r8vec_indicator1_new ( int n );
void r8vec_print ( int n, double a[], string title );
double *r8vec_zeros_new ( int n );
//
//  Utility to print the time.
//
void timestamp ( );
