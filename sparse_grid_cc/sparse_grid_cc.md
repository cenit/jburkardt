SPARSE\_GRID\_CC\
Sparse Grids Based on the Clenshaw Curtis Rule {#sparse_grid_cc-sparse-grids-based-on-the-clenshaw-curtis-rule align="center"}
==============================================

------------------------------------------------------------------------

**SPARSE\_GRID\_CC** is a C++ library which can be used to compute the
points and weights of a Smolyak sparse grid, based on a 1-dimensional
Clenshaw-Curtis quadrature rule, to be used for efficient and accurate
quadrature in multiple dimensions.

One way of looking at the construction of sparse grids is to assume that
we start out by constructing a (very dense) product grid. We will assume
for now that the **order**, that is, the number of points used in each
component grid, is the same for all dimensions. Moreover, we will assume
that the order is a power of 2 plus one, so that we have a natural
relationship between the order and the logarithm base 2 of the order
minus 1:

            order = 2level + 1
          

except that for the special case of **level=0** we assign **order=1**.
(If we used our formula, then this case would give us **order=2**
instead.

Thus, if we allow **level** to grow, the **order** roughly doubles, as
follows:

  Level   Order
  ------- -------
  0       1
  1       3
  2       5
  3       9
  4       17
  5       33
  6       65
  7       129
  8       257
  9       513
  10      1025

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
there are a variety of schemes for distributing the points. We consider
closed quadrature rules, in which the endpoints of the interval are
included. The uniform scheme, known as the Newton Cotes Closed rule, is
easy to understand. However, it has been observed that greater accuracy
and stability can be achieved by arranging the points in a nonuniform
way that tends to move points towards the boundary and away from the
center. A common scheme for doing this starts with the uniform points on
\[0,1\] and applies the cosine function to arrive at nonuniformly spaced
points in \[-1,1\]. This scheme is known as the Clenshaw Curtis rule.

-   Newton Cotes Closed:\
    Points = \[ 0, 1, 2, ..., N-1 \] / (N-1);\
    Uniformly spaced points on \[0,1\], including endpoints.\
    Point spacing is 1/(N-1).
-   Clenshaw Curtis:\
    Theta = pi \* \[ 0, 1, 2, ..., N-1 \] / (N-1);\
    Points = cos ( Theta );\
    Nonuniformly spaced points on \[-1,1\], including endpoints.

The library of routines presented here will only construct grids based
on the Clenshaw Curtis rule.

### Web Link: {#web-link align="center"}

A version of the sparse grid library is available in
[http://tasmanian.ornl.gov](http://tasmanian.ornl.gov/), the TASMANIAN
library, available from Oak Ridge National Laboratory.

### Licensing: {#licensing align="center"}

The code described and made available on this web page is distributed
under the [GNU LGPL](gnu_lgpl.txt) license.

### Languages: {#languages align="center"}

**SPARSE\_GRID\_CC** is available in [a C
version](../../c_src/sparse_grid_cc/sparse_grid_cc.html) and [a C++
version](../../cpp_src/sparse_grid_cc/sparse_grid_cc.html) and [a
FORTRAN77 version](../../f77_src/sparse_grid_cc/sparse_grid_cc.html) and
[a FORTRAN90 version](../../f_src/sparse_grid_cc/sparse_grid_cc.html)
and [a MATLAB version.](../../m_src/sparse_grid_cc/sparse_grid_cc.html)

### Related Data and Programs: {#related-data-and-programs align="center"}

[CC\_DISPLAY](../../m_src/cc_display/cc_display.html), a MATLAB library
which can compute and display Clenshaw Curtis grids in two dimensions,
as well as sparse grids formed from sums of Clenshaw Curtis grids.

[SGMG](../../cpp_src/sgmg/sgmg.html), a C++ library which creates a
sparse grid dataset based on a mixed set of 1D factor rules, and
experiments with the use of a linear growth rate for the quadrature
rules.

[SGMGA](../../cpp_src/sgmga/sgmga.html), a C++ library which creates
sparse grids based on a mixture of 1D quadrature rules, allowing
anisotropic weights for each dimension.

[SMOLPACK](../../c_src/smolpack/smolpack.html), a C library which
implements Novak and Ritter's method for estimating the integral of a
function over a multidimensional hypercube using sparse grids.

[SPARSE\_GRID\_CC](../../datasets/sparse_grid_cc/sparse_grid_cc.html), a
dataset directory which contains the abscissas of sparse grids based on
a Clenshaw Curtis rule.

[SPARSE\_GRID\_CC\_DATASET](../../cpp_src/sparse_grid_cc_dataset/sparse_grid_cc_dataset.html),
a C++ program which creates a sparse grid dataset based on
Clenshaw-Curtis rules.

[SPARSE\_GRID\_GL](../../cpp_src/sparse_grid_gl/sparse_grid_gl.html), a
C++ library which computes a sparse grid based on Gauss-Legendre rules.

[SPARSE\_GRID\_HERMITE](../../cpp_src/sparse_grid_hermite/sparse_grid_hermite.html),
a C++ library which computes a sparse grid based on Gauss-Hermite rules.

[SPARSE\_GRID\_LAGUERRE](../../cpp_src/sparse_grid_laguerre/sparse_grid_laguerre.html),
a C++ library which computes a sparse grid based on Gauss-Laguerre
rules.

[SPARSE\_GRID\_MIXED](../../cpp_src/sparse_grid_mixed/sparse_grid_mixed.html),
a C++ library which constructs a sparse grid using different rules in
each spatial dimension.

[SPARSE\_GRID\_OPEN](../../cpp_src/sparse_grid_open/sparse_grid_open.html),
a C++ library which creates sparse grids based on open rules (Fejer 2,
Gauss-Patterson, Newton-Cotes-Open).

[TOMS847](../../m_src/toms847/toms847.html), a MATLAB program which uses
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

-   [sparse\_grid\_cc.cpp](sparse_grid_cc.cpp), the source code.
-   [sparse\_grid\_cc.hpp](sparse_grid_cc.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [sparse\_grid\_cc\_prb.cpp](sparse_grid_cc_prb.cpp), a sample
    calling program.
-   [sparse\_grid\_cc\_prb\_output.txt](sparse_grid_cc_prb_output.txt),
    the output file.
-   [cc\_d2\_level3\_r.txt](../../datasets/sparse_grid_cc/cc_d2_level3_r.txt),
    the "R" data for a sparse quadrature rule.
-   [cc\_d2\_level3\_w.txt](../../datasets/sparse_grid_cc/cc_d2_level3_w.txt),
    the "W" data for a sparse quadrature rule.
-   [cc\_d2\_level3\_x.txt](../../datasets/sparse_grid_cc/cc_d2_level3_x.txt),
    the "X" data for a sparse quadrature rule.

### List of Routines: {#list-of-routines align="center"}

-   **ABSCISSA\_LEVEL\_CLOSED\_ND:** first level at which an abscissa is
    generated.
-   **CC\_ABSCISSA** returns the I-th abscissa of the Clenshaw Curtis
    rule.
-   **CC\_WEIGHTS** computes Clenshaw Curtis weights.
-   **CHOOSE** computes the binomial coefficient C(N,K).
-   **COMP\_NEXT** computes the compositions of the integer N into K
    parts.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the smaller of two I4's.
-   **I4\_MODP** returns the nonnegative remainder of integer division.
-   **I4\_POWER** returns the value of I\^J.
-   **I4\_TO\_STRING** converts an I4 to a C++ string.
-   **I4VEC\_PRODUCT** multiplies the entries of an integer vector.
-   **INDEX\_TO\_LEVEL\_CLOSED** determines the level of a point given
    its index.
-   **LEVEL\_TO\_ORDER\_CLOSED** converts a level to an order for closed
    rules.
-   **MONOMIAL\_INT01** returns the integral of a monomial over the
    \[0,1\] hypercube.
-   **MONOMIAL\_QUADRATURE** applies a quadrature rule to a monomial.
-   **MONOMIAL\_VALUE** evaluates a monomial.
-   **MULTIGRID\_INDEX0** returns an indexed multidimensional grid.
-   **MULTIGRID\_SCALE\_CLOSED** renumbers a grid as a subgrid on a
    higher level.
-   **PRODUCT\_WEIGHTS\_CC** computes weights for a Clenshaw Curtis
    product rule.
-   **R8\_EPSILON** returns the R8 roundoff unit.
-   **R8MAT\_WRITE** writes an R8MAT file with no header.
-   **R8VEC\_DIRECT\_PRODUCT2** creates a direct product of R8VEC's.
-   **SPARSE\_GRID\_CC** computes a sparse grid of Clenshaw Curtis
    points.
-   **SPARSE\_GRID\_CC\_INDEX** indexes the points forming a sparse
    grid.
-   **SPARSE\_GRID\_CFN\_SIZE** sizes a sparse grid using Closed Fully
    Nested rules.
-   **SPARSE\_GRID\_CC\_SIZE\_OLD** sizes a sparse grid of Clenshaw
    Curtis points.
-   **SPARSE\_GRID\_CC\_WEIGHTS** gathers the weights.
-   **SPARSE\_GRID\_CCS\_SIZE** sizes a sparse grid using Clenshaw
    Curtis Slow rules.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **VEC\_COLEX\_NEXT2** generates vectors in colex order.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 22 December 2009.*
