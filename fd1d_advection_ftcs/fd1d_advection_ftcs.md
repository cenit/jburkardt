FD1D\_ADVECTION\_FTCS\
Finite Difference Method\
1D Advection Equation\
Forward Time Difference, Centered Space Difference {#fd1d_advection_ftcs-finite-difference-method-1d-advection-equation-forward-time-difference-centered-space-difference align="center"}
==================================================

------------------------------------------------------------------------

**FD1D\_ADVECTION\_FTCS** is a C++ program which applies the finite
difference method to solve the time-dependent advection equation ut = -
c \* ux in one spatial dimension, with a constant velocity, using the
FTCS method, forward time difference, centered space difference, writing
graphics files for processing by gnuplot.

We solve the constant-velocity advection equation in 1D,

            du/dt = - c du/dx
          

over the interval:

            0.0 <= x <= 1.0
          

with periodic boundary conditions, and with a given initial condition

            u(0,x) = (10x-4)^2 (6-10x)^2 for 0.4 <= x <= 0.6
                   = 0 elsewhere.
          

We use a method known as FTCS:

-   FT: Forward Time : du/dt = (u(t+dt,x)-u(t,x))/dt
-   CS: Centered Space: du/dx = (u(t,x+dx)-u(t,x-dx))/2/dx

The FTCS method is *unstable* for the advection problem. One purpose of
this example is to demonstrate that fact.

For our simple case, the advection velocity is constant in time and
space. Therefore, (given our periodic boundary conditions), the solution
should simply move smoothly from left to right, returning on the left
again. Instead, because of the instabilities, we see that the solution
quickly becomes dominated by erroneous oscillations.

There are more sophisticated methods for the advection problem, which do
not exhibit this behavior.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FD1D\_ADVECTION\_FTCS** is available in [a C
version](../../c_src/fd1d_advection_ftcs/fd1d_advection_ftcs.md) and
[a C++
version](../../master/fd1d_advection_ftcs/fd1d_advection_ftcs.md) and
[a FORTRAN77
version](../../f77_src/fd1d_advection_ftcs/fd1d_advection_ftcs.md) and
[a FORTRAN90
version](../../f_src/fd1d_advection_ftcs/fd1d_advection_ftcs.md) and
[a MATLAB
version](../../m_src/fd1d_advection_ftcs/fd1d_advection_ftcs.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FD1D\_ADVECTION\_LAX](../../master/fd1d_advection_lax/fd1d_advection_lax.md),
a C++ program which applies the finite difference method to solve the
time-dependent advection equation ut = - c \* ux in one spatial
dimension, with a constant velocity, using the Lax method to treat the
time derivative.

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
a C++ program which uses the finite difference method and explicit time
stepping to solve the time dependent heat equation in 1D.

[FD1D\_HEAT\_IMPLICIT](../../master/fd1d_heat_implicit/fd1d_heat_implicit.md),
a C++ program which uses the finite difference method and implicit time
stepping to solve the time dependent heat equation in 1D.

[FD1D\_HEAT\_STEADY](../../master/fd1d_heat_steady/fd1d_heat_steady.md),
a C++ program which uses the finite difference method to solve the
steady (time independent) heat equation in 1D.

[FD1D\_PREDATOR\_PREY](../../master/fd1d_predator_prey/fd1d_predator_prey.md),
a C++ program which implements a finite difference algorithm for
predator-prey system with spatial variation in 1D.

[FD1D\_WAVE](../../master/fd1d_wave/fd1d_wave.md), a C++ program
which applies the finite difference method to solve the time-dependent
wave equation utt = c \* uxx in one spatial dimension.

[GNUPLOT](../../master/gnuplot/gnuplot.md), C++ programs which
illustrate how a program can write data and command files so that
gnuplot can create plots of the program results.

### Reference: {#reference align="center"}

1.  George Lindfield, John Penny,\
    Numerical Methods Using MATLAB,\
    Second Edition,\
    Prentice Hall, 1999,\
    ISBN: 0-13-012641-1,\
    LC: QA297.P45.

### Source Code: {#source-code align="center"}

-   [fd1d\_advection\_ftcs.cpp](fd1d_advection_ftcs.cpp), the source
    code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [fd1d\_advection\_ftcs\_output.txt](fd1d_advection_ftcs_output.txt),
    the output file.

Graphical output for this program was created using GNUPLOT. Data at
selected time steps was written to a "data" file, and the appropriate
GNUPLOT commands were written to a "command" file. The plot can be
created by the command

            gnuplot < advection_commands.txt
          

-   [advection\_data.txt](advection_data.txt), the solution data.
-   [advection\_commands.txt](advection_commands.txt), gnuplot commands
    to plot the data.
-   [advection.png](advection.png), a (not very satisfactory) image of
    the solution.

### List of Routines: {#list-of-routines align="center"}

-   **FD1D\_ADVECTION\_FTCS** solves the advection equation using the
    FTCS method.
-   **GET\_UNIT** returns a free FORTRAN unit number.
-   **I4\_MODP** returns the nonnegative remainder of I4 division.
-   **I4\_WRAP** forces an I4 to lie between given limits by wrapping.
-   **INITIAL\_CONDITION** sets the initial condition.
-   **R8VEC\_LINSPACE** creates a vector of linearly spaced values.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 26 December 2012.*
