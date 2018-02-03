SPRING\_ODE\
Line Printer Graphics to Display Spring ODE Solution {#spring_ode-line-printer-graphics-to-display-spring-ode-solution align="center"}
====================================================

------------------------------------------------------------------------

**SPRING\_ODE** is a C++ program which shows how line printer graphics
can be used to make a crude illustration of a solution of the ordinary
differential equation (ODE) that describes the motion of a weight
attached to a spring.

This is a simple example of how to plot when you don't have a plotter.
This is a particular kind of "ASCII graphics", or "typewriter graphics"
or "lineprinter graphics", and shows you how valuable an illustration
can be, even when it's as crude as this example.

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

Note that the plotting assumes that the value of X will always be
between -1 and +1. If the initial condition uses V = 0, and X starts
between -1 and +1, then this will be OK.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SPRING\_ODE** is available in [a C
version](../../c_src/spring_ode/spring_ode.html) and [a C++
version](../../cpp_src/spring_ode/spring_ode.html) and [a FORTRAN77
version](../../f77_src/spring_ode/spring_ode.html) and [a FORTRAN90
version](../../f_src/spring_ode/spring_ode.html) and [a MATLAB
version](../../m_src/spring_ode/spring_ode.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[ASCII\_ART\_GRAYSCALE](../../data/ascii_art_grayscale/ascii_art_grayscale.html),
a data directory which contains examples of grayscale ASCII Art files,
in which images are created using printable characters.

[MANDELBROT\_ASCII](../../c_src/mandelbrot_ascii/mandelbrot_ascii.html),
a C program which generates an ASCII TEXT image of the Mandelbrot
fractal set using just two lines of (very obscure) C.

[SPRING\_ODE2](../../cpp_src/spring_ode2/spring_ode2.html), a C++
program which shows how gnuplot graphics can be used to illustrate a
solution of the ordinary differential equation (ODE) that describes the
motion of a weight attached to a spring.

### Source Code: {#source-code align="center"}

-   [spring\_ode.cpp](spring_ode.cpp), the source code.
-   [spring\_ode\_output.txt](spring_ode_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for SPRING\_ODE.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 15 May 2012.*
