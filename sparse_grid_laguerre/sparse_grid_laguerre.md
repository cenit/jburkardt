SPARSE\_GRID\_LAGUERRE\
Sparse Grids Based on Gauss-Laguerre Rules {#sparse_grid_laguerre-sparse-grids-based-on-gauss-laguerre-rules align="center"}
==========================================

------------------------------------------------------------------------

**SPARSE\_GRID\_LAGUERRE** is a C++ library which constructs sparse
grids based on 1D Gauss-Laguerre rules.

Sparse grids are more naturally constructed from a nested family of
quadrature rules. Gauss-Laguerre rules are not nested, but have higher
accuracy. Thus, there can be a tradeoff. If we compare two sparse grids
of the same "level", one using Gauss-Laguerre rules and the other a
nested rule, then the Gauss-Laguerre sparse grid will have higher
accuracy...but also a significantly greater number of points. When
measuring efficiency, we really need to balance the cost in quadrature
points against the accuracy, and so it is not immediately obvious which
choice is best!

To slightly complicate matters, Gauss-Laguerre rules are not nested. A
sparse grid constructed from Gauss-Laguerre rules will thus generally
have more abscissas than a grid built of nested rules..

Here is a table showing the number of points in a sparse grid based on
Gauss-Laguerre rules, indexed by the spatial dimension, and by the
"level", which is simply an index for the family of sparse grids.

  DIM:         1     2      3      4       5       6
  ------------ ----- ------ ------ ------- ------- --------
  LEVEL\_MAX                                        
  0            1     1      1      1       1       1
  1            3     7      10     13      16      19
  2            7     29     58     95      141     196
  3            15    95     255    515     906     1456
  4            31    273    945    2309    4746    8722
  5            63    723    3120   9065    21503   44758
  6            127   1813   9484   32259   87358   204203

### Licensing: {#licensing align="center"}

The code described and made available on this web page is distributed
under the [GNU LGPL](gnu_lgpl.txt) license.

### Languages: {#languages align="center"}

**SPARSE\_GRID\_LAGUERRE** is available in [a C++
version](../../master/sparse_grid_laguerre/sparse_grid_laguerre.md)
and [a FORTRAN90
version](../../f_src/sparse_grid_laguerre/sparse_grid_laguerre.md) and
[a MATLAB
version.](../../m_src/sparse_grid_laguerre/sparse_grid_laguerre.md)

### Related Data and Programs: {#related-data-and-programs align="center"}

[CC\_DISPLAY](../../m_src/cc_display/cc_display.md), a MATLAB library
which computes and displays Clenshaw Curtis grids in two dimensions, as
well as sparse grids formed from sums of Clenshaw Curtis grids.

[QUADRATURE\_RULES](../../datasets/quadrature_rules/quadrature_rules.md),
a dataset directory which defines quadrature rules; a number of examples
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

[SPARSE\_GRID\_CLOSED](../../master/sparse_grid_closed/sparse_grid_closed.md),
a C++ library which defines define sparse grids based on closed nested
quadrature rules.

[SPARSE\_GRID\_DISPLAY](../../m_src/sparse_grid_display/sparse_grid_display.md),
a MATLAB library which can display a 2D or 3D sparse grid.

[SPARSE\_GRID\_F2](../../datasets/sparse_grid_f2/sparse_grid_f2.md), a
dataset directory which contains the abscissas of sparse grids based on
a Fejer Type 2 rule.

[SPARSE\_GRID\_GL](../../master/sparse_grid_gl/sparse_grid_gl.md), a
C++ library which computes a sparse grid based on 1D Gauss-Legendre
rules.

[SPARSE\_GRID\_GP](../../datasets/sparse_grid_gp/sparse_grid_gp.md), a
dataset directory which contains the abscissas of sparse grids based on
a Gauss Patterson rule.

[SPARSE\_GRID\_HERMITE](../../master/sparse_grid_hermite/sparse_grid_hermite.md),
a C++ library which creates sparse grids based on Gauss-Hermite rules.

[SPARSE\_GRID\_LAGUERRE](../../datasets/sparse_grid_laguerre/sparse_grid_laguerre.md),
a dataset directory which contains the abscissas of sparse grids based
on a Gauss-Laguerre rule.

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

-   [sparse\_grid\_laguerre.cpp](sparse_grid_laguerre.cpp), the source
    code.
-   [sparse\_grid\_laguerre.hpp](sparse_grid_laguerre.hpp), the include
    file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [sparse\_grid\_laguerre\_prb.cpp](sparse_grid_laguerre_prb.cpp), a
    sample calling program.
-   [sparse\_grid\_laguerre\_prb\_output.txt](sparse_grid_laguerre_prb_output.txt),
    the output from a run of the sample program.
-   [lg\_d2\_level3\_r.txt](../../datasets/sparse_grid_laguerre/lg_d2_level3_r.txt),
    the "R" file for a sparse grid quadrature rule for spatial dimension
    2 and level 3.
-   [lg\_d2\_level3\_w.txt](../../datasets/sparse_grid_laguerre/lg_d2_level3_w.txt),
    the "W" file for a sparse grid quadrature rule for spatial dimension
    2 and level 3.
-   [lg\_d2\_level3\_x.txt](../../datasets/sparse_grid_laguerre/lg_d2_level3_x.txt),
    the "X" file for a sparse grid quadrature rule for spatial dimension
    2 and level 3.

### List of Routines: {#list-of-routines align="center"}

-   **CHOOSE** computes the binomial coefficient C(N,K).
-   **COMP\_NEXT** computes the compositions of the integer N into K
    parts.
-   **I4\_LOG\_2** returns the integer part of the logarithm base 2 of
    an I4.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the smaller of two I4's.
-   **I4\_MODP** returns the nonnegative remainder of I4 division.
-   **I4\_POWER** returns the value of I\^J.
-   **I4\_TO\_STRING** converts an I4 to a C++ string.
-   **I4VEC\_PRODUCT** multiplies the entries of an I4VEC.
-   **LAGUERRE\_ABSCISSA** sets abscissas for multidimensional
    Gauss-Laguerre quadrature.
-   **LAGUERRE\_INTEGRAL\_ND** evaluates a multidimensional Laguerre
    polynomial integral.
-   **LAGUERRE\_WEIGHTS** returns weights for certain Gauss-Laguerre
    quadrature rules.
-   **LEVEL\_TO\_ORDER\_OPEN** converts a level to an order for open
    rules.
-   **MONOMIAL\_QUADRATURE** applies a quadrature rule to a monomial.
-   **MONOMIAL\_VALUE** evaluates a monomial.
-   **MULTIGRID\_INDEX\_ONE** returns an indexed multidimensional grid.
-   **PRODUCT\_WEIGHT\_LAGUERRE:** weights for a product Gauss-Laguerre
    rule.
-   **R8\_EPSILON** returns the R8 roundoff unit.
-   **R8\_FACTORIAL** returns N!.
-   **R8\_HUGE** returns a "huge" R8.
-   **R8MAT\_WRITE** writes an R8MAT file.
-   **R8VEC\_DIRECT\_PRODUCT2** creates a direct product of R8VEC's.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **SPARSE\_GRID\_LAGUERRE** computes a sparse grid of Gauss-Laguerre
    points.
-   **SPARSE\_GRID\_LAGUERRE\_INDEX** indexes points in a Gauss-Laguerre
    sparse grid.
-   **SPARSE\_GRID\_LAGUERRE\_SIZE** sizes a sparse grid of
    Gauss-Laguerre points.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **VEC\_COLEX\_NEXT2** generates vectors in colex order.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 08 November 2009.*
