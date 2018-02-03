ANN\_TO\_FIG\
ANN Search Tree Visualization {#ann_to_fig-ann-search-tree-visualization align="center"}
=============================

------------------------------------------------------------------------

**ANN\_TO\_FIG** is a C++ program which displays an image of the search
tree used by the ANN program.

ANN\_TO\_FIG expects as input a dump file created by the ANN\_TEST
program. It creates a file in the FIG format, which can be displayed by
the XFIG program, or converted to other formats using the FIG2DEV
program.

### Usage: {#usage align="center"}

> ann\_to\_fig -upi*scale* -x*xoffset* -y*yoffset* -sz*size* -dx*dimx*
> -dx*dimy* -sl*dim AND value* -ps*pointsize* file

reads the **ANN\_TEST** dump file *file.dmp* and creates the **FIG**
format file *file.fig*.

 -upi *scale* 
:   specifies the number of FIG units per inch (default is 1200);

 -x *xoffset* 
:   sets the x offset of the bounding box (default 1 inch).

 -y *yoffset* 
:   sets the y offset of the bounding box (default 1 inch).

 -sz *size* 
:   specifies the length of the longer side of the box (default 5
    inches).

 -dx *dimx* 
:   the first plane dimension (default is "0", meaning the first
    coordinate);

 -dy *dimy* 
:   the second plane dimension (default is "1", meaning the second
    coordinate);

 -sl *dim AND value* 
:   specifies a slicing pair as a dimension and a slicing value.

 -ps *pointsize* 
:   specifies the radius of circles used for drawing points (default is
    10 FIG units).

### Languages: {#languages align="center"}

**ANN\_TO\_FIG** is available in [a C++
version](../../cpp_src/ann_to_fig/ann_to_fig.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[ANN](../../cpp_src/ann/ann.html), a C++ library which rapidly
approximates the nearest neighbor of a point.

[ANN\_TEST](../../cpp_src/ann_test/ann_test.html), a C++ program which
uses the ANN library, and carries out approximate nearest neighbor
computations.

[FIG](../../data/fig/fig.html), a data directory which contains examples
and a description of the FIG format.

### Author: {#author align="center"}

David Mount, Sunil Arya.

### Reference: {#reference align="center"}

1.  David Mount,\
    The ANN Programming Manual.
2.  Sunil Arya, David Mount, Nathan Netanyahu, Ruth Silverman, Angela
    Wu,\
    An Optimal Algorithm for Approximate Nearest Neighbor Searching in
    Fixed Dimensions,\
    Journal of the ACM,\
    Volume 45, Number 6, November 1998, pages 891-923.
3.  <http://www.cs.umd.edu/~mount/ANN/>, the web site.
4.  [http://www.xfig.org](http://www.xfig.org/)\
    The XFIG Home Page.

### Source Code: {#source-code align="center"}

-   [ann\_to\_fig.cpp](ann_to_fig.cpp), the source code;

### Examples and Tests: {#examples-and-tests align="center"}

-   [test3.dmp](test3.dmp), a dump file created by **ANN\_TEST**;
-   [test3.fig](test3.fig), the FIG file of the search tree, created by
    the command

                    ann_to_fig test3
                  

-   [test3.png](test3.png), a PNG image of the FIG file, created by the
    command

                    fig2dev -L png test3.fig > test3.png
                  

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 15 May 2006.*
