SDE\
Stochastic Differential Equations {#sde-stochastic-differential-equations align="center"}
=================================

------------------------------------------------------------------------

**SDE** is a C++ library which illustrates the properties of stochastic
differential equations and some algorithms for handling them, making
graphics files for processing and display by gnuplot, by Desmond Higham.

The library requires access to the QR\_SOLVE library as well.

The original version of these routines is available at
["http://www.maths.strath.ac.uk/\~aas96106/algfiles.html".](http://www.maths.strath.ac.uk/~aas96106/algfiles.html)

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SDE** is available in [a C version](../../c_src/sde/sde.html) and [a
C++ version](../../cpp_src/sde/sde.html) and [a FORTRAN77
version](../../f77_src/sde/sde.html) and [a FORTRAN90
version](../../f_src/sde/sde.html) and [a MATLAB
version](../../m_src/sde/sde.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BLACK\_SCHOLES](../../cpp_src/black_scholes/black_scholes.html), a C++
library which implements some simple approaches to the Black-Scholes
option valuation theory, by Desmond Higham.

[BROWNIAN\_MOTION\_SIMULATION](../../m_src/brownian_motion_simulation/brownian_motion_simulation.html),
a MATLAB program which simulates Brownian motion in an M-dimensional
region.

[CNOISE](../../c_src/cnoise/cnoise.html), a C library which generates
samples of noise obeying a 1/f\^alpha power law, by Miroslav Stoyanov.

[COLORED\_NOISE](../../cpp_src/colored_noise/colored_noise.html), a C++
library which generates samples of noise obeying a 1/f\^alpha power law.

[CORRELATION](../../cpp_src/correlation/correlation.html), a C++ library
which contains examples of statistical correlation functions.

[GNUPLOT](../../cpp_src/gnuplot/gnuplot.html), C++ programs which
illustrate how a program can write data and command files so that
gnuplot can create plots of the program results.

[ORNSTEIN\_UHLENBECK](../../cpp_src/ornstein_uhlenbeck/ornstein_uhlenbeck.html),
a C++ library which approximates solutions of the Ornstein-Uhlenbeck
stochastic differential equation (SDE) using the Euler method and the
Euler-Maruyama method.

[PCE\_BURGERS](../../cpp_src/pce_burgers/pce_burgers.html), a C++
program which defines and solves a version of the time-dependent viscous
Burgers equation, with uncertain viscosity, using a polynomial chaos
expansion in terms of Hermite polynomials, by Gianluca Iaccarino.

[PCE\_ODE\_HERMITE](../../cpp_src/pce_ode_hermite/pce_ode_hermite.html),
a C++ program which sets up a simple scalar ODE for exponential decay
with an uncertain decay rate, using a polynomial chaos expansion in
terms of Hermite polynomials.

[PINK\_NOISE](../../cpp_src/pink_noise/pink_noise.html), a C++ library
which computes a "pink noise" signal obeying a 1/f power law.

[QR\_SOLVE](../../cpp_src/qr_solve/qr_solve.html), a C++ library which
computes the least squares solution of a linear system A\*x=b.

[STOCHASTIC\_DIFFUSION](../../cpp_src/stochastic_diffusion/stochastic_diffusion.html),
a C++ library which implements several versions of a stochastic
diffusivity coefficient.

[STOCHASTIC\_GRADIENT\_ND\_NOISE](../../m_src/stochastic_gradient_nd_noise/stochastic_gradient_nd_noise.html),
a MATLAB program which solves an optimization problem involving a
functional over a system with stochastic noise.

[STOCHASTIC\_RK](../../cpp_src/stochastic_rk/stochastic_rk.html), a C++
library which applies a Runge Kutta (RK) scheme to a stochastic
differential equation.

### Author: {#author align="center"}

Original MATLAB version by Desmond Higham. C++ version by John Burkardt.

### Reference: {#reference align="center"}

1.  Desmond Higham,\
    An Algorithmic Introduction to Numerical Simulation of Stochastic
    Differential Equations,\
    SIAM Review,\
    Volume 43, Number 3, September 2001, pages 525-546.

### Source Code: {#source-code align="center"}

-   [sde.cpp](sde.cpp), the source code.
-   [sde.hpp](sde.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [sde\_prb.cpp](sde_prb.cpp), a sample calling program.
-   [sde\_prb\_output.txt](sde_prb_output.txt), the output file.

The calling program creates various data and command files which can be
used with GNUPLOT to create images.

-   [bpath\_commands.txt](bpath_commands.txt), commands to plot the data
    from BPATH.
-   [bpath\_data.txt](bpath_data.txt), data from BPATH.
-   [bpath.png](bpath.png), a plot of the BPATH data.
-   [bpath\_average\_commands.txt](bpath_average_commands.txt), commands
    to plot the data from BPATH\_AVERAGE.
-   [bpath\_average\_data.txt](bpath_average_data.txt), data from
    BPATH\_AVERAGE.
-   [bpath\_average.png](bpath_average.png), a plot of the
    BPATH\_AVERAGE data.
-   [chain\_commands.txt](chain_commands.txt), commands to plot the data
    from CHAIN.
-   [chain\_data.txt](chain_data.txt), data from CHAIN.
-   [chain.png](chain.png), a plot of the CHAIN data.
-   [em\_commands.txt](em_commands.txt), commands to plot the data from
    EM.
-   [em1\_data.txt](em1_data.txt), data from EM.
-   [em2\_data.txt](em2_data.txt), data from EM.
-   [em.png](em.png), a plot of the EM data.
-   [emstrong\_commands.txt](emstrong_commands.txt), commands to plot
    the data from EMSTRONG.
-   [emstrong\_data.txt](emstrong_data.txt), data from EMSTRONG.
-   [emstrong.png](emstrong.png), a plot of the EMSTRONG data.
-   [emweak0\_commands.txt](emweak0_commands.txt), commands to plot the
    data from EMWEAK with the standard EM method.
-   [emweak0\_data.txt](emweak0_data.txt), data from EMWEAK with the
    standard EM method.
-   [emweak0.png](emweak0.png), a plot of the data from EMWEAK with the
    standard EM method.
-   [emweak1\_commands.txt](emweak1_commands.txt), commands to plot the
    data from EMWEAK with the weak EM method.
-   [emweak1\_data.txt](emweak1_data.txt), data from EMWEAK with the
    weak EM method.
-   [emweak1.png](emweak1.png), a plot of the data from EMWEAK with the
    weak EM method.
-   [milstrong\_commands.txt](milstrong_commands.txt), commands to plot
    the MILSTRONG data.
-   [milstrong\_data.txt](milstrong_data.txt), data from MILSTRONG.
-   [milstrong.png](milstrong.png), a plot of the strong convergence
    data from MILSTRONG.
-   [stab\_asymptotic\_commands.txt](stab_asymptotic_commands.txt),
    commands to plot the STAB\_ASYMPTOTIC data.
-   [stab\_asymptotic\_data1.txt](stab_asymptotic_data1.txt), data from
    STAB\_ASYMPTOTIC.
-   [stab\_asymptotic\_data2.txt](stab_asymptotic_data2.txt), data from
    STAB\_ASYMPTOTIC.
-   [stab\_asymptotic\_data3.txt](stab_asymptotic_data3.txt), data from
    STAB\_ASYMPTOTIC.
-   [stab\_asymptotic.png](stab_asymptotic.png), a plot of the
    asymptotic stability results from STAB\_ASYMPTOTIC.
-   [stab\_meansquare\_commands.txt](stab_meansquare_commands.txt),
    commands to plot the STAB\_MEANSQUARE data.
-   [stab\_meansquare\_data1.txt](stab_meansquare_data1.txt), data from
    STAB\_MEANSQUARE.
-   [stab\_meansquare\_data2.txt](stab_meansquare_data2.txt), data from
    STAB\_MEANSQUARE.
-   [stab\_meansquare\_data3.txt](stab_meansquare_data3.txt), data from
    STAB\_MEANSQUARE.
-   [stab\_meansquare.png](stab_meansquare.png), a plot of the
    meansquare stability results from STAB\_MEANSQUARE.

### List of Routines: {#list-of-routines align="center"}

-   **BPATH** performs a Brownian path simulation.
-   **BPATH\_AVERAGE:** displays the average of 1000 Brownian paths.
-   **BPATH\_AVERAGE\_GNUPLOT** writes a GNUPLOT input file to plot
    BPATH\_AVERAGE data.
-   **BPATH\_GNUPLOT** writes a GNUPLOT input file to plot BPATH data.
-   **CHAIN** tests the stochastic Chain Rule.
-   **CHAIN\_GNUPLOT** writes a GNUPLOT input file to plot CHAIN data.
-   **EM** applies the Euler-Maruyama method to a linear SDE.
-   **EM\_GNUPLOT** writes a GNUPLOT input file to plot EM data.
-   **EMSTRONG** tests the strong convergence of the EM method.
-   **EMSTRONG\_GNUPLOT** writes a GNUPLOT input file to plot EMSTRONG
    data.
-   **EMWEAK** tests the weak convergence of the Euler-Maruyama method.
-   **EMWEAK\_GNUPLOT** writes a GNUPLOT input file to plot EMWEAK data.
-   **FILENAME\_INC** increments a partially numeric filename.
-   **GET\_UNIT** returns a free FORTRAN unit number.
-   **MILSTRONG** tests the strong convergence of the Milstein method.
-   **MILSTRONG\_GNUPLOT** writes a GNUPLOT input file to plot MILSTRONG
    data.
-   **R8\_NORMAL\_01** returns a unit pseudonormal R8.
-   **R8\_SIGN** returns the sign of an R8.
-   **R8\_UNIFORM\_01** returns a unit pseudorandom R8.
-   **R8MAT\_NORMAL\_01** returns a unit pseudonormal R8MAT.
-   **R8VEC\_MEAN** returns the mean of an R8VEC.
-   **R8VEC\_NORMAL\_01** returns a unit pseudonormal R8VEC.
-   **R8VEC\_UNIFORM\_01** returns a unit pseudorandom R8VEC.
-   **STAB\_ASYMPTOTIC** examines asymptotic stability.
-   **STAB\_MEANSQUARE** examines mean-square stability.
-   **STOCHASTIC\_INTEGRAL\_ITO** approximates the Ito integral of W(t)
    dW.
-   **STOCHASTIC\_INTEGRAL\_STRAT** approximates the Stratonovich
    integral of W(t) dW.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 28 September 2012.*
