FD1D\_BURGERS\_LAX\
Finite Difference Non-viscous Burgers Equation\
Lax-Wendroff Method {#fd1d_burgers_lax-finite-difference-non-viscous-burgers-equation-lax-wendroff-method align="center"}
===============================================

------------------------------------------------------------------------

**FD1D\_BURGERS\_LAX** is a C++ program which solves the nonviscous
time-dependent Burgers equation using finite differences and the
Lax-Wendroff method.

The function u(x,t) is to be solved for in the equation:

> du/dt + u \* du/dx = 0

for a &lt;= x &lt;= b and t\_init &lt;= t &lt;= t\_last.

Problem data includes an initial condition for u(x,t\_init), and the
boundary value functions u(a,t) and u(b,t).

The non-viscous Burgers equation can develop shock waves or
discontinuities.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FD1D\_BURGERS\_LAX** is available in [a C
version](../../c_src/fd1d_burgers_lax/fd1d_burgers_lax.html) and [a C++
version](../../cpp_src/fd1d_burgers_lax/fd1d_burgers_lax.html) and [a
FORTRAN77 version](../../f77_src/fd1d_burgers_lax/fd1d_burgers_lax.html)
and [a FORTRAN90
version](../../f_src/fd1d_burgers_lax/fd1d_burgers_lax.html) and [a
MATLAB version](../../m_src/fd1d_burgers_lax/fd1d_burgers_lax.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BURGERS](../../datasets/burgers/burgers.html), a dataset directory
which contains some solutions to the viscous Burgers equation.

[BURGERS\_SOLUTION](../../cpp_src/burgers_solution/burgers_solution.html),
a C++ library which evaluates an exact solution of the time-dependent 1D
viscous Burgers equation.

[FD1D\_ADVECTION\_LAX](../../cpp_src/fd1d_advection_lax/fd1d_advection_lax.html),
a C++ program which applies the finite difference method to solve the
time-dependent advection equation ut = - c \* ux in one spatial
dimension, with a constant velocity, using the Lax method to treat the
time derivative.

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

[FD1D\_WAVE](../../cpp_src/fd1d_wave/fd1d_wave.html), a C++ program
which applies the finite difference method to solve the time-dependent
wave equation utt = c \* uxx in one spatial dimension.

### Reference: {#reference align="center"}

1.  Daniel Zwillinger,\
    Handbook of Differential Equations,\
    Academic Press, 1997,\
    ISBN: 0127843965,\
    LC: QA371.Z88.

### Source Code: {#source-code align="center"}

-   [fd1d\_burgers\_lax.cpp](fd1d_burgers_lax.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [fd1d\_burgers\_lax\_output.txt](fd1d_burgers_lax_output.txt), the
    output file.

### List of Routines: {#list-of-routines align="center"}

-   **FD1D\_BURGERS\_LAX** solves the nonviscous Burgers equation using
    the Lax-Wendroff method.
-   **R8VEC\_EVEN** returns an R8VEC of evenly spaced values.
-   **REPORT** prints or plots or saves the data at the current time
    step.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **U\_A** sets the boundary condition for U at A.
-   **U\_B** sets the boundary condition for U at B.
-   **U\_INIT** sets the initial condition for U.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 22 August 2010.*
