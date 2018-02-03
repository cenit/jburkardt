int asm_enum ( int n );
void asm_triangle ( int n, int a[] );
void bell ( int n, int b[] );
void bell_values ( int &n_data, int &n, int &c );
void catalan ( int n, int c[] );
void catalan_row_next ( bool next, int n, int irow[] );
void catalan_values ( int &n_data, int &n, int &c );
void cbt_traverse ( int depth );
void cfrac_to_rat ( int n, int a[], int p[], int q[] );
void cfrac_to_rfrac ( int m, double g[], double h[], double p[], double q[] );
char ch_cap ( char c );
void change_greedy ( int total, int coin_num, int coin_value[], int &change_num, 
  int change[] );
void change_next ( int total, int coin_num, int coin_value[], int &change_num, 
  int change[], bool &done  );
int chinese_check ( int n, int m[] );
int chinese_to_i4 ( int n, int m[], int r[] );
void comb_next ( int n, int k, int a[], bool &done );
void comb_row_next ( int n, int row[] );
void comb_unrank ( int m, int n, int rank, int a[] );
int comp_enum ( int n, int k );
void comp_next ( int n, int k, int a[], bool &more, int &h, int &t );
void comp_next_grlex ( int kc, int xc[] );;
void comp_random ( int n, int k, int &seed, int a[] );
int *comp_random_grlex ( int kc, int rank1, int rank2, int &seed, int &rank );
int comp_rank_grlex ( int kc, int xc[] );
void comp_to_ksub ( int nc, int kc, int ac[], int &ns, int &ks, int as[] );
int *comp_unrank_grlex ( int kc, int rank );
int compnz_enum ( int n, int k );
void compnz_next ( int n, int k, int a[], bool &more, int &h, int &t );
void compnz_random ( int n, int k, int &seed, int a[] );
void compnz_to_ksub ( int nc, int kc, int ac[], int &ns, int &ks, int as[] );
int congruence ( int a, int b, int c, bool &error );
void count_pose_random ( int &seed, int blocks[], int &goal );
void debruijn ( int m, int n, int string[] );
void dec_add ( int mantissa1, int exponent1, int mantissa2, int exponent2, 
  int dec_digit, int &mantissa, int &exponent );
void dec_div ( int mantissa1, int exponent1, int mantissa2, int exponent2, 
  int dec_digit, int &mantissa, int &exponent, bool &error );
void dec_mul ( int mantissa1, int exponent1, int mantissa2, int exponent2, 
  int dec_digit, int &mantissa, int &exponent );
void dec_round ( int mantissa1, int exponent1, int dec_digit, 
  int &mantissa2, int &exponent2 );
double dec_to_r8 ( int mantissa, int exponent );
void dec_to_rat ( int mantissa, int exponent, int &rat_top, int &rat_bot );
char *dec_to_s ( int mantissa, int exponent );
int dec_width ( int mantissa, int exponent );
void decmat_det ( int n, int atop[], int abot[], int dec_digit, 
  int &dtop, int &dbot );
void decmat_print ( int m, int n, int a[], int b[], string title );
int derange_enum ( int n );
void derange_enum2 ( int n, int d[] );
int derange_enum3 ( int n );
void derange0_back_candidate ( int n, int a[], int k, int &nstack, int stack[], 
  int ncan[] );
void derange0_back_next ( int n, int a[], bool &more );
bool derange0_check ( int n, int a[] );
void derange0_weed_next ( int n, int a[], bool &more, int &maxder, int &numder );
char digit_to_ch ( int digit );
void digraph_arc_euler ( int nnode, int nedge, int inode[], int jnode[], 
  bool &success, int trail[] );
