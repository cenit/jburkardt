ISING\_2D\_SIMULATION\
Monte Carlo 2D Ising Model {#ising_2d_simulation-monte-carlo-2d-ising-model align="center"}
==========================

------------------------------------------------------------------------

**ISING\_2D\_SIMULATION** is a C++ program which carries out a Monte
Carlo simulation of a 2D Ising model, using gnuplot to display the
initial and final configurations.

A 2D Ising model is defined on an MxN array of cells. Each cell can have
a "charge" or "spin" of +1 or -1. A neighborhood of a cell is defined to
be itself, and the four immediate neighbors to the north, south, east,
and west. A cell may change its charge; the likelihood of doing so
depends on whether the charge of the neighbors agrees with the charge of
the cell.

This program begins with a random assignment of charges to the cells. It
then computes the neighbor agreement at each cell. It then updates the
entire configuration in one step, using the neighbor agreement to
determine the likelihood of flipping.

Currently, the chance that a cell will "flip" is determined from a table
of probabilities based on the number of agreeing neighbors:

  ------- ------ ------ ------ ------ ------
  Agree   1      2      3      4      4
  Prob    0.98   0.85   0.50   0.15   0.02
  ------- ------ ------ ------ ------ ------

### Usage: {#usage align="center"}

> **ising\_2d\_simulation** *m* *n* *iterations* *thresh* *seed*

where

-   *m* and *n* are the number of rows and columns of cells. The default
    values are 10.
-   *iterations* is the number of iterations to take. The default value
    is 15.
-   *thresh* is a number between 0 and 1 that chooses the percentage of
    negative (red) charges. The default value is 0.5.
-   *seed* is a seed for the random number generator. The default value
    is 123456789.

Note that the user might also want to vary the transition probabilities.
This cannot currently be done on the command line, and requires editing
the program and recompiling it.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**ISING\_2D\_SIMULATION** is available in [a C
version](../../c_src/ising_2d_simulation/ising_2d_simulation.html) and
[a C++
version](../../cpp_src/ising_2d_simulation/ising_2d_simulation.html) and
[a FORTRAN77
version](../../f77_src/ising_2d_simulation/ising_2d_simulation.html) and
[a FORTRAN90
version](../../f_src/ising_2d_simulation/ising_2d_simulation.html) and
[a MATLAB
version](../../m_src/ising_2d_simulation/ising_2d_simulation.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BROWNIAN\_MOTION\_SIMULATION](../../cpp_src/brownian_motion_simulation/brownian_motion_simulation.html),
a C++ library which simulates Brownian motion in an M-dimensional
region.

[DUEL\_SIMULATION](../../cpp_src/duel_simulation/duel_simulation.html),
a C++ program which simulates N repetitions of a duel between two
players, each of whom has a known firing accuracy.

[FAIR\_DICE\_SIMULATION](../../cpp_src/fair_dice_simulation/fair_dice_simulation.html),
a C++ program which simulates N tosses of 2 dice, making a histogram of
the results.

[GNUPLOT](../../cpp_src/gnuplot/gnuplot.html), C++ programs which
illustrate how a program can write data and command files so that
gnuplot can create plots of the program results.

[HIGH\_CARD\_SIMULATION](../../cpp_src/high_card_simulation/high_card_simulation.html),
a C++ program which simulates a situation in which you see the cards in
a deck one by one, and must select the one you think is the highest and
stop; the program uses GNUPLOT for graphics.

[ISING\_2D\_SIMULATION](../../cpp_src/ising_2d_simulation/ising_2d_simulation.html),
a C++ program which carries out a Monte Carlo simulation of an Ising
model. a 2D array of positive and negative charges, each of which is
likely to "flip" to be in agreement with neighbors.

[LIFE\_OPENGL](../../cpp_src/life_opengl/life_opengl.html), a C++
program which uses OpenGL to display the evolution of John Conway's
"Game of Life".

[MANDELBROT](../../cpp_src/mandelbrot/mandelbrot.html), a C++ program
which generates an ASCII PPM image of the Mandelbrot set;

[POISSON\_SIMULATION](../../cpp_src/poisson_simulation/poisson_simulation.html),
a C++ library which simulates a Poisson process in which events randomly
occur with an average waiting time of Lambda.

[REACTOR\_SIMULATION](../../cpp_src/reactor_simulation/reactor_simulation.html),
a C++ program which a simple Monte Carlo simulation of the shielding
effect of a slab of a certain thickness in front of a neutron source.
This program was provided as an example with the book "Numerical Methods
and Software."

[THREE\_BODY\_SIMULATION](../../cpp_src/three_body_simulation/three_body_simulation.html),
a C++ program which simulates the behavior of three planets, constrained
to lie in a plane, and moving under the influence of gravity, by Walter
Gander and Jiri Hrebicek.

### Source Code: {#source-code align="center"}

-   [ising\_2d\_simulation.cpp](ising_2d_simulation.cpp), the source
    code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [ising\_2d\_output.txt](ising_2d_output.txt), the output file, using
    the default options.
-   [ising\_2d\_initial.txt](ising_2d_initial.txt), GNUPLOT commands to
    plot the initial configuration.
-   [ising\_2d\_initial.png](ising_2d_initial.png), a plot of the
    initial configuration.
-   [ising\_2d\_final.txt](ising_2d_final.txt), GNUPLOT commands to plot
    the final configuration.
-   [ising\_2d\_final.png](ising_2d_final.png), a plot of the final
    configuration.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for ISING\_2D\_SIMULATION.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the smaller of two I4's.
-   **I4\_MODP** returns the nonnegative remainder of I4 division.
-   **I4\_WRAP** forces an I4 to lie between given limits by wrapping.
-   **ISING\_2D\_AGREE** returns the number of neighbors agreeing with
    each cell.
-   **ISING\_2D\_INITIALIZE** initializes the Ising array.
-   **ISING\_2D\_STATS** prints information about the current step.
-   **NEIGHBOR\_2D\_STATS** prints neighbor statistics about the current
    step.
-   **R8MAT\_UNIFORM\_01** fills an R8MAT with unit pseudorandom values.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TRANSITION** carries out a Monte Carlo simulation of a 3D Ising
    model.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 23 November 2011.*
