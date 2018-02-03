FD1D\_BURGERS\_LEAP\
Finite Difference Non-viscous Burgers Equation, Leapfrog Method {#fd1d_burgers_leap-finite-difference-non-viscous-burgers-equation-leapfrog-method align="center"}
===============================================================

------------------------------------------------------------------------

**FD1D\_BURGERS\_LEAP** is a C++ program which solves the nonviscous
time-dependent Burgers equation using finite differences and the
leapfrog method.

The function u(x,t) is to be solved for in the equation:

> du/dt + u \* du/dx = 0

for a &lt;= x &lt;= b and t\_init &lt;= t &lt;= t\_last.

Problem data includes an initial condition for u(x,t\_init), and the
boundary value functions u(a,t) and u(b,t).

The non-viscous Burgers equation can develop shock waves or
discontinuities.

### Usage: {#usage align="center"}

> **fd1d\_burgers\_leap**

runs the program.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FD1D\_BURGERS\_LEAP** is available in [a C
version](../../c_src/fd1d_burgers_leap/fd1d_burgers_leap.md) and [a
C++ version](../../master/fd1d_burgers_leap/fd1d_burgers_leap.md) and
[a FORTRAN77
version](../../f77_src/fd1d_burgers_leap/fd1d_burgers_leap.md) and [a
FORTRAN90 version](../../f_src/fd1d_burgers_leap/fd1d_burgers_leap.md)
and [a MATLAB
version](../../m_src/fd1d_burgers_leap/fd1d_burgers_leap.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BURGERS](../../datasets/burgers/burgers.md), a dataset directory
which contains some solutions to the viscous Burgers equation.

[BURGERS\_SOLUTION](../../master/burgers_solution/burgers_solution.md),
a C++ library which evaluates an exact solution of the time-dependent 1D
viscous Burgers equation.

[FD1D\_BURGERS\_LAX](../../master/fd1d_burgers_lax/fd1d_burgers_lax.md),
a C++ program which applies the finite difference method and the
Lax-Wendroff method to solve the non-viscous time-dependent Burgers
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

[FD1D\_WAVE](../../master/fd1d_wave/fd1d_wave.md), a C++ program
which applies the finite difference method to solve the time-dependent
wave equation utt = c \* uxx in one spatial dimension.

### Reference: {#reference align="center"}

1.  Daniel Zwillinger,\
    Handbook of Differential Equations,\
    Academic Press, 1997,\
    ISBN: 0127843965,\
    LC: QA371.Z88.

### Source Code: {#source-code align="center"}

-   [fd1d\_burgers\_leap.cpp](fd1d_burgers_leap.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [fd1d\_burgers\_leap\_output.txt](fd1d_burgers_leap_output.txt), the
    output file.

### List of Routines: {#list-of-routines align="center"}

-   **FD1D\_BURGERS\_LEAP** solves the nonviscous Burgers equation using
    leapfrogging.
-   **R8VEC\_EVEN** returns an R8VEC of evenly spaced values.
-   **REPORT** prints or plots or saves the data at the current time
    step.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **U\_A** sets the boundary condition for U at A.
-   **U\_B** sets the boundary condition for U at B.
-   **U\_INIT** sets the initial condition for U.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 18 August 2010.*
