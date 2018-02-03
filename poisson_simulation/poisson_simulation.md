POISSON\_SIMULATION\
Simulation of a Poisson Process {#poisson_simulation-simulation-of-a-poisson-process align="center"}
===============================

------------------------------------------------------------------------

**POISSON\_SIMULATION** is a C++ program which simulates a Poisson
process in which events occur uniformly at random, with an average
waiting time of Lambda, creating output for graphics by gnuplot.

Note that the Poisson distribution therefore also describes the
distribution of distances from one point to the next, assuming the
points are distributed uniformly at random along a line, with average
density Lambda per unit length.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**POISSON\_SIMULATION** is available in [a C
version](../../c_src/poisson_simulation/poisson_simulation.md) and [a
C++ version](../../master/poisson_simulation/poisson_simulation.md)
and [a FORTRAN77
version](../../f77_src/poisson_simulation/poisson_simulation.md) and
[a FORTRAN90
version](../../f_src/poisson_simulation/poisson_simulation.md) and [a
MATLAB version](../../m_src/poisson_simulation/poisson_simulation.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BROWNIAN\_MOTION\_SIMULATION](../../master/brownian_motion_simulation/brownian_motion_simulation.md),
a C++ library which simulates Brownian motion in an M-dimensional
region.

[DUEL\_SIMULATION](../../master/duel_simulation/duel_simulation.md),
a C++ program which simulates N repetitions of a duel between two
players, each of whom has a known firing accuracy.

[FAIR\_DICE\_SIMULATION](../../master/fair_dice_simulation/fair_dice_simulation.md),
a C++ program which simulates N tosses of 2 dice, making a histogram of
the results.

[GNUPLOT](../../master/gnuplot/gnuplot.md), C++ programs which
illustrate the use of the gnuplot graphics program.

[HIGH\_CARD\_SIMULATION](../../master/high_card_simulation/high_card_simulation.md),
a C++ program which simulates a situation in which you see the cards in
a deck one by one, and must select the one you think is the highest and
stop; the program uses GNUPLOT for graphics.

[ISING\_2D\_SIMULATION](../../master/ising_2d_simulation/ising_2d_simulation.md),
a C++ program which carries out a Monte Carlo simulation of an Ising
model, a 2D array of positive and negative charges, each of which is
likely to "flip" to be in agreement with neighbors.

[LIFE\_OPENGL](../../master/life_opengl/life_opengl.md), a C++
program which uses OpenGL to display the evolution of John Conway's
"Game of Life".

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

-   [poisson\_simulation.cpp](poisson_simulation.cpp), the source code.
-   [poisson\_simulation.hpp](poisson_simulation.hpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [poisson\_simulation\_prb.cpp](poisson_simulation_prb.cpp), a sample
    calling program.
-   [poisson\_simulation\_prb\_output.txt](poisson_simulation_prb_output.txt),
    the output file.

The calling program creates data and command files which can be used by
GNUPLOT to create images.

-   [poisson\_events\_data.txt](poisson_events_data.txt), data for
    Poisson events plot.
-   [poisson\_events\_commands.txt](poisson_events_commands.txt),
    commands for Poisson events plot.
-   [poisson\_events.png](poisson_events.png), the Poisson events plot.
-   [poisson\_timeline\_data.txt](poisson_timeline_data.txt), data for
    Poisson timeline plot.
-   [poisson\_timeline\_commands.txt](poisson_timeline_commands.txt),
    commands for Poisson timeline plot.
-   [poisson\_timeline.png](poisson_timeline.png), the Poisson timeline
    plot.
-   [poisson\_times\_data.txt](poisson_times_data.txt), data for Poisson
    events plot.
-   [poisson\_times\_commands.txt](poisson_times_commands.txt), commands
    for Poisson events plot.
-   [poisson\_times.png](poisson_times.png), the Poisson events plot.

### List of Routines: {#list-of-routines align="center"}

-   **I4VEC\_MEAN** returns the mean of an I4VEC.
-   **I4VEC\_PRINT** prints an I4VEC.
-   **I4VEC\_VARIANCE** returns the variance of an I4VEC.
-   **POISSON\_FIXED\_EVENTS** waits for a given number of Poisson
    events.
-   **POISSON\_FIXED\_TIME** counts the Poisson events in a fied time.
-   **R8\_UNIFORM\_01** returns a unit pseudorandom R8.
-   **R8VEC\_CUM** computes the cumulutive sums of an R8VEC.
-   **R8VEC\_MEAN** returns the mean of an R8VEC.
-   **R8VEC\_MIDSPACE\_NEW** creates a vector of linearly spaced values.
-   **R8VEC\_UNIFORM\_01\_NEW** returns a new unit pseudorandom R8VEC.
-   **R8VEC\_VARIANCE** returns the variance of an R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 27 September 2012.*
