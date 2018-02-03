GNUPLOT\
Programs that Set Up GNUPLOT Graphics {#gnuplot-programs-that-set-up-gnuplot-graphics align="center"}
=====================================

------------------------------------------------------------------------

**GNUPLOT** is a set of C++ programs which illustrate how commands and
data for the GNUPLOT graphics program can be generated, to illustrate
the results of a calculation.

Ordinarily, GNUPLOT is used interactively; that is, the user invokes the
program, and then describes the plot to be created. The data for the
plot is created either by a formula, or by reference to some data file
created earlier.

It is often extremely important to be able to create graphical images of
the results of an executable program. If the user is familiar with
GNUPLOT, then the program can be modified to create a suitable data
file, and, once the program has completed, the user can run GNUPLOT and
use that data file to create a graph.

However, if the program is going to create the data file, it can just as
easily create a file containing the appropriate commands to GNUPLOT that
will create the desired image. In this way, the user can avoid having to
recall the correct commands in the correct order to create the plot.

Thus, the program might create two files, called, perhaps *data.txt* and
*commands.txt*. The command file would contain GNUPLOT commands,
including one that refers to the data file itself. To create the
graphics image, the user would simply type

            gnuplot < commands.txt
          

This directory includes some sample programs which carry out numerical
calculations, creating data and command files that are used in exactly
this way.

By the way, every time I run gnuplot, I get the obnoxious warning
message

    Could not find/open font when opening font "arial", using internal non-scalable font
          

I had to fix this with the following lines added to my .bashrc file:

    export GDFONTPATH=/usr/share/fonts/liberation
    export GNUPLOT_DEFAULT_GDFONT=LiberationSans-Regular
          

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**GNUPLOT** is available in [a non-language specific
version](../../examples/gnuplot/gnuplot.html) and [a C
version](../../c_src/gnuplot/gnuplot.html) and [a C++
version](../../cpp_src/gnuplot/gnuplot.html) and [a FORTRAN77
version](../../f77_src/gnuplot/gnuplot.html) and [a FORTRAN90
version](../../f_src/gnuplot/gnuplot.html) and [a MATLAB
version](../../m_src/gnuplot/gnuplot.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[ANALEMMA](../../cpp_src/analemma/analemma.html), a C++ program which
evaluates the equation of time, a formula for the difference between the
uniform 24 hour day and the actual position of the sun, creating data
that can be plotted by gnuplot, based on a program by Brian Tung.

[BROWNIAN\_MOTION\_SIMULATION](../../cpp_src/brownian_motion_simulation/brownian_motion_simulation.html),
a C++ library which simulates Brownian motion in an M-dimensional
region, creating graphics files that can be displayed with gnuplot.

[DISK\_GRID](../../cpp_src/disk_grid/disk_grid.html), a C++ library
which computes grid points that lie inside a disk of user specified
radius and center in 2D, using GNUPLOT to create an image of the grid.

[DISLIN](../../cpp_src/dislin/dislin.html), C++ programs which
illustrate the use of DISLIN, a scientific graphics package, by Helmut
Michels.

[EDGE](../../cpp_src/edge/edge.html), a C++ library which defines some
test functions in 1D, 2D and 3D for the detection of edges or
discontinuities. It uses GNUPLOT to display the jumps in curves and
surfaces.

[FAIR\_DICE\_SIMULATION](../../cpp_src/fair_dice_simulation/fair_dice_simulation.html),
a C++ program which simulates N games in which two fair dice are thrown
and summed, creating graphics files for processing by gnuplot.

[FD1D\_ADVECTION\_FTCS](../../cpp_src/fd1d_advection_ftcs/fd1d_advection_ftcs.html),
a C++ program which applies the finite difference method (FDM) to solve
the time-dependent advection equation ut = - c \* ux in one spatial
dimension, with a constant velocity, using the forward time, centered
space (FTCS) difference method, writing graphics files for processing by
gnuplot.

[FD1D\_ADVECTION\_LAX](../../cpp_src/fd1d_advection_lax/fd1d_advection_lax.html),
a C++ program which applies the finite difference method (FDM) to solve
the time-dependent advection equation ut = - c \* ux in one spatial
dimension, with a constant velocity, using the Lax method to treat the
time derivative, writing graphics files for processing by gnuplot.

[FD1D\_ADVECTION\_LAX\_WENDROFF](../../cpp_src/fd1d_advection_lax_wendroff/fd1d_advection_lax_wendroff.html),
a C++ program which applies the finite difference method (FDM) to solve
the time-dependent advection equation ut = - c \* ux in one spatial
dimension, with a constant velocity, using the Lax-Wendroff method to
treat the time derivative, writing graphics files for processing by
gnuplot.

[GNUPLOT\_I\_EXAMPLES](../../cpp_src/gnuplot_i_examples/gnuplot_i_examples.html),
C++ programs which demonstrate the use of the GNUPLOT\_I library for
interactive runtime gnuplot graphics.

[HIGH\_CARD\_SIMULATION](../../cpp_src/high_card_simulation/high_card_simulation.html),
a C++ program which simulates a situation in which you see the cards in
a deck one by one, and must select the one you think is the highest and
stop; the program uses GNUPLOT for graphics.

[ISING\_2D\_SIMULATION](../../cpp_src/ising_2d_simulation/ising_2d_simulation.html),
a C++ program which carries out a Monte Carlo simulation of an Ising
model, a 2D array of positive and negative charges, each of which is
likely to flip to be in agreement with neighbors, using gnuplot to make
images of the initial and final configurations.

[LEBESGUE](../../cpp_src/lebesgue/lebesgue.html), a C++ library which is
given a set of nodes in 1D, and plots the Lebesgue function, and
estimates the Lebesgue constant, which measures the maximum magnitude of
the potential error of Lagrange polynomial interpolation, and which uses
gnuplot to make plots of the Lebesgue function.

[LOBATTO\_POLYNOMIAL](../../cpp_src/lobatto_polynomial/lobatto_polynomial.html),
a C++ library which evaluates Lobatto polynomials, similar to Legendre
polynomials except that they are zero at both endpoints.

[LORENZ\_ODE](../../cpp_src/lorenz_ode/lorenz_ode.html), a C++ program
which approximates solutions to the Lorenz system, creating output files
that can be displayed by Gnuplot.

[NACA](../../cpp_src/naca/naca.html), a C++ library which can take the
parameters of certain NACA airfoils and return the coordinates of a
sequence of points that outline the wing shape. The data can be
displayed with gnuplot.

[NEAREST\_INTERP\_1D](../../cpp_src/nearest_interp_1d/nearest_interp_1d.html),
a C++ library which interpolates a set of data using a piecewise
constant interpolant defined by the nearest neighbor criterion, creating
graphics files for processing by gnuplot.

[ORNSTEIN\_UHLENBECK](../../cpp_src/ornstein_uhlenbeck/ornstein_uhlenbeck.html),
a C++ library which approximates solutions of the Ornstein-Uhlenbeck
stochastic ordinary differential equation (SODE) using the Euler method
and the Euler-Maruyama method, and creating graphics files for
processing by gnuplot.

[POISSON\_SIMULATION](../../cpp_src/poisson_simulation/poisson_simulation.html),
a C++ library which simulates a Poisson process in which events randomly
occur with an average waiting time of Lambda, creating output for
graphics by gnuplot.

[PWL\_INTERP\_1D](../../cpp_src/pwl_interp_1d/pwl_interp_1d.html), a C++
library which interpolates a set of data using a piecewise linear
function, creating graphics files for processing by gnuplot.

[SDE](../../cpp_src/sde/sde.html), a C++ library which illustrates
properties of stochastic ordinary differential equations (SODE's), and
common algorithms for their analysis, including the Euler method, the
Euler-Maruyama method, and the Milstein method, making graphics files
for processing and display by gnuplot, by Desmond Higham;

[SPIRAL\_DATA](../../cpp_src/spiral_data/spiral_data.html), a C++
program which computes a velocity vector field that satisfies the
continuity equation, writing the data to a file that can be plotted by
gnuplot.

[SPRING\_ODE2](../../cpp_src/spring_ode2/spring_ode2.html), a C++
program which shows how gnuplot graphics can be used to illustrate a
solution of the ordinary differential equation (ODE) that describes the
motion of a weight attached to a spring.

[STOCHASTIC\_DIFFUSION](../../cpp_src/stochastic_diffusion/stochastic_diffusion.html),
a C++ library which implements several versions of a stochastic
diffusivity coefficient, and displays sample results using gnuplot.

[STOCHASTIC\_HEAT2D](../../cpp_src/stochastic_heat2d/stochastic_heat2d.html),
a C++ program which implements a finite difference method (FDM) for the
steady (time independent) 2D heat equation, with a stochastic heat
diffusivity coefficient, using gnuplot to illustrate the results.

[STRING\_SIMULATION](../../cpp_src/string_simulation/string_simulation.html),
a C++ program which simulates the behavior of a vibrating string,
creating files that can be displayed by gnuplot.

[SVD\_SNOWFALL](../../cpp_src/svd_snowfall/svd_snowfall.html), a C++
library which reads a file containing historical snowfall data and
analyzes the data with the Singular Value Decomposition (SVD), and plots
created by gnuplot.

[VANDERMONDE\_INTERP\_1D](../../cpp_src/vandermonde_interp_1d/vandermonde_interp_1d.html),
a C++ library which finds a polynomial interpolant to data y(x) of a 1D
argument, by setting up and solving a linear system for the polynomial
coefficients, involving the Vandermonde matrix, creating graphics files
for processing by gnuplot.

### Reference: {#reference align="center"}

1.  Philipp Janert,\
    Gnuplot in Action: Understanding Data with Graphs,\
    Manning, 2010,\
    ISBN13: 978-1-933988-39-8,\
    LC: QA276.4.J37.
2.  Thomas Williams, Colin Kelley,\
    gnuplot 4.4, An Interactive Plotting Program,\
    The Free Software Foundation, 2010.
3.  [The GNUPLOT Website](http://www.gnuplot.info/).

### Examples and Tests: {#examples-and-tests align="center"}

**CURVE\_PLOT** is a function which allows the user to specify N values
X and Y, and a name. It creates data and command files that can be used
by gnuplot to create a plot of the curve.

-   [curve\_plot.cpp](curve_plot.cpp), the source code.
-   [curve\_plot.h](curve_plot.h), a command file.
-   [curve\_plot\_prb.cpp](curve_plot_prb.cpp), a sample calling
    program.
-   [curve\_plot\_data.txt](curve_plot_data.txt), a file containing the
    data values.
-   [curve\_plot\_commands.txt](curve_plot_commands.txt), GNUPLOT
    commands that can create an image from the data file.
-   [curve\_plot.png](curve_plot.png), an image of the data.

**DAMPED\_SINE** evaluates the damped sine correlation function for a
range of values of its argument. A plot of the function is desired.

-   [damped\_sine.cpp](damped_sine.cpp), the source code.
-   [damped\_sine\_output.txt](damped_sine_output.txt), the output file.
-   [damped\_sine\_data.txt](damped_sine_data.txt), a file containing
    the data values.
-   [damped\_sine\_commands.txt](damped_sine_commands.txt), GNUPLOT
    commands that can create an image from the data file.
-   [damped\_sine.png](damped_sine.png), an image of the data.

**STRING\_SIMULATION** simulates the behavior of a string that obeys the
wave equation. The shape of the string is to be plotted over successive
times.

-   [string\_simulation.cpp](string_simulation.cpp), the source code.
-   [string\_simulation\_output.txt](string_simulation_output.txt), the
    output file.
-   [string\_data.txt](string_data.txt), a file containing the data
    values.
-   [string\_commands.txt](string_commands.txt), GNUPLOT commands that
    can create an image from the data file.
-   [string.png](string.png), an image of the data.

You can go up one level to [the C++ directory](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 05 January 2013.*
