int i4_max ( int i1, int i2 );
int i4_min ( int i1, int i2 );
int i4_modp ( int i, int j );
int i4_uniform ( int a, int b, int &seed );
int i4_wrap ( int ival, int ilo, int ihi );
void i4block_print ( int l, int m, int n, int a[], string title );
void i4mat_print ( int m, int n, int a[], string title );
void i4mat_print_some ( int m, int n, int a[], int ilo, int jlo, int ihi,
  int jhi, string title );
void i4vec_print ( int n, int a[], string title );
int *latin_cover ( int n, int p[] );
int *latin_cover_2d ( int n, int p1[], int p2[] );
int *latin_cover_3d ( int n, int p1[], int p2[], int p3[] );
void perm_check ( int n, int p[] );
void perm_print ( int n, int p[], string title );
int *perm_uniform_new ( int n, int &seed );
int s_len_trim ( string s );
void timestamp ( );
