SPARSE\_GRID\_OPEN\
Sparse Grids Based on Open Quadrature Rules {#sparse_grid_open-sparse-grids-based-on-open-quadrature-rules align="center"}
===========================================

------------------------------------------------------------------------

**SPARSE\_GRID\_OPEN** is a C++ library which computes the location of
points on a sparse grid based on an open quadrature rule.

One way of looking at the construction of sparse grids is to assume that
we start out by constructing a (very dense) product grid. We will assume
for now that the **order**, that is, the number of points used in each
component grid, is the same for all dimensions. Moreover, we will assume
that the order is a power of 2 minus one, so that we have a natural
relationship between the order and the logarithm base 2 of the order
plus 1:

            order = 2( level + 1 ) - 1
          

Thus, if we allow **level** to grow, the **order** roughly doubles, as
follows:

  Level   Order
  ------- -------
  0       1
  1       3
  2       7
  3       15
  4       31
  5       63
  6       127
  7       255
  8       511
  9       1023
  10      2047

To keep things simple, let us begin by supposing we are selecting points
for a grid to be used in an interpolation or quadrature rule. If you
successively compute the locations of the points of each level, you will
probably see that the points of a level are all included in the grid
associated with the next level. (This is not guaranteed for all rules;
it's simply a property of the way most such grids are defined!).

This **nesting** property is very useful. For one thing, it means that
when if we've computed a grid of one level, and now proceed to the next,
then all the information associated with the current level (point
location, the value of functions at those points) is still useful for
the next level, and will save us some computation time as well. This
also means that, when we have reached a particular level, all the
previous levels are still available to us, with no extra storage. These
considerations make it possible, for instance, to do efficient and
convenient error estimation.

When we move to a problem whose geometry is two-dimensional or more, we
can still take the same approach. However, when working in
multidimensional geometry, it is usually not a good idea to form a grid
using the product of 1D grids, especially when we are determining the
order using the idea of levels. Especially in this case, if we go to the
next level in each dimension, the total number of points would increase
by a factor of roughly 2 to the spatial dimension. Just a few such steps
in, say, 6 dimensions, and we would be far beyond our computational
capacity.

Instead, in multidimensions, the idea is to construct a *sparse grid*,
which can be thought of in one of two ways:

-   the sparse gird is a logical sum of low order product grids; each
    product grid has a total level (sum of the levels of the 1d rules)
    that is less than or equal to **level\_max**;
-   the sparse grid is a very sparse selection of points from the very
    high order product grid formed by using rules of level
    **level\_max** in each dimension.

*(There is still a lot of explaining to do to get from the
one-dimensional levels to the N-dimensional levels and the selection of
the low-level product grids that sum up to the sparse grid...)*

Once the grid indices of the sparse grid points have been selected,
there are a variety of schemes for distributing the points. We
concentrate on two sets of schemes:

Uniform (equally spaced) open rules of order N over \[0,1\]:

-   Newton Cotes Open: \[ 1, 2, 3,..., N \] / ( N + 1 );\
    does not include boundaries. Point spacing is 1/(N+1)\
    First and last points are distance 1/N to the boundary.

The uniform schemes are easy to understand. However, it has been
observed that greater accuracy and stability can be achieved by
arranging the points in a nonuniform way that tends to move points
towards the boundary and away from the center. A common scheme uses the
cosine function to do this, and can be naturally derived from the
uniform schemes.

Nonuniform open rules of order N over \[-1,1\]:

-   Fejer Type 2:\
    Theta = pi \* \[ 1, 2, 3,..., N \] / ( N + 1 );\
    Points = cos ( theta );\
    does not include boundaries.\
    Analogue to the Newton Cotes Open Rule.
-   Gauss-Patterson:\
    Starting with midpoint rule, then the Gauss rule of order 3,\
    incremented at each new level by intermediate points,\
    does not include boundaries.

Note that a standard Gauss-Legendre quadrature rule will not be suitable
for use in constructing sparse grids, because rules of successively
greater levels are not naturally nested.

### Licensing: {#licensing align="center"}

The code described and made available on this web page is distributed
under the [GNU LGPL](gnu_lgpl.txt) license.

### Languages: {#languages align="center"}

**SPARSE\_GRID\_OPEN** is available in [a C++
version](../../master/sparse_grid_open/sparse_grid_open.md) and [a
FORTRAN90 version](../../f_src/sparse_grid_open/sparse_grid_open.md)
and [a MATLAB
version](../../m_src/sparse_grid_open/sparse_grid_open.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CC\_DISPLAY](../../m_src/cc_display/cc_display.md), a MATLAB program
which can compute and display Clenshaw Curtis grids in two dimensions,
as well as sparse grids formed from sums of Clenshaw Curtis grids.

[CLENSHAW\_CURTIS](../../master/clenshaw_curtis/clenshaw_curtis.md),
a C++ library which computes Clenshaw Curtis grids in multiple
dimensions, as well as sparse grids formed from sums of Clenshaw Curtis
grids.

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
a C++ library which defines sparse grids based on closed nested
quadrature rules.

[SPARSE\_GRID\_DISPLAY](../../m_src/sparse_grid_display/sparse_grid_display.md),
a MATLAB program which can display a 2D or 3D sparse grid.

[SPARSE\_GRID\_F2](../../datasets/sparse_grid_f2/sparse_grid_f2.md), a
dataset directory which contains the abscissas of sparse grids based on
a Fejer Type 2 rule.

[SPARSE\_GRID\_GP](../../datasets/sparse_grid_gp/sparse_grid_gp.md), a
dataset directory which contains the abscissas of sparse grids based on
a Gauss Patterson rule.

[SPARSE\_GRID\_HERMITE](../../master/sparse_grid_hermite/sparse_grid_hermite.md),
a C++ library which creates sparse grids based on Gauss-Hermite rules.

[SPARSE\_GRID\_MIXED](../../master/sparse_grid_mixed/sparse_grid_mixed.md),
a C++ library which constructs a sparse grid using different rules in
each spatial dimension.

[SPARSE\_GRID\_NCC](../../datasets/sparse_grid_ncc/sparse_grid_ncc.md),
a dataset directory which contains the abscissas of sparse grids based
on a Newton Cotes closed rule.

[SPARSE\_GRID\_NCO](../../datasets/sparse_grid_nco/sparse_grid_nco.md),
a dataset directory which contains the abscissas of sparse grids based
on a Newton Cotes open rule.

[SPARSE\_GRID\_OPEN\_DATASET](../../m_src/sparse_grid_open_dataset/sparse_grid_open_dataset.md),
a MATLAB program which creates a sparse grid dataset based on open rules
(Fejer 2, Gauss-Patterson, Newton-Cotes-Open).

[SPINTERP](../../m_src/spinterp/spinterp.md), a MATLAB library which
carries out piecewise multilinear hierarchical sparse grid
interpolation; an earlier version of this software is ACM TOMS Algorithm
847, by Andreas Klimke;

[TOMS847](../../m_src/toms847/toms847.md), a MATLAB library which
carries out piecewise multilinear hierarchical sparse grid
interpolation; this library is commonly called SPINTERP (version 2.1);
this is ACM TOMS Algorithm 847, by Andreas Klimke;

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

-   [sparse\_grid\_open.cpp](sparse_grid_open.cpp), the source code.
-   [sparse\_grid\_open.hpp](sparse_grid_open.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [sparse\_grid\_open\_prb.cpp](sparse_grid_open_prb.cpp), a sample
    calling program.
-   [sparse\_grid\_open\_prb\_output.txt](sparse_grid_open_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **ABSCISSA\_LEVEL\_OPEN\_ND:** first level at which given abscissa
    is generated.
-   **COMP\_NEXT** computes the compositions of the integer N into K
    parts.
-   **F2\_ABSCISSA** returns the I-th abscissa for the Fejer type 2
    rule.
-   **GP\_ABSCISSA** returns the I-th abscissa for a Gauss-Patterson
    rule.
-   **I4\_CHOOSE** computes the binomial coefficient C(N,K).
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4\_MODP** returns the nonnegative remainder of I4 division.
-   **I4\_POWER** returns the value of I\^J.
-   **I4\_TO\_STRING** converts an I4 to a C++ string.
-   **I4VEC\_PRODUCT** multiplies the entries of an I4VEC.
-   **INDEX\_TO\_LEVEL\_OPEN** determines the level of a point given its
    index.
-   **LEVEL\_TO\_ORDER\_OPEN** converts a level to an order for open
    rules.
-   **LEVELS\_OPEN\_INDEX** computes grids with 0 &lt;= LEVEL &lt;=
    LEVEL\_MAX.
-   **MULTIGRID\_INDEX1** returns an indexed multidimensional grid.
-   **MULTIGRID\_SCALE\_OPEN** renumbers a grid as a subgrid on a higher
    level.
-   **NCO\_ABSCISSA** returns the I-th abscissa for the Newton Cotes
    open rule.
-   **R8\_EPSILON** returns the R8 roundoff unit.
-   **R8\_HUGE** returns a "huge" R8.
-   **R8MAT\_WRITE** writes an R8MAT file.
-   **SPARSE\_GRID\_F2S\_SIZE** sizes a sparse grid using Fejer Type 2
    Slow rules.
-   **SPARSE\_GRID\_GPS\_SIZE** sizes a sparse grid using
    Gauss-Patterson-Slow rules.
-   **SPARSE\_GRID\_OFN\_SIZE** sizes a sparse grid using Open Fully
    Nested rules.
-   **SPARSE\_GRID\_ONN\_SIZE** sizes a sparse grid using Open
    Non-Nested rules.
-   **SPARSE\_GRID\_OWN\_SIZE** sizes a sparse grid using Open Weakly
    Nested rules.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **VEC\_COLEX\_NEXT2** generates vectors in colex order.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 12 January 2010.*
