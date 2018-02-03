TEST\_INTERP\_2D\
Test Interpolation Data Z(X,Y) of a 2D Argument {#test_interp_2d-test-interpolation-data-zxy-of-a-2d-argument align="center"}
===============================================

------------------------------------------------------------------------

**TEST\_INTERP\_2D** is a C++ library which defines test problems for
interpolation of data z(x,y) depending on a 2D argument.

**TEST\_INTERP\_2D** requires access to the R8LIB library.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TEST\_INTERP\_2D** is available in [a C
version](../../c_src/test_interp_2d/test_interp_2d.md) and [a C++
version](../../master/test_interp_2d/test_interp_2d.md) and [a
FORTRAN77 version](../../f77_src/test_interp_2d/test_interp_2d.md) and
[a FORTRAN90 version](../../f_src/test_interp_2d/test_interp_2d.md)
and [a MATLAB version](../../m_src/test_interp_2d/test_interp_2d.md)
and [a Python version](../../py_src/test_interp_2d/test_interp_2d.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[LAGRANGE\_INTERP\_2D](../../master/lagrange_interp_2d/lagrange_interp_2d.md),
a C++ library which defines and evaluates the Lagrange polynomial p(x,y)
which interpolates a set of data depending on a 2D argument that was
evaluated on a product grid, so that p(x(i),y(j)) = z(i,j).

[PADUA](../../master/padua/padua.md), a C++ library which returns the
points and weights for Padu sets, useful for interpolation in 2D.
GNUPLOT is used to plot the points.

[PWL\_INTERP\_2D](../../master/pwl_interp_2d/pwl_interp_2d.md), a C++
library which evaluates a piecewise linear interpolant to data defined
on a regular 2D grid.

[R8LIB](../../master/r8lib/r8lib.md), a C++ library which contains
many utility routines, using double precision real (R8) arithmetic.

[RBF\_INTERP\_2D](../../master/rbf_interp_2d/rbf_interp_2d.md), a C++
library which defines and evaluates radial basis function (RBF)
interpolants to 2D data.

[SHEPARD\_INTERP\_2D](../../master/shepard_interp_2d/shepard_interp_2d.md),
a C++ library which defines and evaluates Shepard interpolants to 2D
data, based on inverse distance weighting.

[TEST\_INTERP\_1D](../../master/test_interp_1d/test_interp_1d.md), a
C++ library which defines test problems for interpolation of data y(x),
depending on a 1D argument.

[TEST\_INTERP\_ND](../../master/test_interp_nd/test_interp_nd.md), a
C++ library which defines test problems for interpolation of data z(x),
depending on an M-dimensional argument.

[TOMS886](../../master/toms886/toms886.md), a C++ library which
defines the Padua points for interpolation in a 2D region, including the
rectangle, triangle, and ellipse, by Marco Caliari, Stefano de Marchi,
Marco Vianello. This is a C++ version of ACM TOMS algorithm 886.

[VANDERMONDE\_INTERP\_2D](../../master/vandermonde_interp_2d/vandermonde_interp_2d.md),
a C++ library which finds a polynomial interpolant to data z(x,y) of a
2D argument by setting up and solving a linear system for the polynomial
coefficients, involving the Vandermonde matrix.

### Reference: {#reference align="center"}

1.  Richard Franke,\
    A Critical Comparison of Some Methods for Interpolation of Scattered
    Data,\
    Naval Postgraduate School Technical Report,\
    NPS-53-79-003, 1979.
2.  Robert Renka, Ron Brown,\
    Algorithm 792: Accuracy Tests of ACM Algorithms for Interpolation of
    Scattered Data in the Plane,\
    ACM Transactions on Mathematical Software,\
    Volume 25, Number 1, March 1999, pages 78-94.
3.  Donald Shepard,\
    A two-dimensional interpolation function for irregularly spaced
    data,\
    ACM '68: Proceedings of the 1968 23rd ACM National Conference,\
    ACM, pages 517-524, 1969.

### Source Code: {#source-code align="center"}

-   [test\_interp\_2d.cpp](test_interp_2d.cpp), the source code.
-   [test\_interp\_2d.hpp](test_interp_2d.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [test\_interp\_2d\_prb.cpp](test_interp_2d_prb.cpp), a sample
    calling program.
-   [test\_interp\_2d\_prb\_output.txt](test_interp_2d_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **F00\_F0** returns the value of any function.
-   **F00\_F1** returns first derivatives of any function.
-   **F00\_F2** returns second derivatives of any function.
-   **F00\_NUM** returns the number of test functions available.
-   **F00\_TITLE** returns the title for any function.
-   **F01\_F0** returns the value of function 1.
-   **F01\_F1** returns first derivatives of function 1.
-   **F01\_F2** returns second derivatives of function 1.
-   **F01\_TITLE** returns the title for function 1.
-   **F02\_F0** returns the value of function 2.
-   **F02\_F1** returns first derivatives of function 2.
-   **F02\_F2** returns second derivatives of function 2.
-   **F02\_TITLE** returns the title for function 2.
-   **F03\_F0** returns the value of function 3.
-   **F03\_F1** returns first derivatives of function 3.
-   **F03\_F2** returns second derivatives of function 3.
-   **F03\_TITLE** returns the title for function 3.
-   **F04\_F0** returns the value of function 4.
-   **F04\_F1** returns first derivatives of function 4.
-   **F04\_F2** returns second derivatives of function 4.
-   **F04\_TITLE** returns the title for function 4.
-   **F05\_F0** returns the value of function 5.
-   **F05\_F1** returns first derivatives of function 5.
-   **F05\_F2** returns second derivatives of function 5.
-   **F05\_TITLE** returns the title for function 5.
-   **F06\_F0** returns the value of function 6.
-   **F06\_F1** returns first derivatives of function 6.
-   **F06\_F2** returns second derivatives of function 6.
-   **F06\_TITLE** returns the title for function 6.
-   **F07\_F0** returns the value of function 7.
-   **F07\_F1** returns first derivatives of function 7.
-   **F07\_F2** returns second derivatives of function 7.
-   **F07\_TITLE** returns the title for function 7.
-   **F08\_F0** returns the value of function 8.
-   **F08\_F1** returns first derivatives of function 8.
-   **F08\_F2** returns second derivatives of function 8.
-   **F08\_TITLE** returns the title for function 8.
-   **F09\_F0** returns the value of function 9.
-   **F09\_F1** returns first derivatives of function 9.
-   **F09\_F2** returns second derivatives of function 9.
-   **F09\_TITLE** returns the title for function 9.
-   **F10\_F0** returns the value of function 10.
-   **F10\_F1** returns first derivatives of function 10.
-   **F10\_F2** returns second derivatives of function 10.
-   **F10\_TITLE** returns the title for function 10.
-   **G00\_NUM** returns the number of grids available.
-   **G00\_SIZE** returns the size for any grid.
-   **G00\_TITLE** returns the title for any grid.
-   **G00\_XY** returns the grid points for any grid.
-   **G01\_SIZE** returns the size for grid 1.
-   **G01\_TITLE** returns the title for grid 1.
-   **G01\_XY** returns the grid points for grid 1.
-   **G02\_SIZE** returns the size for grid 2.
-   **G02\_TITLE** returns the title for grid 2.
-   **G02\_XY** returns the grid points for grid 2.
-   **G03\_SIZE** returns the size for grid 3.
-   **G03\_TITLE** returns the title for grid 3.
-   **G03\_XY** returns the grid points for grid 3.
-   **G04\_SIZE** returns the size for grid 4.
-   **G04\_TITLE** returns the title for grid 4.
-   **G04\_XY** returns the grid points for grid 4.
-   **G05\_SIZE** returns the size for grid 5.
-   **G05\_TITLE** returns the title for grid 5.
-   **G05\_XY** returns the grid points for grid 5.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 05 October 2012.*
