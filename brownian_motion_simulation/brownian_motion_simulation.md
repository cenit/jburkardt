BROWNIAN\_MOTION\_SIMULATION\
Simulation of Brownian Motion in M Dimensions {#brownian_motion_simulation-simulation-of-brownian-motion-in-m-dimensions align="center"}
=============================================

------------------------------------------------------------------------

**BROWNIAN\_MOTION\_SIMULATION** is a C++ library which simulates
Brownian motion in an M-dimensional region, creating graphics files for
processing by gnuplot.

Brownian motion is a physical phenomenon which can be observed, for
instance, when a small particle is immersed in a liquid. The particle
will move as though under the influence of random forces of varying
direction and magnitude.

There is a mathematical idealization of this motion, and from there a
computational discretization that allows us to simulate the successive
positions of a particle undergoing Brownian motion.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**BROWNIAN\_MOTION\_SIMULATON** is available in [a C
version](../../c_src/brownian_motion_simulation/brownian_motion_simulation.md)
and [a C++
version](../../master/brownian_motion_simulation/brownian_motion_simulation.md)
and [a FORTRAN77
version](../../f77_src/brownian_motion_simulation/brownian_motion_simulation.md)
and [a FORTRAN90
version](../../f_src/brownian_motion_simulation/brownian_motion_simulation.md)
and [a MATLAB
version.](../../m_src/brownian_motion_simulation/brownian_motion_simulation.md)

### Related Data and Programs: {#related-data-and-programs align="center"}

[CORRELATION](../../master/correlation/correlation.md), a C++ library
which contains examples of statistical correlation functions.

[DUEL\_SIMULATION](../../master/duel_simulation/duel_simulation.md),
a C++ program which simulates N repetitions of a duel between two
players, each of whom has a known firing accuracy.

[FAIR\_DICE\_SIMULATION](../../master/fair_dice_simulation/fair_dice_simulation.md),
a C++ program which simulates N tosses of 2 dice, making a histogram of
the results.

[GNUPLOT](../../master/gnuplot/gnuplot.md), C++ programs which
illustrate how a program can write data and command files so that
gnuplot can create plots of the program results.

[HIGH\_CARD\_SIMULATION](../../master/high_card_simulation/high_card_simulation.md),
a C++ program which simulates a situation in which you see the cards in
a deck one by one, and must select the one you think is the highest and
stop; the program uses GNUPLOT for graphics.

[ISING\_2D\_SIMULATION](../../master/ising_2d_simulation/ising_2d_simulation.md),
a C++ program which carries out a Monte Carlo simulation of an Ising
model. a 2D array of positive and negative charges, each of which is
likely to flip to be in agreement with neighbors.

[ORNSTEIN\_UHLENBECK](../../master/ornstein_uhlenbeck/ornstein_uhlenbeck.md),
a C++ library which approximates solutions of the Ornstein-Uhlenbeck
stochastic differential equation (SDE) using the Euler method and the
Euler-Maruyama method.

[POISSON\_SIMULATION](../../master/poisson_simulation/poisson_simulation.md),
a C++ library which simulates a Poisson process in which events randomly
occur with an average waiting time of Lambda.

[REACTOR\_SIMULATION](../../master/reactor_simulation/reactor_simulation.md),
a C++ program which a simple Monte Carlo simulation of the shielding
effect of a slab of a certain thickness in front of a neutron source.
This program was provided as an example with the book "Numerical Methods
and Software."

[THREE\_BODY\_SIMULATION](../../master/three_body_simulation/three_body_simulation.md),
a C++ program which simulates the behavior of three planets, constrained
to lie in a plane, and moving under the influence of gravity, by Walter
Gander and Jiri Hrebicek.

### Source Code: {#source-code align="center"}

-   [brownian\_motion\_simulation.cpp](brownian_motion_simulation.cpp),
    the source code.
-   [brownian\_motion\_simulation.hpp](brownian_motion_simulation.hpp),
    the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [brownian\_motion\_simulation\_prb.cpp](brownian_motion_simulation_prb.cpp),
    a sample calling program.
-   [brownian\_motion\_simulation\_prb\_output.txt](brownian_motion_simulation_prb_output.txt),
    the output file.

Some data files and plots are made by the test program.

-   [motion\_1d\_data.txt](motion_1d_data.txt), data for a Brownian
    motion trajectory in 1D.
-   [motion\_1d\_commands.txt](motion_1d_commands.txt), gnuplot commands
    to plot data for a Brownian motion trajectory in 1D.
-   [motion\_1d.png](motion_1d.png), a plot of a Brownian motion
    trajectory in 1D, with time as second dimension.
-   [motion\_2d\_data.txt](motion_2d_data.txt), data for a Brownian
    motion trajectory in 2D.
-   [motion\_2d\_commands.txt](motion_2d_commands.txt), gnuplot commands
    to plot data for a Brownian motion trajectory in 2D.
-   [motion\_2d.png](motion_2d.png), a plot of a Brownian motion
    trajectory in 2D.
-   [displacement\_1d\_data.txt](displacement_1d_data.txt), data for
    Brownian displacements in 1D.
-   [displacement\_1d\_commands.txt](displacement_1d_commands.txt),
    gnuplot commands to plot Brownian displacements in 1D.
-   [displacement\_1d.png](displacement_1d.png), a plot of squared
    displacements, averaged over several 1D Brownian motions.
-   [displacement\_2d\_data.txt](displacement_2d_data.txt), data for
    Brownian displacements in 2D.
-   [displacement\_2d\_commands.txt](displacement_2d_commands.txt),
    gnuplot commands to plot Brownian displacements in 2D.
-   [displacement\_2d.png](displacement_2d.png), a plot of squared
    displacements, averaged over several 2D Brownian motions.
-   [displacement\_3d\_data.txt](displacement_3d_data.txt), data for
    Brownian displacements in 3D.
-   [displacement\_3d\_commands.txt](displacement_3d_commands.txt),
    gnuplot commands to plot Brownian displacements in 3D.
-   [displacement\_3d.png](displacement_3d.png), a plot of squared
    displacements, averaged over several 3D Brownian motions.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 02 October 2012.*
