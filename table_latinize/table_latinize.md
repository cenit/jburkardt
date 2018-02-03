TABLE\_LATINIZE\
Force a Dataset to be a Latin Hypercube {#table_latinize-force-a-dataset-to-be-a-latin-hypercube align="center"}
=======================================

------------------------------------------------------------------------

**TABLE\_LATINIZE** is a C++ program which allows the user to specify a
file of data to be read in and adjusted to form a Latin hypercube.

The data in the file represents N points in M-dimensional space.

The algorithm is actually very simple. In each spatial dimension, the
point coordinates are sorted, and then replaced by the appropriate
values for a Latin hypercube. In particular, if there are four points,
then in every coordinate, the four points will be assigned values of
1/8, 3/8, 5/8 and 7/8 (in some order). The hope is that if the initial
dataset has some nice dispersion property, then the resulting adjusted
dataset will inherit some of this dispersion as well; in particular,
more dispersion than typically seen in an arbitrary Latin hypercube.

### Usage: {#usage align="center"}

 **table\_latinize** *file(s)* 
:   reads the user's data file(s) and writes "latinized" versions which
    will have an extension of "latin.txt".

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TABLE\_LATINIZE** is available in [a C++
version](../../cpp_src/table_latinize/table_latinize.html) and [a
FORTRAN90 version](../../f_src/table_latinize/table_latinize.html) and
[a MATLAB version](../../m_src/table_latinize/table_latinize.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BOX\_BEHNKEN](../../cpp_src/box_behnken/box_behnken.html), a C++
library which computes a Box-Behnken design, that is, a set of arguments
to sample the behavior of a function of multiple parameters;

[LATINIZE](../latinize/latinize.html), a C++ library which carries out
the calculations needed by TABLE\_LATINIZE.

[TABLE](../../data/table/table.html), a file format which is used for
the input and output of **TABLE\_LATINIZE**.

[TABLE\_DELAUNAY](../../cpp_src/table_delaunay/table_delaunay.html), a
C++ program which reads a file of 2d point coordinates and computes the
Delaunay triangulation.

[TABLE\_IO](../../cpp_src/table_io/table_io.html), a C++ library which
can read or write a TABLE file.

[TABLE\_QUALITY](../../cpp_src/table_quality/table_quality.html), a C++
program which can read a TABLE file and print out measures of the
quality of dispersion of the points.

### Reference: {#reference align="center"}

1.  Yuki Saka, Max Gunzburger, John Burkardt,\
    Latinized, Improved LHS, and CVT Point Sets in Hypercubes,\
    International Journal of Numerical Analysis and Modeling,\
    Volume 4, Number 3-4, 2007, pages 729-743,

### Source Code: {#source-code align="center"}

-   [table\_latinize.cpp](table_latinize.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**CVT\_02\_00010** is a set of 10 CVT points in 2D:

-   [cvt\_02\_00010.txt](cvt_02_00010.txt), the original set of 10
    points in 2D.
-   [cvt\_02\_00010.png](cvt_02_00010.png), a
    [PNG](../../data/png/png.html) image of the points.
-   [cvt\_02\_00010.latin.txt](cvt_02_00010.latin.txt), the latinized
    version of the dataset.
-   [cvt\_02\_00010.latin.png](cvt_02_00010.latin.png), a PNG image of
    the latinized points.
-   [cvt\_02\_00010\_output.txt](cvt_02_00010_output.txt), the printed
    output from the command "latinize cvt\_02\_00010.txt".

**CVT\_03\_00007** is a set of 7 CVT points in 3D:

-   [cvt\_03\_00007.txt](cvt_03_00007.txt), 7 points in 3D.
-   [cvt\_03\_00007.latin.txt](cvt_03_00007.latin.txt), the latinized
    version of the dataset.
-   [cvt\_03\_00007\_output.txt](cvt_03_00007_output.txt), the printed
    output from the command "latinize cvt\_03\_00007.txt".

**CVT\_03\_00056** is a set of 56 CVT points in 3D:

-   [cvt\_03\_00056.txt](cvt_03_00056.txt), 56 points in 3D.
-   [cvt\_03\_00056.latin.txt](cvt_03_00056.latin.txt), the latinized
    version of the dataset.
-   [cvt\_03\_00056\_output.txt](cvt_03_00056_output.txt), the printed
    output from the command "latinize cvt\_03\_00056.txt".

**CVT\_07\_00100** is a set of 100 CVT points in 7D:

-   [cvt\_07\_00100.txt](cvt_07_00100.txt), 100 points in 7D.
-   [cvt\_07\_00100.latin.txt](cvt_07_00100.latin.txt), the latinized
    version of the dataset.
-   [cvt\_07\_00100\_output.txt](cvt_07_00100_output.txt), the printed
    output from the command "latinize cvt\_07\_00100.txt".

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for TABLE\_LATINIZE.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 23 September 2005.*
