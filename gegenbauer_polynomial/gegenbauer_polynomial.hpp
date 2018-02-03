bool gegenbauer_alpha_check ( double alpha );
void gegenbauer_ek_compute ( int n, double alpha, double x[], double w[] );
double gegenbauer_integral ( int expon, double alpha );
double *gegenbauer_polynomial_value ( int m, int n, double alpha, double x[] );
void gegenbauer_polynomial_values ( int &n_data, int &n, double &a, double &x,
  double &fx );
void gegenbauer_ss_compute ( int order, double alpha, double xtab[],
  double weight[] );
void gegenbauer_ss_recur ( double &p2, double &dp2, double &p1, double x, 
  int order, double alpha, double c[] );
void gegenbauer_ss_root ( double &x, int order, double alpha,  double &dp2,
  double &p1, double c[] );
void hyper_2f1_values ( int &n_data, double &a, double &b, double &c,
  double &x, double &fx );
void imtqlx ( int n, double d[], double e[], double z[] );
double r8_epsilon ( );
double r8_gamma ( double x );
double r8_hyper_2f1 ( double a, double b, double c, double x );
double r8_psi ( double xx );
double r8_sign ( double x );
double r8_uniform_ab ( double a, double b, int &seed );
void r8vec_print ( int n, double a[], string title );
void timestamp ( );

