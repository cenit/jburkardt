NINT\_EXACTNESS\_MIXED\
Exactness of Multidimensional Quadrature Using Mixed Rules {#nint_exactness_mixed-exactness-of-multidimensional-quadrature-using-mixed-rules align="center"}
==========================================================

------------------------------------------------------------------------

**NINT\_EXACTNESS\_MIXED** is a C++ program which investigates the
polynomial exactness of a multidimensional quadrature rule which is
designed for a quadrature region that is a direct product of 1D regions
which are a mixture of Legendre, Laguerre, and Hermite type regions.

The six standard 1d quadrature problems that may be used as factors for
the multidimensional problem are:

-   **Legendre integration**\
    interval: \[-1,+1\],\
    weight: w(x) = 1,\
    rules: Clenshaw Curtis, Fejer Type 2, Gauss Legendre, Gauss
    Patterson.
-   **Jacobi integration**:\
    interval: \[-1,+1\],\
    weight: w(x) = (1-x)\^alpha (1+x)\^beta.\
    rules: Gauss Jacobi.
-   **Laguerre integration**\
    interval: \[0,+oo),\
    weight: w(x) = exp(-x).\
    rules: Gauss Laguerre.
-   **Generalized Laguerre integration**\
    interval: \[0,+oo),\
    weight: w(x) = x\^alpha exp(-x).\
    rules: Gauss Laguerre.
-   **Hermite integration**\
    interval: (-oo,+oo),\
    weight: w(x) = exp(-x\*x).\
    rules: Gauss Hermite.
-   **Generalized Hermite integration**\
    interval: (-oo,+oo),\
    weight: w(x) = |x|\^alpha exp(-x\*x).\
    rules: generalized Gauss Hermite.

The M-dimensional quadrature region R based on mixed factors is formed
by the direct product

> **R = R1 x R2 x ... x Rm**

where each factor region Ri is the region associated with one of the six
rules. Thus, R is a sort of generalized hyperrectangle, with the
understanding that in some coordinate directions the region may be
semi-infinite or infinite.

The M-dimensional weight function W based on mixed factors is formed by
the dproduct

> **w(x1,x2,...xm) = w1(x1) x w2(x2) x ... x wm(xm)**

where each factor weight wi(xi) is the weight function associated with
one of the six rules. Some weight functions include parameters alpha and
beta, and these parameters may be specified independently in each
dimension.

For a quadrature region R based on mixed factors, the corresponding
monomial integrand has the form

> **Mono(X,E) = X1\^E1 x X2\^E2 x ... x Xm\^Em**

where each exponent Ei is a nonnegative integer.

The total degree of a monomial Mono(X,E) is:

> **TotalDegree(Mono(X,E)) = Sum ( 1 &lt;= I &lt;= M ) E(I)**

Thus, for instance, the total degree of

> **x1^2^ \* x2 \* x3^5^**

is 2+1+5=8.

The corresponding monomial integral is:

> **Integral ( X in R ) Mono(X,E) W(X) dX**

where each exponent Ei is a nonnegative integer.

The **monomial exactness** of a quadrature rule is the maximum number D
such that, for every monomial of total degree D or less, the quadrature
rule produces the exact value of the monomial integral.

The **polynomial exactness** of a quadrature rule is the maximum number
D such that, for every polynomial of total degree D or less, the
quadrature rule produces the exact value of the polynomial integral. The
total degree of a polynomial is simply the maximum of the total degrees
of the monomials that form the polynomial.

This program is given a quadrature rule based on mixed factors, and
seeks to determine the polynomial exactness of the rule. It does this
simply by applying the quadrature rule to all the monomials of a total
degree 0 up to some limit specified by the user.

The program is very flexible and interactive. The quadrature rule is
defined by five files, to be read at input, and the maximum degree is
specified by the user as well.

The files that define the quadrature rule are assumed to have related
names, of the form

-   *prefix*\_**a.txt**, the "ALPHA" file;
-   *prefix*\_**b.txt**, the "BETA" file;
-   *prefix*\_**r.txt**, the "REGION" file;
-   *prefix*\_**w.txt**, the "WEIGHT" file;
-   *prefix*\_**x.txt**, the "ABSCISSA" file.

When running the program, the user only enters the common *prefix* part
of the file names, which is enough information for the program to find
all the files.

### Usage: {#usage align="center"}

> **nint\_exactness\_mixed** *prefix* *degree\_max*

where

-   *prefix* is the common prefix for the files containing the alpha,
    beta, region, weight and abscissa information of the quadrature
    rule;
-   *degree\_max* is the maximum total monomial degree to check. This
    should be a relatively small nonnegative number, particularly if the
    spatial dimension is high. A value of 5 or 10 might be reasonable,
    but a value of 50 or 100 is probably never a good input!

If the arguments are not supplied on the command line, the program will
prompt for them.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**NINT\_EXACTNESS\_MIXED** is available in [a C++
version](../../cpp_src/nint_exactness_mixed/nint_exactness_mixed.html)
and [a FORTRAN90
version](../../f_src/nint_exactness_mixed/nint_exactness_mixed.html) and
[a MATLAB
version](../../m_src/nint_exactness_mixed/nint_exactness_mixed.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[INT\_EXACTNESS](../../cpp_src/int_exactness/int_exactness.html), a C++
program which tests the polynomial exactness of one dimensional
quadrature rules.

[NINT\_EXACTNESS](../../cpp_src/nint_exactness/nint_exactness.html), a
C++ program which tests the polynomial exactness of integration rules
for the unit hypercube.

[NINTLIB](../../cpp_src/nintlib/nintlib.html), a C++ library which
numerically estimates integrals in multiple dimensions.

[PYRAMID\_EXACTNESS](../../cpp_src/pyramid_exactness/pyramid_exactness.html),
a C++ program which investigates the polynomial exactness of a
quadrature rule for the pyramid.

[SPARSE\_GRID\_MIXED](../../datasets/sparse_grid_mixed/sparse_grid_mixed.html),
a dataset directory which contains multidimensional Smolyak sparse grids
based on a mixed set of 1D factor rules.

[SPARSE\_GRID\_MIXED](../../cpp_src/sparse_grid_mixed/sparse_grid_mixed.html),
a C++ library which defines multidimensional quadrature rules using
sparse grid techniques, based on a mixed set of 1D quadrature rules.

[SPHERE\_EXACTNESS](../../cpp_src/sphere_exactness/sphere_exactness.html),
a C++ program which tests the polynomial exactness of a quadrature rule
for the unit sphere;

[STROUD](../../cpp_src/stroud/stroud.html), a C++ library which defines
quadrature rules for a variety of unusual areas, surfaces and volumes in
2D, 3D and multiple dimensions.

[TEST\_NINT](../../cpp_src/test_nint/test_nint.html), a C++ library
which defines integrand functions for testing multidimensional
quadrature routines.

[TESTPACK](../../cpp_src/testpack/testpack.html), a C++ library which
defines a set of integrands used to test multidimensional quadrature.

[TETRAHEDRON\_EXACTNESS](../../cpp_src/tetrahedron_exactness/tetrahedron_exactness.html),
a C++ program which investigates the polynomial exactness of a
quadrature rule for the tetrahedron.

### Reference: {#reference align="center"}

1.  Philip Davis, Philip Rabinowitz,\
    Methods of Numerical Integration,\
    Second Edition,\
    Dover, 2007,\
    ISBN: 0486453391,\
    LC: QA299.3.D28.

### Source Code: {#source-code align="center"}

-   [nint\_exactness\_mixed.cpp](nint_exactness_mixed.cpp), the source
    code.

### Examples and Tests: {#examples-and-tests align="center"}

### Examples and Tests: {#examples-and-tests-1 align="center"}

**SPARSE\_GRID\_MIXED\_D2\_L2\_CCXCC** is a level 2 sparse grid
quadrature rule for dimension 2, based on 1D factors of \[Clenshaw
Curtis, Clenshaw Curtis\].

-   [sparse\_grid\_mixed\_d2\_l2\_ccxcc\_a.txt](../../datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l2_ccxcc_a.txt),
    the A file.
-   [sparse\_grid\_mixed\_d2\_l2\_ccxcc\_b.txt](../../datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l2_ccxcc_b.txt),
    the B file.
-   [sparse\_grid\_mixed\_d2\_l2\_ccxcc\_r.txt](../../datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l2_ccxcc_r.txt),
    the R file.
-   [sparse\_grid\_mixed\_d2\_l2\_ccxcc\_w.txt](../../datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l2_ccxcc_w.txt),
    the W file.
-   [sparse\_grid\_mixed\_d2\_l2\_ccxcc\_x.txt](../../datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l2_ccxcc_x.txt),
    the X file.
-   [sparse\_grid\_mixed\_d2\_l2\_ccxcc\_exactness.txt](sparse_grid_mixed_d2_l2_ccxcc_exactness.txt),
    the output file for DEGREE\_MAX = 7.

**SPARSE\_GRID\_MIXED\_D2\_L2\_CCXGL** is a level 2 sparse grid
quadrature rule for dimension 2, based on 1D factors of \[Clenshaw
Curtis, Gauss Legendre\].

-   [sparse\_grid\_mixed\_d2\_l2\_ccxgl\_a.txt](../../datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l2_ccxgl_a.txt),
    the A file.
-   [sparse\_grid\_mixed\_d2\_l2\_ccxgl\_b.txt](../../datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l2_ccxgl_b.txt),
    the B file.
-   [sparse\_grid\_mixed\_d2\_l2\_ccxgl\_r.txt](../../datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l2_ccxgl_r.txt),
    the R file.
-   [sparse\_grid\_mixed\_d2\_l2\_ccxgl\_w.txt](../../datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l2_ccxgl_w.txt),
    the W file.
-   [sparse\_grid\_mixed\_d2\_l2\_ccxgl\_x.txt](../../datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l2_ccxgl_x.txt),
    the X file.
-   [sparse\_grid\_mixed\_d2\_l2\_ccxgl\_exactness.txt](sparse_grid_mixed_d2_l2_ccxgl_exactness.txt),
    the output file for DEGREE\_MAX = 7.

**SPARSE\_GRID\_MIXED\_D2\_L2\_CCXGLG** is a level 2 sparse grid
quadrature rule for dimension 2, based on 1D factors of \[Clenshaw
Curtis, Generalized Gauss Laguerre\]. The Generalized Gauss Laguerre
rule uses ALPHA = 1.5.

-   [sparse\_grid\_mixed\_d2\_l2\_ccxglg\_a.txt](../../datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l2_ccxglg_a.txt),
    the A file.
-   [sparse\_grid\_mixed\_d2\_l2\_ccxglg\_b.txt](../../datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l2_ccxglg_b.txt),
    the B file.
-   [sparse\_grid\_mixed\_d2\_l2\_ccxglg\_r.txt](../../datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l2_ccxglg_r.txt),
    the R file.
-   [sparse\_grid\_mixed\_d2\_l2\_ccxglg\_w.txt](../../datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l2_ccxglg_w.txt),
    the W file.
-   [sparse\_grid\_mixed\_d2\_l2\_ccxglg\_x.txt](../../datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l2_ccxglg_x.txt),
    the X file.
-   [sparse\_grid\_mixed\_d2\_l2\_ccxglg\_exactness.txt](sparse_grid_mixed_d2_l2_ccxglg_exactness.txt),
    the output file for DEGREE\_MAX = 7.

**SPARSE\_GRID\_MIXED\_D2\_L2\_CCXLG** is a level 2 sparse grid
quadrature rule for dimension 2, based on 1D factors of \[Clenshaw
Curtis, Gauss Laguerre\].

-   [sparse\_grid\_mixed\_d2\_l2\_ccxlg\_a.txt](../../datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l2_ccxlg_a.txt),
    the A file.
-   [sparse\_grid\_mixed\_d2\_l2\_ccxlg\_b.txt](../../datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l2_ccxlg_b.txt),
    the B file.
-   [sparse\_grid\_mixed\_d2\_l2\_ccxlg\_r.txt](../../datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l2_ccxlg_r.txt),
    the R file.
-   [sparse\_grid\_mixed\_d2\_l2\_ccxlg\_w.txt](../../datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l2_ccxlg_w.txt),
    the W file.
-   [sparse\_grid\_mixed\_d2\_l2\_ccxlg\_x.txt](../../datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l2_ccxlg_x.txt),
    the X file.
-   [sparse\_grid\_mixed\_d2\_l2\_ccxlg\_exactness.txt](sparse_grid_mixed_d2_l2_ccxlg_exactness.txt),
    the output file for DEGREE\_MAX = 7.

**SPARSE\_GRID\_MIXED\_D2\_L2\_F2XGJ** is a level 2 sparse grid
quadrature rule for dimension 2, based on 1D factors of \[Fejer Type 2,
Gauss Jacobi\]. The Gauss Jacobi rule uses ALPHA = 0.5, BETA = 1.5.

-   [sparse\_grid\_mixed\_d2\_l2\_f2xgj\_a.txt](../../datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l2_f2xgj_a.txt),
    the A file.
-   [sparse\_grid\_mixed\_d2\_l2\_f2xgj\_b.txt](../../datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l2_f2xgj_b.txt),
    the B file.
-   [sparse\_grid\_mixed\_d2\_l2\_f2xgj\_r.txt](../../datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l2_f2xgj_r.txt),
    the R file.
-   [sparse\_grid\_mixed\_d2\_l2\_f2xgj\_w.txt](../../datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l2_f2xgj_w.txt),
    the W file.
-   [sparse\_grid\_mixed\_d2\_l2\_f2xgj\_x.txt](../../datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l2_f2xgj_x.txt),
    the X file.
-   [sparse\_grid\_mixed\_d2\_l2\_f2xgj\_exactness.txt](sparse_grid_mixed_d2_l2_f2xgj_exactness.txt),
    the output file for DEGREE\_MAX = 7.

**SPARSE\_GRID\_MIXED\_D2\_L3\_CCXGP** is a level 3 sparse grid
quadrature rule for dimension 2, based on 1D factors of \[Clenshaw
Curtis, Gauss Patterson\].

-   [sparse\_grid\_mixed\_d2\_l3\_ccxgp\_a.txt](../../datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l3_ccxgp_a.txt),
    the A file.
-   [sparse\_grid\_mixed\_d2\_l3\_ccxgp\_b.txt](../../datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l3_ccxgp_b.txt),
    the B file.
-   [sparse\_grid\_mixed\_d2\_l3\_ccxgp\_r.txt](../../datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l3_ccxgp_r.txt),
    the R file.
-   [sparse\_grid\_mixed\_d2\_l3\_ccxgp\_w.txt](../../datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l3_ccxgp_w.txt),
    the W file.
-   [sparse\_grid\_mixed\_d2\_l3\_ccxgp\_x.txt](../../datasets/sparse_grid_mixed/sparse_grid_mixed_d2_l3_ccxgp_x.txt),
    the X file.
-   [sparse\_grid\_mixed\_d2\_l3\_ccxgp\_exactness.txt](sparse_grid_mixed_d2_l3_ccxgp_exactness.txt),
    the output file for DEGREE\_MAX = 9.

**SPARSE\_GRID\_MIXED\_D3\_L2\_CCXF2XGH** is a level 2 sparse grid
quadrature rule for dimension 3, based on 1D factors of \[Clenshaw
Curtis, Fejer Type 2, Gauss Hermite\].

-   [sparse\_grid\_mixed\_d3\_l2\_ccxf2xgh\_a.txt](../../datasets/sparse_grid_mixed/sparse_grid_mixed_d3_l2_ccxf2xgh_a.txt),
    the A file.
-   [sparse\_grid\_mixed\_d3\_l2\_ccxf2xgh\_b.txt](../../datasets/sparse_grid_mixed/sparse_grid_mixed_d3_l2_ccxf2xgh_b.txt),
    the B file.
-   [sparse\_grid\_mixed\_d3\_l2\_ccxf2xgh\_r.txt](../../datasets/sparse_grid_mixed/sparse_grid_mixed_d3_l2_ccxf2xgh_r.txt),
    the R file.
-   [sparse\_grid\_mixed\_d3\_l2\_ccxf2xgh\_w.txt](../../datasets/sparse_grid_mixed/sparse_grid_mixed_d3_l2_ccxf2xgh_w.txt),
    the W file.
-   [sparse\_grid\_mixed\_d3\_l2\_ccxf2xgh\_x.txt](../../datasets/sparse_grid_mixed/sparse_grid_mixed_d3_l2_ccxf2xgh_x.txt),
    the X file.
-   [sparse\_grid\_mixed\_d3\_l2\_ccxf2xgh\_exactness.txt](sparse_grid_mixed_d3_l2_ccxf2xgh_exactness.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for NINT\_EXACTNESS\_MIXED.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **COMP\_NEXT** computes the compositions of the integer N into K
    parts.
-   **FILE\_COLUMN\_COUNT** counts the columns in the first line of a
    file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **MONOMIAL\_INTEGRAL\_GENERALIZED\_HERMITE** evaluates a 1D monomial
    generalized Hermite integral.
-   **MONOMIAL\_INTEGRAL\_GENERALIZED\_LAGUERRE** evaluates a 1D
    monomial generalized Laguerre integral.
-   **MONOMIAL\_INTEGRAL\_HERMITE** evaluates a 1D monomial Hermite
    integral.
-   **MONOMIAL\_INTEGRAL\_JACOBI** evaluates the integral of a monomial
    with Jacobi weight.
-   **MONOMIAL\_INTEGRAL\_LAGUERRE** evaluates a 1D monomial Laguerre
    integral.
-   **MONOMIAL\_INTEGRAL\_LEGENDRE** evaluates a 1D monomial Legendre
    integral.
-   **MONOMIAL\_INTEGRAL\_MIXED** evaluates a multi-D monomial mixed
    integral.
-   **MONOMIAL\_QUADRATURE** applies a quadrature rule to a monomial.
-   **MONOMIAL\_VALUE** evaluates a monomial.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_FACTORIAL** computes the factorial of N.
-   **R8\_FACTORIAL2** computes the double factorial function.
-   **R8\_GAMMA** evaluates Gamma(X) for a real argument.
-   **R8\_HUGE** returns a "huge" R8.
-   **R8\_HYPER\_2F1** evaluates the hypergeometric function F(A,B,C,X).
-   **R8\_PSI** evaluates the function Psi(X).
-   **R8MAT\_DATA\_READ** reads the data from an R8MAT file.
-   **R8MAT\_HEADER\_READ** reads the header from an R8MAT file.
-   **R8VEC\_DOT** computes the dot product of a pair of R8VEC's.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 26 August 2012.*
