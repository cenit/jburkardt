TRIANGLE\_HISTOGRAM\
Histograms of Triangle Data {#triangle_histogram-histograms-of-triangle-data align="center"}
===========================

------------------------------------------------------------------------

**TRIANGLE\_HISTOGRAM** is a C++ program which creates a histogram of
data in the unit triangle.

The unit triangle has the vertices (1,0), (0,1), (0,0).

"Data" in the unit triangle is assumed to take the form of a file,
containing a list of points that lie in the triangle.

The sides of the triangle can each be divided into N subintervals, and
by connecting them, the result is N\*N subtriangles of the same area.

The program then determines the number of points that lie within each
subtriangle, and prints this list.

This program is particularly suitable for investigating whether a set of
points in the unit triangle are close to a uniformly sampling, or if
there is some bias in the selection.

### Usage: {#usage align="center"}

> **triangle\_histogram** *data\_file* *n*

where

-   *data\_file* is the file containing the sample points;
-   *n* is the number of subintervals into which each side of the unit
    triangle is to be divided.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TRIANGLE\_HISTOGRAM** is available in [a C++
version](../../master/triangle_histogram/triangle_histogram.md) and
[a FORTRAN90
version](../../f_src/triangle_histogram/triangle_histogram.md) and [a
MATLAB version.](../../m_src/triangle_histogram/triangle_histogram.md)

### Related Data and Programs: {#related-data-and-programs align="center"}

[RANDOM\_DATA](../../master/random_data/random_data.md), a C++
program which produces random samples from a number of regions,
including triangles.

[TRIANGLE\_ANALYZE](../../master/triangle_analyze/triangle_analyze.md),
a C++ program which reads a triangle defined in a file, and uses the
triangle\_properties() library to compute angles, area, centroid,
circumcircle, edge lengths, incircle, orientation, orthocenter, and
quality.

[TRIANGLE\_MONTE\_CARLO](../../master/triangle_monte_carlo/triangle_monte_carlo.md),
a C++ program which uses the Monte Carlo method to estimate integrals
over a triangle.

[TRIANGLE\_SAMPLES](../../datasets/triangle_samples/triangle_samples.md),
a dataset directory which contains sets of sample points drawn from the
unit triangle.

### Reference: {#reference align="center"}

1.  Reuven Rubinstein,\
    Monte Carlo Optimization, Simulation and Sensitivity of Queueing
    Networks,\
    Krieger, 1992,\
    ISBN: 0894647644,\
    LC: QA298.R79.
2.  Greg Turk,\
    Generating Random Points in a Triangle,\
    in Graphics Gems I,\
    edited by Andrew Glassner,\
    AP Professional, 1990,\
    ISBN: 0122861663,\
    LC: T385.G697

### Source Code: {#source-code align="center"}

-   [triangle\_histogram.cpp](triangle_histogram.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**B10000** is a "bad" set of sample points.

-   [b10000.txt](b10000.txt), the sample points.
-   [b10000\_output.txt](b10000_output.txt), output from the command
    "triangle\_histogram b10000.txt 4".

**G10000** is a "good" set of sample points.

-   [g10000.txt](g10000.txt), the sample points.
-   [g10000\_output.txt](g10000_output.txt), output from the command
    "triangle\_histogram g10000.txt 4".

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for TRIANGLE\_HISTOGRAM.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **FILE\_COLUMN\_COUNT** counts the columns in the first line of a
    file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4VEC\_MAX** returns the value of the maximum element in an I4VEC.
-   **I4VEC\_MEAN** returns the mean of an I4VEC.
-   **I4VEC\_MIN** returns the value of the minimum element in an I4VEC.
-   **I4VEC\_STD** returns the standard deviation of an I4VEC.
-   **R8MAT\_DATA\_READ** reads the data from an R8MAT file.
-   **R8MAT\_HEADER\_READ** reads the header from an R8MAT file.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 14 August 2009.*
