char ch_cap ( char ch );
double csevl ( double x, double cs[], int n );
double error_f ( double x );
double error_fc ( double x );
double gamma_log ( double x );
int get_problem_num ( void );
int i4_huge ( void );
int i4_power ( int i, int j );
void i4vec_copy ( int n, int a1[], int a2[] );
int i4vec_sum ( int n, int a[] );
int inits ( double os[], int nos, double eta );
double normal_01_cdf_inv ( double cdf );

double p00_box_gl05 ( int problem, int dim_num, int sub_num );
double p00_box_mc ( int problem, int dim_num, int point_num );
void p00_default ( int problem, int dim_num );
double p00_exact ( int problem, int dim_num );
double *p00_f ( int problem, int dim_num, int point_num, double x[] );
void p00_i4 ( int problem, char action, char name, int *value );
void p00_lim ( int problem, int dim_num, double a[], double b[] );
char *p00_name ( int problem );
void p00_r8vec ( int problem, char action, char name, int dim_num, 
  double value[] );
char *p00_region ( int problem );
void p00_remap01 ( int problem, int dim_num, int n, double x01[], double xab[] );
void p00_title ( int problem );
double p00_volume ( int problem, int dim_num );

void p01_default ( int dim_num );
double p01_exact ( int dim_num );
double *p01_f ( int dim_num, int point_num, double x[] );
void p01_i4 ( char action, char name, int *value );
void p01_lim ( int dim_num, double a[], double b[] );
char *p01_name ( void );
char *p01_region ( void );
void p01_title ( void );

void p02_default ( int dim_num );
double p02_exact ( int dim_num );
double *p02_f ( int dim_num, int point_num, double x[] );
void p02_i4 ( char action, char name, int *value );
void p02_lim ( int dim_num, double a[], double b[] );
char *p02_name ( void );
char *p02_region ( void );
void p02_title ( void );

void p03_default ( int dim_num );
double p03_exact ( int dim_num );
double *p03_f ( int dim_num, int point_num, double x[] );
void p03_i4 ( char action, char name, int *value );
void p03_lim ( int dim_num, double a[], double b[] );
char *p03_name ( void );
char *p03_region ( void );
void p03_title ( void );

void p04_default ( int dim_num );
double p04_exact ( int dim_num );
double *p04_f ( int dim_num, int point_num, double x[] );
void p04_i4 ( char action, char name, int *value );
void p04_lim ( int dim_num, double a[], double b[] );
char *p04_name ( void );
char *p04_region ( void );
void p04_title ( void );

void p05_default ( int dim_num );
double p05_exact ( int dim_num );
double *p05_f ( int dim_num, int point_num, double x[] );
void p05_i4 ( char action, char name, int *value );
void p05_lim ( int dim_num, double a[], double b[] );
char *p05_name ( void );
char *p05_region ( void );
void p05_title ( void );

void p06_default ( int dim_num );
double p06_exact ( int dim_num );
double *p06_f ( int dim_num, int point_num, double x[] );
void p06_i4 ( char action, char name, int *value );
void p06_lim ( int dim_num, double a[], double b[] );
char *p06_name ( void );
char *p06_region ( void );
void p06_title ( void );

void p07_default ( int dim_num );
double p07_exact ( int dim_num );
double *p07_f ( int dim_num, int point_num, double x[] );
void p07_i4 ( char action, char name, int *value );
void p07_lim ( int dim_num, double a[], double b[] );
char *p07_name ( void );
char *p07_region ( void );
void p07_title ( void );

void p08_default ( int dim_num );
double p08_exact ( int dim_num );
double *p08_f ( int dim_num, int point_num, double x[] );
void p08_i4 ( char action, char name, int *value );
void p08_lim ( int dim_num, double a[], double b[] );
char *p08_name ( void );
char *p08_region ( void );
void p08_title ( void );

void p09_default ( int dim_num );
double p09_exact ( int dim_num );
double *p09_f ( int dim_num, int point_num, double x[] );
void p09_i4 ( char action, char name, int *value );
void p09_lim ( int dim_num, double a[], double b[] );
char *p09_name ( void );
void p09_r8vec ( char action, char name, int dim_num, double value[] );
char *p09_region ( void );
void p09_title ( void );

void p10_default ( int dim_num );
double p10_exact ( int dim_num );
double *p10_f ( int dim_num, int point_num, double x[] );
void p10_i4 ( char action, char name, int *value );
void p10_lim ( int dim_num, double a[], double b[] );
char *p10_name ( void );
char *p10_region ( void );
void p10_title ( void );

void p11_default ( int dim_num );
double p11_exact ( int dim_num );
double *p11_f ( int dim_num, int point_num, double x[] );
void p11_i4 ( char action, char name, int *value );
void p11_lim ( int dim_num, double a[], double b[] );
char *p11_name ( void );
char *p11_region ( void );
void p11_title ( void );