void digraph_arc_print ( int nedge, int inode[], int jnode[], string title );
void diophantine ( int a, int b, int c, bool &error, int &x, int &y );
void diophantine_solution_minimize ( int a, int b, int &x, int &y );
void dvec_add ( int n, int dvec1[], int dvec2[], int dvec3[] );
void dvec_complementx ( int n, int dvec1[], int dvec2[] );
void dvec_mul ( int n, int dvec1[], int dvec2[], int dvec3[] );
void dvec_print ( int n, int dvec[], string title );
void dvec_sub ( int n, int dvec1[], int dvec2[], int dvec3[] );
int dvec_to_i4 ( int n, int dvec[] );
void equiv_next ( int n, int &npart, int jarray[], int iarray[], bool &more );
void equiv_next2 ( bool &done, int iarray[], int n );
void equiv_print ( int n, int iarray[], string title );
void equiv_print2 ( int n, int s[], string title );
void equiv_random ( int n, int &seed, int &npart, int a[] );
void euler_row ( int n, int ieuler[] );
int frobenius_number_order2 ( int c1, int c2 );
void frobenius_number_order2_values ( int &n_data, int &c1, int &c2, int &f );
void gamma_log_values ( int &n_data, double &x, double &fx );
unsigned long get_seed ( );
void gray_next ( int n, int &change, int &k, int a[] );
int gray_rank ( int gray );
int gray_rank2 ( int gray );
int gray_unrank ( int rank );
int gray_unrank2 ( int rank );
int i4_bclr ( int i4, int pos );
int i4_bset ( int i4, int pos );
bool i4_btest ( int i4, int pos );
int i4_choose ( int n, int k );
void i4_factor ( int n, int maxfactor, int &nfactor, int factor[], 
  int power[], int &nleft );
int i4_factorial ( int n );
int i4_fall ( int x, int n );
void i4_fall_values ( int &n_data, int &m, int &n, int &fmn );
int i4_gcd ( int i, int j );
int i4_huge ( );
int i4_log_10 ( int i );
int i4_max ( int i1, int i2 );
int i4_min ( int i1, int i2 );
int i4_modp ( int i, int j );
int i4_moebius ( int n );
void i4_partition_conj ( int n, int iarray1[], int mult1[], int npart1, 
  int iarray2[], int mult2[], int &npart2 );
void i4_partition_count ( int n, int p[] );
int *i4_partition_count2 ( int n );
void i4_partition_count_values ( int &n_data, int &n, int &c );
void i4_partition_next ( bool &done, int a[], int mult[], int n, int &npart );
void i4_partition_next2 ( int n, int a[], int mult[], int &npart, bool &more );
void i4_partition_print ( int n, int npart, int a[], int mult[] );
void i4_partition_random ( int n, int table[], int &seed, int a[], int mult[], 
  int &npart );
void i4_partitions_next ( int s, int m[] );
int i4_power ( int i, int j );
int i4_rise ( int x, int n );
void i4_rise_values ( int &n_data, int &m, int &n, int &fmn );
int i4_sign ( int i );
void i4_sqrt ( int n, int &q, int &r );
void i4_sqrt_cf ( int n, int max_term, int &n_term, int b[] );
void i4_swap ( int &i, int &j );
void i4_to_bvec ( int i, int n, int bvec[] );
void i4_to_chinese ( int j, int n, int m[], int r[] );
void i4_to_dvec ( int i4, int n, int dvec[] );
void i4_to_i4poly ( int intval, int base, int degree_max, int &degree, int a[] );
string i4_to_s ( int i );
double i4_to_van_der_corput ( int seed, int base );
int i4_uniform_ab ( int ilo, int ihi, int &seed );
void i4mat_01_rowcolsum ( int m, int n, int r[], int c[], int a[], bool &error );
void i4mat_01_rowcolsum2 ( int m, int n, int r[], int c[], int a[], 
  bool &error );
void i4mat_u1_inverse ( int n, int a[], int b[] );
void i4mat_perm0 ( int n, int a[], int p[] );
void i4mat_2perm0 ( int m, int n, int a[], int p[], int q[] );
void i4mat_print ( int m, int n, int a[], string title );
void i4mat_print_some ( int m, int n, int a[], int ilo, int jlo, int ihi, 
  int jhi, string title );
void i4poly ( int n, int a[], int x0, int iopt, int &val );
int *i4poly_add ( int na, int a[], int nb, int b[] );
void i4poly_cyclo ( int n, int phi[] );
int i4poly_degree ( int na, int a[] );
int *i4poly_dif ( int na, int a[], int d );
void i4poly_div ( int na, int a[], int nb, int b[], int &nq, int q[], 
  int &nr, int r[] );
