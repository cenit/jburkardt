void i4cf_evaluate ( int n, int a[], int b[], int p[], int q[] );
void i4cf_evaluate_test ( );
void i4scf_evaluate ( int n, int a[], int p[], int q[] );
void i4scf_evaluate_test ( );
void i4vec_print ( int n, int a[], string title );

void i8cf_evaluate ( int n, long long a[], long long b[], long long p[], 
  long long q[] );
void i8cf_evaluate_test ( );
void i8scf_evaluate ( int n, long long int a[], long long int p[], 
  long long int q[] );
void i8scf_evaluate_test ( );
void i8vec_print ( long long int n, long long int a[], string title );

void r8_to_i4scf ( double r, int n, int a[] );
void r8_to_i4scf_test ( );
void r8_to_i8scf ( double r, int n, long long int a[] );
void r8_to_i8scf_test ( );

void r8cf_evaluate ( int n, double a[], double b[], double p[], double q[] );
void r8cf_evaluate_test ( );
void r8scf_evaluate ( int n, double a[], double p[], double q[] );
void r8scf_evaluate_test ( );
void r8vec_print ( int n, double a[], string title );

void timestamp ( );
