FD1D\_ADVECTION\_DIFFUSION\_STEADY\
Finite Difference Method\
Steady 1D Advection Diffusion Equation {#fd1d_advection_diffusion_steady-finite-difference-method-steady-1d-advection-diffusion-equation align="center"}
======================================

------------------------------------------------------------------------

**FD1D\_ADVECTION\_DIFFUSION\_STEADY** is a C++ program which applies
the finite difference method to solve the steady advection diffusion
equation v\*ux-k\*uxx=0 in one spatial dimension, with constant velocity
v and diffusivity k, creating graphics files for processing by GNUPLOT.

We solve the steady constant-velocity advection diffusion equation in
1D,

            v du/dx - k d^2u/dx^2
          

over the interval:

            0.0 <= x <= 1.0
          

with boundary conditions

            u(0) = 0, u(1) = 1.
          

We do this by discretizing the interval \[0,1\] into NX nodes. We write
the boundary conditions at the first and last nodes. At the i-th
interior node, we replace derivatives by differences:

-   du/dx = (u(x+dx)-u(x-dx))/2/dx
-   d\^2u/dx\^2 = (u(x+dx)-2u(x)+u(x-dx))/dx/dx

This becomes a set of NX linear equations in the NX unknown values of U.

The exact solution to this differential equation is known:

            u = ( 1 - exp ( r * x ) ) / ( 1 - exp ( r ) )
          

where r = v \* l / k;

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FD1D\_ADVECTION\_DIFFUSION\_STEADY** is available in [a C
version](../../c_src/fd1d_advection_diffusion_steady/fd1d_advection_diffusion_steady.html)
and [a C++
version](../../cpp_src/fd1d_advection_diffusion_steady/fd1d_advection_diffusion_steady.html)
and [a FORTRAN77
version](../../f77_src/fd1d_advection_diffusion_steady/fd1d_advection_diffusion_steady.html)
and [a FORTRAN90
version](../../f_src/fd1d_advection_diffusion_steady/fd1d_advection_diffusion_steady.html)
and [a MATLAB
version](../../m_src/fd1d_advection_diffusion_steady/fd1d_advection_diffusion_steady.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FD1D\_ADVECTION\_FTCS](../../cpp_src/fd1d_advection_ftcs/fd1d_advection_ftcs.html),
a C++ program which applies the finite difference method to solve the
time-dependent advection equation ut = - c \* ux in one spatial
dimension, with a constant velocity, using the forward time, centered
space (FTCS) difference method.

[FD1D\_ADVECTION\_LAX](../../cpp_src/fd1d_advection_lax/fd1d_advection_lax.html),
a C++ program which applies the finite difference method to solve the
time-dependent advection equation ut = - c \* ux in one spatial
dimension, with a constant velocity, using the Lax method to treat the
time derivative.

[FD1D\_ADVECTION\_LAX\_WENDROFF](../../cpp_src/fd1d_advection_lax_wendroff/fd1d_advection_lax_wendroff.html),
a C++ program which applies the finite difference method to solve the
time-dependent advection equation ut = - c \* ux in one spatial
dimension, with a constant velocity, using the Lax-Wendroff method to
treat the time derivative.

### Reference: {#reference align="center"}

1.  Charles Hall, Thomas Porsching,\
    Numerical Analysis of Partial Differential Equations,\
    Prentice-Hall, 1990,\
    ISBN: 013626557X,\
    LC: QA374.H29.

### Source Code: {#source-code align="center"}

-   [fd1d\_advection\_diffusion\_steady.cpp](fd1d_advection_diffusion_steady.cpp),
    the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [fd1d\_advection\_diffusion\_steady\_output.txt](fd1d_advection_diffusion_steady_output.txt),
    the output file.
-   [fd1d\_advection\_diffusion\_steady\_commands.txt](fd1d_advection_diffusion_steady_commands.txt),
    Gnuplot commands.
-   [fd1d\_advection\_diffusion\_steady\_data.txt](fd1d_advection_diffusion_steady_data.txt),
    data for Gnuplot.
-   [fd1d\_advection\_diffusion\_steady.png](fd1d_advection_diffusion_steady.png),
    a PNG image of the solution.

### List of Routines: {#list-of-routines align="center"}

-   **FD1D\_ADVECTION\_DIFFUSION\_STEADY** solves steady advection
    diffusion equation.
-   **R8VEC\_LINSPACE\_NEW** creates a vector of linearly spaced values.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TRISOLVE** factors and solves a tridiagonal system.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 03 May 2014.*
