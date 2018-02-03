HIGH\_CARD\_SIMULATION\
Guessing What the Highest Card Is {#high_card_simulation-guessing-what-the-highest-card-is align="center"}
=================================

------------------------------------------------------------------------

**HIGH\_CARD\_SIMULATION** is a C++ program which simulates a game in
which you have one chance to select the highest card from a deck, using
GNUPLOT to display the estimated and exact probabilities.

You are given a deck of DECK\_SIZE cards.

Your goal is to select the high card. For convenience, we can assume the
cards are a permutation of the integers from 1 to DECK\_SIZE, but in
fact the user mustn't see such values or else it's obvious which is the
largest card. (For a truly difficult problem, we'd have to work harder
to disguise the range of values and the likely distribution!)

Your choice is made under the following rules: You may turn over one
card at a time. When a card is turned over, you may declare that to be
your choice, or else turn over another card. If you have not chosen a
card by the end, then your choice is the final card.

If you have no idea what to do, and simply decide in advance to pick a
card "at random", that is, for example, you decide to pick the 15th card
before having seen any cards, then your probability of winning is
1/DECK\_SIZE.

The question is, can you do better than that?

A good strategy is as follows: always look at the first SKIP\_NUM cards
without choosing them. Then choose the very next card you encounter that
is larger than the cards you skipped.

Using this program, you can easily see that skipping 5 cards is much
better than picking one at random, skipping 10 is even better, and so
on...up to some point, when the benefit begins to disappear. Of course,
you can't skip too many cards, and in fact, the results seem to be best
for somewhere around 30 to 35 cards skipped. For problems like this, the
optimal value is somewhere around 1 / e, where E is the base of the
natural logarithm system.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**HIGH\_CARD\_SIMULATION** is available in [a C
version](../../c_src/high_card_simulation/high_card_simulation.md) and
[a C++
version](../../master/high_card_simulation/high_card_simulation.md)
and [a FORTRAN90
version](../../f_src/high_card_simulation/high_card_simulation.md) and
[a FORTRAN77
version](../../f77_src/high_card_simulation/high_card_simulation.md)
and [a MATLAB
version.](../../m_src/high_card_simulation/high_card_simulation.md)

### Related Data and Programs: {#related-data-and-programs align="center"}

[BROWNIAN\_MOTION\_SIMULATION](../../master/brownian_motion_simulation/brownian_motion_simulation.md),
a C++ program which simulates Brownian motion in an M-dimensional
region.

[DUEL\_SIMULATION](../../master/duel_simulation/duel_simulation.md),
a C++ program which simulates N repetitions of a duel between two
players, each of whom has a known firing accuracy.

[FAIR\_DICE\_SIMULATION](../../master/fair_dice_simulation/fair_dice_simulation.md),
a C++ program which simulates N tosses of 2 dice, making a histogram of
the results.

[GNUPLOT](../../master/gnuplot/gnuplot.md), C++ programs which
illustrate how a program can write data and command files so that
gnuplot can create plots of the program results.

[ISING\_2D\_SIMULATION](../../master/ising_2d_simulation/ising_2d_simulation.md),
a C++ program which carries out a Monte Carlo simulation of an Ising
model, a 2D array of positive and negative charges, each of which is
likely to "flip" to be in agreement with neighbors.

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

[STRING\_SIMULATION](../../master/string_simulation/string_simulation.md),
a C++ program which simulates the behavior of a vibrating string by
solving the corresponding initial boundary value problem (IBVP),
creating files that can be displayed by gnuplot.

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

### Source Code: {#source-code align="center"}

-   [high\_card\_simulation.cpp](high_card_simulation.cpp), the source
    code.
-   [high\_card\_simulation.hpp](high_card_simulation.hpp), the include
    file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [high\_card\_simulation\_prb.cpp](high_card_simulation_prb.cpp) a
    sample calling program.
-   [high\_card\_simulation\_prb\_output.txt](high_card_simulation_prb_output.txt),
    the output file.
-   [test02\_commands.txt](test02_commands.txt), the GNUPLOT command
    file;
-   [test02\_data.txt](test02_data.txt), the data file.
-   [test02.png](test02.png), plots the exact chances of winning with
    various skips, and a deck of 100 cards.
-   [test03\_commands.txt](test03_commands.txt), the GNUPLOT command
    file;
-   [test03\_data.txt](test03_data.txt), the data file.
-   [test03.png](test03.png), plots the exact chances of winning with
    various skips, and a deck of 100 cards.

### List of Routines: {#list-of-routines align="center"}

-   **HIGH\_CARD\_PROBABILITY:** winning probabilities for the high card
    game.
-   **HIGH\_CARD\_SHUFFLE** generates a sequence of numeric "cards" for
    a game.
-   **HIGH\_CARD\_SIMULATION** simulates a game of choosing the highest
    card in a deck.
-   **I4\_POWER** returns the value of I\^J.
-   **I4\_UNIFORM\_AB** returns a scaled pseudorandom I4 between A
    and B.
-   **I4VEC\_MAX** returns the value of the maximum element in an I4VEC.
-   **PERM\_UNIFORM\_NEW** selects a random permutation of N objects.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 26 February 2014.*
