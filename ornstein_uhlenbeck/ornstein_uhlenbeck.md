ORNSTEIN\_UHLENBECK\
Approximate Solution of a Stochastic Differential Equation {#ornstein_uhlenbeck-approximate-solution-of-a-stochastic-differential-equation align="center"}
==========================================================

------------------------------------------------------------------------

**ORNSTEIN\_UHLENBECK** is a C++ library which approximates solutions of
the Ornstein-Uhlenbeck stochastic differential equation (SDE) using the
Euler method and the Euler-Maruyama method, and creating graphics files
for processing by gnuplot.

The Ornstein-Uhlenbeck stochastic differential equation has the form:

            dx(t) = theta * ( mu - x(t) ) dt + sigma dW,   
            x(0) = x0.
          

where

-   **theta** is a nonnegative decay rate;
-   **mu** is a mean value for x;
-   **sigma** measures the strength of the stochastic perturbation.

and the equation is to be integrated over the interval \[0,**tmax**\].

The starting value **x0** represents a deviation from the mean value
**mu**. The decay rate **theta** determines how fast **x(t)** will move
back towards its mean value. The coefficient **sigma** determines the
relative magnitude of stochastic perturbations.

In general, the solution starts at **x0** and over time moves towards
the value **mu**, but experiences random "wobbles" whose size is
determined by **sigma**. Increasing **theta** makes the solution move
towards the mean faster.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**ORNSTEIN\_UHLENBECK** is available in [a C
version](../../c_src/ornstein_uhlenbeck/ornstein_uhlenbeck.html) and [a
C++ version](../../cpp_src/ornstein_uhlenbeck/ornstein_uhlenbeck.html)
and [a FORTRAN77
version](../../f77_src/ornstein_uhlenbeck/ornstein_uhlenbeck.html) and
[a FORTRAN90
version](../../f_src/ornstein_uhlenbeck/ornstein_uhlenbeck.html) and [a
MATLAB version](../../m_src/ornstein_uhlenbeck/ornstein_uhlenbeck.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BLACK\_SCHOLES](../../cpp_src/black_scholes/black_scholes.html), a C++
library which implements some simple approaches to the Black-Scholes
option valuation theory, by Desmond Higham.

[BROWNIAN\_MOTION\_SIMULATION](../../cpp_src/brownian_motion_simulation/brownian_motion_simulation.html),
a C++ program which simulates Brownian motion in an M-dimensional
region.

[COLORED\_NOISE](../../cpp_src/colored_noise/colored_noise.html), a C++
library which generates samples of noise obeying a 1/f\^alpha power law.

[GNUPLOT](../../cpp_src/gnuplot/gnuplot.html), C++ programs which
illustrate how a program can write data and command files so that
gnuplot can create plots of the program results.

[PINK\_NOISE](../../cpp_src/pink_noise/pink_noise.html), a C++ library
which computes a "pink noise" signal obeying a 1/f power law.

[SDE](../../cpp_src/sde/sde.html), a C++ library which illustrates the
properties of stochastic differential equations (SDE's), and common
algorithms for their analysis, including the Euler method, the
Euler-Maruyama method, and the Milstein method, by Desmond Higham;

[STOCHASTIC\_RK](../../cpp_src/stochastic_rk/stochastic_rk.html), a C++
library which applies a Runge Kutta (RK) scheme to a stochastic
differential equation.

### Reference: {#reference align="center"}

1.  Desmond Higham,\
    An Algorithmic Introduction to Numerical Simulation of Stochastic
    Differential Equations,\
    SIAM Review,\
    Volume 43, Number 3, September 2001, pages 525-546.

### Source Code: {#source-code align="center"}

-   [ou.cpp](ou.cpp), the source code.
-   [ou.hpp](ou.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [ou\_prb.cpp](ou_prb.cpp), a sample calling program.
-   [ou\_prb\_output.txt](ou_prb_output.txt), the output file.

**OU\_EULER** is data created by the OU\_EULER routine:

-   [ou\_euler\_data.txt](ou_euler_data.txt), solution data.
-   [ou\_euler\_commands.txt](ou_euler_commands.txt), gnuplot commands
    to plot the data
-   [ou\_euler.png](ou_euler.png), a PNG image of the data.

**OU\_EULER\_MARUYAMA** is data created by the OU\_EULER\_MARUYAMA
routine:

-   [ou\_euler\_maruyama\_data.txt](ou_euler_maruyama_data.txt),
    solution data.
-   [ou\_euler\_maruyama\_commands.txt](ou_euler_maruyama_commands.txt),
    gnuplot commands to plot the data
-   [ou\_euler\_maruyama.png](ou_euler_maruyama.png), a PNG image of the
    data.

### List of Routines: {#list-of-routines align="center"}

-   **OU\_EULER** applies the Euler method to the Ornstein-Uhlenbeck
    SDE.
-   **OU\_EULER\_MARUYAMA** applies Euler-Maruyama to the
    Ornstein-Uhlenbeck SDE.
-   **R8\_UNIFORM\_01** returns a unit pseudorandom R8.
-   **R8VEC\_LINSPACE** creates a vector of linearly spaced values.
-   **R8VEC\_NORMAL\_01** returns a unit pseudonormal R8VEC.
-   **R8VEC\_UNIFORM\_01** returns a unit pseudorandom R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 21 January 2013.*
