int i4_max ( int i1, int i2 );
int i4_min ( int i1, int i2 );
bool i4_to_l4 ( int i4 );
bool *i4_to_l4vec ( int i4, int n );
int l4_to_i4 ( bool l4 );
string l4_to_s ( bool l4 );
bool l4_uniform ( int &seed );
bool l4_xnor ( bool l1, bool l2 );
bool l4_xor ( bool l1, bool l2 );
void l4mat_print ( int m, int n, bool a[], string title );
void l4mat_print_some ( int m, int n, bool a[], int ilo, int jlo, int ihi, 
  int jhi, string title );
void l4mat_transpose_print ( int m, int n, bool a[], string title );
void l4mat_transpose_print_some ( int m, int n, bool a[], int ilo, int jlo, 
  int ihi, int jhi, string title );
void l4mat_uniform ( int m, int n, int &seed, bool l4mat[] );
bool *l4mat_uniform_new ( int m, int n, int &seed );
void l4vec_next ( int n, bool l4vec[] );
void l4vec_print ( int n, bool a[], string title );
bool *l4vec_uniform_new ( int n, int &seed );
bool s_to_l4 ( char *s );
void timestamp ( );

