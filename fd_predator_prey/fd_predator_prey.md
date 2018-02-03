FD\_PREDATOR\_PREY\
Finite Difference Solution of a Predator Prey ODE System {#fd_predator_prey-finite-difference-solution-of-a-predator-prey-ode-system align="center"}
========================================================

------------------------------------------------------------------------

**FD\_PREDATOR\_PREY** is a C++ program which applies the finite
difference method to estimate solutions of a pair of ordinary
differential equations that model the behavior of a pair of predator and
prey populations.

The physical system under consideration is a pair of animal populations.

The PREY reproduce rapidly; for each animal alive at the beginning of
the year, two more will be born by the end of the year. The prey do not
have a natural death rate; instead, they only die by being eaten by the
predator. Every prey animal has 1 chance in 1000 of being eaten in a
given year by a given predator.

The PREDATORS only die of starvation, but this happens very quickly. If
unfed, a predator will tend to starve in about 1/10 of a year. On the
other hand, the predator reproduction rate is dependent on eating prey,
and the chances of this depend on the number of available prey.

The resulting differential equations can be written:

            PREY(0) = 5000
            PRED(0) =  100

            d PREY / dT =    2 * PREY(T) - 0.001 * PREY(T) * PRED(T)
            d PRED / dT = - 10 * PRED(T) + 0.002 * PREY(T) * PRED(T)
          

Here, the initial values (5000,100) are a somewhat arbitrary starting
point.

The pair of ordinary differential equations that result have an
interesting behavior. For certain choices of the interaction
coefficients (such as those given here), the populations of predator and
prey will tend to a periodic oscillation. The two populations will be
out of phase; the number of prey will rise, then after a delay, the
predators will rise as the prey begins to fall, causing the predator
population to crash again.

In this program, the pair of ODE's is solved with a simple finite
difference approximation using a fixed step size. In general, this is
NOT an efficient or reliable way of solving differential equations.
However, this program is intended to illustrate the ideas of finite
difference approximation.

In particular, if we choose a fixed time step size DT, then a derivative
such as dPREY/dT is approximated by:

            d PREY / dT = approximately ( PREY(T+DT) - PREY(T) ) / DT
          

which means that the first differential equation can be written as

            PREY(T+DT) = PREY(T) + DT * ( 2 * PREY(T) - 0.001 * PREY(T) * PRED(T) ).
          

We can rewrite the equation for PRED as well. Then, since we know the
values of PRED and PREY at time 0, we can use these finite difference
equations to estimate the values of PRED and PREY at time DT. These
values can be used to get estimates at time 2\*DT, and so on. To get
from time T\_START = 0 to time T\_STOP = 5, we simply take STEP\_NUM
steps each of size

            DT = ( T_STOP - T_START ) / STEP_NUM
          

Because finite differences are only an approximation to derivatives,
this process only produces estimates of the solution. And these
estimates tend to become more inaccurate for large values of time.
Usually, we can reduce this error by decreasing DT and taking more,
smaller time steps.

In this example, for instance, taking just 100 steps gives nonsensical
answers. Using STEP\_NUM = 1000 gives an approximate solution that seems
to have the right kind of oscillatory behavior, except that the
amplitude of the waves increases with each repetition. Using 10000
steps, the approximation begins to become accurate enough that we can
see that the waves seem to have a fixed period and amplitude.

### Usage: {#usage align="center"}

> **fd\_predator\_prey** *step\_num*

where

-   *step\_num* is the number of time steps to take.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FD\_PREDATOR\_PREY** is available in [a C
version](../../c_src/fd_predator_prey/fd_predator_prey.html) and [a C++
version](../../cpp_src/fd_predator_prey/fd_predator_prey.html) and [a
FORTRAN77 version](../../f77_src/fd_predator_prey/fd_predator_prey.html)
and [a FORTRAN90
version](../../f_src/fd_predator_prey/fd_predator_prey.html) and [a
MATLAB version](../../m_src/fd_predator_prey/fd_predator_prey.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FD1D\_HEAT\_EXPLICIT](../../cpp_src/fd1d_heat_explicit/fd1d_heat_explicit.html),
a C++ program which uses the finite difference method and explicit time
stepping to solve the time dependent heat equation in 1D.

[FD1D\_PREDATOR\_PREY](../../m_src/fd1d_predator_prey/fd1d_predator_prey.html),
a MATLAB program which implements a finite difference algorithm for
predator-prey system with spatial variation in 1D.

[FD2D\_PREDATOR\_PREY](../../f_src/fd2d_predator_prey/fd2d_predator_prey.html),
a FORTRAN90 program which implements a finite difference algorithm for a
predator-prey system with spatial variation in 2D.

[FEM1D](../../cpp_src/fem1d/fem1d.html), a C++ program which applies the
finite element method to a 1D linear two point boundary value problem.

### Reference: {#reference align="center"}

1.  George Lindfield, John Penny,\
    Numerical Methods Using MATLAB,\
    Second Edition,\
    Prentice Hall, 1999,\
    ISBN: 0-13-012641-1,\
    LC: QA297.P45.

### Source Code: {#source-code align="center"}

-   [fd\_predator\_prey.cpp](fd_predator_prey.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

The program writes out a file of the solution data. The data can be
plotted by MATLAB, for instance, using commands like this:

            trf = load ( 'trf_10000.txt' );
            plot ( trf(:,1), trf(:,2), 'g-', trf(:,1), trf(:,3), 'r-' )

            title ( 'A Predator Prey System' );
            xlabel ( 'Time' );
            ylabel ( 'Population' );
          

**TRF\_100** uses 100 timesteps, which are not enough.

-   [trf\_100.txt](trf_100.txt), the data.
-   [trf\_100.png](trf_100.png), a plot.

**TRF\_1000** uses 1000 timesteps; the solution does not explode, and
seems to show periodicity, except that it is clearly growing.

-   [trf\_1000.txt](trf_1000.txt), a table of the prey and predator
    values using 1000 steps.
-   [trf\_1000.png](trf_1000.png), a plot.

**TRF\_10000** uses 10000 timesteps. The cyclic nature of the solution
is clear.

-   [trf\_10000.txt](trf_10000.txt), a table of the prey and predator
    values using 10000 steps.
-   [trf\_10000.png](trf_10000.png), a plot.

### List of Routines: {#list-of-routines align="center"}

-   **FD\_PREDATOR\_PREY** solves a pair of predator-prey ODE's.
-   **R8MAT\_WRITE** writes information to a file.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 28 June 2012.*
