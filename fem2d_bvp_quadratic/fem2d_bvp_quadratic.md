FEM2D\_BVP\_QUADRATIC\
Finite Element Method, 2D, Boundary Value Problem, Piecewise Quadratic Elements {#fem2d_bvp_quadratic-finite-element-method-2d-boundary-value-problem-piecewise-quadratic-elements align="center"}
===============================================================================

------------------------------------------------------------------------

**FEM2D\_BVP\_QUADRATIC** is a C++ program which applies the finite
element method, with piecewise quadratic elements, to a 2D boundary
value problem over a rectangle.

The boundary value problem (BVP) that is to be solved has the form:

            - d/dx ( a(x,y) * du/dx ) - d/dy ( a(x,y) * du/dy ) + c(x,y) * u(x,y) = f(x,y)
          

This equation holds in the interior of some rectangle R. The functions
a(x,y), c(x,y), and f(x,y) are given.

Zero boundary conditions are imposed on the boundary of R.

To compute a finite element approximation, the X and Y extents of R are
gridded with NX and NY equally spaced values, respectively, where NX and
NY are odd. This defines NX\*NY nodes, and divides R into
((NX-1)/2)\*((NY-1)/2) rectangular elements. At the K-th node,
(X(I),Y(J)), a piecewise quadratic basis function PHI(K)(X,Y) is
defined. The solution will be represented as a linear combination of
these basis functions. An integral form of the BVP is written, in which
the differential equation is multiplied by each basis function, and
integration by parts is used to simplify the integrand.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FEM2D\_BVP\_QUADRATIC** is available in [a C
version](../../c_src/fem2d_bvp_quadratic/fem2d_bvp_quadratic.html) and
[a C++
version](../../cpp_src/fem2d_bvp_quadratic/fem2d_bvp_quadratic.html) and
[a FORTRAN77
version](../../f77_src/fem2d_bvp_quadratic/fem2d_bvp_quadratic.html) and
[a FORTRAN90
version](../../f_src/fem2d_bvp_quadratic/fem2d_bvp_quadratic.html) and
[a MATLAB
version](../../m_src/fem2d_bvp_quadratic/fem2d_bvp_quadratic.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FEM1D\_BVP\_QUADRATIC](../../cpp_src/fem1d_bvp_linear/fem1d_bvp_linear.html),
a C++ program which applies the finite element method (FEM), with
piecewise quadratic elements, to a two point boundary value problem
(BVP) in one spatial dimension, and compares the computed and exact
solutions with the L2 and seminorm errors.

[FEM2D\_BVP\_QUADRATIC](../../cpp_src/fem2d_bvp_linear/fem2d_bvp_linear.html),
a C++ program which applies the finite element method (FEM), with
piecewise linear elements, to a 2D boundary value problem (BVP) in a
rectangle, and compares the computed and exact solutions with the L2 and
seminorm errors.

[FEM2D\_BVP\_SERENE](../../cpp_src/fem2d_bvp_serene/fem2d_bvp_serene.html),
a C++ program which applies the finite element method (FEM), with
serendipity elements, to a 2D boundary value problem (BVP) in a
rectangle, and compares the computed and exact solutions with the L2 and
seminorm errors.

### Source Code: {#source-code align="center"}

-   [fem2d\_bvp\_quadratic.cpp](fem2d_bvp_quadratic.cpp), the source
    code.
-   [fem2d\_bvp\_quadratic.hpp](fem2d_bvp_quadratic.hpp), the include
    file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [fem2d\_bvp\_quadratic\_prb.cpp](fem2d_bvp_quadratic_prb.cpp), a
    sample calling program.
-   [fem2d\_bvp\_quadratic\_prb\_output.txt](fem2d_bvp_quadratic_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **FEM2D\_BVP\_QUADRATIC** solves boundary value problem on a
    rectangle.
-   **FEM2D\_H1S\_ERROR\_QUADRATIC:** seminorm error of a finite element
    solution.
-   **FEM2D\_L1\_ERROR** estimates the l1 error norm of a finite element
    solution.
-   **FEM2D\_L2\_ERROR\_QUADRATIC:** L2 error norm of a finite element
    solution.
-   **R8MAT\_SOLVE2** computes the solution of an N by N linear system.
-   **R8VEC\_EVEN** returns an R8VEC of evenly spaced values.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 26 June 2014.*
