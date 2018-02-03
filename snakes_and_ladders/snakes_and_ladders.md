SNAKES\_AND\_LADDERS\
Game Simulation {#snakes_and_ladders-game-simulation align="center"}
=====================

------------------------------------------------------------------------

**SNAKES\_AND\_LADDERS**, C++ programs which investigate the game of
Snakes and Ladders.

Snakes and Ladders is a children's game played on a 10x10 numbered
board. A player's turn consists of rolling a single die, and moving the
indicated number of squares. If the final square is the foot of a
ladder, the player moves up to a higher numbered square. If the final
square is the mouth of a snake, the player moves downward.

It is a simple exercise to create a simulation of the game for several
players.

Since the game is essentially a race, with no other competition between
the players, it can be studied in a simplified version in which there is
only one player.

For the one-player version of the game, it is interesting to pose the
question of the average length of a game, that is, how many rolls of the
die it takes in order to reach the final square.

By adding a square 0, where the player begins, the game board can be
modeled as a vector of length 101, and the transitions from one square
to another can be modeled by a transition matrix. Most commonly, the
entries in row I will be zero except that columns I+1 through I+6 will
have the value 1/6. However, rows which correspond to a snake or ladder,
and rows for which I+6 is greater than 100, must be handled specially.

Given the transition matrix A, the one player game can be modeled as a
Markov Chain Monte Carlo system. In particular, given an initial
starting vector v, the probability distribution after one move is the
vector A' \* v, and repeated multiplication by A' will display the exact
probability distribution at every step.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SNAKES\_AND\_LADDERS** is available in [a C
version](../../c_src/snakes_and_ladders/snakes_and_ladders.html) and [a
C++ version](../../cpp_src/snakes_and_ladders/snakes_and_ladders.html)
and [a FORTRAN77
version](../../f77_src/snakes_and_ladders/snakes_and_ladders.html) and
[a FORTRAN90
version](../../f_src/snakes_and_ladders/snakes_and_ladders.html) and [a
MATLAB version](../../m_src/snakes_and_ladders/snakes_and_ladders.html)
and [a Python
version](../../py_src/snakes_and_ladders/snakes_and_ladders.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[DUEL\_SIMULATION](../../cpp_src/duel_simulation/duel_simulation.html),
a C++ program which simulates N repetitions of a duel between two
players, each of whom has a known firing accuracy.

[FAIR\_DICE\_SIMULATION](../../cpp_src/fair_dice_simulation/fair_dice_simulation.html),
a C++ program which simulates N tosses of 2 dice, making a histogram of
the results.

[HIGH\_CARD\_SIMULATION](../../cpp_src/high_card_simulation/high_card_simulation.html),
a C++ program which simulates a situation in which you see the cards in
a deck one by one, and must select the one you think is the highest and
stop.

[ISING\_2D\_SIMULATION](../../cpp_src/ising_2d_simulation/ising_2d_simulation.html),
a C++ program which carries out a Monte Carlo simulation of an Ising
model, a 2D array of positive and negative charges, each of which is
likely to flip to be in agreement with neighbors.

[POISSON\_SIMULATION](../../cpp_src/poisson_simulation/poisson_simulation.html),
a C++ library which simulates a Poisson process in which events randomly
occur with an average waiting time of Lambda.

[REACTOR\_SIMULATION](../../cpp_src/reactor_simulation/reactor_simulation.html),
a C++ program which is a simple Monte Carlo simulation of the shielding
effect of a slab of a certain thickness in front of a neutron source.
This program was provided as an example with the book "Numerical Methods
and Software."

### Reference: {#reference align="center"}

1.  Steve Althoen, Larry King, Kenneth Schilling,\
    How long is a game of Snakes and Ladders?,\
    The Mathematical Gazette,\
    Volume 77, Number 478, March 1993, pages 71-76.
2.  Nick Berry,\
    A Mathematical Analysis of Snakes and Ladders,\
    http://www.datagenetics.com/blog/november12011/index.html
3.  Desmond Higham, Nicholas Higham,\
    MATLAB Guide,\
    SIAM, 2005,\
    ISBN13: 9780898717891.

### Source Code: {#source-code align="center"}

-   [snakes.cpp](snakes.cpp), the source code.
-   [snakes.hpp](snakes.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [snakes\_prb.cpp](snakes_prb.cpp), a sample calling program.
-   [snakes\_prb\_output.txt](snakes_prb_output.txt), the output file.

Some graphics files are created.

-   [snakes\_commands.txt](snakes_commands.txt), GNUPLOT command file.
-   [snakes\_data.txt](snakes_data.txt), GNUPLOT data file.
-   [snakes.png](snakes.png), a PNG image of the sparsity structure of
    the transition matrix.

### List of Routines: {#list-of-routines align="center"}

-   **SNAKES** sets up the Snakes and Ladders matrix.
-   **SPY\_GE** plots a sparsity pattern for a general storage (GE)
    matrix.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last modified on 19 September 2014*
