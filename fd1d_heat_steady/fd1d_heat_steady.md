FD1D\_HEAT\_STEADY\
Finite Difference Solution of a 1D Steady State Heat Equation {#fd1d_heat_steady-finite-difference-solution-of-a-1d-steady-state-heat-equation align="center"}
=============================================================

------------------------------------------------------------------------

**FD1D\_HEAT\_STEADY** is a C++ program which applies the finite
difference method to estimate the solution of the steady state heat
equation over a one dimensional region, which can be thought of as a
thin metal rod.

We will assume the rod extends over the range A &lt;= X &lt;= B.

The quantity of interest is the temperature U(X) at each point in the
rod.

We will assume that the temperature of the rod is fixed at known values
at the two endpoints. Symbolically, we write the *boundary conditions*:

            U(A) = UA
            U(B) = UB
          

Inside the rod, we assume that a version of the steady (time
independent) heat equation applies. This assumes that the situation in
the rod has "settled down", so that the temperature configuration has no
further tendency to change. The equation we will consider is

            - d/dx ( K(X) * d/dx U(X) ) = F(X)
          

Here, the right hand side term F(X) allows us to consider internal heat
sources in the metal - perhaps a portion of the rod is sitting above a
blow torch. The coefficient K(X) is a measure of heat conductivity. It
measures the rate at which the heat from a local hot spot will spread
out.

If the heat source function F(X) is zero everywhere, and if K(X) is
constant, then the solution U(X) will be the straight line function that
matches the two endpoint values. Making F(X) positive over a small
interval will "heat up" that portion. You can simulate a rod that is
divided into regions of different materials by setting the function K(X)
to have a given value K1 over some subinteral of \[A,B\] and value K2
over the rest of the region.

To estimate the value of the solution, we will pick a uniform mesh of N
points X(1) through X(N), from A to B. At the I-th point, we will
compute an estimated temperature U(I). To do this, we will need to use
the boundary conditions and the differential equation.

Since X(1) = A and X(N) = B, we can use the boundary conditions to set
U(1) = UA and U(N) = UB.

For the points in the interior, we need to approximate the differential
equation in a way that allows us to determine the solution values. We
will do this using a finite difference approximation.

Suppose we are working at node X(I), which is associated with U(I). Then
a centered difference approximation to

            - d/dx ( K(X) * d/dx U(X) )
          

is

           - ( + K(X(I)+DX/2) * ( U(X(I+1)) - U(X(I))   ) / DX )
               - K(X(I)-DX/2) * ( U(X(I))   - U(X(I-1)) ) / DX ) / DX
          

