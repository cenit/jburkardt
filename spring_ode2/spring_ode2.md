SPRING\_ODE2\
Gnuplot Graphics to Display Spring ODE Solution {#spring_ode2-gnuplot-graphics-to-display-spring-ode-solution align="center"}
===============================================

------------------------------------------------------------------------

**SPRING\_ODE2** is a C++ program which shows how Gnuplot graphics can
be used to illustrate a solution of the ordinary differential equation
(ODE) that describes the motion of a weight attached to a spring.

This program is a revision of the SPRING\_ODE program. A second change
that we make is that we use vectors (C arrays) to store the data.

Hooke's law for a spring observes that the restoring force is
proportional to the displacement:

            F = - k x
          

and Newton's law relates the force to acceleration:

            F = m a
          

Putting these equations together, we have:

            m * d^2 x/dt^2 = - k * x
          

We can add a damping force with coefficient c:

            m * d^2 x/dt^2 = - k * x - c * dx/dt
          

If we write this as a pair of first order equations for (x,v), we have

                dx/dt = v
            m * dv/dt = - k * x - c * v
          

and now we can approximate these values for small time steps.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SPRING\_ODE2** is available in [a C
version](../../c_src/spring_ode2/spring_ode2.html) and [a C++
version](../../cpp_src/spring_ode2/spring_ode2.html) and [a FORTRAN77
version](../../f77_src/spring_ode2/spring_ode2.html) and [a FORTRAN90
version](../../f_src/spring_ode2/spring_ode2.html) and [a MATLAB
version](../../m_src/spring_ode2/spring_ode2.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[GNUPLOT](../../cpp_src/gnuplot/gnuplot.html), C++ programs which
illustrate the use of the gnuplot graphics program.

[LORENZ\_ODE](../../cpp_src/lorenz_ode/lorenz_ode.html), a C++ program
which approximates solutions to the Lorenz system, creating output files
that can be displayed by Gnuplot.

[GRAPHICS\_EXAMPLES\_GNUPLOT](../../examples/graphics_examples_gnuplot/graphics_examples_gnuplot.html),
gnuplot scripts which illustrate how various kinds of data can be
displayed and analyzed graphically using the interactive executable
graphics program GNUPLOT.

[SPRING\_ODE](../../cpp_src/spring_ode/spring_ode.html), a C++ program
which shows how line printer graphics can be used to make a crude
illustration of a solution of the ordinary differential equation (ODE)
that describes the motion of a weight attached to a spring.

### Source Code: {#source-code align="center"}

-   [spring\_ode2.cpp](spring_ode2.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [spring\_ode2\_output.txt](spring_ode2_output.txt), the output file.
-   [spring\_ode2\_data.txt](spring_ode2_data.txt), the graphics data
    file.
-   [spring\_ode2\_commands.txt](spring_ode2_commands.txt), the graphics
    command file.
-   [xv\_time.png](xv_time.png), a time plot, created by gnuplot, of the
    displacement x and velocity v.
-   [xv\_phase.png](xv_phase.png), a phase plot, created by gnuplot, of
    the displacement x and velocity v.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for SPRING\_ODE2.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 09 October 2013.*
