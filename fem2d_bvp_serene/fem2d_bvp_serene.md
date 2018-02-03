FEM2D\_BVP\_SERENE\
Finite Element Method, 2D, Boundary Value Problem, Serendipity Elements {#fem2d_bvp_serene-finite-element-method-2d-boundary-value-problem-serendipity-elements align="center"}
=======================================================================

------------------------------------------------------------------------

**FEM2D\_BVP\_SERENE** is a C++ program which applies the finite element
method, with serendipity elements, to a 2D boundary value problem over a
rectangle.

The boundary value problem (BVP) that is to be solved has the form:

            - d/dx ( a(x,y) * du/dx ) - d/dy ( a(x,y) * du/dy ) + c(x,y) * u(x,y) = f(x,y)
          

This equation holds in the interior of some rectangle R. The functions
a(x,y), c(x,y), and f(x,y) are given.

Zero boundary conditions are imposed on the boundary of R.

The MATLAB "gallery()" command can produce a copy of the Wathen matrix,
which arises as a weighted sum of elementary mass matrices associated
with a grid of serendipity elements.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FEM2D\_BVP\_SERENE** is available in [a C
version](../../c_src/fem2d_bvp_serene/fem2d_bvp_serene.html) and [a C++
version](../../cpp_src/fem2d_bvp_serene/fem2d_bvp_serene.html) and [a
FORTRAN77 version](../../f77_src/fem2d_bvp_serene/fem2d_bvp_serene.html)
and [a FORTRAN90
version](../../f_src/fem2d_bvp_serene/fem2d_bvp_serene.html) and [a
MATLAB version](../../m_src/fem2d_bvp_serene/fem2d_bvp_serene.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FEM2D\_BVP\_LINEAR](../../cpp_src/fem2d_bvp_linear/fem2d_bvp_linear.html),
a C++ program which applies the finite element method (FEM), with
piecewise linear elements, to a 2D boundary value problem (BVP) over a
rectangle, and compares the computed and exact solutions with the L2 and
seminorm errors.

[FEM2D\_BVP\_QUADRATIC](../../cpp_src/fem2d_bvp_quadratic/fem2d_bvp_quadratic.html),
a C++ program which applies the finite element method (FEM), with
piecewise quadratic elements, to a 2D boundary value problem (BVP) over
a rectangle, and compares the computed and exact solutions with the L2
and seminorm errors.

[WATHEN](../../cpp_src/wathen/wathen.html), a C++ library which compares
storage schemes (full, banded, sparse triplet, sparse) and solution
strategies (A\\x, Linpack, conjugate gradient (CG)) for linear systems
involving the Wathen matrix, which can arise when solving a problem
using the finite element method (FEM).

### Source Code: {#source-code align="center"}

-   [fem2d\_bvp\_serene.cpp](fem2d_bvp_serene.cpp), the source code.
-   [fem2d\_bvp\_serene.hpp](fem2d_bvp_serene.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [fem2d\_bvp\_serene\_prb.cpp](fem2d_bvp_serene_prb.cpp), a sample
    calling program.
-   [fem2d\_bvp\_serene\_prb\_output.txt](fem2d_bvp_serene_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **BASIS\_SERENE** evaluates the serendipity basis functions.
-   **BASIS\_DX\_SERENE** differentiates the serendipity basis
    functions.
-   **BASIS\_DY\_SERENE** differentiates the serendipity basis
    functions.
-   **FEM2D\_BVP\_SERENE** solves boundary value problem on a rectangle.
-   **FEM2D\_BVP\_SERENE\_NODE\_NUM** counts the number of nodes.
-   **FEM2D\_H1S\_ERROR\_SERENE:** seminorm error of a finite element
    solution.
-   **FEM2D\_L1\_ERROR\_SERENE:** l1 error norm of a finite element
    solution.
-   **FEM2D\_L2\_ERROR\_SERENE:** L2 error norm of a finite element
    solution.
-   **NOT1** evaluates a factor for serendipity basis functions.
-   **NOT1D** differentiates a factor for serendipity basis functions.
-   **NOT2** evaluates a factor for serendipity basis functions.
-   **NOT2DX** evaluates a factor for serendipity basis functions.
-   **NOT2DY** evaluates a factor for serendipity basis functions.
-   **R8MAT\_PRINT** prints an R8MAT.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **R8MAT\_SOLVE2** computes the solution of an N by N linear system.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 07 July 2014.*