void i4poly_mul ( int na, int a[], int nb, int b[], int c[] );
void i4poly_print ( int n, int a[], string title );
int i4poly_to_i4 ( int n, int a[], int x );
bool i4vec_ascends ( int n, int x[] );
void i4vec_backtrack ( int n, int maxstack, int x[], int &indx, 
  int &k, int &nstack, int stack[], int ncan[] );
int *i4vec_copy_new ( int n, int a1[] );
bool i4vec_descends ( int n, int x[] );
void i4vec_decrement ( int n, int v[] );
int i4vec_dot_product ( int n, int x[], int y[] );
int i4vec_frac ( int n, int a[], int k );
void i4vec_heap_d ( int n, int a[] );
void i4vec_increment ( int n, int v[] );
int i4vec_index ( int n, int a[], int aval );
void i4vec_indicator0 ( int n, int a[] );
int *i4vec_indicator0_new ( int n );
void i4vec_indicator1 ( int n, int a[] );
int *i4vec_indicator1_new ( int n );
int i4vec_max ( int n, int a[] );
int i4vec_maxloc_last ( int n, int x[] );
int i4vec_min ( int n, int a[] );
bool i4vec_pairwise_prime ( int n, int a[] );
void i4vec_print ( int n, int a[], string title );
int i4vec_product ( int n, int a[] );
void i4vec_reverse ( int n, int a[] );
void i4vec_sort_bubble_a ( int n, int a[] );
void i4vec_sort_heap_a ( int n, int a[] );
int *i4vec_sort_heap_index_a ( int n, int a[] );
int *i4vec_sort_heap_index_d ( int n, int a[] );
int i4vec_sum ( int n, int a[] );
void i4vec_transpose_print ( int n, int a[], string title );
int *i4vec_uniform_ab_new ( int n, int a, int b, int &seed );
void i4vec0_print ( int n, int a[], string title );
void i4vec1_print ( int n, int a[], string title );
void index_box2_next_2d ( int n1, int n2, int ic, int jc, int &i, int &j, 
  bool &more );
void index_box2_next_3d ( int n1, int n2, int n3, int ic, int jc, int kc, 
  int &i, int &j, int &k, bool &more );
void index_box_next_2d ( int n1, int n2, int &i, int &j, bool &more );
void index_box_next_3d ( int n1, int n2, int n3, int &i, int &j, int &k, 
  bool &more );
void index_next0 ( int n, int hi, int a[], bool &more );
void index_next1 ( int n, int hi[], int a[], bool &more );
void index_next2 ( int n, int lo[], int hi[], int a[], bool &more );
int index_rank0 ( int n, int hi, int a[] );
int index_rank1 ( int n, int hi[], int a[] );
int index_rank2 ( int n, int lo[], int hi[], int a[] );
void index_unrank0 ( int n, int hi, int rank, int a[] );
void index_unrank1 ( int n, int hi[], int rank, int a[] );
void index_unrank2 ( int n, int lo[], int hi[], int rank, int a[] );
int inverse_mod_n ( int b, int n );
void inversion_to_perm0 ( int n, int ins[], int p[] );
void involute_enum ( int n, int s[] );
void jfrac_to_rfrac ( int m, double r[], double s[], double p[], double q[] );
int josephus ( int n, int m, int k );
void ksub_next ( int n, int k, int a[], bool &more, int &m, int &m2 );
void ksub_next2 ( int n, int k, int a[], int &in, int &iout );
void ksub_next3 ( int n, int k, int a[], bool &more, int &in, int &iout );
void ksub_next4 ( int n, int k, int a[], bool &done );
void ksub_random ( int n, int k, int &seed, int a[] );
void ksub_random2 ( int n, int k, int &seed, int a[] );
void ksub_random3 ( int n, int k, int &seed, int a[] );
void ksub_random4 ( int n, int k, int &seed, int a[] );
int *ksub_random5 ( int n, int k, int &seed );
void ksub_rank ( int k, int a[], int &rank );
void ksub_to_comp ( int ns, int ks, int as[], int &nc, int &kc, int ac[] );
void ksub_to_compnz ( int ns, int ks, int as[], int &nc, int &kc, int ac[] );
void ksub_unrank ( int k, int rank, int a[] );
void l4vec_next ( int n, bool lvec[] );
void matrix_product_opt ( int n, int rank[], int &cost, int order[] );
void moebius_matrix ( int n, int a[], int mu[] );
void moebius_values ( int &n_data, int &n, int &c );
int monomial_count ( int degree_max, int dim );
int *monomial_counts ( int degree_max, int dim );
int morse_thue ( int i );
int multinomial_coef1 ( int nfactor, int factor[] );
int multinomial_coef2 ( int nfactor, int factor[] );
int multiperm_enum ( int n, int k, int counts[] );
void multiperm_next ( int n, int a[], bool &more );
void network_flow_max ( int nnode, int nedge, int iendpt[], int icpflo[], 
  int source, int sink, int cut[], int node_flow[] );
