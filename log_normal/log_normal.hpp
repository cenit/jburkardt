double log_normal_cdf ( double x, double mu, double sigma );
double log_normal_cdf_inv ( double cdf, double mu, double sigma );
void log_normal_cdf_values ( int &n_data, double &mu, double &sigma, 
  double &x, double &fx );
bool log_normal_check ( double mu, double sigma );
double log_normal_mean ( double mu, double sigma );
double log_normal_pdf ( double x, double mu, double sigma );
double log_normal_sample ( double mu, double sigma, int &seed );
double log_normal_variance ( double mu, double sigma );

double normal_01_cdf ( double x );
double normal_01_cdf_inv ( double cdf );

double normal_cdf ( double x, double mu, double sigma );
double normal_cdf_inv ( double cdf, double mu, double sigma );
bool normal_check ( double mu, double sigma );

double r8_uniform_01 ( int &seed );

double r8poly_value_horner ( int n, double a[], double x );

double r8vec_max ( int n, double x[] );
double r8vec_mean ( int n, double x[] );
double r8vec_min ( int n, double x[] );
double r8vec_variance ( int n, double x[] );

void timestamp ( );
