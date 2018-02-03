LAGRANGE\_INTERP\_ND\
M-dimensional Lagrange Interpolant {#lagrange_interp_nd-m-dimensional-lagrange-interpolant align="center"}
==================================

------------------------------------------------------------------------

**LAGRANGE\_INTERP\_ND** is a C++ library which defines and evaluates
the Lagrange polynomial p(x) which interpolates a set of data depending
on a M-dimensional argument that was evaluated on a product grid, so
that p(x(i)) = z(i).

The interpolation function requires that the data points defining the
interpolant lie on a product grid \[A1,B1\]x\[A2,B2\]x...x\[Am,Bm\], to
be defined by a vector AB of dimension (M,2).

The interpolation function requires that the user supply a vector N\_1D
of length M, which specifies the number or "order" of data points in
each dimension. The number of points in the product grid will then be
the product of the entries in N\_1D.

(A second version of the interpolation function uses instead a vector
IND of length M, which is interpreted as a set of "levels". Each level
corresponds in a simple way to the number of "order" of data points. In
particular, levels 0, 1, 2, 3, 4 correspond to 1, 3, 5, 9 and 17 points.
This version is useful when a nested rule is desired.)

The interpolation function sets the location of the data points in each
dimension using the Clenshaw Curtis rule, that is, using the N extrema
of the Chebyshev polynomial of the first kind of order N-1. Those
polynomials are defined on \[-1,+1\], but a simple linear mapping is
used to adjust the points to the interval specified by the user.

The interpolation function needs data at the data points. It is assumed
that this will be supplied by a user specified function of the form

            v = f ( m, n, x )
          

where M is the spatial dimension, N is the number of points to be
evaluated, X is a vector of dimension (M,N) containing the points, and
the result is the vector V of dimension (N) containing the function
values.

Typical usage involves several steps. The size of the interpolant grid
is determined by a call like:

            nd = lagrange_interp_nd_size ( m, ind );
          

Then the interpolant grid is determined by

            xd = lagrange_interp_nd_grid ( m, ind, ab, nd );
          

and the interpolant data is evaluated by

            zd = f ( m, nd, xd );
          

Once the interpolant has been defined, the user is free to evaluate it
repeatedly, by specifying NI points XI, and requesting the interpolated
values ZI by:

            zi = lagrange_interp_nd_value ( m, ind, ab, nd, zd, ni, xi );
          

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**LAGRANGE\_INTERP\_ND** is available in [a C
version](../../c_src/lagrange_interp_nd/lagrange_interp_nd.md) and [a
C++ version](../../master/lagrange_interp_nd/lagrange_interp_nd.md)
and [a FORTRAN77
version](../../f77_src/lagrange_interp_nd/lagrange_interp_nd.md) and
[a FORTRAN90
version](../../f_src/lagrange_interp_nd/lagrange_interp_nd.md) and [a
MATLAB version](../../m_src/lagrange_interp_nd/lagrange_interp_nd.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[LAGRANGE\_INTERP\_1D](../../master/lagrange_interp_1d/lagrange_interp_1d.md),
a C++ library which defines and evaluates the Lagrange polynomial p(x)
which interpolates a set of data, so that p(x(i)) = y(i).

[LAGRANGE\_INTERP\_2D](../../master/lagrange_interp_2d/lagrange_interp_2d.md),
a C++ library which defines and evaluates the Lagrange polynomial p(x,y)
which interpolates a set of data depending on a 2D argument that was
evaluated on a product grid, so that p(x(i),y(j)) = z(i,j).

[RBF\_INTERP\_ND](../../master/rbf_interp_nd/rbf_interp_nd.md), a C++
library which defines and evaluates radial basis function (RBF)
interpolants to multidimensional data.

[SHEPARD\_INTERP\_ND](../../master/shepard_interp_nd/shepard_interp_nd.md),
a C++ library which defines and evaluates Shepard interpolants to
multidimensional data, based on inverse distance weighting.

[SPARSE\_INTERP\_ND](../../master/sparse_interp_nd/sparse_interp_nd.md)
a C++ library which can be used to define a sparse interpolant to a
function f(x) of a multidimensional argument.

[SPINTERP](../../m_src/spinterp/spinterp.md), a MATLAB library which
carries out piecewise multilinear hierarchical sparse grid
interpolation; an earlier version of this software is ACM TOMS Algorithm
847, by Andreas Klimke;

[TEST\_INTERP\_ND](../../master/test_interp_nd/test_interp_nd.md), a
C++ library which defines test problems for interpolation of data z(x),
depending on an M-dimensional argument.

### Reference: {#reference align="center"}

1.  Philip Davis,\
    Interpolation and Approximation,\
    Dover, 1975,\
    ISBN: 0-486-62495-1,\
    LC: QA221.D33

### Source Code: {#source-code align="center"}

-   [lagrange\_interp\_nd.cpp](lagrange_interp_nd.cpp), the source code.
-   [lagrange\_interp\_nd.hpp](lagrange_interp_nd.hpp), the include
    file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [lagrange\_interp\_nd\_prb.cpp](lagrange_interp_nd_prb.cpp), a
    sample calling program.
-   [lagrange\_interp\_nd\_prb\_output.txt](lagrange_interp_nd_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **CC\_COMPUTE\_POINTS** computes Clenshaw Curtis quadrature points.
-   **I4\_POWER** returns the value of I\^J.
-   **I4VEC\_PRODUCT** multiplies the entries of an I4VEC.
-   **LAGRANGE\_BASE\_1D** evaluates the Lagrange basis polynomials.
-   **LAGRANGE\_INTERP\_ND\_GRID** sets an M-dimensional Lagrange
    interpolant grid.
-   **LAGRANGE\_INTERP\_ND\_GRID2** sets an M-dimensional Lagrange
    interpolant grid.
-   **LAGRANGE\_INTERP\_ND\_SIZE** sizes an M-dimensional Lagrange
    interpolant.
-   **LAGRANGE\_INTERP\_ND\_SIZE2** sizes an M-dimensional Lagrange
    interpolant.
-   **LAGRANGE\_INTERP\_ND\_VALUE** evaluates an ND Lagrange
    interpolant.
-   **LAGRANGE\_INTERP\_ND\_VALUE2** evaluates an ND Lagrange
    interpolant.
-   **ORDER\_FROM\_LEVEL\_135** evaluates the 135 level-to-order
    relationship.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8MAT\_UNIFORM\_01\_NEW** returns a unit pseudorandom R8MAT.
-   **R8VEC\_DIRECT\_PRODUCT** creates a direct product of R8VEC's.
-   **R8VEC\_DIRECT\_PRODUCT2** creates a direct product of R8VEC's.
-   **R8VEC\_DOT\_PRODUCT** computes the dot product of a pair of
    R8VEC's.
-   **R8VEC\_NORM\_AFFINE** returns the affine L2 norm of an R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 30 September 2012.*
