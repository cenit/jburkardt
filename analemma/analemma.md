ANALEMMA\
Evaluating the Equation of Time {#analemma-evaluating-the-equation-of-time align="center"}
===============================

------------------------------------------------------------------------

**ANALEMMA** is a C++ program which evaluates the equation of time, by
Brian Tung.

The program can compute and plot an analemma curve for various orbital
parameters. The analemma is the curve traced by the position of the sun,
measured at clock noon, over a year.

The program creates data and command files which must be processed by
the GNUPLOT program:

            gnuplot < analemma_commands.txt
          

which will create PNG images of the analemma, the declination, and the
equation of time.

### Usage: {#usage align="center"}

> **analemma** *options*

where the allowable options include

-   **-e** *ecc*, the eccentricity;
-   **-l** *lon*, the perihelion longitude in degrees;
-   **-o** *obliq*, the axial obliquity in degrees;
-   **-h** *ecc*, print the usage information;

The program with no options uses the following default values:

-   eccentricity = 0.01671;
-   longitude of perihelion = 1.347 radians = 77.18 degrees;
-   axial obliquity = 0.4091 radians = 23.44 degrees;

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**ANALEMMA** is available in [a C
version](../../c_src/analemma/analemma.md) and [a C++
version](../../master/analemma/analemma.md) and [a FORTRAN77
version](../../f77_src/analemma/analemma.md) and [a FORTRAN90
version](../../f_src/analemma/analemma.md) and [a MATLAB
version](../../m_src/analemma/analemma.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CALENDAR\_RD](../../master/calendar_rd/calendar_rd.md), a C++
program which computes the representation of a given date in a number of
calendrical systems, by Edward Reingold, Nachum Dershowitz.

[CALPAK](../../master/calpak/calpak.md), a C++ library which makes
various calendar calculations;

[DATES](../../datasets/dates/dates.md), a dataset directory which
contains lists of dates in various calendar systems.

[GNUPLOT](../../master/gnuplot/gnuplot.md), C++ programs which
illustrate the use of the gnuplot graphics program.

[WEEKDAY](../../master/weekday/weekday.md), a C++ library which
determines the day of the week corresponding to a given date, such as 14
October 1066, Julian calendar, ... which was a Saturday.

### Author: {#author align="center"}

Original C version by Brian Tung. C++ version by John Burkardt.

### Reference: {#reference align="center"}

1.  Brian Tung,\
    Figure Eight in the Sky, a new perspective on an old fascination,\
    Astronomical Games, August 2002,\
    http://www.astronomycorner.net/games/analemma.md.

### Source Code: {#source-code align="center"}

-   [analemma.cpp](analemma.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [analemma\_data.txt](analemma_data.txt) the data file.
-   [analemma\_commands.txt](analemma_commands.txt), the command file.
-   [analemma.png](analemma.png), the PNG file of the analemma, created
    by GNUPLOT.
-   [declination.png](declination.png), the PNG file of the declination,
    created by GNUPLOT.
-   [eot.png](eot.png), the PNG file of the equation of time, created by
    GNUPLOT.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for ANALEMMA.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 06 January 2013.*
