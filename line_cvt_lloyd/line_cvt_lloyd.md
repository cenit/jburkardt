LINE\_CVT\_LLOYD\
Lloyd's CVT Method for a Line Segment {#line_cvt_lloyd-lloyds-cvt-method-for-a-line-segment align="center"}
=====================================

------------------------------------------------------------------------

**LINE\_CVT\_LLOYD** is a C library which carries out Lloyd's iteration
for computing a Centroidal Voronoi Tesselation (CVT) of points over the
interior of a line segment in 1D.

A constraint has been added to the computation, which forces the first
and last points to be fixed to the endpoints of the line segment. This
is not actually a requirement for Lloyd's method.

At least for the uniform density case, the exact solution of this
problem is known in advance, and is simply a set of equally spaced
points. For instance, for N = 4, the solution over the interval \[0,1\]
would be 0, 1/3, 2/3, 1, if the endpoint constraint is imposed. If the
endpoint constraint is NOT imposed, then the exact solution is: 1/8,
3/8, 5/8, 7/8.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**LINE\_CVT\_LLOYD** is available in [a C
version](../../c_src/cvt_1d_lloyd/cvt_1d_lloyd.html) and [a C++
version](../../cpp_src/cvt_1d_lloyd/cvt_1d_lloyd.html) and [a FORTRAN77
version](../../f77_src/cvt_1d_lloyd/cvt_1d_lloyd.html) and [a FORTRAN90
version](../../f_src/cvt_1d_lloyd/cvt_1d_lloyd.html) and [a MATLAB
version](../../m_src/cvt_1d_lloyd/cvt_1d_lloyd.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[LINE\_FELIPPA\_RULE](../../cpp_src/line_felippa_rule/line_felippa_rule.html),
a C++ library which returns the points and weights of a Felippa
quadrature rule over the interior of a line segment in 1D.

[LINE\_GRID](../../cpp_src/line_grid/line_grid.html), a C++ library
which computes a grid of points over the interior of a line segment in
1D.

### Reference: {#reference align="center"}

1.  Qiang Du, Vance Faber, Max Gunzburger,\
    Centroidal Voronoi Tessellations: Applications and Algorithms,\
    SIAM Review, Volume 41, 1999, pages 637-676.

### Source Code: {#source-code align="center"}

-   [line\_cvt\_lloyd.c](line_cvt_lloyd.c), the source code.
-   [line\_cvt\_lloyd.h](line_cvt_lloyd.h), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [line\_cvt\_lloyd\_prb.c](line_cvt_lloyd_prb.c), a sample calling
    program.
-   [line\_cvt\_lloyd\_prb\_output.txt](line_cvt_lloyd_prb_output.txt),
    the output file.

**TEST01** applies the unconstrained iteration, with random unsorted
starting values.

-   [test01\_energy\_commands.txt](test01_energy_commands.txt) GNUPLOT
    commands to create a plot.
-   [test01\_energy\_data.txt](test01_energy_data.txt) data needed to
    create a plot.
-   [test01\_energy.png](test01_energy.png) a PNG image of the "energy"
    of the partition.
-   [test01\_evolution\_commands.txt](test01_evolution_commands.txt)
    GNUPLOT commands to create a plot.
-   [test01\_evolution\_data.txt](test01_evolution_data.txt) data needed
    to create a plot.
-   [test01\_evolution.png](test01_evolution.png) a PNG image of the
    evolution of the generators.
-   [test01\_motion\_commands.txt](test01_motion_commands.txt) GNUPLOT
    commands to create a plot.
-   [test01\_motion\_data.txt](test01_motion_data.txt) data needed to
    create a plot.
-   [test01\_motion.png](test01_motion.png) a PNG image of the "motion"
    of the generators.

**TEST02** applies the constrained iteration, with random unsorted
starting values.

-   [test02\_energy\_commands.txt](test02_energy_commands.txt) GNUPLOT
    commands to create a plot.
-   [test02\_energy\_data.txt](test02_energy_data.txt) data needed to
    create a plot.
-   [test02\_energy.png](test02_energy.png) a PNG image of the "energy"
    of the partition.
-   [test02\_evolution\_commands.txt](test02_evolution_commands.txt)
    GNUPLOT commands to create a plot.
-   [test02\_evolution\_data.txt](test02_evolution_data.txt) data needed
    to create a plot.
-   [test02\_evolution.png](test02_evolution.png) a PNG image of the
    evolution of the generators.
-   [test02\_motion\_commands.txt](test02_motion_commands.txt) GNUPLOT
    commands to create a plot.
-   [test02\_motion\_data.txt](test02_motion_data.txt) data needed to
    create a plot.
-   [test02\_motion.png](test02_motion.png) a PNG image of the "motion"
    of the generators.

**TEST03** applies the unconstrained iteration, with random sorted
starting values.

-   [test03\_energy\_commands.txt](test03_energy_commands.txt) GNUPLOT
    commands to create a plot.
-   [test03\_energy\_data.txt](test03_energy_data.txt) data needed to
    create a plot.
-   [test03\_energy.png](test03_energy.png) a PNG image of the "energy"
    of the partition.
-   [test03\_evolution\_commands.txt](test03_evolution_commands.txt)
    GNUPLOT commands to create a plot.
-   [test03\_evolution\_data.txt](test03_evolution_data.txt) data needed
    to create a plot.
-   [test03\_evolution.png](test03_evolution.png) a PNG image of the
    evolution of the generators.
-   [test03\_motion\_commands.txt](test03_motion_commands.txt) GNUPLOT
    commands to create a plot.
-   [test03\_motion\_data.txt](test03_motion_data.txt) data needed to
    create a plot.
-   [test03\_motion.png](test03_motion.png) a PNG image of the "motion"
    of the generators.

**TEST04** applies the constrained iteration, with random sorted
starting values.

-   [test04\_energy\_commands.txt](test04_energy_commands.txt) GNUPLOT
    commands to create a plot.
-   [test04\_energy\_data.txt](test04_energy_data.txt) data needed to
    create a plot.
-   [test04\_energy.png](test04_energy.png) a PNG image of the "energy"
    of the partition.
-   [test04\_evolution\_commands.txt](test04_evolution_commands.txt)
    GNUPLOT commands to create a plot.
-   [test04\_evolution\_data.txt](test04_evolution_data.txt) data needed
    to create a plot.
-   [test04\_evolution.png](test04_evolution.png) a PNG image of the
    evolution of the generators.
-   [test04\_motion\_commands.txt](test04_motion_commands.txt) GNUPLOT
    commands to create a plot.
-   [test04\_motion\_data.txt](test04_motion_data.txt) data needed to
    create a plot.
-   [test04\_motion.png](test04_motion.png) a PNG image of the "motion"
    of the generators.

### List of Routines: {#list-of-routines align="center"}

-   **ENERGY\_PLOT** plots the energy as a function of the iterations.
-   **EVOLUTION\_PLOT** plots all points as a function of the
    iterations.
-   **LINE\_CCVT\_LLOYD** carries out the constrained Lloyd algorithm.
-   **LINE\_CCVT\_LLOYD\_STEP** takes one step of Lloyd's constrained
    CVT algorithm.
-   **LINE\_CVT\_ENERGY** computes the CVT energy for a given set of
    generators.
-   **LINE\_CVT\_LLOYD** carries out the Lloyd algorithm.
-   **LINE\_CVT\_LLOYD\_STEP** takes one step of Lloyd's unconstrained
    CVT algorithm.
-   **MOTION\_PLOT** plots the motion as a function of the iterations.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **R8VEC\_SORT\_INSERT\_A** ascending sorts an R8VEC using an
    insertion sort.
-   **R8VEC\_UNIFORM\_AB** returns a scaled pseudorandom R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C source codes](../c_src.html).

------------------------------------------------------------------------

*Last revised on 30 July 2014*