unsigned int nim_sum ( unsigned int i, unsigned int j );
void padovan ( int n, int p[] );
void pell_basic ( int d, int &x0, int &y0 );
void pell_next ( int d, int x0, int y0, int xn, int yn, int &xnp1, int &ynp1 );
int pent_enum ( int n );
void perm_ascend ( int n, int a[], int &length, int sub[] );
int perm_fixed_enum ( int n, int m );
int perm0_break_count ( int n, int p[] );
bool perm0_check ( int n, int p[] );
void perm0_cycle ( int n, int p[], int &isgn, int &ncycle, int iopt );
int perm0_distance ( int n, int a[], int b[] );
void perm0_free ( int npart, int ipart[], int nfree, int ifree[] );
int *perm0_inverse ( int n, int p[] );
void perm0_inverse2 ( int n, int p[] );
int *perm0_inverse3_new ( int n, int perm[] );
void perm0_lex_next ( int n, int p[], bool &more );
void perm0_mul ( int n, int p1[], int p2[], int p3[] );
void perm0_next ( int n, int p[], bool &more, bool &even );
void perm0_next2 ( int n, int p[], bool &done );
void perm0_next3 ( int n, int p[], bool &more, int &nfact, int &rank );
void perm0_print ( int n, int p[], string title );
void perm0_random ( int n, int &seed, int p[] );
void perm0_random2 ( int n, int &seed, int p[] );
int perm0_rank ( int n, int p[], int invers[] );
int perm0_sign ( int n, int p[] );
void perm0_to_equiv ( int n, int p[], int &npart, int jarray[], int iarray[] );
void perm0_to_inversion ( int n, int p[], int ins[] );
void perm0_to_ytb ( int n, int p[], int lambda[], int a[] );
void perm0_unrank ( int n, int rank, int p[] );
void perm1_canon_to_cycle ( int n, int p1[], int p2[] );
bool perm1_check ( int n, int p[] );
void perm1_cycle_to_canon ( int n, int p1[], int p2[] );
void perm1_cycle_to_index ( int n, int p1[], int p2[] );
void perm1_index_to_cycle ( int n, int p1[], int p2[] );
void perm1_print ( int n, int p[], string title );
void perrin ( int n, int p[] );
bool pord_check ( int n, int a[] );
int power_mod ( int a, int n, int m );
void power_series1 ( int n, double alpha, double a[], double b[] );
void power_series2 ( int n, double a[], double b[] );
void power_series3 ( int n, double a[], double b[], double c[] );
void power_series4 ( int n, double a[], double b[], double c[] );
int prime ( int n );
void pythag_triple_next ( int &i, int &j, int &a, int &b, int &c );
double r8_agm ( double a, double b );
double r8_choose ( int n, int k );
double r8_epsilon ( );
double r8_factorial ( int n );
double r8_fall ( double x, int n );
void r8_fall_values ( int &n_data, double &x, int &n, double &f );
double r8_huge ( );
int r8_nint ( double x );
double r8_pi ( );
double r8_rise ( double x, int n );
void r8_rise_values ( int &n_data, double &x, int &n, double &f );
void r8_swap ( double &x, double &y );
void r8_to_cfrac ( double r, int n, int a[], int p[], int q[] );
void r8_to_dec ( double rval, int dec_digit, int &mantissa, int &exponent );
void r8_to_rat ( double a, int ndig, int &iatop, int &iabot );
double r8_uniform_01 ( int &seed );
double r8_uniform_ab ( double rlo, double rhi, int &seed );
double r8mat_det ( int n, double a[] );
void r8mat_perm0 ( int n, double a[], int p[] );
void r8mat_2perm0 ( int m, int n, double a[], int p[], int q[] );
double r8mat_permanent ( int n, double a[] );
void r8mat_print ( int m, int n, double a[], string title );
void r8mat_print_some ( int m, int n, double a[], int ilo, int jlo, int ihi, 
  int jhi, string title );