void p12_default ( int dim_num );
double p12_exact ( int dim_num );
double *p12_f ( int dim_num, int point_num, double x[] );
void p12_i4 ( char action, char name, int *value );
void p12_lim ( int dim_num, double a[], double b[] );
char *p12_name ( void );
char *p12_region ( void );
void p12_title ( void );

void p13_default ( int dim_num );
double p13_exact ( int dim_num );
double *p13_f ( int dim_num, int point_num, double x[] );
void p13_i4 ( char action, char name, int *value );
void p13_lim ( int dim_num, double a[], double b[] );
char *p13_name ( void );
char *p13_region ( void );
void p13_title ( void );

void p14_default ( int dim_num );
double p14_exact ( int dim_num );
double *p14_f ( int dim_num, int point_num, double x[] );
void p14_i4 ( char action, char name, int *value );
void p14_lim ( int dim_num, double a[], double b[] );
char *p14_name ( void );
char *p14_region ( void );
void p14_title ( void );

void p15_default ( int dim_num );
double p15_exact ( int dim_num );
double *p15_f ( int dim_num, int point_num, double x[] );
void p15_i4 ( char action, char name, int *value );
void p15_lim ( int dim_num, double a[], double b[] );
char *p15_name ( void );
char *p15_region ( void );
void p15_title ( void );

void p16_default ( int dim_num );
double p16_exact ( int dim_num );
double *p16_f ( int dim_num, int point_num, double x[] );
void p16_i4 ( char action, char name, int *value );
void p16_lim ( int dim_num, double a[], double b[] );
char *p16_name ( void );
void p16_r8vec ( char action, char name, int dim_num, double value[] );
char *p16_region ( void );
void p16_title ( void );

void p17_default ( int dim_num );
double p17_exact ( int dim_num );
double *p17_f ( int dim_num, int point_num, double x[] );
void p17_i4 ( char action, char name, int *value );
void p17_lim ( int dim_num, double a[], double b[] );
char *p17_name ( void );
void p17_r8vec ( char action, char name, int dim_num, double value[] );
char *p17_region ( void );
void p17_title ( void );

void p18_default ( int dim_num );
double p18_exact ( int dim_num );
double *p18_f ( int dim_num, int point_num, double x[] );
void p18_i4 ( char action, char name, int *value );
void p18_lim ( int dim_num, double a[], double b[] );
char *p18_name ( void );
void p18_r8 ( char action, char name, double *value );
void p18_r8vec ( char action, char name, int dim_num, double value[] );
char *p18_region ( void );
void p18_title ( void );

void p19_default ( int dim_num );
double p19_exact ( int dim_num );
double *p19_f ( int dim_num, int point_num, double x[] );
void p19_i4 ( char action, char name, int *value );
void p19_lim ( int dim_num, double a[], double b[] );
char *p19_name ( void );
void p19_r8vec ( char action, char name, int dim_num, double value[] );
char *p19_region ( void );
void p19_title ( void );

void p20_default ( int dim_num );
double p20_exact ( int dim_num );
double *p20_f ( int dim_num, int point_num, double x[] );
void p20_i4 ( char action, char name, int *value );
void p20_lim ( int dim_num, double a[], double b[] );
char *p20_name ( void );
void p20_r8 ( char action, char name, double *value );
char *p20_region ( void );
void p20_title ( void );

void p21_default ( int dim_num );
double p21_exact ( int dim_num );
double *p21_f ( int dim_num, int point_num, double x[] );
void p21_i4 ( char action, char name, int *value );
void p21_i4vec ( char action, char name, int dim_num, int value[] );
void p21_lim ( int dim_num, double a[], double b[] );
char *p21_name ( void );
void p21_r8 ( char action, char name, double *value );
char *p21_region ( void );
void p21_title ( void );

void p22_default ( int dim_num );
double p22_exact ( int dim_num );
double *p22_f ( int dim_num, int point_num, double x[] );
void p22_i4 ( char action, char name, int *value );
void p22_i4vec ( char action, char name, int dim_num, int value[] );
void p22_lim ( int dim_num, double a[], double b[] );
char *p22_name ( void );
void p22_r8 ( char action, char name, double *value );
char *p22_region ( void );
void p22_title ( void );

void p23_default ( int dim_num );
double p23_exact ( int dim_num );
double *p23_f ( int dim_num, int point_num, double x[] );
void p23_i4 ( char action, char name, int *value );
void p23_i4vec ( char action, char name, int dim_num, int value[] );
void p23_lim ( int dim_num, double a[], double b[] );
char *p23_name ( void );
void p23_r8 ( char action, char name, double *value );
char *p23_region ( void );
void p23_title ( void );

