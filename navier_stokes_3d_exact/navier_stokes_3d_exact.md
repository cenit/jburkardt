NAVIER\_STOKES\_3D\_EXACT\
Exact solutions to the\
3D Incompressible Time-Dependent Navier Stokes Equations {#navier_stokes_3d_exact-exact-solutions-to-the-3d-incompressible-time-dependent-navier-stokes-equations align="center"}
========================================================

------------------------------------------------------------------------

**NAVIER\_STOKES\_3D\_EXACT**, a C++ library which evaluates exact
solutions to the incompressible time-dependent Navier-Stokes equations
over an arbitrary domain in 3D.

The given velocity and pressure fields are exact solutions for the 3D
incompressible time-dependent Navier Stokes equations over any region.

To define a typical problem, one chooses a bounded spatial region and a
starting time, and then imposes boundary and initial conditions by
referencing the exact solution appropriately.

In the Ethier reference, a calculation is made for the cube centered at
(0,0,0) with a "radius" of 1 unit, and over the time interval from t = 0
to t = 0.1, with parameters a = PI/4 and d = PI/2, and with Dirichlet
boundary conditions on all faces of the cube.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**NAVIER\_STOKES\_3D\_EXACT** is available in [a C
version](../../c_src/navier_stokes_3d_exact/navier_stokes_3d_exact.html)
and [a C++
version](../../cpp_src/navier_stokes_3d_exact/navier_stokes_3d_exact.html)
and [a FORTRAN77
version](../../f77_src/navier_stokes_3d_exact/navier_stokes_3d_exact.html)
and [a FORTRAN90
version](../../f_src/navier_stokes_3d_exact/navier_stokes_3d_exact.html)
and [a MATLAB
version](../../m_src/navier_stokes_3d_exact/navier_stokes_3d_exact.html)
and [a Python
version](../../py_src/navier_stokes_3d_exact/navier_stokes_3d_exact.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[NAVIER\_STOKES\_2D\_EXACT](../../cpp_src/navier_stokes_2d_exact/navier_stokes_2d_exact.html),
a C++ library which evaluates exact solutions to the incompressible
time-dependent Navier-Stokes equations over an arbitrary domain in 2D.

[NAVIER\_STOKES\_MESH3D](../../m_src/navier_stokes_mesh3d/navier_stokes_mesh3d.html),
MATLAB data files which define meshes for several 3D test problems
involving the Navier Stokes equations for flow flow, provided by Leo
Rebholz.

### Reference: {#reference align="center"}

1.  Martin Bazant, Henry Moffatt,\
    Exact solutions of the Navier-Stokes equations having steady vortex
    structures,\
    Journal of Fluid Mechanics,\
    Volume 541, pages 55-64, 2005.
2.  Johannes Burgers,\
    A mathematical model illustrating the theory of turbulence,\
    Advances in Applied Mechanics,\
    Volume 1, pages 171-199, 1948.
3.  C Ross Ethier, David Steinman,\
    Exact fully 3D Navier-Stokes solutions for benchmarking,\
    International Journal for Numerical Methods in Fluids,\
    Volume 19, Number 5, March 1994, pages 369-375.

### Source Code: {#source-code align="center"}

-   [ns3de.cpp](ns3de.cpp), the source code.
-   [ns3de.hpp](ns3de.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [ns3de\_prb.cpp](ns3de_prb.cpp), a sample calling program.
-   [ns3de\_prb\_output.txt](ns3de_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **R8VEC\_AMAX** returns the maximum absolute value in an R8VEC.
-   **R8VEC\_AMIN** returns the minimum absolute value in an R8VEC.
-   **R8VEC\_MAX** returns the value of the maximum element in an R8VEC.
-   **R8VEC\_MIN** returns the value of the minimum element in an R8VEC.
-   **R8VEC\_UNIFORM\_AB\_NEW** returns a scaled pseudorandom R8VEC.
-   **RESID\_ETHIER** evaluates the residual of the Ethier exact Navier
    Stokes solution.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **UVWP\_ETHIER** evaluates the Ethier exact Navier Stokes solution.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 17 January 2015.*
