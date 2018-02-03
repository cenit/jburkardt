RK4\
Runge-Kutta 4th Order ODE Solver {#rk4-runge-kutta-4th-order-ode-solver align="center"}
================================

------------------------------------------------------------------------

**RK4** is a C++ library which implements a simple Runge-Kutta solver
for an initial value problem.

The rk4() function does not include any error estimator. It takes a
single step at a time, requiring the user to control the step size.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**RK4** is available in [a C version](../../c_src/rk4/rk4.html) and [a
C++ version](../../cpp_src/rk4/rk4.html) and [a FORTRAN77
version](../../f77_src/rk4/rk4.html) and [a FORTRAN90
version](../../f_src/rk4/rk4.html) and [a MATLAB
version](../../m_src/rk4/rk4.html) and [a Python
version](../../py_src/rk4/rk4.html).

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

[RKF45](../../cpp_src/rkf45/rkf45.html), a C++ library which implements
the Runge-Kutta-Fehlberg ODE solver.

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

### Source Code: {#source-code align="center"}

-   [rk4.cpp](rk4.cpp), the source code.
-   [rk4.hpp](rk4.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [rk4\_prb.cpp](rk4_prb.cpp), a sample calling program.
-   [rk4\_prb\_output.txt](rk4_prb_output.txt), the output file.
-   [rk4\_prb.png](rk4_prb.png), an image of the solution.

### List of Routines: {#list-of-routines align="center"}

-   **RK4** takes one Runge-Kutta step for a scalar ODE.
-   **RK4VEC** takes one Runge-Kutta step for a vector ODE.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 09 October 2013.*
