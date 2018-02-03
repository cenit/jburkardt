DELAUNAY\_TREE\_2D\
Delaunay Triangulation of 2D Data {#delaunay_tree_2d-delaunay-triangulation-of-2d-data align="center"}
=================================

------------------------------------------------------------------------

**DELAUNAY\_TREE\_2D** is a C++ program which reads a file of point
coordinates in 2D and produces a PostScript file containing an image of
the Delaunay triangulation of the points, by Olivier Devillers.

**Warning:** A limitation of the program is that it assumes that the
user's input coordinates are "reasonable" PostScript coordinates!
Reasonable results will be achieved then if both X and Y coordinates are
positive and range from 0 to 1000 or so, say. On the other hand, a user
whose data is in the unit square will get a PostScript file which
actually plots the entire image in a near infinitesimal and useless box!
A reasonable fix is to rescale data so that it lies between 0 and 612.
(The PostScript coordinates, by default, are in units of 1/72 inch, so
8.5 inches wide = 612.)

It would not be hard to correct the code so that the user can input data
with any scaling whatsoever, while the program would (simple) just
rescale it, or (better) insert the appropriate PostScript scaling
commands in the plot file.

In any case, the program is more interesting for being a fairly clean
embodiment of a Delaunay triangulation algorithm, and the author himself
suggests that a user might profitably and easily modify the code to
write out the information defining the triangulation.

### Usage: {#usage align="center"}

 **delaunay\_tree\_2d** &lt; *data.txt* &gt; *data.ps* 
:   reads the point coordinates from *data.txt* and writes a PostScript
    image of the Delaunay triangulation to *data.ps*.

### Languages: {#languages align="center"}

**DELAUNAY\_TREE\_2D** is available in [a C++
version](../../master/delaunay_tree_2d/delaunay_tree_2d.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[DELAUNAY\_LMAP\_2D](../../f_src/delaunay_lmap_2d/delaunay_lmap_2d.md),
a FORTRAN90 program which reads in a pointset and a linear map and
writes out the Delaunay triangulation for the linearly transformed data.

[GEOMPACK](../../master/geompack/geompack.md), a C++ library which
computes the Delaunay triangulation or Voronoi diagram.

[STRIPACK](../../f_src/stripack/stripack.md), a FORTRAN90 library
which can compute the Delaunay triangulation of a set of points on a
sphere.

[TABLE\_DELAUNAY](../../master/table_delaunay/table_delaunay.md), a
C++ program which reads a file of 2d point coordinates and computes the
Delaunay triangulation.

[TABLE\_VORONOI](../../master/table_voronoi/table_voronoi.md), a C++
program which can compute information about the Voronoi diagram of a set
of points stored in a file.

[TRIANGULATION\_DISPLAY\_OPENGL](../../master/triangulation_display_opengl/triangulation_display_opengl.md),
a C++ program which reads files defining a triangulation and displays an
image using Open GL.

[TRIPACK](../../f_src/tripack/tripack.md), a FORTRAN90 library which
can compute the Delaunay triangulation of a set of points.

### Author: {#author align="center"}

Olivier Devillers

### Reference: {#reference align="center"}

1.  <http://www-sop.inria.fr/prisme/logiciel/index.md.en> a software
    download site at INRIA.
2.  Franz Aurenhammer,\
    Voronoi diagrams - a study of a fundamental geometric data
    structure,\
    ACM Computing Surveys,\
    Volume 23, Number 3, pages 345-405, September 1991.
3.  Jean-Daniel Boissonnat, Monique Teillaud,\
    On the randomized construction of the Delaunay tree,\
    Theoretetical Computer Science,\
    Volume 112, pages 339-354, 1993.
4.  Olivier Devillers, Stefan Meiser, Monique Teillaud,\
    Fully dynamic Delaunay triangulation in logarithmic expected time
    per operation,\
    Computational Geometry: Theory and Applications,\
    Volume 2, Number 2, pages 55-80, 1992.
5.  Olivier Devillers, Robust and efficient implementation of the
    Delaunay tree,\
    INRIA Research Report 1619, 1992.

### Source Code: {#source-code align="center"}

-   [delaunay\_tree\_2d.cpp](delaunay_tree_2d.cpp), the source code;

### Examples and Tests: {#examples-and-tests align="center"}

**DEVILLERS\_02\_01000** is a set of 1000 points.

-   [devillers\_02\_01000.txt](devillers_02_01000.txt), the point
    coordinates;
-   [devillers\_02\_01000.png](devillers_02_01000.png), a PNG image of
    the file created by the program from the input data;

**DIAMOND\_02\_00009** is a set of 9 points. Unfortunately, the data is
scaled to lie in the unit box, so **TABLE\_SCALE** was called to rescale
both X and Y to lie between 0 and 612:

-   [devillers\_02\_00009.txt](diamond_02_00009.txt), the point
    coordinates;
-   [devillers\_scaled.txt](diamond_scaled.txt), the rescaled point
    coordinates;
-   [diamond\_02\_00009.png](diamond_02_00009.png), a
    [PNG](../../data/png/png.md) image of the file created by the
    program from the input data;

### List of Routines: {#list-of-routines align="center"}

-   **"+"** is an overloading of the + operator to points.
-   **"-"** is an overloading of the - operator to points.
-   **"\*"** is an overloading of the \* operator to points.
-   **"\^"** is an overloading of the \^ operator to points.
-   **DT\_list::\~DT\_list** is the annihilator for class DT\_list.
-   **DT\_node::conflict** is true if the point is inside the closed
    circumdisk.
-   **point::lineto** writes a record to the PostScript file.
-   **DT\_node::DT\_node** ( void ) is a creation routine for class
    DT\_node.
-   **DT\_node::DT\_node** ( DT\_node\* root, ind i ) is a creation
    routines for class DT\_node.
-   **DT\_node::DT\_node** ( DT\_node\* f, point \*c, ind i ) is a
    creation routine for class DT\_node.
-   **DT\_node::find\_conflict** returns an alive node in conflict.
-   **DT\_node:output** ?
-   **Delaunay\_tree::output** outputs the Delaunay triangulation.
-   **DT\_node::output2** ?
-   **Delaunay\_tree::output2** outputs the Delaunay triangulation.
-   **Delaunay\_tree::Delaunay\_tree** ( void ) initializes the Delaunay
    tree.
-   **Delaunay\_tree::\~Delaunay\_tree** is the destructor for class
    Delaunay\_tree.
-   **Delaunay\_tree::operator=+** is the insertion operator for class
    Delaunay\_tree.
-   **MAIN** is the main program for delaunay\_tree\_2d.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 16 March 2006.*
