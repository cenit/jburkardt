SPARSE\_GRID\_HERMITE\
Sparse Grids Based on Gauss-Hermite Rules {#sparse_grid_hermite-sparse-grids-based-on-gauss-hermite-rules align="center"}
=========================================

------------------------------------------------------------------------

**SPARSE\_GRID\_HERMITE** is a C++ library which constructs sparse grids
based on 1D Gauss-Hermite rules.

Sparse grids are more naturally constructed from a nested family of
quadrature rules. Gauss-Hermite rules are not nested, but have higher
accuracy. Thus, there can be a tradeoff. If we compare two sparse grids
of the same "level", one using Gauss-Hermite rules and the other a
nested rule, then the Gauss-Hermite sparse grid will have higher
accuracy...but also a significantly greater number of points. When
measuring efficiency, we really need to balance the cost in quadrature
points against the accuracy, and so it is not immediately obvious which
choice is best!

To slightly complicate matters, Gauss-Hermite rules are very weakly
nested, in that the rules of odd order all include the abscissa value
X=0.0. A sparse grid constructed from Gauss-Hermite rules will thus have
to keep track of this minor point as well.

Here is a table showing the number of points in a sparse grid based on
Gauss-Hermite rules, indexed by the spatial dimension, and by the
"level", which is simply an index for the family of sparse grids.

  DIM:         1     2      3      4       5       6
  ------------ ----- ------ ------ ------- ------- -------
  LEVEL\_MAX                                        
  0            1     1      1      1       1       1
  1            3     5      7      9       11      13
  2            7     22     37     57      81      109
  3            15    75     161    289     471     713
  4            31    224    608    1268    2341    3953
  5            63    613    2070   4994    10367   19397
  6            127   1570   6507   18076   41957   86522

### Web Link: {#web-link align="center"}

A version of the sparse grid library is available in
[http://tasmanian.ornl.gov](http://tasmanian.ornl.gov/), the TASMANIAN
library, available from Oak Ridge National Laboratory.

### Licensing: {#licensing align="center"}

The code described and made available on this web page is distributed
under the [GNU LGPL](gnu_lgpl.txt) license.

### Languages: {#languages align="center"}

**SPARSE\_GRID\_HERMITE** is available in [a C++
version](../../master/sparse_grid_hermite/sparse_grid_hermite.md) and
[a FORTRAN90
version](../../f_src/sparse_grid_hermite/sparse_grid_hermite.md) and
[a MATLAB
version.](../../m_src/sparse_grid_hermite/sparse_grid_hermite.md)

### Related Data and Programs: {#related-data-and-programs align="center"}

[CC\_DISPLAY](../../m_src/cc_display/cc_display.md), a MATLAB library
which can compute and display Clenshaw Curtis grids in two dimensions,
as well as sparse grids formed from sums of Clenshaw Curtis grids.

[QUADRATURE\_RULES](../../datasets/quadrature_rules/quadrature_rules.md),
a dataset directory which define quadrature rules; a number of examples
of sparse grid quadrature rules are included.

[QUADRULE](../../master/quadrule/quadrule.md), a C++ library which
defines quadrature rules for various intervals and weight functions.

[SGMG](../../master/sgmg/sgmg.md), a C++ library which creates a
sparse grid dataset based on a mixed set of 1D factor rules, and
experiments with the use of a linear growth rate for the quadrature
rules.

[SGMGA](../../master/sgmga/sgmga.md), a C++ library which creates
sparse grids based on a mixture of 1D quadrature rules, allowing
anisotropic weights for each dimension.

[SMOLPACK](../../c_src/smolpack/smolpack.md), a C library which
implements Novak and Ritter's method for estimating the integral of a
function over a multidimensional hypercube using sparse grids.

[SPARSE\_GRID\_CC](../../datasets/sparse_grid_cc/sparse_grid_cc.md), a
dataset directory which contains the abscissas of sparse grids based on
a Clenshaw Curtis rule.

[SPARSE\_GRID\_F2](../../datasets/sparse_grid_f2/sparse_grid_f2.md), a
dataset directory which contains the abscissas of sparse grids based on
a Fejer Type 2 rule.

[SPARSE\_GRID\_GL](../../master/sparse_grid_gl/sparse_grid_gl.md), a
C++ library which computes a sparse grid based on 1D Gauss-Legendre
rules..

[SPARSE\_GRID\_GP](../../datasets/sparse_grid_gp/sparse_grid_gp.md), a
dataset directory which contains the abscissas of sparse grids based on
a Gauss Patterson rule.

[SPARSE\_GRID\_HERMITE](../../datasets/sparse_grid_hermite/sparse_grid_hermite.md),
a dataset directory which contains the abscissas of sparse grids based
on a Gauss Hermite rule.

[SPARSE\_GRID\_MIXED](../../master/sparse_grid_mixed/sparse_grid_mixed.md),
a C++ library which constructs a sparse grid using different rules in
each spatial dimension.

[SPARSE\_GRID\_NCC](../../datasets/sparse_grid_ncc/sparse_grid_ncc.md),
a dataset directory which contains the abscissas of sparse grids based
on a Newton Cotes closed rule.

[SPARSE\_GRID\_NCO](../../datasets/sparse_grid_nco/sparse_grid_nco.md),
a dataset directory which contains the abscissas of sparse grids based
on a Newton Cotes open rule.

[SPARSE\_GRID\_OPEN](../../master/sparse_grid_open/sparse_grid_open.md),
a C++ library which defines define sparse grids based on open nested
quadrature rules.

[TOMS847](../../m_src/toms847/toms847.md), a MATLAB program which uses
sparse grids to carry out multilinear hierarchical interpolation. It is
commonly known as SPINTERP, and is by Andreas Klimke.

### Reference: {#reference align="center"}

1.  Volker Barthelmann, Erich Novak, Klaus Ritter,\
    High Dimensional Polynomial Interpolation on Sparse Grids,\
    Advances in Computational Mathematics,\
    Volume 12, Number 4, 2000, pages 273-288.
2.  Thomas Gerstner, Michael Griebel,\
    Numerical Integration Using Sparse Grids,\
    Numerical Algorithms,\
    Volume 18, Number 3-4, 1998, pages 209-232.
3.  Albert Nijenhuis, Herbert Wilf,\
    Combinatorial Algorithms for Computers and Calculators,\
    Second Edition,\
    Academic Press, 1978,\
    ISBN: 0-12-519260-6,\
    LC: QA164.N54.
4.  Fabio Nobile, Raul Tempone, Clayton Webster,\
    A Sparse Grid Stochastic Collocation Method for Partial Differential
    Equations with Random Input Data,\
    SIAM Journal on Numerical Analysis,\
    Volume 46, Number 5, 2008, pages 2309-2345.
5.  Sergey Smolyak,\
    Quadrature and Interpolation Formulas for Tensor Products of Certain
    Classes of Functions,\
    Doklady Akademii Nauk SSSR,\
    Volume 4, 1963, pages 240-243.
6.  Dennis Stanton, Dennis White,\
    Constructive Combinatorics,\
    Springer, 1986,\
    ISBN: 0387963472,\
    LC: QA164.S79.

### Source Code: {#source-code align="center"}

-   [sparse\_grid\_hermite.cpp](sparse_grid_hermite.cpp), the source
    code.
-   [sparse\_grid\_hermite.hpp](sparse_grid_hermite.hpp), the include
    file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [sparse\_grid\_hermite\_prb.cpp](sparse_grid_hermite_prb.cpp), a
    sample calling program.
-   [sparse\_grid\_hermite\_prb\_output.txt](sparse_grid_hermite_prb_output.txt),
    the output file.

The sample program creates three files, which are an example of how a
sparse grid quadrature rule for spatial dimension 2 and level 3 can be
defined using a Hermite quadrature rule:

-   [gh\_d2\_level3\_r.txt](../../datasets/sparse_grid_hermite/gh_d2_level3_r.txt),
    the "R" or "region" file.
-   [gh\_d2\_level3\_w.txt](../../datasets/sparse_grid_hermite/gh_d2_level3_w.txt),
    the "W" or "weight" file.
-   [gh\_d2\_level3\_x.txt](../../datasets/sparse_grid_hermite/gh_d2_level3_x.txt),
    the "X" or "abscissa" file.

### List of Routines: {#list-of-routines align="center"}

-   **CHOOSE** computes the binomial coefficient C(N,K).
-   **COMP\_NEXT** computes the compositions of the integer N into K
    parts.
-   **HERMITE\_ABSCISSA** sets abscissas for multidimensional
    Gauss-Hermite quadrature.
-   **HERMITE\_INTEGRAL\_ND** evaluates a multidimensional Hermite
    polynomial integral.
-   **HERMITE\_WEIGHTS** returns weights for certain Gauss-Hermite
    quadrature rules.
-   **I4\_LOG\_2** returns the integer part of the logarithm base 2 of
    an I4.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the smaller of two I4's.
-   **I4\_MODP** returns the nonnegative remainder of I4 division.
-   **I4\_POWER** returns the value of I\^J.
-   **I4\_TO\_STRING** converts an I4 to a C++ string.
-   **I4VEC\_PRODUCT** multiplies the entries of an I4VEC.
-   **INDEX\_LEVEL\_HERMITE:** determine first level at which given
    index is generated.
-   **LEVEL\_TO\_ORDER\_OPEN** converts a level to an order for open
    rules.
-   **MONOMIAL\_QUADRATURE\_HERMITE** applies Hermite quadrature to a
    monomial.
-   **MONOMIAL\_VALUE** evaluates a monomial.
-   **MULTIGRID\_INDEX\_Z** returns an indexed multidimensional grid.
-   **PRODUCT\_WEIGHT\_HERMITE:** weights for a product Gauss-Hermite
    rule.
-   **R8\_EPSILON** returns the R8 roundoff unit.
-   **R8\_FACTORIAL2** computes the double factorial function N!!
-   **R8\_HUGE** returns a "huge" R8.
-   **R8MAT\_WRITE** writes an R8MAT file.
-   **R8VEC\_DIRECT\_PRODUCT2** creates a direct product of R8VEC's.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **SPARSE\_GRID\_HERMITE** computes a sparse grid of Gauss-Hermite
    points.
-   **SPARSE\_GRID\_HERMITE\_INDEX** indexes points in a Gauss-Hermite
    sparse grid.
-   **SPARSE\_GRID\_HERMITE\_SIZE** sizes a sparse grid of Gauss-Hermite
    points.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **VEC\_COLEX\_NEXT2** generates vectors in colex order.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 08 November 2009.*
