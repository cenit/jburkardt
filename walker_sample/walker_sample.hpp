int i4_uniform_ab ( int a, int b, int &seed );
void normalize ( unsigned int n, double x[] );
void random_permutation ( unsigned int n, double x[], int &seed );
void timestamp ( );
void walker_build ( unsigned int n, double x[], double y[], unsigned int a[] );
unsigned int walker_sampler ( unsigned int n, double y[], unsigned int a[] );
void walker_sampler_test ( );
double walker_verify ( unsigned int n, double x[], double y[], unsigned int a[] );
double *zipf_probability ( unsigned int n, double p );

