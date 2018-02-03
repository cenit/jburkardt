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
int i4vec_search_binary_a ( int n, int a[], int b );
//
//  Real double precision (Sparse) Compressed Column.
//
void r8cc_dif2 ( int m, int n, int nz_num, int colptr[], int rowind[], double a[] );
double r8cc_get ( int m, int n, int nnzero, int colptr[], int rowind[], 
  double a[], int i, int j );
int r8cc_ijk ( int m, int n, int nnzero, int colptr[], int rowind[], 
  int i, int j );
void r8cc_inc ( int m, int n, int nnzero, int colptr[], int rowind[], 
  double a[], int i, int j, double aij );
double *r8cc_indicator ( int m, int n, int nnzero, int colptr[], int rowind[] );
void r8cc_kij ( int m, int n, int nnzero, int colptr[], int rowind[], int k, 
  int &i, int &j );
double *r8cc_mtv ( int m, int n, int nnzero, int colptr[], int rowind[], 
  double a[], double x[] );
double *r8cc_mv ( int m, int n, int nnzero, int colptr[], int rowind[], 
  double a[], double x[] );
void r8cc_print ( int m, int n, int nnzero, int colptr[], int rowind[], 
  double a[], string title );
void r8cc_print_some ( int m, int n, int nnzero, int colptr[], int rowind[], 
  double a[], int ilo, int jlo, int ihi, int jhi, string title );
double *r8cc_random ( int m, int n, int nnzero, int colptr[], int rowind[], 
  int &seed );
void r8cc_read ( string col_file, string row_file, string a_file, int m, 
  int n, int nz_num, int col[], int row[], double a[] );
void r8cc_read_size ( string col_file, string row_file, int &m, int &n, 
  int &nz_num );
void r8cc_set ( int m, int n, int nnzero, int colptr[], int rowind[], 
  double a[], int i, int j, double aij );
double *r8cc_to_r8ge ( int m, int n, int nnzero, int colptr[], int rowind[], 
  double a[] );
void r8cc_write ( string col_file, string row_file, string a_file, int m, int n,
  int nz_num, int col[], int row[], double a[] );
double *r8cc_zeros ( int m, int n, int nnzero, int colptr[], int rowind[] );
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
double *r8vec_uniform_01_new ( int n, int &seed );
double *r8vec_zeros_new ( int n );
//
//  Utility to print the time.
//
void timestamp ( );
