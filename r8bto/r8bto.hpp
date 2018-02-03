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
//  Real double precision Block Toeplitz.
//
double *r8bto_dif2 ( int m, int l );
double *r8bto_indicator ( int m, int l );
double *r8bto_mtv ( int m, int l, double a[], double x[] );
double *r8bto_mv ( int m, int l, double a[], double x[] );
void r8bto_print ( int m, int l, double a[], string title );
void r8bto_print_some ( int m, int l, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title );
double *r8bto_random ( int m, int l, int &seed );
double *r8bto_sl ( int m, int l, double a[], double b[] );
double *r8bto_to_r8ge ( int m, int l, double a[] );
double *r8bto_zeros ( int m, int l );
//
//  Real double precision General.
//
int r8ge_fa ( int n, double a[], int pivot[] );
double *r8ge_indicator ( int m, int n );
void r8ge_print ( int m, int n, double a[], string title );
void r8ge_print_some ( int m, int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title );
double *r8ge_sl_new ( int n, double a[], int pivot[], double b[], int job );
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
