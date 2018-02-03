FAIR\_DICE\_SIMULATION\
Simulation of Two Fair Dice {#fair_dice_simulation-simulation-of-two-fair-dice align="center"}
===========================

------------------------------------------------------------------------

**FAIR\_DICE\_SIMULATION** is a C++ program which simulates N games in
which two fair dice are thrown and summed, creating graphics files for
processing by gnuplot.

### Usage: {#usage align="center"}

> **fair\_dice\_simulation** *n*

where

-   *n* is the number of times the 2 dice are thrown.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FAIR\_DICE\_SIMULATION** is available in [a C
version](../../c_src/fair_dice_simulation/fair_dice_simulation.md) and
[a C++
version](../../master/fair_dice_simulation/fair_dice_simulation.md)
and [a FORTRAN77
version](../../f77_src/fair_dice_simulation/fair_dice_simulation.md)
and [a FORTRAN90
version](../../f_src/fair_dice_simulation/fair_dice_simulation.md) and
[a MATLAB
version](../../m_src/fair_dice_simulation/fair_dice_simulation.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BROWNIAN\_MOTION\_SIMULATION](../../master/brownian_motion_simulation/brownian_motion_simulation.md),
a C++ library which simulates Brownian motion in an M-dimensional
region.

[DUEL\_SIMULATION](../../master/duel_simulation/duel_simulation.md),
a C++ program which simulates N repetitions of a duel between two
players, each of whom has a known firing accuracy.

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
likely to "flip" to be in agreement with neighbors.

[LIFE\_OPENGL](../../master/life_opengl/life_opengl.md), a C++
program which uses OpenGL to display the evolution of John Conway's
"Game of Life".

[POISSON\_SIMULATION](../../master/poisson_simulation/poisson_simulation.md),
a C++ library which simulates a Poisson process in which events randomly
occur with an average waiting time of Lambda.

[REACTOR\_SIMULATION](../../master/reactor_simulation/reactor_simulation.md),
a C++ program which a simple Monte Carlo simulation of the shielding
effect of a slab of a certain thickness in front of a neutron source.
This program was provided as an example with the book "Numerical Methods
and Software."

[SNAKES\_AND\_LADDERS](../../master/snakes_and_ladders/snakes_and_ladders.md),
C++ programs which simulate the game of Snakes and Ladders.

[THREE\_BODY\_SIMULATION](../../master/three_body_simulation/three_body_simulation.md),
a C++ program which simulates the behavior of three planets, constrained
to lie in a plane, and moving under the influence of gravity, by Walter
Gander and Jiri Hrebicek.

### Reference: {#reference align="center"}

1.  Paul Nahin,\
    Digital Dice: Computational Solutions to Practical Probability
    Problems,\
    Princeton University Press, 2008,\
    ISBN13: 978-0-691-12698-2,\
    LC: QA273.25.N34.
2.  Dianne OLeary,\
    Scientific Computing with Case Studies,\
    SIAM, 2008,\
    ISBN13: 978-0-898716-66-5,\
    LC: QA401.O44.

### Source Code: {#source-code align="center"}

-   [fair\_dice\_simulation.cpp](fair_dice_simulation.cpp), the source
    code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [fair\_dice\_data.txt](fair_dice_data.txt), a table of 1000 throws
    of a pair of fair dice.
-   [fair\_dice\_commands.txt](fair_dice_commands.txt), GNUPLOT commands
    to plot the data.
-   [fair\_dice.png](fair_dice.png), a PNG image made by GNUPLOT.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 25 May 2013.*
