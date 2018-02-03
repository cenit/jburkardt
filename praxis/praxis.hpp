double flin ( int n, int j, double l, double f ( double x[], int n ), 
  double x[], int &nf, double v[], double q0[], double q1[], double &qd0, 
  double &qd1, double &qa, double &qb, double &qc );
void minfit ( int n, double tol, double a[], double q[] );
void minny ( int n, int j, int nits, double &d2, double &x1, double &f1, 
  bool fk, double f ( double x[], int n ), double x[], double t, double h, 
  double v[], double q0[], double q1[], int &nl, int &nf, double dmin, 
  double ldt, double &fx, double &qa, double &qb, double &qc, double &qd0, 
  double &qd1 );
double praxis ( double t0, double h0, int n, int prin, double x[], 
  double f ( double x[], int n ) );
void print2 ( int n, double x[], int prin, double fx, int nf, int nl );
void quad ( int n, double f ( double x[], int n ), double x[], double t, 
  double h, double v[], double q0[], double q1[], int &nl, int &nf, double dmin, 
  double ldt, double &fx, double &qf1, double &qa, double &qb, double &qc, 
  double &qd0, double &qd1 );
double r8_epsilon ( );
double r8_hypot ( double x, double y );
double r8_max ( double x, double y );
double r8_min ( double x, double y );
double r8_uniform_01 ( int &seed );
void r8mat_print ( int m, int n, double a[], string title );
void r8mat_print_some ( int m, int n, double a[], int ilo, int jlo, int ihi,
  int jhi, string title );
void r8mat_transpose_in_place ( int n, double a[] );
void r8vec_copy ( int n, double a1[], double a2[] );
double r8vec_max ( int n, double r8vec[] );
double r8vec_min ( int n, double r8vec[] );
double r8vec_norm ( int n, double a[] );
void r8vec_print ( int n, double a[], string title );
void svsort ( int n, double d[], double v[] ) ;
void timestamp ( );

