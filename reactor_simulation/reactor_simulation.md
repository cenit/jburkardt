REACTOR\_SIMULATION\
Simulated Test of Reactor Shielding {#reactor_simulation-simulated-test-of-reactor-shielding align="center"}
===================================

------------------------------------------------------------------------

**REACTOR\_SIMULATION** is a C++ program which simulates the shielding
effect of a slab intended to absorb or reflect most of the radiation
from a neutron source. This program is intended as a simple
demonstration of Monte Carlo simulation as applied to the analysis of
complicated probabilistic systems.

REACTOR\_SIMULATION is an example program that was developed in the book
"Numerical Methods and Software".

**REACTOR\_SIMULATION** is a Monte Carlo simulation, using uniform
random numbers, which investigates the effectiveness of a shield
intended to absorb the neutrons emitted from a nuclear reactor.

The reactor is modeled as a point source, located at (0,0,0).

A particle emitted from the reactor has a random initial direction, and
an energy selected from \[Emin,Emax\] with a 1/Sqrt(E) distribution.

The shield is modeled as a wall of thickness THICK, extending from 0 to
THICK in the X direction, and extending forever in the Y and Z
directions.

Based on the particle energy, a distance D is computed which measures
how far the particle could travel through the shield before colliding.

Based on the particle direction, the position is updated by D units.

If the particle is now to the left of the shield, it is counted as being
REFLECTED.

If the particle is to the right of the shield, it is counted as being
ABSORBED.

If the particle is inside the shield, it has COLLIDED. A particle that
collides is either absorbed (end of story) or SCATTERED with a new
random direction and a new (lower) energy.

Every particle is followed from origin to its final fate, which is
reflection, transmission, or absorption. At the end, a summary is
printed, giving the number of particles with each fate, and the average
energy of each group of particles.

Increasing NTOT, the number of particles used, will improve the expected
reliability of the results.

Increasing THICK, the thickness of the shield, should result in more
absorptions and reflections.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**REACTOR\_SIMULATION** is available in [a C
version](../../c_src/reactor_simulation/reactor_simulation.html) and [a
C++ version](../../cpp_src/reactor_simulation/reactor_simulation.html)
and [a FORTRAN77
version](../../f77_src/reactor_simulation/reactor_simulation.html) and
[a FORTRAN90
version](../../f_src/reactor_simulation/reactor_simulation.html) and [a
MATLAB version](../../m_src/reactor_simulation/reactor_simulation.html).

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

[HIGH\_CARD\_SIMULATION](../../cpp_src/high_card_simulation/high_card_simulation.html),
a C++ program which simulates a situation in which you see the cards in
a deck one by one, and must select the one you think is the highest and
stop; the program uses GNUPLOT for graphics.

[ISING\_2D\_SIMULATION](../../cpp_src/ising_2d_simulation/ising_2d_simulation.html),
a C++ program which carries out a Monte Carlo simulation of an Ising
model, a 2D array of positive and negative charges, each of which is
likely to "flip" to be in agreement with neighbors.

[LIFE\_OPENGL](../../cpp_src/life_opengl/life_opengl.html), a C++
program which uses OpenGL to display the evolution of John Conway's
"Game of Life".

[NMS](../../f_src/nms/nms.html), a FORTRAN90 library which accompanies
the book "Numerical Methods and Software", from which the
REACTOR\_SIMULATION program was extracted.

[POISSON\_SIMULATION](../../cpp_src/poisson_simulation/poisson_simulation.html),
a C++ library which simulates a Poisson process in which events randomly
occur with an average waiting time of Lambda.

[THREE\_BODY\_SIMULATION](../../cpp_src/three_body_simulation/three_body_simulation.html),
a C++ program which simulates the behavior of three planets, constrained
to lie in a plane, and moving under the influence of gravity, by Walter
Gander and Jiri Hrebicek.

[UNIFORM](../../cpp_src/uniform/uniform.html), a C++ library which
generates pseudorandom uniform numbers.

### Reference: {#reference align="center"}

1.  David Kahaner, Cleve Moler, Steven Nash,\
    Numerical Methods and Software,\
    Prentice Hall, 1989,\
    ISBN: 0-13-627258-4,\
    LC: TA345.K34.

### Source Code: {#source-code align="center"}

-   [reactor\_simulation.cpp](reactor_simulation.cpp), the source code;
-   [reactor\_simulation\_output.txt](reactor_simulation_output.txt),
    the output file from a sample run.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for the reactor shielding simulation.
-   **ABSORB** returns TRUE if the particle is absorbed upon colliding.
-   **CROSS** returns the "cross section" of a particle based on its
    energy.
-   **DIST2C** returns the distance to collision.
-   **ENERGY** assigns an energy to an emitted particle.
-   **OUTPUT** prints the results of the reactor shielding simulation.
-   **SCATTER** returns the new direction and energy of a particle that
    is scattered.
-   **SOURCE** generates a new particle from the neutron source.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **UPDATE** determines the position of the particle after it has
    traveled D units.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 03 September 2012.*
