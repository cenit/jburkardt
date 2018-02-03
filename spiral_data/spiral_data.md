SPIRAL\_DATA\
Velocity Vector Field Satisfying Continuity Equation {#spiral_data-velocity-vector-field-satisfying-continuity-equation align="center"}
====================================================

------------------------------------------------------------------------

**SPIRAL\_DATA** is a C++ program which samples a velocity vector field
that satisfies the continuity equation, and writes the nodes and
velocities to a file, suitable for display using GNUPLOT.

The continuous velocity field **(U,V)(X,Y)** that is discretely sampled
here satisfies the homogeneous continuity equation, that is, it has zero
divergence. In other words:

            dU/dX + dV/dY = 0.
          

This is by construction, since we have

            U(X,Y) =  10 * d/dY ( PHI(X) * PHI(Y) )
            V(X,Y) = -10 * d/dX ( PHI(X) * PHI(Y) )
          

which guarantees zero divergence.

The underlying function PHI is defined by

            PHI(Z) = ( 1 - cos ( C * pi * Z ) ) * ( 1 - Z )^2
          

where C is a parameter.

The velocity data satisifes the (continuous) continuity equation; this
in **no way** implies that it satisfies the momentum equations
associated with Stokes or Navier-Stokes flow! Moreover, a flow solution
for those equations would normally also require specifying a value for
the scalar pressure field **P(X,Y)**.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SPIRAL\_DATA** is available in [a C
version](../../c_src/spiral_data/spiral_data.md) and [a C++
version](../../master/spiral_data/spiral_data.md) and [a FORTRAN77
version](../../f77_src/spiral_data/spiral_data.md) and [a FORTRAN90
version](../../f_src/spiral_data/spiral_data.md) and [a MATLAB
version](../../m_src/spiral_data/spiral_data.md) and [a Python
version](../../py_src/spiral_data/spiral_data.md)..

### Related Data and Programs: {#related-data-and-programs align="center"}

[GNUPLOT](../../master/gnuplot/gnuplot.md), C++ programs which
illustrate the use of the gnuplot graphics program.

[NAVIER\_STOKES\_2D\_EXACT](../../master/navier_stokes_2d_exact/navier_stokes_2d_exact.md),
a C++ library which evaluates an exact solution to the incompressible
time-dependent Navier-Stokes equations over an arbitrary domain in 2D.

[STOKES\_2D\_EXACT](../../master/stokes_2d_exact/stokes_2d_exact.md),
a C++ library which evaluates exact solutions to the incompressible
steady Stokes equations over the unit square in 2D.

### Source Code: {#source-code align="center"}

-   [spiral\_data.cpp](spiral_data.cpp), the source code.
-   [spiral\_data.hpp](spiral_data.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [spiral\_data\_prb.cpp](spiral_data_prb.cpp), the source code.
-   [spiral\_data\_prb\_output.txt](spiral_data_prb_output.txt), the
    output file.

Sample data was generated with N = 20 and C = 0.45 and plotted with
GNUPLOT:

-   [spiral\_data.txt](spiral_data.txt), the X, Y, U, V values.
-   [spiral\_commands.txt](spiral_commands.txt), commands to GNUPLOT.
-   [spiral.png](spiral.png), the resulting plot.

### List of Routines: {#list-of-routines align="center"}

-   **GRID\_2D** returns a regular 2D grid.
-   **R8VEC\_AMAX** returns the maximum absolute value in an R8VEC.
-   **R8VEC\_AMIN** returns the minimum absolute value in an R8VEC.
-   **R8VEC\_MAX** returns the value of the maximum element in an R8VEC.
-   **R8VEC\_MIN** returns the value of the minimum element in an R8VEC.
-   **R8VEC\_UNIFORM\_AB\_NEW** returns a scaled pseudorandom R8VEC.
-   **RESID\_SPIRAL** computes the residual for a spiral velocity vector
    field.
-   **SPIRAL\_GNUPLOT** writes the spiral vector field to files for
    GNUPLOT.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **UV\_SPIRAL** computes a spiral velocity vector field.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 20 January 2015.*
