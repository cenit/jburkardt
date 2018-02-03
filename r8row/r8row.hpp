int i4_log_10 ( int i );
int i4_max ( int i1, int i2 );
int i4_min ( int i1, int i2 );
int i4_power ( int i, int j );
void i4mat_print ( int m, int n, int a[], string title );
void i4mat_print_some ( int m, int n, int a[], int ilo, int jlo, int ihi,
  int jhi, string title );
void i4vec_print ( int n, int a[], string title );
int r8row_compare ( int m, int n, double a[], int i, int j );
double *r8row_indicator_new ( int m, int n );
double *r8row_max ( int m, int n, double a[] );
double *r8row_mean ( int m, int n, double a[] );
double *r8row_min ( int m, int n, double a[] );
void r8row_print ( int m, int n, double a[], string title );
void r8row_print_some ( int m, int n, double a[], int ilo, int jlo, int ihi,
  int jhi, string title );
void r8row_reverse ( int m, int n, double a[] );
double *r8row_running_average ( int m, int n, double v[] );
double *r8row_running_sum ( int m, int n, double v[] );
void r8row_sort_heap_a ( int m, int n, double a[] );
double *r8row_sum ( int m, int n, double a[] );
void r8row_swap ( int m, int n, double a[], int irow1, int irow2 );
double *r8row_to_r8vec ( int m, int n, double a[] );
void r8row_transpose_print ( int m, int n, double a[], string title );
void r8row_transpose_print_some ( int m, int n, double a[], int ilo, int jlo,
  int ihi, int jhi, string title );
double *r8row_uniform_ab_new ( int m, int n, double a, double b, int &seed );
double *r8row_variance ( int m, int n, double a[] );
bool r8vec_eq ( int n, double a1[], double a2[] );
bool r8vec_gt ( int n, double a1[], double a2[] );
bool r8vec_lt ( int n, double a1[], double a2[] );
void r8vec_print ( int n, double a[], string title );
void sort_heap_external ( int n, int &indx, int &i, int &j, int isgn );
void timestamp ( );
