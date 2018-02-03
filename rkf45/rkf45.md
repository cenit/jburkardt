RKF45\
Runge-Kutta-Fehlberg ODE Solver {#rkf45-runge-kutta-fehlberg-ode-solver align="center"}
===============================

------------------------------------------------------------------------

**RKF45** is a C++ library which implements the Watt and Shampine RKF45
ODE solver.

The RKF45 ODE solver is a Runge-Kutta-Fehlberg algorithm for solving an
ordinary differential equation, with automatic error estimation using
rules of order 4 and 5.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**RKF45** is available in [a C version](../../c_src/rkf45/rkf45.html)
and [a C++ version](../../cpp_src/rkf45/rkf45.html) and [a FORTRAN77
version](../../f77_src/rkf45/rkf45.html) and [a FORTRAN90
version](../../f_src/rkf45/rkf45.html) and [a MATLAB
version](../../m_src/rkf45/rkf45.html) and [a PYTHON
version](../../py_src/rkf45/rkf45.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[GSL](../../cpp_src/gsl/gsl.html), a C++ library which includes routines
for solving differential equations.

[NMS](../../f_src/nms/nms.html), a FORTRAN90 library which includes the
DDRIV package of ODE solvers.

[ODE](../../cpp_src/ode/ode.html), a C++ library which solves a system
of ordinary differential equations, by Shampine and Gordon.

[ODEPACK](../../f77_src/odepack/odepack.html), a FORTRAN77 library which
contains nine ODE solvers, including LSODE, LSODES, LSODA, LSODAR,
LSODPK, LSODKR, LSODI, LSOIBT, and LSODIS, by Alan Hindmarsh.

[RK4](../../cpp_src/rk4/rk4.html), a C++ library which applies the
fourth order Runge-Kutta algorithm to estimate the solution of an
ordinary differential equation at the next time step.

[TEST\_ODE](../../f_src/test_ode/test_ode.html), a FORTRAN90 library
which contains routines which define some test problems for ODE solvers.

### Reference: {#reference align="center"}

1.  Erwin Fehlberg,\
    Low-order Classical Runge-Kutta Formulas with Stepsize Control,\
    NASA Technical Report R-315, 1969.
2.  Lawrence Shampine, Herman Watts, S Davenport,\
    Solving Non-stiff Ordinary Differential Equations - The State of the
    Art,\
    SIAM Review,\
    Volume 18, pages 376-411, 1976.
3.  The source code for Shampine and Watt's original FORTRAN77 routine
    is available at <http://www.netlib.org/ode/> the NETLIB ODE web
    site.

### Source Code: {#source-code align="center"}

-   [rkf45.cpp](rkf45.cpp), the source code;
-   [rkf45.hpp](rkf45.hpp), the include file;

### Examples and Tests: {#examples-and-tests align="center"}

**RKF45\_PRB** includes a number of examples of how to use RKF45.

-   [rkf45\_prb.cpp](rkf45_prb.cpp), a sample calling program;
-   [rkf45\_prb\_output.txt](rkf45_prb_output.txt), the output file;

**RKF45\_PRB2** includes an example in which the ODE includes parameters
ALPHA, BETA, and GAMMA, which the user wants to set at run time. The
example shows one way in which these values can be shared with the
derivative routine.

-   [rkf45\_prb2.cpp](rkf45_prb2.cpp), a sample calling program;
-   [rkf45\_prb2\_output.txt](rkf45_prb2_output.txt), the output file;

### List of Routines: {#list-of-routines align="center"}

-   **R4\_ABS** returns the absolute value of an R4.
-   **R4\_EPSILON** returns the round off unit for floating arithmetic.
-   **R4\_FEHL** takes one Fehlberg fourth-fifth order step.
-   **R4\_MAX** returns the maximum of two real values.
-   **R4\_MIN** returns the minimum of two real values.
-   **R4\_RKF45** carries out the Runge-Kutta-Fehlberg method.
-   **R4\_SIGN** returns the sign of a real number.
-   **R8\_ABS** returns the absolute value of a double precision number.
-   **R8\_EPSILON** returns the R8 round off unit.
-   **R8\_FEHL** takes one Fehlberg fourth-fifth order step.
-   **R8\_MAX** returns the maximum of two R8s.
-   **R8\_MIN** returns the minimum of two R8s.
-   **R8\_RKF45** carries out the Runge-Kutta-Fehlberg method.
-   **R8\_SIGN** returns the sign of a real number.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 20 November 2007.*
