LORENZ\_ODE\
The Lorenz System {#lorenz_ode-the-lorenz-system align="center"}
=================

------------------------------------------------------------------------

**LORENZ\_ODE** is a C++ program which approximates solutions to the
Lorenz system, creating output files that can be displayed by Gnuplot.

The Lorenz system, originally intended as a simplified model of
atmospheric convection, has instead become a standard example of
sensitive dependence on initial conditions; that is, tiny differences in
the starting condition for the system rapidly become magnified. The
system also exhibits what is known as the "Lorenz attractor", that is,
the collection of trajectories for different starting points tends to
approach a peculiar butterfly-shaped region.

The Lorenz system includes three ordinary differential equations:

            dx/dt = sigma ( y - x )
            dy/dt = x ( rho - z ) - y
            dz/dt = xy - beta z
          

where the parameters beta, rho and sigma are usually assumed to be
positive. The classic case uses the parameter values

            beta = 8 / 3
            rho = 28
            sigma - 10
          

The initial conditions for this system are not often specified; rather,
investigators simply note that the trajectories associated with two very
close starting points will eventually separate. However, simply to get
started, we can suggest the following starting values at t=0:

            x = 8
            y = 1
            z = 1
          

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**LORENZ\_ODE** is available in [a C
version](../../c_src/lorenz_ode/lorenz_ode.md) and [a C++
version](../../master/lorenz_ode/lorenz_ode.md) and [a FORTRAN77
version](../../f77_src/lorenz_ode/lorenz_ode.md) and [a FORTRAN90
version](../../f_src/lorenz_ode/lorenz_ode.md) and [a MATLAB
version](../../m_src/lorenz_ode/lorenz_ode.md) and [a Python
version](../../py_src/lorenz_ode/lorenz_ode.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[GNUPLOT](../../master/gnuplot/gnuplot.md), C++ programs which
illustrate the use of the gnuplot graphics program.

[GRAPHICS\_EXAMPLES\_GNUPLOT](../../examples/graphics_examples_gnuplot/graphics_examples_gnuplot.md),
gnuplot scripts which illustrate how various kinds of data can be
displayed and analyzed graphically using the interactive executable
graphics program GNUPLOT.

[SPRING\_ODE2](../../master/spring_ode2/spring_ode2.md), a C++
program which shows how gnuplot graphics can be used to illustrate a
solution of the ordinary differential equation (ODE) that describes the
motion of a weight attached to a spring.

### Reference: {#reference align="center"}

1.  Edward Lorenz,\
    Deterministic Nonperiodic Flow,\
    Journal of the Atmospheric Sciences,\
    Volume 20, Number 2, 1963, pages 130-141.

### Source Code: {#source-code align="center"}

-   [lorenz\_ode.cpp](lorenz_ode.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [lorenz\_ode\_output.txt](lorenz_ode_output.txt), the output file.
-   [lorenz\_ode\_data.txt](lorenz_ode_data.txt), the graphics data
    file.
-   [lorenz\_ode\_commands.txt](lorenz_ode_commands.txt), the graphics
    command file.
-   [xyz\_3d.png](xyz_3d.png), a plot, created by gnuplot, of
    (X(t),Y(t),Z(t)).
-   [xyz\_time.png](xyz_time.png), a plot, created by gnuplot, of
    (t,X(t)), (t,Y(t), and (t,Z(t)).

### List of Routines: {#list-of-routines align="center"}

-   **LORENZ\_RHS** evaluates the right hand side of the Lorenz ODE.
-   **R8VEC\_LINSPACE\_NEW** creates a vector of linearly spaced values.
-   **RK4VEC** takes one Runge-Kutta step for a vector ODE.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 10 October 2013.*
