SPARSE\_INTERP\_ND\
Multidimensional Sparse Interpolant {#sparse_interp_nd-multidimensional-sparse-interpolant align="center"}
===================================

------------------------------------------------------------------------

**SPARSE\_INTERP\_ND** is a C++ library which can be used to construct a
sparse interpolant to a function f(x) of a multidimensional argument x.

The problem is defined as follows: for any point x in some M-dimensional
product space X, such as the unit hypercube, we are able to provide the
value f(x) for some function f(). We wish to determine a new function
g(), (the interpolant) which will match the value of f() on some
specified set of points {xi}. Presumably, we choose the number and
location of the points {xi} to ensure that the interpolating function
g() is a good fit to f().

There are standard techniques for producing a family of interpolants
g(j)(), such that, as we increase the index j, the interpolating process
will exactly match any function f() which happens to be a polynomial of
limited degree. The usual techniques for doing this are derived from
tensor product interpolants, whose expense grows exponentially with the
spatial dimension.

For simplicity, we'll assume that the argument space X is the unit
hypercube, and that we have a family of 1D interpolation rules g(j)(),
where the index j is an indication of the precision of the interpolation
rule. A typical tensor product interpolant G(J)() can then be thought of
as constructed by the product

            G(J)(X) = g(j1)(x1) * g(j2)(x2) * ... * g(jm)(xm).
          

where, of course, J = (j1,j2,...jm) and X = (x1,x2,...,xm).

A procedure due to Smolyak, which is more typically applied to problems
in quadrature, can also be used for the interpolation problem. The
Smolyak interpolation rule of level L is defined by

            A(L,M) = sum ( L-M+1 <= |J| <= L ) C(|J|) * g(j1)(x1) * g(j2)(x2) * ... * g(jm)(xm).
          

Here |J| = j1+j2+...+jm, and, for each |J|, the sum must be taken over
all possible vectors J with nonnegative integer entries that sum to |J|.

Thus, a naive implementation of a sparse interpolant would, for a given
spatial dimension M, pick a level L, determine the (at most L+1)
coefficients C(), construct every tensor product interpolant of total
degree L or less, evaluate each interpolant at the point X, and combine
these values with the appropriate weights C() to arrive at the sparse
grid interpolant value at X.

Some improvements to this approach can be suggested. First, many of the
coefficients C() may be zero, because the coefficient vector C for an
M-dimensional sparse interpolant of level L will have at most M nonzero
coefficients. Secondly, if the 1D interpolation family is chosen so that
the interpolant points of successive members are nested, then it is
possible to simplify the evaluation process greatly.

**SPARSE\_INTERP\_ND** also requires access to the R8LIB library.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SPARSE\_INTERP\_ND** is available in [a C
version](../../c_src/sparse_interp_nd/sparse_interp_nd.html) and [a C++
version](../../cpp_src/sparse_interp_nd/sparse_interp_nd.html) and [a
FORTRAN77 version](../../f77_src/sparse_interp_nd/sparse_interp_nd.html)
and [a FORTRAN90
version](../../f_src/sparse_interp_nd/sparse_interp_nd.html) and [a
MATLAB version](../../m_src/sparse_interp_nd/sparse_interp_nd.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[LAGRANGE\_INTERP\_ND](../../cpp_src/lagrange_interp_nd/lagrange_interp_nd.html),
a C++ library which defines and evaluates the Lagrange polynomial p(x)
which interpolates a set of data depending on a multidimensional
argument x that was evaluated on a product grid, so that p(x(i)) = z(i).

[R8LIB](../../cpp_src/r8lib/r8lib.html), a C++ library which contains
many utility routines using double precision real (R8) arithmetic.

[RBF\_INTERP\_ND](../../cpp_src/rbf_interp_nd/rbf_interp_nd.html), a C++
library which defines and evaluates radial basis interpolants to
multidimensional data.

[SHEPARD\_INTERP\_ND](../../cpp_src/shepard_interp_nd/shepard_interp_nd.html),
a C++ library which defines and evaluates Shepard interpolants to
multidimensional data, based on inverse distance weighting.

[SPINTERP](../../m_src/spinterp/spinterp.html), a MATLAB library which
carries out piecewise multilinear hierarchical sparse grid
interpolation; an earlier version of this software is ACM TOMS Algorithm
847, by Andreas Klimke;

[TEST\_INTERP\_ND](../../cpp_src/test_interp_nd/test_interp_nd.html), a
C++ library which defines test problems for interpolation of data z(x),
depending on an M-dimensional argument.

### Reference: {#reference align="center"}

1.  Volker Barthelmann, Erich Novak, Klaus Ritter,\
    High Dimensional Polynomial Interpolation on Sparse Grids,\
    Advances in Computational Mathematics,\
    Volume 12, Number 4, 2000, pages 273-288.
2.  Andreas Klimke, Barbara Wohlmuth,\
    Algorithm 847: SPINTERP: Piecewise Multilinear Hierarchical Sparse
    Grid Interpolation in MATLAB,\
    ACM Transactions on Mathematical Software,\
    Volume 31, Number 4, December 2005, pages 561-579.
3.  Sergey Smolyak,\
    Quadrature and Interpolation Formulas for Tensor Products of Certain
    Classes of Functions,\
    Doklady Akademii Nauk SSSR,\
    Volume 4, 1963, pages 240-243.

### Source Code: {#source-code align="center"}

-   [sparse\_interp\_nd.cpp](sparse_interp_nd.cpp), the source code.
-   [sparse\_interp\_nd.hpp](sparse_interp_nd.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [sparse\_interp\_nd\_prb.cpp](sparse_interp_nd_prb.cpp) a sample
    calling program.
-   [sparse\_interp\_nd\_prb\_output.txt](sparse_interp_nd_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **CC\_COMPUTE\_POINTS** computes Clenshaw Curtis quadrature points.
-   **COMP\_NEXT** computes the compositions of the integer N into K
    parts.
-   **I4\_CHOOSE** computes the binomial coefficient C(N,K).
-   **I4\_MOP** returns the I-th power of -1 as an I4 value.
-   **LAGRANGE\_BASE\_1D** evaluates the Lagrange basis polynomials.
-   **LAGRANGE\_INTERP\_ND\_GRID2** sets an M-dimensional Lagrange
    interpolant grid.
-   **LAGRANGE\_INTERP\_ND\_SIZE2** sizes an M-dimensional Lagrange
    interpolant.
-   **LAGRANGE\_INTERP\_ND\_VALUE2** evaluates an ND Lagrange
    interpolant.
-   **ORDER\_FROM\_LEVEL\_135** evaluates the 135 level-to-order
    relationship.
-   **SMOLYAK\_COEFFICIENTS** returns the Smolyak coefficients and
    counts.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 07 November 2012.*
