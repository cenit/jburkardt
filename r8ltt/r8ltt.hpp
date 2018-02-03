int i4_log_10 ( int i );
int i4_max ( int i1, int i2 );
int i4_min ( int i1, int i2 );
int i4_power ( int i, int j );
double r8_uniform_01 ( int &seed );
double *r8ge_mm ( int n, double a[], double b[] );
double *r8ge_mtm ( int n, double a[], double b[] );
void r8ge_print ( int m, int n, double a[], string title );
void r8ge_print_some ( int m, int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title );
double r8ltt_det ( int n, double a[] );
double *r8ltt_indicator ( int n );
double *r8ltt_inverse ( int n, double a[] );
double *r8ltt_mm ( int n, double a[], double b[] );
double *r8ltt_mtm ( int n, double a[], double b[] );
double *r8ltt_mtv ( int n, double a[], double x[] );
double *r8ltt_mv ( int n, double a[], double x[] );
void r8ltt_print ( int n, double a[], string title );
void r8ltt_print_some ( int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title );
double *r8ltt_random ( int n, int &seed );
double *r8ltt_sl ( int n, double a[], double b[] );
double *r8ltt_slt ( int n, double a[], double b[] );
double *r8ltt_to_r8ge ( int n, double a_utt[] );
double *r8ltt_zeros ( int n );
double *r8vec_indicator1_new ( int n );
void r8vec_print ( int n, double a[], string title );
double *r8vec_uniform_01_new ( int n, int &seed );
void timestamp ( );

