SANDIA\_SGMG\
Sparse Grids, Mixed Factors, Growth Rules {#sandia_sgmg-sparse-grids-mixed-factors-growth-rules align="center"}
=========================================

------------------------------------------------------------------------

**SANDIA\_SGMG** is a C++ library which constructs a sparse grid whose
factors are possibly distinct 1D quadrature rules.

SANDIA\_SGMG is a variant of the SPARSE\_GRID\_MIXED\_GROWTH library. It
has the same capabilities as that library, but it uses a different
interface to the SANDIA\_RULES routines which compute points and weights
of quadrature rules. This interface is supplied by a small number of
functions in the SANDIA\_RULES2 library.

Instead of passing the parameters needed by some of those rules as
function arguments, these values are made available indirectly. This
library implements that indirect storage using a function called
**parameter**, which must therefore be supplied by the user as part of
every program that calls the library. Refer to the source code of the
example programs to see how **parameter** is defined and used.

For each spatial dimension, the user controls the routines that
determine the order of the 1D quadrature rule, and that evaluate the
quadrature points and weights. This information is supplied in arrays of
pointers to functions. Many common functions for determining the order,
points and weights are available in the SANDIA\_RULES library.

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

  Name                         Abbreviation   Interval    Weight function
  ---------------------------- -------------- ----------- --------------------------
  Clenshaw-Curtis              CC             \[-1,+1\]   1
  Fejer Type 2                 F2             \[-1,+1\]   1
  Gauss Patterson              GP             \[-1,+1\]   1
  Gauss-Legendre               GL             \[-1,+1\]   1
  Gauss-Hermite                GH             (-oo,+oo)   e^-x\*x^
  Generalized Gauss-Hermite    GGH            (-oo,+oo)   |x|^alpha^ e^-x\*x^
  Gauss-Laguerre               LG             \[0,+oo)    e^-x^
  Generalized Gauss-Laguerre   GLG            \[0,+oo)    x^alpha^ e^-x^
  Gauss-Jacobi                 GJ             \[-1,+1\]   (1-x)^alpha^ (1+x)^beta^
  Hermite Genz-Keister         HGK            (-oo,+oo)   e^-x\*x^

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

A scalar quantity GROWTH selects the rule order O for level L from the
three growth options for each 1D rule. In the case of exponentially
growing rules, the slow and moderate growth rules choose O indirectly,
by imposing a requirement on P, the degree of precision of the rule.

  Value   Name       Meaning
  ------- ---------- ------------------------------------------------------
  0       Slow       O=L+1 for linear rules, P=2\*L+1 for exponential
  1       Moderate   O=2\*L+1 for linear rules, P=4\*L+1 for exponential
  2       Full       O=2\*L+1 for linear rules, O = next rule in sequence

### Licensing: {#licensing align="center"}

The code described and made available on this web page is distributed
under the [GNU LGPL](gnu_lgpl.txt) license.

### Languages: {#languages align="center"}

**SANDIA\_SGMG** is available in [a C++
version](../../master/sandia_sgmg/sandia_sgmg.md).

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

[SANDIA\_RULES2](../../master/sandia_rules2/sandia_rules2.md), a C++
library which contains a very small selection of functions which serve
as an interface between SANDIA\_SGMG or SANDIA\_SGMGA and SANDIA\_RULES.

[SANDIA\_SPARSE](../../master/sandia_sparse/sandia_sparse.md), a C++
library which computes the points and weights of a Smolyak sparse grid,
based on a variety of 1-dimensional quadrature rules.

[SGMG](../../datasets/sgmg/sgmg.md), a dataset directory which
contains multidimensional Smolyak sparse grids based on a mixed set of
1D factor rules and a choice of growth rules.

[SGMG](../../master/sgmg/sgmg.md), a C++ library which creates a
sparse grid dataset based on a mixed set of 1D factor rules, and
experiments with the use of a linear growth rate for the quadrature
rules.

[SGMGA](../../master/sgmga/sgmga.md), a C++ library which creates
sparse grids based on a mixture of 1D quadrature rules, allowing
anisotropic weights for each dimension.

[SMOLPACK](../../c_src/smolpack/smolpack.md), a C library which
implements Novak and Ritter's method for estimating the integral of a
function over a multidimensional hypercube using sparse grids, by Knut
Petras.

[SPARSE\_GRID\_DISPLAY](../../m_src/sparse_grid_display/sparse_grid_display.md),
a MATLAB program which can display a 2D or 3D sparse grid.

[SPARSE\_GRID\_MIXED](../../master/sparse_grid_mixed/sparse_grid_mixed.md),
a C++ library which creates sparse grids based on a mix of 1D rules.

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
4.  Michael Eldred, John Burkardt,\
    Comparison of Non-Intrusive Polynomial Chaos and Stochastic
    Collocation Methods for Uncertainty Quantification,\
    American Institute of Aeronautics and Astronautics,\
    Paper 2009-0976,\
    47th AIAA Aerospace Sciences Meeting Including The New Horizons
    Forum and Aerospace Exposition,\
    5 - 8 January 2009, Orlando, Florida.
5.  Walter Gautschi,\
    Numerical Quadrature in the Presence of a Singularity,\
    SIAM Journal on Numerical Analysis,\
    Volume 4, Number 3, September 1967, pages 357-362.
6.  Thomas Gerstner, Michael Griebel,\
    Numerical Integration Using Sparse Grids,\
    Numerical Algorithms,\
    Volume 18, Number 3-4, 1998, pages 209-232.
7.  Gene Golub, John Welsch,\
    Calculation of Gaussian Quadrature Rules,\
    Mathematics of Computation,\
    Volume 23, Number 106, April 1969, pages 221-230.
8.  Prem Kythe, Michael Schaeferkotter,\
    Handbook of Computational Methods for Integration,\
    Chapman and Hall, 2004,\
    ISBN: 1-58488-428-2,\
    LC: QA299.3.K98.
9.  Albert Nijenhuis, Herbert Wilf,\
    Combinatorial Algorithms for Computers and Calculators,\
    Second Edition,\
    Academic Press, 1978,\
    ISBN: 0-12-519260-6,\
    LC: QA164.N54.
10. Fabio Nobile, Raul Tempone, Clayton Webster,\
    A Sparse Grid Stochastic Collocation Method for Partial Differential
    Equations with Random Input Data,\
    SIAM Journal on Numerical Analysis,\
    Volume 46, Number 5, 2008, pages 2309-2345.
11. Thomas Patterson,\
    The Optimal Addition of Points to Quadrature Formulae,\
    Mathematics of Computation,\
    Volume 22, Number 104, October 1968, pages 847-856.
12. Sergey Smolyak,\
    Quadrature and Interpolation Formulas for Tensor Products of Certain
    Classes of Functions,\
    Doklady Akademii Nauk SSSR,\
    Volume 4, 1963, pages 240-243.
13. Arthur Stroud, Don Secrest,\
    Gaussian Quadrature Formulas,\
    Prentice Hall, 1966,\
    LC: QA299.4G3S7.
14. Joerg Waldvogel,\
    Fast Construction of the Fejer and Clenshaw-Curtis Quadrature
    Rules,\
    BIT Numerical Mathematics,\
    Volume 43, Number 1, 2003, pages 1-18.

### Source Code: {#source-code align="center"}

-   [sandia\_sgmg.cpp](sandia_sgmg.cpp), the source code.
-   [sandia\_sgmg.hpp](sandia_sgmg.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [sandia\_sgmg\_prb.cpp](sandia_sgmg_prb.cpp), a sample calling
    program.

**COMP\_NEXT\_PRB** tests COMP\_NEXT.

-   [comp\_next\_prb.cpp](comp_next_prb.cpp), a sample calling program.
-   [comp\_next\_prb\_output.txt](comp_next_prb_output.txt), the output
    file.

**PRODUCT\_MIXED\_GROWTH\_WEIGHT\_PRB** tests
PRODUCT\_MIXED\_GROWTH\_WEIGHT.

-   [product\_mixed\_growth\_weight\_prb.cpp](product_mixed_growth_weight_prb.cpp),
    a sample calling program.
-   [product\_mixed\_growth\_weight\_prb\_output.txt](product_mixed_growth_weight_prb_output.txt),
    the output file.

**SANDIA\_SGMG\_INDEX\_PRB** tests SANDIA\_SGMG\_INDEX.

-   [sandia\_sgmg\_index\_prb.cpp](sandia_sgmg_index_prb.cpp), tests
    SANDIA\_SGMG\_INDEX.
-   [sandia\_sgmg\_index\_prb\_output.txt](sandia_sgmg_index_prb_output.txt),
    the output file.

**SANDIA\_SGMG\_POINT\_PRB** tests SANDIA\_SGMG\_POINT.

-   [sandia\_sgmg\_point\_prb.cpp](sandia_sgmg_point_prb.cpp), tests
    SANDIA\_SGMG\_POINT.
-   [sandia\_sgmg\_point\_prb\_output.txt](sandia_sgmg_point_prb_output.txt),
    the output file.

**SANDIA\_SGMG\_SIZE\_PRB** tests SANDIA\_SGMG\_SIZE and
SANDIA\_SGMG\_SIZE\_TOTAL.

-   [sandia\_sgmg\_size\_prb.cpp](sandia_sgmg_size_prb.cpp), the test
    program.
-   [sandia\_sgmg\_size\_prb\_output.txt](sandia_sgmg_size_prb_output.txt),
    the output file.

**SANDIA\_SGMG\_SIZE\_TABLE** makes a point count table.

-   [sandia\_sgmg\_size\_table.cpp](sandia_sgmg_size_table.cpp), the
    test program.
-   [sandia\_sgmg\_size\_table\_output.txt](sandia_sgmg_size_table_output.txt),
    the output file.

**SANDIA\_SGMG\_UNIQUE\_INDEX\_PRB** tests SANDIA\_SGMG\_UNIQUE\_INDEX.

-   [sandia\_sgmg\_unique\_index\_prb.cpp](sandia_sgmg_unique_index_prb.cpp),
    the test program.
-   [sandia\_sgmg\_unique\_index\_prb\_output.txt](sandia_sgmg_unique_index_prb_output.txt),
    the output file.

**SANDIA\_SGMG\_WEIGHT\_PRB** tests SANDIA\_SGMG\_WEIGHT.

-   [sandia\_sgmg\_weight\_prb.cpp](sandia_sgmg_weight_prb.cpp), the
    test program.
-   [sandia\_sgmg\_weight\_prb\_output.txt](sandia_sgmg_weight_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **PRODUCT\_MIXED\_GROWTH\_WEIGHT** computes the weights of a mixed
    product rule.
-   **SANDIA\_SGMG\_INDEX** indexes a sparse grid of mixed 1D rules.
-   **SANDIA\_SGMG\_POINT** computes the points of a sparse grid rule.
-   **SANDIA\_SGMG\_SIZE** sizes a sparse grid, discounting duplicates.
-   **SANDIA\_SGMG\_SIZE\_TOTAL** sizes a sparse grid, counting
    duplicates.
-   **SANDIA\_SGMG\_UNIQUE\_INDEX** maps nonunique to unique points.
-   **SANDIA\_SGMG\_WEIGHT:** sparse grid weights for a mix of 1D rules.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 01 January 2012.*
