void comp_next ( int n, int k, int a[], bool *more, int *h, int *t );
double *monomial_value ( int dim_num, int point_num, int expon[], double x[] );
void r8vec_copy ( int n, double a1[], double a2[] );
double r8vec_dot_product ( int n, double a1[], double a2[] );
void subcomp_next ( int n, int k, int a[], bool *more, int *h, int *t );
double tetrahedron_unit_monomial ( int expon[3] );
void tetrahedron_unit_o01 ( double w[], double xy[] );
void tetrahedron_unit_o04 ( double w[], double xy[] );
void tetrahedron_unit_o08 ( double w[], double xy[] );
void tetrahedron_unit_o08b ( double w[], double xy[] );
void tetrahedron_unit_o14 ( double w[], double xy[] );
void tetrahedron_unit_o14b ( double w[], double xy[] );
void tetrahedron_unit_o15 ( double w[], double xy[] );
void tetrahedron_unit_o15b ( double w[], double xy[] );
void tetrahedron_unit_o24 ( double w[], double xy[] );
double tetrahedron_unit_volume ( );
void timestamp ( );