void r8mat_transpose_print ( int m, int n, double a[], string title );
void r8mat_transpose_print_some ( int m, int n, double a[], int ilo, int jlo, 
  int ihi, int jhi, string title );
void r8poly ( int n, double a[], double x0, int iopt, double &val );
double *r8poly_add ( int na, double a[], int nb, double b[] );
int r8poly_degree ( int na, double a[] );
double *r8poly_dif ( int na, double a[], int d );
void r8poly_div ( int na, double a[], int nb, double b[], int &nq, double q[], 
  int &nr, double r[] );
void r8poly_f2p ( int n, double a[] );
double r8poly_fval ( int n, double a[], double x );
void r8poly_mul ( int na, double a[], int nb, double b[], double c[] );
void r8poly_n2p ( int n, double a[], double xarray[] );
double r8poly_nval ( int n, double a[], double xarray[], double x );
void r8poly_nx ( int n, double a[], double xarray[], double x );
void r8poly_p2f ( int n, double a[] );
void r8poly_p2n ( int n, double a[], double xarray[] );
void r8poly_p2t ( int n, double a[], double x );
void r8poly_power ( int na, double a[], int p, double b[] );
void r8poly_print ( int n, double a[], string title );
double r8poly_pval ( int n, double a[], double x );
void r8poly_t2p ( int n, double a[], double x );
void r8vec_backtrack ( int n, int maxstack, double x[], int &indx, 
  int &k, int &nstack, double stack[], int ncan[] );
double r8vec_dot_product ( int n, double a1[], double a2[] );
double r8vec_frac ( int n, double a[], int k );
void r8vec_indicator1 ( int n, double a[] );
double *r8vec_indicator1_new ( int n );
bool r8vec_mirror_next ( int n, double a[] );
void r8vec_print ( int n, double a[], string title );
void r8vec_uniform ( int n, double alo, double ahi, int &seed, double a[] );
void r8vec_uniform_01 ( int n, int &seed, double r[] );
unsigned long rand_initialize ( unsigned long seed );
unsigned long random_initialize ( unsigned long seed );
void rat_add ( int itop1, int ibot1, int itop2, int ibot2, int &itop, int &ibot, 
  bool &error );
void rat_div ( int itop1, int ibot1, int itop2, int ibot2, int &itop, 
  int &ibot, bool &error );
void rat_farey ( int n, int max_frac, int &num_frac, int a[], int b[] );
void rat_farey2 ( int n, int a[], int b[] );
void rat_mul ( int itop1, int ibot1, int itop2, int ibot2, int &itop, 
  int &ibot, bool &error );
void rat_normalize ( int &a, int &b );
void rat_sum_formula ( int n, int a[], int b[] );
void rat_to_cfrac ( int ip, int iq, int m, int &n, int a[], bool &error );
void rat_to_dec ( int rat_top, int rat_bot, int &mantissa, int &exponent );
double rat_to_r8 ( int top, int bot );
string rat_to_s ( int top, int bot );
int rat_width ( int a, int b );
void ratmat_det ( int n, int iatop[], int iabot[], int &idtop, int &idbot, 
  bool &error );
