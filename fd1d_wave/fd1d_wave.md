FD1D\_WAVE\
Finite Difference Method\
1D Wave Equation {#fd1d_wave-finite-difference-method-1d-wave-equation align="center"}
=========================

------------------------------------------------------------------------

**FD1D\_WAVE** is a C++ program which applies the finite difference
method to solve a version of the wave equation in one spatial dimension.

The wave equation considered here is an extremely simplified model of
the physics of waves. Many facts about waves are not modeled by this
simple system, including that wave motion in water can depend on the
depth of the medium, that waves tend to disperse, and that waves of
different frequency may travel at different speeds. However, as a first
model of wave motion, the equation is useful because it captures a most
interesting feature of waves, that is, their usefulness in transmitting
signals.

This program solves the 1D wave equation of the form:

            Utt = c^2 Uxx
          

over the spatial interval \[X1,X2\] and time interval \[T1,T2\], with
initial conditions:

            U(T1,X)  = U_T1(X),
            Ut(T1,X) = UT_T1(X),
          

and boundary conditions of Dirichlet type:

            U(T,X1) = U_X1(T),

            U(T,X2) = U_X2(T).
          

The value **C** represents the propagation speed of waves.

The program uses the finite difference method, and marches forward in
time, solving for all the values of U at the next time step by using the
values known at the previous two time steps.

Central differences may be used to approximate both the time and space
derivatives in the original differential equation.

Thus, assuming we have available the approximated values of U at the
current and previous times, we may write a discretized version of the
wave equation as follows:

            Uxx(T,X) = ( U(T,   X+dX) - 2 U(T,X) + U(T,   X-dX) ) / dX^2
            Utt(T,X) = ( U(T+dt,X   ) - 2 U(T,X) + U(T-dt,X   ) ) / dT^2
          

If we multiply the first term by C\^2 and solve for the single unknown
value U(T+dt,X), we have:

            U(T+dT,X) =        (     C^2 * dT^2 / dX^2 ) * U(T,   X+dX)
                        +  2 * ( 1 - C^2 * dT^2 / dX^2 ) * U(T,   X   )
                        +      (     C^2 * dT^2 / dX^2 ) * U(T,   X-dX)
                        -                                  U(T-dT,X   )
          

(Equation to advance from time T to time T+dT, except for FIRST step!)

However, on the very first step, we only have the values of U for the
initial time, but not for the previous time step. In that case, we use
the initial condition information for dUdT which can be approximated by
a central difference that involves U(T+dT,X) and U(T-dT,X):

            dU/dT(T,X) = ( U(T+dT,X) - U(T-dT,X) ) / ( 2 * dT )
          

and so we can estimate U(T-dT,X) as

            U(T-dT,X) = U(T+dT,X) - 2 * dT * dU/dT(T,X)
          

If we replace the "missing" value of U(T-dT,X) by the known values on
the right hand side, we now have U(T+dT,X) on both sides of the
equation, so we have to rearrange to get the formula we use for just the
first time step:

            U(T+dT,X) =   1/2 * (     C^2 * dT^2 / dX^2 ) * U(T,   X+dX)
                        +       ( 1 - C^2 * dT^2 / dX^2 ) * U(T,   X   )
                        + 1/2 * (     C^2 * dT^2 / dX^2 ) * U(T,   X-dX)
                        +  dT *                         dU/dT(T,   X   )
          

(Equation to advance from time T to time T+dT for FIRST step.)

It should be clear now that the quantity ALPHA = C \* DT / DX will
affect the stability of the calculation. If it is greater than 1, then
the middle coefficient 1-C\^2 DT\^2 / DX\^2 is negative, and the sum of
the magnitudes of the three coefficients becomes unbounded.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FD1D\_WAVE** is available in [a C
version](../../c_src/fd1d_wave/fd1d_wave.html) and [a C++
version](../../cpp_src/fd1d_wave/fd1d_wave.html) and [a FORTRAN77
version](../../f77_src/fd1d_wave/fd1d_wave.html) and [a FORTRAN90
version](../../f_src/fd1d_wave/fd1d_wave.html) and [a MATLAB
version](../../m_src/fd1d_wave/fd1d_wave.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FD1D\_ADVECTION\_LAX](../../cpp_src/fd1d_advection_lax/fd1d_advection_lax.html),
a C++ program which applies the finite difference method to solve the
time-dependent advection equation ut = - c \* ux in one spatial
dimension, with a constant velocity, using the Lax method to treat the
time derivative.

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

[FD1D\_HEAT\_EXPLICIT](../../cpp_src/fd1d_heat_explicit/fd1d_heat_explicit.html),
a C++ program which uses the finite difference method and explicit time
stepping to solve the time dependent heat equation in 1D.

[FD1D\_HEAT\_IMPLICIT](../../cpp_src/fd1d_heat_implicit/fd1d_heat_implicit.html),
a C++ program which uses the finite difference method and implicit time
stepping to solve the time dependent heat equation in 1D.

[FD1D\_HEAT\_STEADY](../../cpp_src/fd1d_heat_steady/fd1d_heat_steady.html),
a C++ program which uses the finite difference method to solve the
steady (time independent) heat equation in 1D.

### Reference: {#reference align="center"}

1.  George Lindfield, John Penny,\
    Numerical Methods Using MATLAB,\
    Second Edition,\
    Prentice Hall, 1999,\
    ISBN: 0-13-012641-1,\
    LC: QA297.P45.

### Source Code: {#source-code align="center"}

-   [fd1d\_wave.cpp](fd1d_wave.cpp), the source code.
-   [fd1d\_wave.hpp](fd1d_wave.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [fd1d\_wave\_prb.cpp](fd1d_wave_prb.cpp), a sample calling program.
-   [fd1d\_wave\_prb\_output.txt](fd1d_wave_prb_output.txt), the output
    file.

**test01\_plot** sets up the "shark wave".

-   [test01\_data.txt](test01_data.txt), the data.
-   [test01.png](test01.png), a plot of the data.

**test02\_plot** sets up a sine wave.

-   [test02\_data.txt](test02_data.txt), the data.
-   [test02.png](test02.png), a plot of the data.

### List of Routines: {#list-of-routines align="center"}

-   **FD1D\_WAVE\_ALPHA** computes ALPHA for the 1D wave equation.
-   **FD1D\_WAVE\_START** takes the first step for the wave equation.
-   **FD1D\_WAVE\_STEP** computes a step of the 1D wave equation.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8MAT\_WRITE** writes an R8MAT file.
-   **R8VEC\_LINSPACE** creates a vector of linearly spaced values.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 24 January 2012.*
