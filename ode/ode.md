ODE\
Shampine and Gordon ODE Solver {#ode-shampine-and-gordon-ode-solver align="center"}
==============================

------------------------------------------------------------------------

**ODE** is a C++ library which solves a system of ordinary differential
equations, by Shampine and Gordon.

Given a system of ordinary differential equations of the form

            Y' = F(T,Y)
            Y(T0) = Y0
          

this program produces a sequence of approximate solution values Y(TOUT)
at later times TOUT.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**ODE** is available in [a C version](../../c_src/ode/ode.md) and [a
C++ version](../../master/ode/ode.md) and [a FORTRAN77
version](../../f77_src/ode/ode.md) and [a FORTRAN90
version.](../../f_src/ode/ode.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[NMS](../../f_src/nms/nms.md), a FORTRAN90 library which includes the
ddriv package of ODE solvers.

[ODEPACK](../../f77_src/odepack/odepack.md), a FORTRAN77 library which
contains nine ODE solvers, including LSODE, LSODES, LSODA, LSODAR,
LSODPK, LSODKR, LSODI, LSOIBT, and LSODIS, by Alan Hindmarsh.

[RK4](../../master/rk4/rk4.md), a C++ library which applies the
fourth order Runge-Kutta algorithm to estimate the solution of an
ordinary differential equation at the next time step.

[RKF45](../../master/rkf45/rkf45.md), a C++ library which implements
the Runge-Kutta-Fehlberg ODE solver.

[TEST\_ODE](../../f_src/test_ode/test_ode.md), a FORTRAN90 library
which defines test problems for ODE solvers.

### Author: {#author align="center"}

Lawrence Shampine, Marilyn Gordon.

### Reference: {#reference align="center"}

1.  Lawrence Shampine, Marilyn Gordon,\
    Computer Solution of Ordinary Differential Equations: The Initial
    Value Problem,\
    Freeman, 1975,\
    ISBN: 0716704617,\
    LC: QA372.S416.

### Source Code: {#source-code align="center"}

-   [ode.cpp](ode.cpp), the source code.
-   [ode.hpp](ode.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [ode\_prb.cpp](ode_prb.cpp), a sample calling program.
-   [ode\_prb\_output.txt](ode_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **DE** carries out the ODE solution algorithm.
-   **I4\_SIGN** returns the sign of an I4.
-   **INTRP** approximates the solution at XOUT by polynomial
    interpolation.
-   **ODE** is the user interface to an ordinary differential equation
    solver.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_ADD** adds two R8's.
-   **R8\_EPSILON** returns the R8 roundoff unit.
-   **R8\_MAX** returns the maximum of two R8's.
-   **R8\_MIN** returns the minimum of two R8's.
-   **R8\_SIGN** returns the sign of an R8.
-   **STEP** integrates the system of ODEs one step, from X to X+H.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 16 January 2012.*
