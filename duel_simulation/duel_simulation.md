DUEL\_SIMULATION\
Simulation of a Duel {#duel_simulation-simulation-of-a-duel align="center"}
====================

------------------------------------------------------------------------

**DUEL\_SIMULATION** is a C++ program which simulates N instances of a
duel between two players.

Player A fires at player B, and hits with a probability of A\_ACCURACY.
If Player A misses, then Player B fires at Player A, hitting with a
probability of B\_ACCURACY.

The duel continues with alternating shots until only one player
survives.

The simulation is intended to estimate the probabilities that a player
will survive.

The exact probability that player 1 will survive is

> P(1) / ( P(1) + P(2) - P(1) \* P(2) )

while player 2's chance is

> P(2) \* ( 1 - P(1) ) / ( P(1) + P(2) - P(1) \* P(2) ).

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**DUEL\_SIMULATION** is available in [a C
version](../../c_src/duel_simulation/duel_simulation.html) and [a C++
version](../../cpp_src/duel_simulation/duel_simulation.html) and [a
FORTRAN77 version](../../f77_src/duel_simulation/duel_simulation.html)
and [a FORTRAN90
version](../../f_src/duel_simulation/duel_simulation.html) and [a
Mathematica
version](../../math_src/duel_simulation/duel_simulation.html) and [a
MATLAB version](../../m_src/duel_simulation/duel_simulation.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BROWNIAN\_MOTION\_SIMULATION](../../cpp_src/brownian_motion_simulation/brownian_motion_simulation.html),
a C++ library which simulates Brownian motion in an M-dimensional
region.

[FAIR\_DICE\_SIMULATION](../../cpp_src/fair_dice_simulation/fair_dice_simulation.html),
a C++ program which simulates N tosses of 2 dice, making a histogram of
the results.

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
    Duelling Idiots and Other Probability Puzzlers,\
    Princeton University Press, 2000,\
    ISBN13: 978-0691009797,\
    LC: QA273.N29.
2.  Martin Shubik,\
    "Does the Fittest Necessarily Survive?",\
    in Readings in Game Theory and Political Behavior,\
    edited by Martin Shubik,\
    Doubleday, 1954,\
    LC: H61.S53.

### Source Code: {#source-code align="center"}

-   [duel\_simulation.cpp](duel_simulation.cpp), the program.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 14 June 2011.*
