SHEPARD\_INTERP\_ND\
Shepard Interpolation of Multidimensional Data {#shepard_interp_nd-shepard-interpolation-of-multidimensional-data align="center"}
==============================================

------------------------------------------------------------------------

**SHEPARD\_INTERP\_ND** is a C++ library which defines and evaluates
Shepard interpolants to multidimensional data, based on inverse distance
weighting.

SHEPARD\_INTERP\_ND needs the R8LIB library. The test needs the
TEST\_INTERP\_ND library.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SHEPARD\_INTERP\_ND** is available in [a C
version](../../c_src/shepard_interp_nd/shepard_interp_nd.html) and [a
C++ version](../../cpp_src/shepard_interp_nd/shepard_interp_nd.html) and
[a FORTRAN77
version](../../f77_src/shepard_interp_nd/shepard_interp_nd.html) and [a
FORTRAN90 version](../../f_src/shepard_interp_nd/shepard_interp_nd.html)
and [a MATLAB
version](../../m_src/shepard_interp_nd/shepard_interp_nd.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[LAGRANGE\_INTERP\_ND](../../cpp_src/lagrange_interp_nd/lagrange_interp_nd.html),
a C++ library which defines and evaluates the Lagrange polynomial p(x)
which interpolates a set of data depending on a multidimensional
argument x that was evaluated on a product grid, so that p(x(i)) = z(i).

[R8LIB](../../cpp_src/r8lib/r8lib.html), a C++ library which contains
many utility routines using double precision real (R8) arithmetic.

[RBF\_INTERP\_ND](../../cpp_src/rbf_interp_nd/rbf_interp_nd.html), a C++
library which defines and evaluates radial basis function (RBF)
interpolants to multidimensional data.

[SHEPARD\_INTERP\_1D](../../cpp_src/shepard_interp_1d/shepard_interp_1d.html),
a C++ library which defines and evaluates Shepard interpolants to 1D
data, which are based on inverse distance weighting.

[SHEPARD\_INTERP\_2D](../../cpp_src/shepard_interp_2d/shepard_interp_2d.html),
a C++ library which defines and evaluates Shepard interpolants to 2D
data, which are based on inverse distance weighting.

[SPARSE\_INTERP\_ND](../../cpp_src/sparse_interp_nd/sparse_interp_nd.html)
a C++ library which can be used to define a sparse interpolant to a
function f(x) of a multidimensional argument.

[TEST\_INTERP\_ND](../../cpp_src/test_interp_nd/test_interp_nd.html), a
C++ library which defines test problems for interpolation of data z(x),
depending on an M-dimensional argument.

### Reference: {#reference align="center"}

1.  Richard Franke,\
    Scattered Data Interpolation: Tests of Some Methods,\
    Mathematics of Computation,\
    Volume 38, Number 157, January 1982, pages 181-200.
2.  Donald Shepard,\
    A two-dimensional interpolation function for irregularly spaced
    data,\
    ACM '68: Proceedings of the 1968 23rd ACM National Conference,\
    ACM, pages 517-524, 1969.

### Source Code: {#source-code align="center"}

-   [shepard\_interp\_nd.cpp](shepard_interp_nd.cpp), the source code.
-   [shepard\_interp\_nd.hpp](shepard_interp_nd.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [shepard\_interp\_nd\_prb.cpp](shepard_interp_nd_prb.cpp), a sample
    calling program.
-   [shepard\_interp\_nd\_prb\_output.txt](shepard_interp_nd_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **SHEPARD\_INTERP\_ND** evaluates a multidimensional Shepard
    interpolant.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 03 October 2012.*
