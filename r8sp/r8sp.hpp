//
//  I4 Utilities.
//
int i4_log_10 ( int i );
int i4_max ( int i1, int i2 );
int i4_min ( int i1, int i2 );
int i4_power ( int i, int j );
//
//  Real double precision General.
//
void r8ge_print ( int m, int n, double a[], string title );
void r8ge_print_some ( int m, int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title );
//
//  Real double precision Nonsymmetric Coordinate Format.
//
void r8ncf_print ( int m, int n, int nz_num, int rowcol[], double a[], 
  string title );
void r8ncf_print_some ( int m, int n, int nz_num, int rowcol[], 
  double a[], int ilo, int jlo, int ihi, int jhi, string title );
//
//  Real double precision Sparse storage.
//
void r8sp_cg ( int n, int nz_num, int row[], int col[], double a[], 
  double b[], double x[] );
bool r8sp_check ( int m, int n, int nz_num, int row[], int col[] );
void r8sp_diagonal ( int m, int n, int nz_num, int row[], int col[], double a[] );
double *r8sp_dif2 ( int m, int n, int nz_num, int row[], int col[] );
int r8sp_ij_to_k ( int nz_num, int row[], int col[], int i, int j );
double *r8sp_indicator ( int m, int n, int nz_num, int row[], int col[] );
void r8sp_jac_sl ( int n, int nz_num, int row[], int col[], 
  double a[], double b[], double x[], int it_max );
double *r8sp_mtv ( int m, int n, int nz_num, int row[], int col[], 
  double a[], double x[] );
double *r8sp_mv ( int m, int n, int nz_num, int row[], int col[], 
  double a[], double x[] );
void r8sp_print ( int m, int n, int nz_num, int row[], int col[], 
  double a[], string title );
void r8sp_print_some ( int m, int n, int nz_num, int row[], int col[], 
  double a[], int ilo, int jlo, int ihi, int jhi, string title );
double *r8sp_random ( int m, int n, int nz_num, int row[], int col[], 
  int &seed );
void r8sp_read ( string input_file, int m, int n, int nz_num, int row[], 
  int col[], double a[] );
void r8sp_read_size ( string input_file, int &m, int &n, int &nz_num );
double *r8sp_res ( int m, int n, int nz_num, int row[], int col[], double a[], 
  double x[], double b[] );
double *r8sp_to_r8ge ( int m, int n, int nz_num, int row[], int col[], 
  double a[] );
void r8sp_to_r8ncf ( int m, int n, int nz_num, int row[], int col[], 
  double a[], int rowcol[] );
void r8sp_write ( int m, int n, int nz_num, int row[], int col[], double a[], 
  string output_file );
double *r8sp_zeros ( int m, int n, int nz_num, int row[], int col[] );
//
//  R8VEC utilities.
//
double r8vec_dot_product ( int n, double x[], double y[] );
double *r8vec_indicator1_new ( int n );
double r8vec_norm ( int n, double a[] );
double r8vec_norm_affine ( int n, double v0[], double v1[] );
void r8vec_print ( int n, double a[], string title );
double *r8vec_uniform_01_new ( int n, int &seed );
double *r8vec_zeros_new ( int n );
//
//  Utility to print the time.
//
void timestamp ( );
