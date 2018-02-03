int i4_modp ( int i, int j );
int i4_wrap ( int ival, int ilo, int ihi );
bool line_exp_is_degenerate_nd ( int dim_num, double p1[], double p2[] );
double *line_exp_perp ( double p1[2], double p2[2], double p3[2], 
  int &flag );
void line_exp2imp ( double p1[2], double p2[2], double &a, double &b, 
  double &c );
bool line_imp_is_degenerate ( double a, double b, double c );
void lines_exp_int ( double p1[2], double p2[2], double p3[2], double p4[2], 
  int &ival, double p[2] );
void lines_imp_int ( double a1, double b1, double c1, double a2, double b2, 
  double c2, int &ival, double p[2] );
double r8_acos ( double c );
double r8_huge ( );
double r8_max ( double x, double y );
double r8_min ( double x, double y );
double r8_uniform_01 ( int &seed );
double *r8mat_inverse_2d ( double a[] );
int r8mat_solve ( int n, int rhs_num, double a[] );
void r8mat_transpose_print ( int m, int n, double a[], string title );
void r8mat_transpose_print_some ( int m, int n, double a[], int ilo, int jlo,
  int ihi, int jhi, string title );
void r8vec_copy ( int n, double a1[], double a2[] );
bool r8vec_eq ( int n, double a1[], double a2[] );
double r8vec_norm ( int n, double a[] );
void r8vec_print ( int n, double a[], string title );
double segment_point_dist ( double p1[2], double p2[2], double p[2] );
void segment_point_near ( double p1[2], double p2[2], double p[2], 
  double pn[2], double &dist, double &t );
void timestamp ( );
double *triangle_angles ( double t[2*3] );
double triangle_area ( double t[2*3] );
double *triangle_centroid ( double t[2*3] );
void triangle_circumcircle ( double t[2*3], double &r, double pc[2] );
bool triangle_contains_point ( double t[2*3], double p[2] );
double triangle_diameter ( double t[2*3] );
double *triangle_edge_length ( double t[2*3] );
void triangle_incircle ( double t[2*3], double &r, double pc[2] );
int triangle_orientation ( double t[2*3] );
void triangle_orthocenter ( double t[2*3], double p[2], bool &flag );
double triangle_point_dist ( double t[2*3], double p[2] );
void triangle_point_near ( double t[2*3], double p[2], double pn[2], 
  double &dist );
double triangle_quality ( double t[2*3] );
double *triangle_reference_sample ( int n, int &seed );
double *triangle_sample ( double t[2*3], int n, int &seed );
double *triangle_xsi_to_xy ( double t[2*3], double xsi[3] );
double *triangle_xy_to_xsi ( double t[2*3], double p[2] );
