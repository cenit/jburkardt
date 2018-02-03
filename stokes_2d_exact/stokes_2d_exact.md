STOKES\_2D\_EXACT\
Exact solutions to the\
2D Incompressible Steady Stokes Equations {#stokes_2d_exact-exact-solutions-to-the-2d-incompressible-steady-stokes-equations align="center"}
=========================================

------------------------------------------------------------------------

**STOKES\_2D\_EXACT**, a C++ library which evaluates exact solutions to
the incompressible steady Stokes equations in 2D.

The incompressible steady 2D Stokes equations seek functions u(x,y),
v(x,y), (the velocity vector) and p(x,y) (the pressure) such that

            - uxx - uyy + dpdx = f
            - vxx - vyy + dpdy = g
              ux  + vy         = h
          

while satisfying boundary conditions for u and v, and a normalization
condition for p, such as specifying its value at one point, or requiring
that the integral of p over the region be 0.

Three exact solution fields are provided here.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**STOKES\_2D\_EXACT** is available in [a C
version](../../c_src/stokes_2d_exact/stokes_2d_exact.html) and [a C++
version](../../cpp_src/stokes_2d_exact/stokes_2d_exact.html) and [a
FORTRAN77 version](../../f77_src/stokes_2d_exact/stokes_2d_exact.html)
and [a FORTRAN90
version](../../f_src/stokes_2d_exact/stokes_2d_exact.html) and [a MATLAB
version](../../m_src/stokes_2d_exact/stokes_2d_exact.html) and [a Python
version](../../py_src/stokes_2d_exact/stokes_2d_exact.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[NAVIER\_STOKES\_2D\_EXACT](../../cpp_src/navier_stokes_2d_exact/navier_stokes_2d_exact.html),
a C++ library which evaluates an exact solution to the incompressible
time-dependent Navier-Stokes equations over an arbitrary domain in 2D.

[NAVIER\_STOKES\_MESH2D](../../m_src/navier_stokes_mesh2d/navier_stokes_mesh2d.html),
MATLAB data files which define triangular meshes for several 2D test
problems involving the Navier Stokes equations for fluid flow, provided
by Leo Rebholz.

[SPIRAL\_DATA](../../cpp_src/spiral_data/spiral_data.html), a C++
library which computes a velocity vector field that satisfies the
continuity equation, writing the data to a file that can be plotted by
gnuplot.

### Reference: {#reference align="center"}

1.  Junping Wang, Yanqiu Wang, Xiu Ye,\
    A robust numerical method for Stokes equations based on
    divergence-free H(div) finite element methods,\
    SIAM Journal on Scientific Computing,\
    Volume 31, Number 4, 2009, pages 2784-2802.
2.  Howard Elman, Alison Ramage, David Silvester,\
    Finite Elements and Fast Iterative Solvers with Applications in
    Incompressible Fluid Dynamics,\
    Oxford, 2005,\
    ISBN: 978-0198528678,\
    LC: QA911.E39.

### Source Code: {#source-code align="center"}

-   [s2de.cpp](s2de.cpp), the source code.
-   [s2de.hpp](s2de.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [s2de\_prb.cpp](s2de_prb.cpp), a sample calling program.
-   [s2de\_prb\_output.txt](s2de_prb_output.txt), the output file.

Graphics files:

-   [stokes1\_commands.txt](stokes1_commands.txt), commands to draw the
    velocity field.
-   [stokes1\_data.txt](stokes1_data.txt), velocity field data.
-   [stokes1.png](stokes1.png), a PNG plot of the velocity field.
-   [stokes2\_commands.txt](stokes2_commands.txt), commands to draw the
    velocity field.
-   [stokes2\_data.txt](stokes2_data.txt), velocity field data.
-   [stokes2.png](stokes2.png), a PNG plot of the velocity field.
-   [stokes3\_commands.txt](stokes3_commands.txt), commands to draw the
    velocity field.
-   [stokes3\_data.txt](stokes3_data.txt), velocity field data.
-   [stokes3.png](stokes3.png), a PNG plot of the velocity field.

### List of Routines: {#list-of-routines align="center"}

-   **GRID\_2D** returns a regular 2D grid.
-   **R8VEC\_AMAX** returns the maximum absolute value in an R8VEC.
-   **R8VEC\_AMIN** returns the minimum absolute value in an R8VEC.
-   **R8VEC\_MAX** returns the value of the maximum element in a R8VEC.
-   **R8VEC\_MIN** returns the value of the minimum element in a R8VEC.
-   **R8VEC\_NORM\_L2** returns the L2 norm of an R8VEC.
-   **R8VEC\_UNIFORM\_AB\_NEW** returns a scaled pseudorandom R8VEC.
-   **RESID\_STOKES1** returns residuals of the exact Stokes solution
    \#1.
-   **RESID\_STOKES2** returns residuals of the exact Stokes solution
    \#2.
-   **RESID\_STOKES3** returns residuals of the exact Stokes solution
    \#3.
-   **RHS\_STOKES1** returns the right hand sides of the exact Stokes
    solution \#1.
-   **RHS\_STOKES2** returns the right hand sides of the exact Stokes
    solution \#2.
-   **RHS\_STOKES3** returns the right hand sides of the exact Stokes
    solution \#3.
-   **STOKES\_GNUPLOT** writes the Stokes velocity field to files for
    GNUPLOT.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **UVP\_STOKES1** evaluates the exact Stokes solution \#1.
-   **UVP\_STOKES2** evaluates the exact Stokes solution \#2.
-   **UVP\_STOKES3** evaluates the exact Stokes solution \#3.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 11 February 2015.*
