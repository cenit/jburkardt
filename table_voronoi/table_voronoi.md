TABLE\_VORONOI\
Voronoi Diagram Data {#table_voronoi-voronoi-diagram-data align="center"}
====================

------------------------------------------------------------------------

**TABLE\_VORONOI** is a C++ program which reads in a dataset describing
a 2D pointset, and prints out information defining the Voronoi diagram
of the pointset.

The information describing the 2D pointset is in the simple TABLE
format.

**TABLE\_VORONOI** is based on the GEOMPACK library of Barry Joe, which
computes the Delaunay triangulation. The main work that
**TABLE\_VORONOI** does is to analyze that Delaunay information and work
out the location of the Voronoi vertices, and their specific arrangement
around each of the original data nodes.

**TABLE\_VORONOI** is a work in progress; the output is currently simply
printed, which is not very useful except for toy problems; printed
output is of very little use for big problems. To handle big,
interesting problems, I have to think about how to store this
information in a useful and accessible data structure.

Moreover, I haven't thought enough about how to deal with the inevitable
"infinite" Voronoi cells.

The program begins with the pointset, of which a typical element is a
point **G**. Each **G** generates a Voronoi polygon (or semi-infinite
region, which we will persist in calling a polygon). A typical vertex of
the polygon is called **V**. For the semi-infinite regions, we have a
vertex at infinity, but it's really not helpful to store a vertex
(Inf,Inf), since we have lost information about the direction from which
we reach that infinite vertex. We will have to treat these special
regions with a little extra care.

We are interested in computing the following quantities:

-   **G\_DEGREE**, for generator **G**, the degree (number of vertices)
    of the Voronoi polygon;
-   **G\_START**, for generator **G**, the index of the first Voronoi
    vertex in a traversal of the sides of the Voronoi polygon;
-   **G\_FACE**, for all generators **G**, the sequence of Voronoi
    vertices in a traversal of the sides of the Voronoi polygon. A
    traversal of a semi-infinite polygon begins at an "infinite" vertex,
    lists the finite vertices, and then ends with a (different) infinite
    vertex. Infinite vertices are given negative indexes.
-   **V\_NUM**, the number of (finite) Voronoi vertices **V**;
-   **V\_XY**, for each finite Voronoi vertex **V**, the XY coordinates.
-   **I\_NUM**, the number of Voronoi vertices at infinity;
-   **I\_XY**, the "direction" associated with each Voronoi vertex at
    infinity.

So if we have to draw a semi-infinite region, we start at infinity. We
then need to draw a line from infinity to vertex \#2. We do so by
drawing a line in the appropriate direction, stored in I\_XY. Having
safely reached finite vertex \#2, we can connect the finite vertices,
until it is time to draw another line to infinity, this time in another
direction, also stored in I\_XY.

### Usage: {#usage align="center"}

 **table\_voronoi** *file\_name.xy* 
:   reads the data in *file\_name.xy*, computes and prints out the
    Voronoi information.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TABLE\_VORONOI** is available in [a C++
version](../../master/table_voronoi/table_voronoi.md) and [a
FORTRAN90 version](../../f_src/table_voronoi/table_voronoi.md) and [a
MATLAB version](../../m_src/table_voronoi/table_voronoi.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[GEOMPACK](../../master/geompack/geompack.md), a C++ library which
computes the Delaunay triangulation or Voronoi diagram.

[TABLE](../../data/table/table.md), a file format which is used for
the input files.

[TABLE\_BORDER](../../master/table_border/table_border.md), a C++
program which can read a TABLE file and add zero entries corresponding
to a single layer of boundary data.

[TABLE\_DELAUNAY](../../master/table_delaunay/table_delaunay.md), a
C++ program which reads a file of 2d point coordinates and computes the
Delaunay triangulation.

[TABLE\_IO](../../master/table_io/table_io.md), a C++ library which
can read or write a TABLE file.

[TABLE\_LATINIZE](../../master/table_latinize/table_latinize.md), a
C++ program which can read a TABLE file and write out a "latinized"
version.

[TABLE\_QUALITY](../../master/table_quality/table_quality.md), a C++
program which can read a TABLE file and print out measures of the
quality of dispersion of the points.

[TABLE\_UNBORDER](../../master/table_unborder/table_unborder.md), a
C++ program which can be used to remove the border from a table file.

### Reference: {#reference align="center"}

1.  Franz Aurenhammer,\
    Voronoi diagrams - a study of a fundamental geometric data
    structure,\
    ACM Computing Surveys,\
    Volume 23, Number 3, pages 345-405, September 1991.
2.  Barry Joe,\
    GEOMPACK - a software package for the generation of meshes using
    geometric algorithms,\
    Advances in Engineering Software,\
    Volume 13, pages 325-331, 1991.

### Source Code: {#source-code align="center"}

-   [table\_voronoi.cpp](table_voronoi.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [diamond\_02\_00009.xy](diamond_02_00009.xy), a simple data file of
    9 points.
-   [diamond\_02\_00009\_output.txt](diamond_02_00009_output.txt), the
    output file.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for TABLE\_VORONOI.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **DIAEDG** chooses a diagonal edge.
-   **DTABLE\_DATA\_READ** reads the data from a real TABLE file.
-   **DTABLE\_HEADER\_READ** reads the header from a real TABLE file.
-   **DTRIS2** constructs a Delaunay triangulation of 2D vertices.
-   **FILE\_COLUMN\_COUNT** counts the number of columns in the first
    line of a file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **HANDLE\_FILE** handles a single file.
-   **I4\_MAX** returns the maximum of two integers.
-   **I4\_MIN** returns the smaller of two integers.
-   **I4\_MODP** returns the nonnegative remainder of integer division.
-   **I4\_SIGN** returns the sign of an integer.
-   **I4\_WRAP** forces an integer to lie between given limits by
    wrapping.
-   **I4MAT\_TRANSPOSE\_PRINT** prints an integer matrix, transposed.
-   **I4MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an integer matrix,
    transposed.
-   **I4VEC\_INDICATOR** sets an integer vector to the indicator vector.
-   **I4VEC\_PRINT** prints an integer vector.
-   **LINE\_EXP\_NORMAL\_2D** computes the unit normal vector to a line
    in 2D.
-   **LRLINE** determines where a point lies in relation to a directed
    line.
-   **PERM\_CHECK** checks that a vector represents a permutation.
-   **PERM\_INV** inverts a permutation "in place".
-   **R8\_EPSILON** returns the round off unit for double precision
    arithmetic.
-   **R8\_MAX** returns the maximum of two real values.
-   **R8\_MIN** returns the minimum of two real values.
-   **R82VEC\_PERMUTE** permutes an R2 vector in place.
-   **R82VEC\_SORT\_HEAP\_INDEX\_A** does an indexed heap ascending sort
    of an R2 vector.
-   **R8MAT\_TRANSPOSE\_PRINT** prints a real matrix, transposed.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of a real matrix,
    transposed.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_R8** reads a real number from a string.
-   **S\_TO\_R8VEC** reads a real vector from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **SWAPEC** swaps diagonal edges until all triangles are Delaunay.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TIMESTRING** returns the current YMDHMS date as a string.
-   **TRI\_AUGMENT** augments the triangle data using vertices at
    infinity.
-   **TRIANGLE\_CIRCUMCENTER\_2D** computes the circumcenter of a
    triangle in 2D.
-   **VBEDG** determines which boundary edges are visible to a point.
-   **VORONOI\_DATA** returns data defining the Voronoi diagram.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 12 November 2006.*
