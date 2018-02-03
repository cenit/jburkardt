LATINIZE\
Force a Dataset to be a Latin Hypercube {#latinize-force-a-dataset-to-be-a-latin-hypercube align="center"}
=======================================

------------------------------------------------------------------------

**LATINIZE** is a C++ library which adjusts an M dimensional dataset of
N points so that it forms a Latin hypercube.

On output, each row of the table will have the properties that:

1.  the minimum and maximum row values are the same as on input;
2.  the row contains N evenly spaced values between the minimum and
    maximum.
3.  in each row, the elements retain their ordering.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages {#languages align="center"}

**LATINIZE** is available in [a C
version](../../c_src/latinize/latinize.html) and [a C++
version](../../cpp_src/latinize/latinize.html) and [a FORTRAN77
version](../../f77_src/latinize/latinize.html) and [a FORTRAN90
version](../../f_src/latinize/latinize.html) and [a MATLAB
version](../../m_src/latinize/latinize.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BOX\_BEHNKEN](../../cpp_src/box_behnken/box_behnken.html), a C++
library which computes a Box-Behnken design, that is, a set of arguments
to sample the behavior of a function of multiple parameters;

[LATIN\_CENTER](../../cpp_src/latin_center/latin_center.html), a C++
library which computes Latin Square datasets by choosing the center of
each square.

[LATIN\_EDGE](../../cpp_src/latin_edge/latin_edge.html), a C++ library
which computes Latin Square datasets by choosing the edge of each
square.

[LATIN\_RANDOM](../../cpp_src/latin_random/latin_random.html), a C++
library which computes Latin Square datasets by choosing a random point
of each square.

[TABLE](../../data/table/table.html), a data format which is used to
store the input and output files used by the program.

[TABLE\_LATINIZE](../../cpp_src/table_latinize/table_latinize.html), a
C++ program which allows the name of the data file to be specified on
the command line.

### Reference: {#reference align="center"}

1.  M D McKay, W J Conover, R J Beckman,\
    A Comparison of Three Methods for Selecting Values of Input
    Variables in the Analysis of Output From a Computer Code,\
    Technometrics,\
    Volume 21, pages 239-245, 1979.
2.  Yuki Saka, Max Gunzburger, John Burkardt,\
    Latinized, Improved LHS, and CVT Point Sets in Hypercubes,\
    International Journal of Numerical Analysis and Modeling,\
    Volume 4, Number 3-4, 2007, pages 729-743,

### Source Code: {#source-code align="center"}

-   [latinize.cpp](latinize.cpp), the source code.
-   [latinize.hpp](latinize.hpp), the include file.

### Examples: {#examples align="center"}

-   [latinize\_prb.cpp](latinize_prb.cpp), the test code.
-   [latinize\_prb\_output.txt](latinize_prb_output.txt), the output
    file.

**CVT\_02\_00010** is a set of 10 CVT points in 2D:

-   [cvt\_02\_00010.txt](cvt_02_00010.txt), the original set of 10
    points in 2D.
-   [cvt\_02\_00010.png](cvt_02_00010.png), a
    [PNG](../../data/png/png.html) image of the points.
-   [cvt\_02\_00010.latin.txt](cvt_02_00010.latin.txt), the latinized
    version of the dataset.
-   [cvt\_02\_00010.latin.png](cvt_02_00010.latin.png), a
    [PNG](../../data/png/png.html) image of the latinized points.

**CVT\_03\_00007** is a set of 7 CVT points in 3D:

-   [cvt\_03\_00007.txt](cvt_03_00007.txt), 7 points in 3D.
-   [cvt\_03\_00007.latin.txt](cvt_03_00007.latin.txt), the latinized
    version of the dataset.

**CVT\_03\_00056** is a set of 56 CVT points in 3D:

-   [cvt\_03\_00056.txt](cvt_03_00056.txt), 56 points in 3D.
-   [cvt\_03\_00056.latin.txt](cvt_03_00056.latin.txt), the latinized
    version of the dataset.

**CVT\_07\_00100** is a set of 100 CVT points in 7D:

-   [cvt\_07\_00100.txt](cvt_07_00100.txt), 100 points in 7D.
-   [cvt\_07\_00100.latin.txt](cvt_07_00100.latin.txt), the latinized
    version of the dataset.

### List of Routines: {#list-of-routines align="center"}

-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **FILE\_COLUMN\_COUNT** counts the columns in the first line of a
    file.
-   **FILE\_NAME\_EXT\_SWAP** replaces the current "extension" of a file
    name.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **R8MAT\_DATA\_READ** reads the data from an R8MAT file.
-   **R8MAT\_HEADER\_READ** reads the header from an R8MAT file.
-   **R8MAT\_LATINIZE** "latinizes" a real table dataset.
-   **R8MAT\_PRINT** prints an R8MAT.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **R8MAT\_TRANSPOSE\_PRINT** prints an R8MAT, transposed.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **R8MAT\_WRITE** writes an R8MAT file.
-   **R8VEC\_SORT\_HEAP\_INDEX\_A** does an indexed heap ascending sort
    of an R8VEC.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 23 January 2012.*
