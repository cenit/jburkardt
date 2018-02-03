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
version](../../c_src/fair_dice_simulation/fair_dice_simulation.html) and
[a C++
version](../../cpp_src/fair_dice_simulation/fair_dice_simulation.html)
and [a FORTRAN77
version](../../f77_src/fair_dice_simulation/fair_dice_simulation.html)
and [a FORTRAN90
version](../../f_src/fair_dice_simulation/fair_dice_simulation.html) and
[a MATLAB
version](../../m_src/fair_dice_simulation/fair_dice_simulation.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BROWNIAN\_MOTION\_SIMULATION](../../cpp_src/brownian_motion_simulation/brownian_motion_simulation.html),
a C++ library which simulates Brownian motion in an M-dimensional
region.

[DUEL\_SIMULATION](../../cpp_src/duel_simulation/duel_simulation.html),
a C++ program which simulates N repetitions of a duel between two
players, each of whom has a known firing accuracy.

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

[POISSON\_SIMULATION](../../cpp_src/poisson_simulation/poisson_simulation.html),
a C++ library which simulates a Poisson process in which events randomly
occur with an average waiting time of Lambda.

[REACTOR\_SIMULATION](../../cpp_src/reactor_simulation/reactor_simulation.html),
a C++ program which a simple Monte Carlo simulation of the shielding
effect of a slab of a certain thickness in front of a neutron source.
This program was provided as an example with the book "Numerical Methods
and Software."

[SNAKES\_AND\_LADDERS](../../cpp_src/snakes_and_ladders/snakes_and_ladders.html),
C++ programs which simulate the game of Snakes and Ladders.

[THREE\_BODY\_SIMULATION](../../cpp_src/three_body_simulation/three_body_simulation.html),
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

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 25 May 2013.*
