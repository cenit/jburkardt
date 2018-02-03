IMAGE\_EDGE\
Edge Detection in Images {#image_edge-edge-detection-in-images align="center"}
========================

------------------------------------------------------------------------

**IMAGE\_EDGE** is a C++ library which demonstrates the detection of
edges in an image.

NEWS is a particularly simple edge detection scheme, which compares the
North, East, West, and South neighbors of a pixel to determine if the
pixel lies along an edge.

There are many sophisticated edge detection algorithms, and MATLAB has
many of them built into its image processing toolbox. The purpose of
these examples is simply to demonstrate how a simple version of such
edge detection schemes works.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**IMAGE\_EDGE** is available in [a C
version](../../c_src/image_edge/image_edge.html)[and]{}[a C++
version](../../cpp_src/image_edge/image_edge.html)[and]{}[a FORTRAN77
version](../../f77_src/image_edge/image_edge.html)[and]{}[a FORTRAN90
version](../../f_src/image_edge/image_edge.html)[and]{}[a MATLAB
version](../../m_src/image_edge/image_edge.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[EDGE](../../cpp_src/edge/edge.html), a C++ library which defines some
test functions in 1D, 2D and 3D for the detection of edges or
discontinuities. It uses GNUPLOT to display the jumps in curves and
surfaces.

[IMAGE\_COMPONENTS](../../cpp_src/image_components/image_components.html),
a C++ library which seeks the connected "nonzero" or "nonblack"
components of an image or integer vector, array or 3D block.

[IMAGE\_DENOISE](../../cpp_src/image_denoise/image_denoise.html), a C++
library which applies simple filtering techniques to remove noise from
an image.

[PBMA\_IO](../../cpp_src/pbma_io/pbma_io.html), a C++ library which
handles the ASCII Portable Bit Map (PBM) format.

[PGMA\_IO](../../cpp_src/pgma_io/pgma_io.html), a C++ library which
handles the ASCII Portable Gray Map (PGM) format.

### Reference: {#reference align="center"}

1.  Jonas Gomes, Luiz Velho,\
    Image Processing for Computer Graphics,\
    Springer, 1997,\
    ISBN: 0387948546,\
    LC: T385.G65.
2.  William Pratt,\
    Digital Image Processing,\
    Second Edition,\
    Wiley, 1991,\
    ISBN13: 978-0471857662,\
    LC: TA1632.P7.
3.  Barry Wilkinson, Michael Allen,\
    Parallel Programming: Techniques and Applications using Networked
    Workstations and Parallel Computers,\
    Pearson/Prentice Hall, 2005,\
    ISBN: 0-13-140563-2,\
    LC: QA76.642.W54.

### Source Code: {#source-code align="center"}

-   [image\_edge.cp](image_edge.cpp), the source code.
-   [image\_edge.hpp](image_edge.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [image\_edge\_prb.cpp](image_edge_prb.cpp), a sample calling
    program.
-   [image\_edge\_prb\_output.txt](image_edge_prb_output.txt), the
    output file.
-   [coins.ascii.pgm](coins.ascii.pgm), an ASCII PGM file containing a
    grayscale image of coins.
-   [coins.png](coins.png), a PNG version of the image.
-   [coin\_edges.ascii.pbm](coin_edges.ascii.pbm), an ASCII PBM file
    containing a bitmap image of coins.
-   [coin\_edges.png](coin_edges.png), a PNG version of the image.

### List of Routines: {#list-of-routines align="center"}

-   **I4\_HUGE** returns a "huge" I4.
-   **I4MAT\_HISTOGRAM** computes a histogram of the elements of an
    I4MAT.
-   **I4MAT\_MAX** returns the maximum of an I4MAT.
-   **NEWS** demonstrates the NEWS stencil for edge detection.
-   **PBMA\_WRITE** writes the header and data for an ASCII PBM file.
-   **PBMA\_WRITE\_DATA** writes the data for an ASCII PBM file.
-   **PBMA\_WRITE\_HEADER** writes the header of an ASCII PBM file.
-   **PGMA\_READ\_DATA** reads the data in an ASCII PGM file.
-   **PGMA\_READ\_HEADER** reads the header of an ASCII PGM file.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last modified on 26 December 2010.*
