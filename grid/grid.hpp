double *grid_generate ( int m, int n, int center, int &seed );
int grid_side ( int m, int n );
int i4_log_10 ( int i );
int i4_power ( int i, int j );
void ksub_random2 ( int n, int k, int &seed, int a[] );
double r8_uniform_01 ( int &seed );
void r8mat_transpose_print ( int m, int n, double a[], string title );
void r8mat_transpose_print_some ( int m, int n, double a[], int ilo, int jlo, 
  int ihi, int jhi, string title );
void r8mat_write ( string output_filename, int m, int n, double table[] );
void timestamp ( );
void tuple_next_fast ( int m, int n, int rank, int x[] );

