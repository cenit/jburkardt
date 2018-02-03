SPARSE\_GRID\_MIXED\
Sparse Grids using Mixed Factors {#sparse_grid_mixed-sparse-grids-using-mixed-factors align="center"}
================================

------------------------------------------------------------------------

**SPARSE\_GRID\_MIXED** is a C++ library which can be used to construct
a sparse grid whose factors are possibly distinct 1D quadrature rules.

**SPARSE\_GRID\_MIXED** calls many routines from the **SANDIA\_RULES**
library. Source code or compiled copies of *both* libraries must be
available when a program wishes to use the SPARSE\_GRID\_MIXED library.

The 1D quadrature rules are designed to approximate an integral of the
form:

> **Integral ( A &lt; X &lt; B ) F(X) W(X) dX**

where **W(X)** is a weight function, by the quadrature sum:

> **Sum ( 1 &lt;= I &lt;= ORDER) F(X(I)) \* W(I)**

where the set of **X** values are known as *abscissas* and the set of
**W** values are known as *weights*.

Note that the letter **W**, unfortunately, is used to denote both the
weight function in the original integral, and the vector of weight
values in the quadrature sum.

  Index   Name                                           Abbreviation   Default Growth Rule    Interval    Weight function
  ------- ---------------------------------------------- -------------- ---------------------- ----------- --------------------------
  1       Clenshaw-Curtis Exponential Growth             CC             Exponential            \[-1,+1\]   1
  2       Fejer Type 2, Exponential Growth               F2             Exponential            \[-1,+1\]   1
  3       Gauss Patterson, Exponential Growth            GP             Exponential            \[-1,+1\]   1
  4       Gauss-Legendre                                 GL             Linear                 \[-1,+1\]   1
  5       Gauss-Hermite                                  GH             Linear                 (-oo,+oo)   e^-x\*x^
  6       Generalized Gauss-Hermite                      GGH            Linear                 (-oo,+oo)   |x|^alpha^ e^-x\*x^
  7       Gauss-Laguerre                                 LG             Linear                 \[0,+oo)    e^-x^
  8       Generalized Gauss-Laguerre                     GLG            Linear                 \[0,+oo)    x^alpha^ e^-x^
  9       Gauss-Jacobi                                   GJ             Linear                 \[-1,+1\]   (1-x)^alpha^ (1+x)^beta^
  10      Golub-Welsch                                   GW             ?                      ?           ?
  11      Clenshaw-Curtis, Slow Exponential Growth       CC\_SE         Slow exponential       \[-1,+1\]   1
  12      Fejer Type 2, Slow Exponential Growth          F2\_SE         Slow exponential       \[-1,+1\]   1
  13      Gauss Patterson, Slow Exponential Growth       GP\_SE         Slow exponential       \[-1,+1\]   1
  14      Clenshaw-Curtis, Moderate Exponential Growth   CC\_ME         Moderate exponential   \[-1,+1\]   1
  15      Fejer Type 2, Moderate Exponential Growth      F2\_ME         Moderate exponential   \[-1,+1\]   1
  16      Gauss Patterson, Moderate Exponential Growth   GP\_ME         Moderate exponential   \[-1,+1\]   1
  17      Clenshaw-Curtis Nested, linear growth          CCN            Linear (2\*L+1)        \[-1,+1\]   1

A sparse grid is a quadrature rule for a multidimensional integral. It
is formed by taking a certain linear combination of lower-order product
rules. The product rules, in turn, are formed as direct products of 1D
quadrature rules. It is common to form a sparse grid in which the 1D
component quadrature rules are the same. This package, however, is
intended to produce sparse grids based on sums of product rules for
which the rule chosen for each spatial dimension may be freely chosen
from the set listed above.

These sparse grids are still indexed by a number known as **level**, and
assembled as a sum of low order product rules. As the value of **level**
increases, the point growth becomes more complicated. This is because
the 1D rules have somewhat varying point growth patterns to begin with,
and the varying levels of nestedness have a dramatic effect on the
sparsity of the total grid.

Since a sparse grid is made up of a combination of product grids, it is
frequently the case that many of the product grids include the same
point. For efficiency, it is usually desirable to merge or consolidate
such duplicate points when expressing the resulting sparse grid rule. It
is possible to "logically" determine when a duplicate point will be
generated; however, this logic changes depending on the specific
1-dimensional rules being used, and the tests can become quite
elaborate. Moreover, for rules which include real parameters, the
determination of duplication can require a numerical tolerance.

In order to simplify the matter of the detection of duplicate points,
the codes presented begin by generating the entire "naive" set of
points. Then a user-specified tolerance **TOL** is used to determine
when two points are equal. If the maximum difference between any two
components is less than or equal to **TOL**, the points are declared to
be equal.

A reasonable value for **TOL** might be the square root of the machine
precision. Setting **TOL** to zero means that only points which are
identical to the last significant digit are taken to be duplicates.
Setting **TOL** to a negative value means that no duplicate points will
be eliminated - in other words, this choice produces the full or "naive"
grid.

### Web Link: {#web-link align="center"}

A version of the sparse grid library is available in
[http://tasmanian.ornl.gov](http://tasmanian.ornl.gov/), the TASMANIAN
library, available from Oak Ridge National Laboratory.

### Licensing: {#licensing align="center"}

The code described and made available on this web page is distributed
under the [GNU LGPL](gnu_lgpl.txt) license.

### Languages: {#languages align="center"}

**SPARSE\_GRID\_MIXED** is available in [a C++
version](../../master/sparse_grid_mixed/sparse_grid_mixed.md) and [a
FORTRAN90 version](../../f_src/sparse_grid_mixed/sparse_grid_mixed.md)
and [a MATLAB
version](../../m_src/sparse_grid_mixed/sparse_grid_mixed.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[NINT\_EXACTNESS\_MIXED](../../master/nint_exactness_mixed/nint_exactness_mixed.md),
a C++ program which measures the polynomial exactness of a
multidimensional quadrature rule based on a mixture of 1D quadrature
rule factors.

[QUADRULE](../../master/quadrule/quadrule.md), a C++ library which
defines quadrature rules for various intervals and weight functions.

[SANDIA\_RULES](../../master/sandia_rules/sandia_rules.md), a C++
library which produces 1D quadrature rules of Chebyshev, Clenshaw
Curtis, Fejer 2, Gegenbauer, generalized Hermite, generalized Laguerre,
Hermite, Jacobi, Laguerre, Legendre and Patterson types.

[SANDIA\_SPARSE](../../master/sandia_sparse/sandia_sparse.md), a C++
library which computes the points and weights of a Smolyak sparse grid,
based on a variety of 1-dimensional quadrature rules.

[SGMG](../../master/sgmg/sgmg.md), a C++ library which is the
successor to SPARSE\_GRID\_MIXED. It includes the ability to specify a
specific growth rule in each dimension.

[SGMGA](../../master/sgmga/sgmga.md), a C++ library which creates
sparse grids based on a mixture of 1D quadrature rules, allowing
anisotropic weights for each dimension.

[SMOLPACK](../../c_src/smolpack/smolpack.md), a C library which
implements Novak and Ritter's method for estimating the integral of a
function over a multidimensional hypercube using sparse grids, by Knut
Petras.

[SPARSE\_GRID\_GL](../../master/sparse_grid_gl/sparse_grid_gl.md), a
C++ library which creates sparse grids based on Gauss-Legendre rules.

[SPARSE\_GRID\_HERMITE](../../master/sparse_grid_hermite/sparse_grid_hermite.md),
a C++ library which creates sparse grids based on Gauss-Hermite rules.

[SPARSE\_GRID\_MIXED](../../datasets/sparse_grid_mixed/sparse_grid_mixed.md),
a dataset directory which contains multidimensional Smolyak sparse grids
based on a mixed set of 1D factor rules.

[SPARSE\_GRID\_MIXED\_DATASET](../../master/sparse_grid_mixed_dataset/sparse_grid_mixed_dataset.md),
a C++ program which creates a sparse grid dataset based on a mixture of
1D rules.

[TOMS847](../../m_src/toms847/toms847.md), a MATLAB program which uses
sparse grids to carry out multilinear hierarchical interpolation. It is
commonly known as SPINTERP, and is by Andreas Klimke.

### Reference: {#reference align="center"}

1.  Milton Abramowitz, Irene Stegun,\
    Handbook of Mathematical Functions,\
    National Bureau of Standards, 1964,\
    ISBN: 0-486-61272-4,\
    LC: QA47.A34.
2.  Charles Clenshaw, Alan Curtis,\
    A Method for Numerical Integration on an Automatic Computer,\
    Numerische Mathematik,\
    Volume 2, Number 1, December 1960, pages 197-205.
3.  Philip Davis, Philip Rabinowitz,\
    Methods of Numerical Integration,\
    Second Edition,\
    Dover, 2007,\
    ISBN: 0486453391,\
    LC: QA299.3.D28.
4.  Walter Gautschi,\
    Numerical Quadrature in the Presence of a Singularity,\
    SIAM Journal on Numerical Analysis,\
    Volume 4, Number 3, September 1967, pages 357-362.
5.  Thomas Gerstner, Michael Griebel,\
    Numerical Integration Using Sparse Grids,\
    Numerical Algorithms,\
    Volume 18, Number 3-4, 1998, pages 209-232.
6.  Gene Golub, John Welsch,\
    Calculation of Gaussian Quadrature Rules,\
    Mathematics of Computation,\
    Volume 23, Number 106, April 1969, pages 221-230.
7.  Prem Kythe, Michael Schaeferkotter,\
    Handbook of Computational Methods for Integration,\
    Chapman and Hall, 2004,\
    ISBN: 1-58488-428-2,\
    LC: QA299.3.K98.
8.  Albert Nijenhuis, Herbert Wilf,\
    Combinatorial Algorithms for Computers and Calculators,\
    Second Edition,\
    Academic Press, 1978,\
    ISBN: 0-12-519260-6,\
    LC: QA164.N54.
9.  Fabio Nobile, Raul Tempone, Clayton Webster,\
    A Sparse Grid Stochastic Collocation Method for Partial Differential
    Equations with Random Input Data,\
    SIAM Journal on Numerical Analysis,\
    Volume 46, Number 5, 2008, pages 2309-2345.
10. Thomas Patterson,\
    The Optimal Addition of Points to Quadrature Formulae,\
    Mathematics of Computation,\
    Volume 22, Number 104, October 1968, pages 847-856.
11. Sergey Smolyak,\
    Quadrature and Interpolation Formulas for Tensor Products of Certain
    Classes of Functions,\
    Doklady Akademii Nauk SSSR,\
    Volume 4, 1963, pages 240-243.
12. Arthur Stroud, Don Secrest,\
    Gaussian Quadrature Formulas,\
    Prentice Hall, 1966,\
    LC: QA299.4G3S7.
13. Joerg Waldvogel,\
    Fast Construction of the Fejer and Clenshaw-Curtis Quadrature
    Rules,\
    BIT Numerical Mathematics,\
    Volume 43, Number 1, 2003, pages 1-18.

### Source Code: {#source-code align="center"}

-   [sparse\_grid\_mixed.cpp](sparse_grid_mixed.cpp), the source code.
-   [sparse\_grid\_mixed.hpp](sparse_grid_mixed.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

**COMP\_NEXT\_PRB** tests COMP\_NEXT.

-   [comp\_next\_prb.cpp](comp_next_prb.cpp), a sample calling program.
-   [comp\_next\_prb\_output.txt](comp_next_prb_output.txt), the output
    file.

**PRODUCT\_MIXED\_WEIGHT\_PRB** tests PRODUCT\_MIXED\_WEIGHT.

-   [product\_mixed\_weight\_prb.cpp](product_mixed_weight_prb.cpp), a
    sample calling program.
-   [product\_mixed\_weight\_prb\_output.txt](product_mixed_weight_prb_output.txt),
    the output file.

**SPARSE\_GRID\_MIXED\_INDEX\_PRB** tests SPARSE\_GRID\_MIXED\_INDEX.

-   [sparse\_grid\_mixed\_index\_prb.cpp](sparse_grid_mixed_index_prb.cpp),
    tests SPARSE\_GRID\_MIXED\_INDEX.
-   [sparse\_grid\_mixed\_index\_prb\_output.txt](sparse_grid_mixed_index_prb_output.txt),
    the output file.

**SPARSE\_GRID\_MIXED\_POINT\_PRB** tests SPARSE\_GRID\_MIXED\_POINT.

-   [sparse\_grid\_mixed\_point\_prb.cpp](sparse_grid_mixed_point_prb.cpp),
    tests SPARSE\_GRID\_MIXED\_POINT.
-   [sparse\_grid\_mixed\_point\_prb\_output.txt](sparse_grid_mixed_point_prb_output.txt),
    the output file.

**SPARSE\_GRID\_MIXED\_SIZE\_PRB** tests SPARSE\_GRID\_MIXED\_SIZE and
SPARSE\_GRID\_MIXED\_SIZE\_TOTAL.

-   [sparse\_grid\_mixed\_size\_prb.cpp](sparse_grid_mixed_size_prb.cpp),
    the test program.
-   [sparse\_grid\_mixed\_size\_prb\_output.txt](sparse_grid_mixed_size_prb_output.txt),
    the output file.

**SPARSE\_GRID\_MIXED\_SIZE\_TABLE** makes a point count table.

-   [sparse\_grid\_mixed\_size\_table.cpp](sparse_grid_mixed_size_table.cpp),
    the test program.
-   [sparse\_grid\_mixed\_size\_table\_output.txt](sparse_grid_mixed_size_table_output.txt),
    the output file.

**SPARSE\_GRID\_MIXED\_UNIQUE\_INDEX\_PRB** tests
SPARSE\_GRID\_MIXED\_UNIQUE\_INDEX.

-   [sparse\_grid\_mixed\_unique\_index\_prb.cpp](sparse_grid_mixed_unique_index_prb.cpp),
    the test program.
-   [sparse\_grid\_mixed\_unique\_index\_prb\_output.txt](sparse_grid_mixed_unique_index_prb_output.txt),
    the output file.

**SPARSE\_GRID\_MIXED\_WEIGHT\_PRB** tests SPARSE\_GRID\_MIXED\_WEIGHT.

-   [sparse\_grid\_mixed\_weight\_prb.cpp](sparse_grid_mixed_weight_prb.cpp),
    the test program.
-   [sparse\_grid\_mixed\_weight\_prb\_output.txt](sparse_grid_mixed_weight_prb_output.txt),
    the output file.

**SPARSE\_GRID\_MIXED\_WRITE\_PRB** tests SPARSE\_GRID\_MIXED\_WRITE.

-   [sparse\_grid\_mixed\_write\_prb.cpp](sparse_grid_mixed_write_prb.cpp),
    the test program.
-   [sparse\_grid\_mixed\_write\_prb\_output.txt](sparse_grid_mixed_write_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **SPARSE\_GRID\_MIXED\_INDEX** indexes a sparse grid made from mixed
    1D rules.
-   **SPARSE\_GRID\_MIXED\_POINT** computes the points of a sparse grid
    rule.
-   **SPARSE\_GRID\_MIXED\_SIZE** sizes a sparse grid, discounting
    duplicate points.
-   **SPARSE\_GRID\_MIXED\_SIZE\_TOTAL** sizes a sparse grid, counting
    duplicates.
-   **SPARSE\_GRID\_MIXED\_UNIQUE\_INDEX** maps nonunique points to
    unique points.
-   **SPARSE\_GRID\_MIXED\_WEIGHT:** sparse grid weights based on a mix
    of 1D rules.
-   **SPARSE\_GRID\_MIXED\_WRITE** writes a sparse grid rule to five
    files.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 23 February 2010.*
