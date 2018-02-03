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
//  Real double precision General.
//
void r8ge_print ( int m, int n, double a[], string title );
void r8ge_print_some ( int m, int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title );
//
//  Real double precision SLAP Triad.
//
void r8s3_diagonal ( int m, int n, int nz_num, int sym, int row[], int col[], double a[] );
void r8s3_dif2 ( int m, int n, int nz_num, int sym, int row[], int col[], double a[] );
double *r8s3_indicator ( int m, int n, int nz_num, int sym, int row[], int col[] );
void r8s3_jac_sl ( int n, int nz_num, int sym, int row[], int col[], 
  double a[], double b[], double x[], int it_max );
double *r8s3_mtv ( int m, int n, int nz_num, int sym, int row[], int col[], 
  double a[], double x[] );
double *r8s3_mv ( int m, int n, int nz_num, int sym, int row[], int col[], 
  double a[], double x[] );
void r8s3_print ( int m, int n, int nz_num, int sym, int row[], int col[], 
  double a[], string title );
void r8s3_print_some ( int m, int n, int nz_num, int sym, int row[], int col[], 
  double a[], int ilo, int jlo, int ihi, int jhi, string title );
double *r8s3_random ( int m, int n, int nz_num, int sym, int row[], int col[],
  int &seed );
void r8s3_read ( string input_file, int m, int n, int nz_num, int row[], int col[], 
  double a[] );
void r8s3_read_size ( string input_file, int &m, int &n, int &nz_num );
double *r8s3_res ( int m, int n, int nz_num, int sym, int row[], int col[], 
  double a[], double x[], double b[] );
double *r8s3_to_r8ge ( int m, int n, int nz_num, int sym, int row[], 
  int col[], double a[] );
void r8s3_write ( int m, int n, int nz_num, int sym, int row[], int col[], 
  double a[], string output_file );
double *r8s3_zeros ( int m, int n, int nz_num, int sym, int row[], int col[] );
//
//  R8VEC Utilities.
//
double *r8vec_indicator1_new ( int n );
void r8vec_print ( int n, double a[], string title );
double *r8vec_zeros_new ( int n );
//
//  Utility to print the time.
//
void timestamp ( );