void p24_default ( int dim_num );
double p24_exact ( int dim_num );
double *p24_f ( int dim_num, int point_num, double x[] );
void p24_i4 ( char action, char name, int *value );
void p24_lim ( int dim_num, double a[], double b[] );
char *p24_name ( void );
void p24_r8vec ( char action, char name, int dim_num, double value[] );
char *p24_region ( void );
void p24_title ( void );

void p25_default ( int dim_num );
double p25_exact ( int dim_num );
double *p25_f ( int dim_num, int point_num, double x[] );
void p25_i4 ( char action, char name, int *value );
void p25_lim ( int dim_num, double a[], double b[] );
char *p25_name ( void );
void p25_r8 ( char action, char name, double *value );
char *p25_region ( void );
void p25_title ( void );

void p26_default ( int dim_num );
double p26_exact ( int dim_num );
double *p26_f ( int dim_num, int point_num, double x[] );
void p26_i4 ( char action, char name, int *value );
void p26_lim ( int dim_num, double a[], double b[] );
char *p26_name ( void );
void p26_r8vec ( char action, char name, int dim_num, double value[] );
char *p26_region ( void );
void p26_title ( void );

void p27_default ( int dim_num );
double p27_exact ( int dim_num );
double *p27_f ( int dim_num, int point_num, double x[] );
void p27_i4 ( char action, char name, int *value );
void p27_lim ( int dim_num, double a[], double b[] );
char *p27_name ( void );
void p27_r8 ( char action, char name, double *value );
void p27_r8vec ( char action, char name, int dim_num, double value[] );
char *p27_region ( void );
void p27_title ( void );

void p28_default ( int dim_num );
double p28_exact ( int dim_num );
double *p28_f ( int dim_num, int point_num, double x[] );
void p28_i4 ( char action, char name, int *value );
void p28_lim ( int dim_num, double a[], double b[] );
char *p28_name ( void );
void p28_r8vec ( char action, char name, int dim_num, double value[] );
char *p28_region ( void );
void p28_title ( void );

void p29_default ( int dim_num );
double p29_exact ( int dim_num );
double *p29_f ( int dim_num, int point_num, double x[] );
void p29_i4 ( char action, char name, int *value );
void p29_lim ( int dim_num, double a[], double b[] );
char *p29_name ( void );
void p29_r8 ( char action, char name, double *value );
void p29_r8vec ( char action, char name, int dim_num, double value[] );
char *p29_region ( void );
void p29_title ( void );

void p30_default ( int dim_num );
double p30_exact ( int dim_num );
double *p30_f ( int dim_num, int point_num, double x[] );
void p30_i4 ( char action, char name, int *value );
void p30_lim ( int dim_num, double a[], double b[] );
char *p30_name ( void );
void p30_r8vec ( char action, char name, int dim_num, double value[] );
char *p30_region ( void );
void p30_title ( void );

void p31_default ( int dim_num );
double p31_exact ( int dim_num );
double *p31_f ( int dim_num, int point_num, double x[] );
void p31_i4 ( char action, char name, int *value );
void p31_lim ( int dim_num, double a[], double b[] );
char *p31_name ( void );
void p31_r8vec ( char action, char name, int dim_num, double value[] );
char *p31_region ( void );
void p31_title ( void );

void p32_default ( int dim_num );
double p32_exact ( int dim_num );
double *p32_f ( int dim_num, int point_num, double x[] );
void p32_i4 ( char action, char name, int *value );
void p32_lim ( int dim_num, double a[], double b[] );
char *p32_name ( void );
void p32_r8vec ( char action, char name, int dim_num, double value[] );
char *p32_region ( void );
void p32_title ( void );

double r8_abs ( double x );
double r8_choose ( int n, int k );
double r8_epsilon ( void );
double r8_gamma ( double x );
double r8_huge ( void );
double r8_max ( double x, double y );
double r8_min ( double x, double y );
int r8_nint ( double x );
double r8_sign ( double x );
double r8_tiny ( void );

void r8vec_copy ( int n, double a1[], double a2[] );
double r8vec_dot ( int n, double a1[], double a2[] );
void r8vec_print ( int n, double a[], char *title );
double r8vec_product ( int n, double a[] );
double r8vec_sum ( int n, double a[] );
double *r8vec_uniform_01 ( int n, int *seed );

bool s_eqi ( char *s1, char *s2 );;
int s_len_trim ( char *s );

double simplex_unit_volume_nd ( int dim_num );
double sphere_unit_area_nd ( int dim_num );
double sphere_unit_volume_nd ( int dim_num );
double sphere_volume_nd ( int dim_num, double r );
void timestamp ( void );
void tuple_next ( int m1, int m2, int n, int *rank, int x[] );
