PADUA\
2D Pointsets for Interpolation or Integration {#padua-2d-pointsets-for-interpolation-or-integration align="center"}
=============================================

------------------------------------------------------------------------

**PADUA** is a C++ library which returns the coordinates of the 2D Padua
points, as well as interpolation weights or quadrature weights, and
images of the points in gnuplot graphics files.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**PADUA** is available in [a C version](../../c_src/padua/padua.md)
and [a C++ version](../../master/padua/padua.md) and [a FORTRAN77
version](../../f77_src/padua/padua.md) and [a FORTRAN90
version](../../f_src/padua/padua.md) and [a MATLAB
version](../../m_src/padua/padua.md) and [a Python
version](../../py_src/padua/padua.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[EXACTNESS\_2D](../../master/exactness_2d/exactness_2d.md), a C++
library which investigates the exactness of 2D quadrature rules that
estimate the integral of a function f(x,y) over a 2D domain.

[GNUPLOT](../../master/gnuplot/gnuplot.md), C++ programs which
illustrate how a program can write data and command files so that
gnuplot can create plots of the program results.

[LAGRANGE\_INTERP\_2D](../../master/lagrange_interp_2d/lagrange_interp_2d.md),
a C++ library which defines and evaluates the Lagrange polynomial p(x,y)
which interpolates a set of data depending on a 2D argument that was
evaluated on a product grid, so that p(x(i),y(j)) = z(i,j).

[PWL\_INTERP\_2D](../../master/pwl_interp_2d/pwl_interp_2d.md), a C++
library which evaluates a piecewise linear interpolant to data defined
on a regular 2D grid.

[QUADRATURE\_WEIGHTS\_VANDERMONDE\_2D](../../master/quadrature_weights_vandermonde_2d/quadrature_weights_vandermonde_2d.md),
a C++ library which computes the weights of a 2D quadrature rule using
the Vandermonde matrix, assuming that the points have been specified.

[RBF\_INTERP\_2D](../../master/rbf_interp_2d/rbf_interp_2d.md), a C++
library which defines and evaluates radial basis function (RBF)
interpolants to 2D data.

[SHEPARD\_INTERP\_2D](../../master/shepard_interp_2d/shepard_interp_2d.md),
a C++ library which defines and evaluates Shepard interpolants to 2D
data, based on inverse distance weighting.

[TEST\_INTERP\_2D](../../master/test_interp_2d/test_interp_2d.md), a
C++ library which defines test problems for interpolation of data
z(x,y), depending on a 2D argument.

[TOMS886](../../master/toms886/toms886.md), a C++ library which
defines the Padua points for interpolation in a 2D region, including the
rectangle, triangle, and ellipse, by Marco Caliari, Stefano de Marchi,
Marco Vianello. This is ACM TOMS algorithm 886.

[VANDERMONDE\_INTERP\_2D](../../master/vandermonde_interp_2d/vandermonde_interp_2d.md),
a C++ library which finds a polynomial interpolant to data z(x,y) of a
2D argument by setting up and solving a linear system for the polynomial
coefficients, involving the Vandermonde matrix.

### Reference: {#reference align="center"}

1.  Marco Caliari, Stefano de Marchi, Marco Vianello,\
    Bivariate interpolation on the square at new nodal sets,\
    Applied Mathematics and Computation,\
    Volume 165, Number 2, 2005, pages 261-274.
2.  Marco Caliari, Stefano de Marchi, Marco Vianello,\
    Algorithm 886: Padua2D: Lagrange Interpolation at Padua Points on
    Bivariate Domains,\
    ACM Transactions on Mathematical Software,\
    Volume 35, Number 3, October 2008, Article 21, 11 pages.

### Source Code: {#source-code align="center"}

-   [padua.cpp](padua.cpp), the source code.
-   [padua.hpp](padua.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [padua\_prb.cpp](padua_prb.cpp), a sample calling program.
-   [padua\_prb\_output.txt](padua_prb_output.txt), the output file.

The program creates GNUPLOT command and data files, which can be used to
create a PNG image of the points.

-   [padua\_00\_commands.txt](padua_00_commands.txt), the command file.
-   [padua\_00\_data.txt](padua_00_data.txt), the data file.
-   [padua\_00.png](padua_00.png), the PNG image.
-   [padua\_01\_commands.txt](padua_01_commands.txt), the command file.
-   [padua\_01\_data.txt](padua_01_data.txt), the data file.
-   [padua\_01.png](padua_01.png), the PNG image.
-   [padua\_02\_commands.txt](padua_02_commands.txt), the command file.
-   [padua\_02\_data.txt](padua_02_data.txt), the data file.
-   [padua\_02.png](padua_02.png), the PNG image.
-   [padua\_03\_commands.txt](padua_03_commands.txt), the command file.
-   [padua\_03\_data.txt](padua_03_data.txt), the data file.
-   [padua\_03.png](padua_03.png), the PNG image.
-   [padua\_04\_commands.txt](padua_04_commands.txt), the command file.
-   [padua\_04\_data.txt](padua_04_data.txt), the data file.
-   [padua\_04.png](padua_04.png), the PNG image.
-   [padua\_05\_commands.txt](padua_05_commands.txt), the command file.
-   [padua\_05\_data.txt](padua_05_data.txt), the data file.
-   [padua\_05.png](padua_05.png), the PNG image.
-   [padua\_06\_commands.txt](padua_06_commands.txt), the command file.
-   [padua\_06\_data.txt](padua_06_data.txt), the data file.
-   [padua\_06.png](padua_06.png), the PNG image.
-   [padua\_07\_commands.txt](padua_07_commands.txt), the command file.
-   [padua\_07\_data.txt](padua_07_data.txt), the data file.
-   [padua\_07.png](padua_07.png), the PNG image.
-   [padua\_08\_commands.txt](padua_08_commands.txt), the command file.
-   [padua\_08\_data.txt](padua_08_data.txt), the data file.
-   [padua\_08.png](padua_08.png), the PNG image.
-   [padua\_09\_commands.txt](padua_09_commands.txt), the command file.
-   [padua\_09\_data.txt](padua_09_data.txt), the data file.
-   [padua\_09.png](padua_09.png), the PNG image.
-   [padua\_10\_commands.txt](padua_10_commands.txt), the command file.
-   [padua\_10\_data.txt](padua_10_data.txt), the data file.
-   [padua\_10.png](padua_10.png), the PNG image.

### List of Routines: {#list-of-routines align="center"}

-   **FILENAME\_INC** increments a partially numeric file name.
-   **PADUA\_ORDER** returns the size of the Padua set of given level.
-   **PADUA\_PLOT** plots the Padua points of given level.
-   **PADUA\_POINTS** returns the Padua points of order N.
-   **PADUA\_POINT\_SET** sets the Padua points.
-   **PADUA\_WEIGHT\_SET** sets quadrature weights for the Padua points.
-   **R8MAT\_TRANSPOSE\_PRINT** prints an R8MAT, transposed.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 30 April 2014.*
