FD1D\_HEAT\_IMPLICIT\
Finite Difference Solution of the\
Time Dependent 1D Heat Equation\
using Implicit Time Stepping {#fd1d_heat_implicit-finite-difference-solution-of-the-time-dependent-1d-heat-equation-using-implicit-time-stepping align="center"}
==================================

------------------------------------------------------------------------

**FD1D\_HEAT\_IMPLICIT** is a C++ program which solves the
time-dependent 1D heat equation, using the finite difference method in
space, and an implicit version of the method of lines to handle
integration in time.

This program solves

            dUdT - k * d2UdX2 = F(X,T)
          

over the interval \[A,B\] with boundary conditions

            U(A,T) = UA(T),
            U(B,T) = UB(T),
          

over the time interval \[T0,T1\] with initial conditions

            U(X,T0) = U0(X)
          

A second order finite difference is used to approximate the second
derivative in space.

The solver applies an implicit backward Euler approximation to the first
derivative in time.

The resulting finite difference form can be written as

           U(X,T+dt) - U(X,T)                     ( U(X-dx,+dtT) - 2 U(X,+dtT) + U(X+dx,+dtT) )
           ------------------  = F(X,T+dt) + k *  ---------------------------------------------
                    dt                                   dx * dx
          

or, assuming we have solved for all values of U at time T, we have

                -     k * dt / dx / dx   * U(X-dt,T+dt)
          + ( 1 + 2 * k * dt / dx / dx ) * U(X,   T+dt)
                -     k * dt / dx / dx   * U(X+dt,T+dt)
          =               dt             * F(X,   T+dt)
          +                                U(X,   T)
          

which can be written as A\*x=b, where A is a tridiagonal matrix whose
entries are the same for every time step.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FD1D\_HEAT\_IMPLICIT** is available in [a C
version](../../c_src/fd1d_heat_implicit/fd1d_heat_implicit.md) and [a
C++ version](../../master/fd1d_heat_implicit/fd1d_heat_implicit.md)
and [a FORTRAN77
version](../../f77_src/fd1d_heat_implicit/fd1d_heat_implicit.md) and
[a FORTRAN90
version](../../f_src/fd1d_heat_implicit/fd1d_heat_implicit.md) and [a
MATLAB version](../../m_src/fd1d_heat_implicit/fd1d_heat_implicit.md)
and [a Python
version](../../py_src/fd1d_heat_implicit/fd1d_heat_implicit.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

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

[FD1D\_HEAT\_EXPLICIT](../../master/fd1d_heat_explicit/fd1d_heat_explicit.md),
a C++ program which uses the finite difference method to solve the time
dependent heat equation in 1D, using an explicit time step method.

[FD1D\_HEAT\_STEADY](../../master/fd1d_heat_steady/fd1d_heat_steady.md),
a C++ program which uses the finite difference method to solve the
steady (time independent) heat equation in 1D.

[FD1D\_WAVE](../../master/fd1d_wave/fd1d_wave.md), a C++ program
which applies the finite difference method to solve the time-dependent
wave equation utt = c \* uxx in one spatial dimension.

[FEM\_50\_HEAT](../../m_src/fem_50_heat/fem_50_heat.md), a MATLAB
program which applies the finite element method to solve the 2D heat
equation.

[FEM1D](../../master/fem1d/fem1d.md), a C++ program which applies the
finite element method, with piecewise linear basis functions, to a
linear two point boundary value problem;

[FEM2D\_HEAT](../../master/fem2d_heat/fem2d_heat.md), a C++ program
which applies the finite element method to solve the 2D heat equation.

[HOT\_PIPE](../../m_src/hot_pipe/hot_pipe.md), a MATLAB program which
uses FEM\_50\_HEAT to solve a heat problem in a pipe.

[HOT\_POINT](../../m_src/hot_point/hot_point.md), a MATLAB program
which uses **FEM\_50\_HEAT** to solve a heat problem with a point
source.

### Reference: {#reference align="center"}

1.  George Lindfield, John Penny,\
    Numerical Methods Using MATLAB,\
    Second Edition,\
    Prentice Hall, 1999,\
    ISBN: 0-13-012641-1,\
    LC: QA297.P45.

### Source Code: {#source-code align="center"}

-   [fd1d\_heat\_implicit.cpp](fd1d_heat_implicit.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [x.txt](x,txt) a file containing the spatial coordinates.
-   [t.txt](t,txt) a file containing the times.
-   [u.txt](u,txt) a file containing the values of the computed solution
    at each point X and time T.
-   [solution.png](solution.png) a PNG image of the MATLAB graphics
    created by the commands:

                    x = load ( 'x.txt' );
                    t = load ( 't.txt' );
                    u = load ( 'u.txt' );
                    [ xg, tg ] = meshgrid ( x, t );
                    mesh ( xg, tg, u );
                  

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for FD1D\_HEAT\_IMPLICIT.
-   **F** returns the right hand side of the heat equation.
-   **GET\_UNIT** returns a free FORTRAN unit number.
-   **R83\_NP\_FA** factors an R83 matrix without pivoting.
-   **R83\_NP\_SL** solves an R83 system factored by R83\_NP\_FA.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **U0** returns the initial condition at the starting time.
-   **UA** returns the Dirichlet boundary condition at the left
    endpoint.
-   **UB** returns the Dirichlet boundary condition at the right
    endpoint.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 31 May 2009.*