If we rearrange the terms in this approximation, and set it equal to
F(X(I)), we get the finite difference approximation to the differential
equation at X(I):

                - K(X(I)-DX/2)                   * U(X(I-1)
            + (   K(X(I)-DX/2) + K(X(I)+DX(2)) ) * U(X(I))
                               - K(X(I)+DX(2))   * U(X(I+1)) = DX * DX * F(X(I))
          

This means that we have N-2 equations, each of which involves an unknown
U(I) and its left and right neighbors, plus the two boundary conditions,
which give us a total of N equations in N unknowns.

We can set up and solve these linear equations using a matrix A for the
coefficients, and a vector RHS for the right hand side terms, and
calling a function to solve the system A\*U=RHS will give us the
solutioni.

Because finite differences are only an approximation to derivatives,
this process only produces estimates of the solution. Usually, we can
reduce this error by decreasing DX.

This program assumes that the user will provide a calling program, and
functions to evaluate K(X) and F(X).

### Usage: {#usage align="center"}

> **fd1d\_steady\_heat** ( *n, a, b, ua, ub, k, f, x, u* )

where

-   *n*, the number of spatial points.
-   *a, b*, the left and right endpoints.
-   *ua, ub*, the temperature values at the left and right endpoints.
-   *k*, the name of the function which evaluates K(X);
-   *f*, the name of the function which evaluates the right hand side
    F(X).
-   *x*, (output) the X coordinates of nodes;
-   *u*, (output), the computed value of the temperature at the nodes.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FD1D\_HEAT\_STEADY** is available in [a C
version](../../c_src/fd1d_heat_steady/fd1d_heat_steady.md) and [a C++
version](../../master/fd1d_heat_steady/fd1d_heat_steady.md) and [a
FORTRAN77 version](../../f77_src/fd1d_heat_steady/fd1d_heat_steady.md)
and [a FORTRAN90
version](../../f_src/fd1d_heat_steady/fd1d_heat_steady.md) and [a
MATLAB version](../../m_src/fd1d_heat_steady/fd1d_heat_steady.md)

### Related Data and Programs: {#related-data-and-programs align="center"}

[FD1D](../../data/fd1d/fd1d.md), a data directory which contains
examples of 1D FD files, two text files that can be used to describe
many finite difference models with one space variable, and either no
time dependence or a snapshot at a given time;

[FD1D\_BURGERS\_LAX](../../master/fd1d_burgers_lax/fd1d_burgers_lax.md),
a C++ program which applies the finite difference method and the
Lax-Wendroff method to solve the non-viscous time-dependent Burgers
equation in one spatial dimension.

[FD1D\_BURGERS\_LEAP](../../master/fd1d_burgers_leap/fd1d_burgers_leap.md),
a C++ program which applies the finite difference method and the
leapfrog approach to solve the non-viscous time-dependent Burgers
equation in one spatial dimension.

[FD1D\_BVP](../../master/fd1d_bvp/fd1d_bvp.md), a C++ program which
applies the finite difference method to a two point boundary value
problem in one spatial dimension.

[FD1D\_DISPLAY](../../m_src/fd1d_display/fd1d_display.md), a MATLAB
program which reads a pair of files defining a 1D finite difference
model, and plots the data.

[FD1D\_HEAT\_EXPLICIT](../../master/fd1d_heat_explicit/fd1d_heat_explicit.md),
a C++ program which uses the finite difference method and explicit time
stepping to solve the time dependent heat equation in 1D.

[FD1D\_HEAT\_IMPLICIT](../../master/fd1d_heat_implicit/fd1d_heat_implicit.md),
a C++ program which uses the finite difference method and implicit time
stepping to solve the time dependent heat equation in 1D.

[FD1D\_WAVE](../../master/fd1d_wave/fd1d_wave.md), a C++ program
which applies the finite difference method to solve the time-dependent
wave equation utt = c \* uxx in one spatial dimension.

[FD2D\_HEAT\_STEADY](../../master/fd2d_heat_steady/fd2d_heat_steady.md),
a C++ program which uses the finite difference method (FDM) to solve the
steady (time independent) heat equation in 2D.

[FEM1D\_HEAT\_STEADY](../../master/fem1d_heat_steady/fem1d_heat_steady.md),
a C++ program which uses the finite element method to solve the steady
(time independent) heat equation in 1D.

### Reference: {#reference align="center"}

1.  George Lindfield, John Penny,\
    Numerical Methods Using MATLAB,\
    Second Edition,\
    Prentice Hall, 1999,\
    ISBN: 0-13-012641-1,\
    LC: QA297.P45.

### Source Code: {#source-code align="center"}

-   [fd1d\_heat\_steady.cpp](fd1d_heat_steady.cpp), the library.
-   [fd1d\_heat\_steady.hpp](fd1d_heat_steady.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [problem1.cpp](problem1.cpp), uses K(X) = 1, F(X) = 0, so the
    solution should be the straight line that connects the boundary
    values.
-   [problem1\_nodes.txt](problem1_nodes.txt), the coordinates of the
    nodes.
-   [problem1\_values.txt](problem1_values.txt), the computed
    temperatures at the nodes.

-   [problem2.cpp](problem2.cpp), uses K(X) which is set to different
    constants over three subregions, and F(X) = 0.0, so the solution
    will be a piecewise linear function that connects the boundary
    values.
-   [problem2\_nodes.txt](problem2_nodes.txt), the coordinates of the
    nodes.
-   [problem2\_values.txt](problem2_values.txt), the computed
    temperatures at the nodes.

-   [problem3.cpp](problem3.cpp), uses K(X) = 1, F(X) defines a heat
    source, so the solution can rise above the boundary values.
-   [problem3\_nodes.txt](problem3_nodes.txt), the coordinates of the
    nodes.
-   [problem3\_values.txt](problem3_values.txt), the computed
    temperatures at the nodes.

-   [problem4.cpp](problem4.cpp), uses K(X) = 1, F(X) defines a heat
    source and a heat sink, so the solution can go above and below the
    boundary values.
-   [problem4\_nodes.txt](problem4_nodes.txt), the coordinates of the
    nodes.
-   [problem4\_values.txt](problem4_values.txt), the computed
    temperatures at the nodes.

### List of Routines: {#list-of-routines align="center"}

-   **FD1D\_HEAT\_STEADY** solves the steady 1D heat equation.
-   **R83NP\_FS** factors and solves an R83NP system.
-   **R8MAT\_WRITE** writes an R8MAT file.
-   **R8VEC\_EVEN** returns an R8VEC of values evenly spaced between ALO
    and AHI.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 19 May 2011.*
