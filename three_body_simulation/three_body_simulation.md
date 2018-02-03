THREE\_BODY\_SIMULATION\
Planar Three Body Problem Simulation {#three_body_simulation-planar-three-body-problem-simulation align="center"}
====================================

------------------------------------------------------------------------

**THREE\_BODY\_SIMULATION** is a C++ program which simulates the
solution of the planar three body problem.

Three bodies, regarded as point masses, are constrained to lie in a
plane. The masses of each body are given, as are the positions and
velocities at a starting time T = 0. The bodies move in accordance with
the gravitational force between them.

The force exerted on the 0-th body by the 1st body can be written:

            F = - m0 m1 ( p0 - p1 ) / |p0 - p1|^3
          

assuming that units have been normalized to that the gravitational
coefficient is 1. Newton's laws of motion can be written:

      
            m0 p0'' = - m0 m1 ( p0 - p1 ) / |p0 - p1|^3 
                      - m0 m2 ( p0 - p2 ) / |p0 - p2|^3
      
            m1 p1'' = - m1 m0 ( p1 - p0 ) / |p1 - p0|^3 
                      - m1 m2 ( p1 - p2 ) / |p1 - p2|^3
      
            m2 p2'' = - m2 m0 ( p2 - p0 ) / |p2 - p0|^3 
                      - m2 m1 ( p2 - p1 ) / |p2 - p1|^3
          

Letting

            y1 = p0(x)
            y2 = p0(y)
            y3 = p0'(x)
            y4 = p0'(y)
          

and using similar definitions for p1 and p2, the 3 second order vector
equations can be rewritten as 12 first order equations. In particular,
the first four are:

            y1' = y3
            y2' = y4
            y3' = - m1 ( y1 - y5  ) / |(y1,y2) - (y5,y6) |^3 
                  - m2 ( y1 - y9  ) / |(y1,y2) - (y9,y10)|^3
            y4' = - m1 ( y2 - y6  ) / |(y1,y2) - (y5,y6) |^3 
                  - m2 ( y2 - y10 ) / |(y1,y2) - (y9,y10)|^3
          

and so on. This first order system can be integrated by a standard ODE
solver.

Note that when any two bodies come close together, the solution changes
very rapidly, and very small steps must be taken by the ODE solver. For
this system, the first near collision occurs around T=15.8299, and the
results produced by the ODE solver will not be very accurate after that
point.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**THREE\_BODY\_SIMULATION** is available in [a C
version](../../c_src/three_body_simulation/three_body_simulation.md)
and [a C++
version](../../master/three_body_simulation/three_body_simulation.md)
and [a FORTRAN77
version](../../f77_src/three_body_simulation/three_body_simulation.md)
and [a FORTRAN90
version](../../f_src/three_body_simulation/three_body_simulation.md)
and [a MATLAB
version](../../m_src/three_body_simulation/three_body_simulation.md).

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

[HIGH\_CARD\_SIMULATION](../../master/high_card_simulation/high_card_simulation.md),
a C++ program which simulates a situation in which you see the cards in
a deck one by one, and must select the one you think is the highest and
stop; the program uses GNUPLOT for graphics.

[ISING\_2D\_SIMULATION](../../master/ising_2d_simulation/ising_2d_simulation.md),
a C++ program which carries out a Monte Carlo simulation of an Ising
model. a 2D array of positive and negative charges, each of which is
likely to "flip" to be in agreement with neighbors.

[POISSON\_SIMULATION](../../master/poisson_simulation/poisson_simulation.md),
a C++ library which simulates a Poisson process in which events randomly
occur with an average waiting time of Lambda.

[REACTOR\_SIMULATION](../../master/reactor_simulation/reactor_simulation.md),
a C++ program which a simple Monte Carlo simulation of the shielding
effect of a slab of a certain thickness in front of a neutron source.
This program was provided as an example with the book "Numerical Methods
and Software."

[RKF45](../../master/rkf45/rkf45.md), a C++ library which implements
the Runge-Kutta-Fehlberg (RKF) solver for the approximate solution of an
ordinary differential equation (ODE) system.

### Author: {#author align="center"}

Original MATLAB version by Dominik Gruntz, Joerg Waldvogel; C++ version
by John Burkardt.

### Reference: {#reference align="center"}

1.  Dominik Gruntz, Joerg Waldvogel,\
    "Orbits in the Planar Three-Body Problem",\
    Walter Gander, Jiri Hrebicek,\
    Solving Problems in Scientific Computing using Maple and Matlab,\
    Springer, 1997,\
    ISBN: 3-540-61793-0,\
    LC: Q183.9.G36.

### Source Code: {#source-code align="center"}

-   [simple\_rkf45.cpp](simple_rkf45.cpp), the source code.
-   [simple\_rkf45\_output.txt](simple_rkf45_output.txt), printed output
    from the run.
-   [simple\_rkf45\_t.txt](simple_rkf45_t.txt), the values of time T at
    every 0.1 seconds.
-   [simple\_rkf45\_y.txt](simple_rkf45_y.txt), the values of the 12
    state variables at every time.

### List of Routines: {#list-of-routines align="center"}

**SIMPLE\_RKF45** simulates the problem by calling the ODE integrator
RKF45. This approach loses accuracy when the bodies come close to
colliding, which is likely to happen often.

-   **MAIN** is the main program for SIMPLE\_RKF45.
-   **R8MAT\_WRITE** writes an R8MAT file.
-   **SIMPLE\_RKF45\_RUN** runs the simple three body ODE system.
-   **SIMPLE\_F** returns the right hand side of the three body ODE
    system.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last modified on 13 October 2012.*
