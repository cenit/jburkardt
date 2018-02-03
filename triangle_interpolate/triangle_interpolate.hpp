void r8vec_uniform_01 ( int n, int &seed, double r[] );
void timestamp ( );
double triangle_area ( double p1x, double p1y, double p2x, double p2y, 
  double p3x, double p3y );
double *triangle_interpolate_linear ( int m, int n, double p1[2], double p2[2], 
  double p3[2], double p[2], double v1[], double v2[], double v3[] );
double *uniform_in_triangle_map1 ( double v1[2], double v2[2], double v3[2],
  int n, int &seed );

