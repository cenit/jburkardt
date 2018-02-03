//
//  I4 Utilities.
//
int i4_log_10 ( int i );
int i4_max ( int i1, int i2 );
int i4_min ( int i1, int i2 );
int i4_power ( int i, int j );
//
//  I4VEC utilities.
//
int *i4vec_zeros_new ( int n );
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
//  Real double precision Nonsymmetric Coordinate Format.
//
double *r8ncf_dif2 ( int m, int n, int nz_num, int row_col[] );
int r8ncf_dif2_nz_num ( int m, int n );
int *r8ncf_dif2_rowcol ( int m, int n, int nz_num );
double *r8ncf_indicator ( int m, int n, int nz_num, int rowcol[] );
double *r8ncf_mtv ( int m, int n, int nz_num, int rowcol[], double a[], 
  double x[] );
double *r8ncf_mv ( int m, int n, int nz_num, int rowcol[], double a[], 
  double x[] );
void r8ncf_print ( int m, int n, int nz_num, int rowcol[], double a[], 
  string title );
void r8ncf_print_some ( int m, int n, int nz_num, int rowcol[], 
  double a[], int ilo, int jlo, int ihi, int jhi, string title );
double *r8ncf_random ( int m, int n, int nz_num, int rowcol[], int &seed );
double *r8ncf_to_r8ge ( int m, int n, int nz_num, int rowcol[], double a[] );
double *r8ncf_zeros ( int m, int n, int nz_num, int rowcol[] );
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
