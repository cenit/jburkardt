NAVIER\_STOKES\_2D\_EXACT\
Exact solutions to the\
2D Incompressible Time-Dependent Navier Stokes Equations {#navier_stokes_2d_exact-exact-solutions-to-the-2d-incompressible-time-dependent-navier-stokes-equations align="center"}
========================================================

------------------------------------------------------------------------

**NAVIER\_STOKES\_2D\_EXACT**, a C++ library which evaluates exact
solutions to the incompressible time-dependent Navier-Stokes equations
over an arbitrary domain in 2D.

-   **Lucas**: steady flow, pressure is zero everywhere;
-   **Poiseuille**: steady flow, vertical velocity and right hand side
    are zero everywhere;
-   **Spiral**: velocity is zero on the boundary of the unit square;
-   **Taylor**: source term is zero everywhere.
-   **Vortex**: steady vortex flow.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**NAVIER\_STOKES\_2D\_EXACT** is available in [a C
version](../../c_src/navier_stokes_2d_exact/navier_stokes_2d_exact.md)
and [a C++
version](../../master/navier_stokes_2d_exact/navier_stokes_2d_exact.md)
and [a FORTRAN77
version](../../f77_src/navier_stokes_2d_exact/navier_stokes_2d_exact.md)
and [a FORTRAN90
version](../../f_src/navier_stokes_2d_exact/navier_stokes_2d_exact.md)
and [a MATLAB
version](../../m_src/navier_stokes_2d_exact/navier_stokes_2d_exact.md)
and [a Python
version](../../py_src/navier_stokes_2d_exact/navier_stokes_2d_exact.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[NAVIER\_STOKES\_3D\_EXACT](../../master/navier_stokes_3d_exact/navier_stokes_3d_exact.md),
a C++ library which evaluates an exact solution to the incompressible
time-dependent Navier-Stokes equations over an arbitrary domain in 3D.

[NAVIER\_STOKES\_MESH2D](../../m_src/navier_stokes_mesh2d/navier_stokes_mesh2d.md),
MATLAB data files which define triangular meshes for several 2D test
problems involving the Navier Stokes equations for fluid flow, provided
by Leo Rebholz.

[SPIRAL\_DATA](../../master/spiral_data/spiral_data.md), a C++
library which computes a velocity vector field that satisfies the
continuity equation, writing the data to a file that can be plotted by
gnuplot.

[STOKES\_2D\_EXACT](../../master/stokes_2d_exact/stokes_2d_exact.md),
a C++ library which evaluates exact solutions to the incompressible
steady Stokes equations over the unit square in 2D.

### Reference: {#reference align="center"}

1.  Maxim Olshanskii, Leo Rebholz,\
    Application of barycenter refined meshes in linear elasticity and
    incompressible fluid dynamics,\
    ETNA: Electronic Transactions in Numerical Analysis,\
    Volume 38, pages 258-274, 2011.
2.  Geoffrey Taylor,\
    On the decay of vortices in a viscous fluid,\
    Philosophical Magazine,\
    Volume 46, 1923, pages 671-674.
3.  Geoffrey Taylor, A E Green,\
    Mechanism for the production of small eddies from large ones,\
    Proceedings of the Royal Society of London,\
    Series A, Volume 158, 1937, pages 499-521.

### Source Code: {#source-code align="center"}

-   [ns2de.cpp](ns2de.cpp), the source code.
-   [ns2de.hpp](ns2de.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [ns2de\_prb.cpp](ns2de_prb.cpp), a sample calling program.
-   [ns2de\_prb\_output.txt](ns2de_prb_output.txt), the output file.

Lucas Bystricky flow:

-   [lucas\_commands.txt](lucas_commands.txt), commands to draw the
    velocity field.
-   [lucas\_data.txt](lucas_data.txt), velocity field data.
-   [lucas.png](lucas.png), a PNG plot of the velocity field.

Poiseuille flow:

-   [poiseuille\_commands.txt](poiseuille_commands.txt), commands to
    draw the velocity field.
-   [poiseuille\_data.txt](poiseuille_data.txt), velocity field data.
-   [poiseuille.png](poiseuille.png), a PNG plot of the velocity field.

Spiral flow:

-   [spiral\_commands.txt](spiral_commands.txt), commands to draw the
    velocity field.
-   [spiral\_data.txt](spiral_data.txt), velocity field data.
-   [spiral.png](spiral.png), a PNG plot of the velocity field.

Taylor flow:

-   [taylor\_commands.txt](taylor_commands.txt), commands to draw the
    velocity field.
-   [taylor\_data.txt](taylor_data.txt), velocity field data.
-   [taylor.png](taylor.png), a PNG plot of the velocity field.

Vortex flow:

-   [vortex\_commands.txt](vortex_commands.txt), commands to draw the
    velocity field.
-   [vortex\_data.txt](vortex_data.txt), velocity field data.
-   [vortex.png](vortex.png), a PNG plot of the velocity field.

### List of Routines: {#list-of-routines align="center"}

-   **GRID\_2D** returns a regular 2D grid.
-   **NS2DE\_GNUPLOT** writes the Navier-Stokes solution to files for
    GNUPLOT.
-   **R8VEC\_AMAX** returns the maximum absolute value in an R8VEC.
-   **R8VEC\_AMIN** returns the minimum absolute value in an R8VEC.
-   **R8VEC\_LINSPACE** creates a vector of linearly spaced values.
-   **R8VEC\_MAX** returns the value of the maximum element in an R8VEC.
-   **R8VEC\_MIN** returns the value of the minimum element in an R8VEC.
-   **R8VEC\_NORM\_L2** returns the L2 norm of an R8VEC.
-   **R8VEC\_UNIFORM\_AB\_NEW** returns a scaled pseudorandom R8VEC.
-   **RESID\_LUCAS** returns Lucas Bystricky residuals.
-   **RESID\_POISEUILLE** returns Poiseuille residuals.
-   **RESID\_SPIRAL** evaluates Spiral residuals.
-   **RESID\_TAYLOR** returns Taylor residuals.
-   **RESID\_VORTEX** returns Vortex residuals.
-   **RHS\_LUCAS** evaluates Lucas Bystricky right hand sides.
-   **RHS\_POISEUILLE** evaluates Poiseuille right hand sides.
-   **RHS\_SPIRAL** evaluates Spiral right hand sides.
-   **RHS\_TAYLOR** returns Taylor right hand sides.
-   **RHS\_VORTEX** returns Vortex right hand sides.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **UVP\_LUCAS** evaluates Lucas Bystricky's solution.
-   **UVP\_POISEUILLE** evaluate Poiseuille solutions.
-   **UVP\_SPIRAL** evaluates Spiral solutions.
-   **UVP\_TAYLOR** evaluates Taylor solutions.
-   **UVP\_VORTEX** evaluates Vortex solutions.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 26 July 2015.*
