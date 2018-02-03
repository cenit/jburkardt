double log_normal_cdf ( double x, double mu, double sigma );
double log_normal_cdf_inv ( double cdf, double mu, double sigma );
double log_normal_pdf ( double x, double mu, double sigma );
double log_normal_truncated_ab_cdf ( double x, double mu, double sigma, 
  double a, double b );
double log_normal_truncated_ab_cdf_inv ( double cdf, double mu, double sigma, 
  double a, double b );
bool log_normal_truncated_ab_check ( double mu, double sigma, double a, 
  double b );
double log_normal_truncated_ab_mean ( double mu, double sigma, double a, 
  double b );
double log_normal_truncated_ab_pdf ( double x, double mu, double sigma, 
  double a, double b );
double log_normal_truncated_ab_sample ( double mu, double sigma, double a, 
  double b, int &seed );
double log_normal_truncated_ab_variance ( double mu, double sigma, double a, 
  double b );
double normal_01_cdf ( double x );
double normal_01_cdf_inv ( double p );
double normal_cdf ( double x, double mu, double sigma );
double normal_cdf_inv ( double cdf, double mu, double sigma );
bool normal_check ( double mu, double sigma );
double r8_uniform_ab ( double a, double b, int &seed );
double r8poly_value_horner ( int m, double c[], double x );
double r8vec_max ( int n, double dvec[] );
double r8vec_mean ( int n, double x[] );
double r8vec_min ( int n, double dvec[] );
double r8vec_variance ( int n, double x[] );
void timestamp ( );

