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
int r8ge_fa ( int n, double a[], int pivot[] );
double *r8ge_ml ( int n, double a[], int pivot[], double x[], int job );
void r8ge_print ( int m, int n, double a[], string title );
void r8ge_print_some ( int m, int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title );
double *r8ge_sl_new ( int n, double a[], int pivot[], double b[], int job );
//
//  Real double precision Sherman Morrison.
//
void r8sm_indicator ( int m, int n, double a[], double u[], double v[] );
double *r8sm_ml ( int n, double a[], double u[], double v[], int pivot[], 
  double x[], int job );
double *r8sm_mtv ( int m, int n, double a[], double u[], double v[], double x[] );
double *r8sm_mv ( int m, int n, double a[], double u[], double v[], double x[] );
void r8sm_print ( int m, int n, double a[], double u[], double v[], string title );
void r8sm_print_some ( int m, int n, double a[], double u[], double v[], int ilo, 
  int jlo, int ihi, int jhi, string title );
void r8sm_random ( int m, int n, int &seed, double a[], double u[], double v[] );
double *r8sm_sl ( int n, double a[], double u[], double v[], double b[], 
  int pivot[], int job );
double *r8sm_to_r8ge ( int m, int n, double a[], double u[], double v[] );
void r8sm_zeros ( int m, int n, double a[], double u[], double v[] );
//
//  R8VEC utilities.
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
