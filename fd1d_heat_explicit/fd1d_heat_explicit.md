FD1D\_HEAT\_EXPLICIT\
Finite Difference Solution of the\
Time Dependent 1D Heat Equation\
using Explicit Time Stepping {#fd1d_heat_explicit-finite-difference-solution-of-the-time-dependent-1d-heat-equation-using-explicit-time-stepping align="center"}
==================================

------------------------------------------------------------------------

**FD1D\_HEAT\_EXPLICIT** is a C++ library which solves the
time-dependent 1D heat equation, using the finite difference method in
space, and an explicit version of the method of lines to handle
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

The solver applies an explicit forward Euler approximation to the first
derivative in time.

The resulting finite difference form can be written as

           U(X,T+dt) - U(X,T)                  ( U(X-dx,T) - 2 U(X,T) + U(X+dx,T) )
           ------------------  = F(X,T) + k *  ------------------------------------
                    dt                                   dx * dx
          

or, assuming we have solved for all values of U at time T, we have

           U(X,T+dt) = U(X,T) 
                     + dt * ( F(X,T) 
                              + k * ( U(X-dx,T) - 2 U(X,T) + U(X+dx,T) ) / dx / dx )
          

Other approaches would involve a fully implicit backward Euler
approximation or the Crank-Nicholson approximation. These latter two
methods have improved stability.

A second worthwhile change would be to replace the constant heat
conductivity **K** by a function **K(X,T)**. The spatial variation would
allow for the modeling of a region divided into subregions of different
materials.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FD1D\_HEAT\_EXPLICIT** is available in [a C
version](../../c_src/fd1d_heat_explicit/fd1d_heat_explicit.html) and [a
C++ version](../../cpp_src/fd1d_heat_explicit/fd1d_heat_explicit.html)
and [a FORTRAN77
version](../../f77_src/fd1d_heat_explicit/fd1d_heat_explicit.html) and
[a FORTRAN90
version](../../f_src/fd1d_heat_explicit/fd1d_heat_explicit.html) and [a
MATLAB version](../../m_src/fd1d_heat_explicit/fd1d_heat_explicit.html)
and [a Python
version](../../py_src/fd1d_heat_explicit/fd1d_heat_explicit.html)

### Related Data and Programs: {#related-data-and-programs align="center"}

[FD1D\_BURGERS\_LAX](../../cpp_src/fd1d_burgers_lax/fd1d_burgers_lax.html),
a C++ program which applies the finite difference method and the
Lax-Wendroff method to solve the non-viscous time-dependent Burgers
equation in one spatial dimension.

[FD1D\_BURGERS\_LEAP](../../cpp_src/fd1d_burgers_leap/fd1d_burgers_leap.html),
a C++ program which applies the finite difference method and the
leapfrog approach to solve the non-viscous time-dependent Burgers
equation in one spatial dimension.

[FD1D\_BVP](../../cpp_src/fd1d_bvp/fd1d_bvp.html), a C++ program which
applies the finite difference method to a two point boundary value
problem in one spatial dimension.

[FD1D\_HEAT\_IMPLICIT](../../cpp_src/fd1d_heat_implicit/fd1d_heat_implicit.html),
a C++ program which uses the finite difference method and implicit time
stepping to solve the time dependent heat equation in 1D.

[FD1D\_HEAT\_STEADY](../../cpp_src/fd1d_heat_steady/fd1d_heat_steady.html),
a C++ program which uses the finite difference method to solve the
steady (time independent) heat equation in 1D.

[FD1D\_PREDATOR\_PREY](../../cpp_src/fd1d_predator_prey/fd1d_predator_prey.html),
a C++ program which uses finite differences to solve a 1D predator prey
problem.

[FD1D\_WAVE](../../cpp_src/fd1d_wave/fd1d_wave.html), a C++ program
which applies the finite difference method to solve the time-dependent
wave equation utt = c \* uxx in one spatial dimension.

[FEM1D](../../cpp_src/fem1d/fem1d.html), a C++ program which applies the
finite element method, with piecewise linear basis functions, to a
linear two point boundary value problem;

### Reference: {#reference align="center"}

1.  George Lindfield, John Penny,\
    Numerical Methods Using MATLAB,\
    Second Edition,\
    Prentice Hall, 1999,\
    ISBN: 0-13-012641-1,\
    LC: QA297.P45.

### Source Code: {#source-code align="center"}

-   [fd1d\_heat\_explicit.cpp](fd1d_heat_explicit.cpp), the source code.
-   [fd1d\_heat\_explicit.hpp](fd1d_heat_explicit.hpp), the include
    file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [fd1d\_heat\_explicit\_prb.cpp](fd1d_heat_explicit_prb.cpp), a
    sample calling program.
-   [fd1d\_heat\_explicit\_prb\_output.txt](fd1d_heat_explicit_prb_output.txt),
    the output file.

**TEST01** runs with initial condition 50 everywhere, boundary
conditions of 90 on the left and 70 on the right, and no right hand side
source term.

-   [plot\_test01.png](plot_test01.png), a PNG image of the solution,
    using the MATLAB MESH command to emphasize the method of lines
    approach underlying the solution.
-   [h\_test01.txt](h_test01.txt), the computed H data.
-   [t\_test01.txt](t_test01.txt), the T data.
-   [x\_test01.txt](x_test01.txt), the X data.

### List of Routines: {#list-of-routines align="center"}

-   **FD1D\_HEAT\_EXPLICIT:** Finite difference solution of 1D heat
    equation.
-   **FD1D\_HEAT\_EXPLICIT\_CFL:** compute the Courant-Friedrichs-Loewy
    coefficient.
-   **R8MAT\_WRITE** writes an R8MAT file.
-   **R8VEC\_LINSPACE\_NEW** creates a vector of linearly spaced values.
-   **R8VEC\_WRITE** writes an R8VEC file.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 26 January 2012.*