void ratmat_print ( int m, int n, int a[], int b[], string title );
void regro_next ( bool &done, int n, int v[], int vmax[] );
void rfrac_to_cfrac ( int m, double p[], double q[], double t[], bool &error );
void rfrac_to_jfrac ( int m, double p[], double q[], double r[], double s[] );
int s_len_trim ( string s );
void schroeder ( int n, int s[] );
void sort_heap_external ( int n, int &indx, int &i, int &j, int isgn,
  int &i1, int &j1, int &k0, int &k1, int &n1 );
void subcomp_next ( int n, int k, int a[], bool &more, 
  int &h, int &t, int &n2, bool &more2 );
void subcompnz_next ( int n, int k, int a[], bool &more, 
  int &h, int &t, int &n2, bool &more2 );
void subcompnz2_next ( int n_lo, int n_hi, int k, int a[], bool &more, 
  int &h, int &t, int &n2, bool &more2 );
void subset_by_size_next ( int n, int a[], int &size, bool &more, bool &more2,
  int &m, int &m2 );
void subset_gray_next ( int n, int a[], bool &more, int &ncard, int &iadd );
int subset_gray_rank ( int n, int a[] );
void subset_gray_unrank ( int rank, int n, int a[] );
void subset_lex_next ( int n, bool jmp, int ndim, int &k, int a[] );
void subset_random ( int n, int &seed, int a[] );
void subtriangle_next ( int n, bool &more, int &i1, int &j1, int &i2, int &j2, 
  int &i3, int &j3 );
void thue_binary_next ( int &n, int thue[] );
void thue_ternary_next ( int &n, int thue[] );
void timestamp ( );
void triang ( int n, int zeta[], int p[] );
void tuple_next ( int m1, int m2, int n, int &rank, int x[] );
void tuple_next_fast ( int m, int n, int rank, int base[], int x[] );
void tuple_next_ge ( int m, int n, int &k, int x[] );
void tuple_next2 ( int n, int xmin[], int xmax[], int x[], int &rank );
bool ubvec_add ( int n, unsigned int bvec1[], unsigned int bvec2[], 
  unsigned int bvec3[] );
void ubvec_print ( int n, unsigned int bvec[], string title );
unsigned int ubvec_to_ui4 ( int n, unsigned int bvec[] );
void ubvec_xor ( int n, unsigned int bvec1[], unsigned int bvec2[], 
  unsigned int bvec3[] );
void ui4_to_ubvec ( unsigned int i, int n, unsigned int bvec[] );
void vec_colex_next ( int dim_num, int base, int a[], bool &more );
void vec_colex_next2 ( int dim_num, int base[], int a[], bool &more );
void vec_colex_next3 ( int dim_num, int base[], int a[], bool &more );
void vec_gray_next ( int n, int base[], int a[], bool &done, int active[], 
  int dir[], int &change );
int vec_gray_rank ( int n, int base[], int a[] );
void vec_gray_unrank ( int n, int base[], int rank, int a[] );
void vec_lex_next ( int dim_num, int base, int a[], bool &more );
void vec_random ( int n, int base, int &seed, int a[] );
void vector_constrained_next ( int n, int x_min[], int x_max[], int x[], 
  int &constraint, bool &more );
void vector_constrained_next2 ( int n, int x_min[], int x_max[], int x[], 
  int &constraint, bool &more );
void vector_constrained_next3 ( int n, int x_min[], int x_max[], int x[], 
  double &constraint, bool &more );
void vector_constrained_next4 ( int n, double alpha[], int x_min[], 
  int x_max[], int x[], double q, bool &more );
void vector_constrained_next5 ( int n, int x[], int sum_min, int sum_max, 
  int &base, bool &more );
void vector_constrained_next6 ( int n, double alpha[], int x_min[], 
  int x_max[], int x[], double q_min, double q_max, bool &more );
void vector_constrained_next7 ( int n, double level_weight[], int x_max[], 
  int x[], double q_min, double q_max, bool &more );
void vector_next ( int n, int x_min[], int x_max[], int x[], bool &more );
int ytb_enum ( int n );
void ytb_next ( int n, int lambda[], int a[], bool &more );
void ytb_print ( int n, int a[], string title );
void ytb_random ( int n, int lambda[], int &seed, int a[] );
