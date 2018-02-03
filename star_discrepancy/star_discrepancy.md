STAR\_DISCREPANCY\
The Star Discrepancy of a Pointset {#star_discrepancy-the-star-discrepancy-of-a-pointset align="center"}
==================================

------------------------------------------------------------------------

**STAR\_DISCREPANCY** is a C++ program which computes bounds on the star
discrepancy of an M-dimensional set of N points contained in the unit
hypercube, by Eric Thiemard.

The pointset is stored in a file, in the TABLE format.

The star discrepancy is a commonly cited statistic for determining how
uniformly a pointset is distributed over a region. For convenience, this
region is usually taken as the unit hypercube; **STAR\_DISCREPANCY**
will assume that datasets under investigation are meant to fill up the
unit hypercube.

If the pointset to be investigated actually lies in some other
hypercube, a simply translation and rescaling may be enough to transform
the data. This will probably NOT be satisfactory if the original region
is rectangular, but has sides of different length, or if the region is
not rectangular.

The discrepancy measures the worst error that would be made in
estimating the area of a subregion of the hypercube by simply noting the
fraction of the pointset contained in the subregion. If arbitrary
subregions were allowed, then it would always be possible to make this
error equal to 1 (just take the region consisting of the hypercube minus
the pointset.) Since any "reasonable" area can be arbitrarily well
approximated by rectangles, the star discrepancy calculation uses only
rectangular subregions, whose sides are aligned with coordinates
directions, and one of whose corners is at the origin.

Formally, the star discrepancy of a pointset of **n** points is
symbolized by **D~n~^\*^** and defined as

> **D~n~^\*^ = supremum ( P in I\* ) | ( A(P,x) / n ) - lambda ( P ) |**

Here, **I\*** is the set of all M-dimensional subintervals of the form
\[0,p1\] x \[0,p2\] x ... x \[0,ps\] where every **p** is between 0 and
1; **P** is any such subinterval; **lambda(P)** is the volume of the
subinterval, **A(P,x)** is the number of points of the point set **x**
that occur in **P**, and **n** is the number of points in **x**.

Clearly, the star discrepancy is measuring how badly the pointset
estimates the volume of a subinterval. This worst error is somewhere
between 0 (absolutely no error ever) and 1 (totally missing the volume
of the unit hypercube). A value of 0.25, for instance, means that there
is a subinterval in the unit hypercube for which the difference between
its true and estimated volumes is 0.25. (It might have a volume of 0.80,
and be estimated at 0.55, for instance, or a volume of 0.05 that is
estimated at 0.30.)

The original program is by Eric Thiemard. Changes have been made to the
program so that it compiles under C++, uses a simpler datafile format,
and infers the dimensionality of the data from the information in the
datafile.

### Usage: {#usage align="center"}

 **star\_discrepancy** *epsilon n table\_file* 

:   -   *epsilon* is an error tolerance between 0 and 1, and indicates
        the allowable error in the estimate;
    -   *n* is the number of points to be read from the file;
    -   *table\_file* is a file in [table
        format](../../data/table/table.md) containing at least *n*
        points. The dimensionality of the pointset is inferred from the
        file.

 **star\_discrepancy** *epsilon n table\_file num den* 
:   where the two extra arguments are:
    -   *num* the optional balance numerator;
    -   *den* the optional balance denominator;

### Languages: {#languages align="center"}

**STAR\_DISCREPANCY** is available in [a C
version](../../c_src/star_discrepancy/star_discrepancy.md) and [a C++
version](../../master/star_discrepancy/star_discrepancy.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[DIAPHONY](../../master/diaphony/diaphony.md), a C++ program which
reads a file of N points in M dimensions and computes its diaphony, a
measure of point dispersion.

[TABLE\_LATINIZE](../../master/table_latinize/table_latinize.md), a
C++ program which can read a TABLE file and write out a "latinized"
version.

[TABLE\_QUALITY](../../master/table_quality/table_quality.md), a C++
program which can read a TABLE file and print out measures of the
quality of dispersion of the points.

### Author: {#author align="center"}

Eric Thiemard

### Reference: {#reference align="center"}

1.  <http://rosowww.epfl.ch/papers/discrbound2/>, the source code web
    site.
2.  Eric Thiemard,\
    An Algorithm to Compute Bounds for the Star Discrepancy,\
    Journal of Complexity,\
    Volume 17, pages 850-880, 2001.

### Source Code: {#source-code align="center"}

-   [star\_discrepancy.cpp](star_discrepancy.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [halton\_02\_00010.txt](halton_02_00010.txt), 10 Halton points in
    2D.
-   [halton\_02\_00010\_output.txt](halton_02_00010_output.txt), the
    result of the command

    > **star\_discrepancy 0.001 10 halton\_02\_00010.txt**

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for the star discrepancy bound
    computation.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **DATA\_READ** reads coordinate data from a file.
-   **DECOMPOSITION** carries out the decomposition of a subinterval.
-   **EXPLORE** ???
-   **FASTEXPLORE** ???
-   **FILE\_COLUMN\_COUNT** counts the number of columns in the first
    line of a file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **FILE\_USAGE** lists the legal input file format.
-   **FREETREE** frees storage associated with a tree.
-   **INITLEX** ???
-   **INITPARAMETERS** sets program parameters based on user input and
    defaults.
-   **INSERTLEX** ???
-   **LOWBOUND** ???
-   **MEMORY** prints a message and terminates on memory allocation
    errors.
-   **QUICKSORT** uses Quicksort to sort an array.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **SUBTREE** ???
-   **SUPERTREE** ???
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TRAITER** ???
-   **USAGE** prints usage information for the program.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 12 November 2006.*
