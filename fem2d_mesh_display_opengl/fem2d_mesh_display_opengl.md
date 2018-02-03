FEM2D\_MESH\_DISPLAY\_OPENGL\
Display a Polygonal Mesh Using OpenGL {#fem2d_mesh_display_opengl-display-a-polygonal-mesh-using-opengl align="center"}
=====================================

------------------------------------------------------------------------

**FEM2D\_MESH\_DISPLAY\_OPENGL** is a C++ program which reads the name
of two data files defining a polygonal mesh, reads the data, and
displays the mesh using OPENGL.

The files defining the mesh consist of one file containing the
coordinates of the points, and a second file that lists the indices of
the nodes making up each element. All the elements in the mesh must have
the same order, that is, the number of vertices.

### Usage: {#usage align="center"}

> **fem2d\_mesh\_display\_opengl** *prefix*

where *prefix* is the common filename prefix:

-   *prefix***\_nodes.txt**, the node coordinates;
-   *prefix***\_elements.txt**, the element definitions.

reads the node data from *nodes.txt*, the element data from
*elements.txt* and displays a plot of the mesh.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FEM2D\_MESH\_DISPLAY\_OPENGL** is available in [a C++
version](../../cpp_src/fem2d_mesh_display_opengl/fem2d_mesh_display_opengl.html)
and [a MATLAB
version](../../m_src/fem2d_mesh_display/fem2d_mesh_display.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CAUSTIC\_OPENGL](../../cpp_src/caustic_opengl/caustic_opengl.html), a
C++ program which computes a caustic curve and displays it using OpenGL.

[FEM\_BASIS\_T3\_DISPLAY](../../m_src/fem_basis_t3_display/fem_basis_t3_display.html),
a MATLAB program which displays a basis function associated with a
linear triangle ("T3") mesh.

[FEM\_BASIS\_T6\_DISPLAY](../../m_src/fem_basis_t6_display/fem_basis_t6_display.html),
a MATLAB program which reads a quadratic triangle mesh and displays any
associated basis function.

[FERN\_OPENGL](../../cpp_src/fern_opengl/fern_opengl.html), a C++
program which uses OpenGL to display the Barnsley fractal fern.

[FLOOD\_OPENGL](../../c_src/flood_opengl/flood_opengl.html), a C program
which allows a user to select a region and flood it with color, using
OpenGL, by Art Wetzel.

[LIFE\_OPENGL](../../c_src/life_opengl/life_opengl.html), a C program
which simulates a version of John Conway's "Game of Life", displaying
the results using OpenGL.

[LIGHTS\_OUT\_OPENGL](../../cpp_src/lights_out_opengl/lights_out_opengl.html),
a C++ program which sets up a "Lights Out" game and allows the user to
solve it, using the OpenGL graphics window.

[LISSAJOUS\_OPENGL](../../cpp_src/lissajous_opengl/lissajous_opengl.html),
a C++ program which computes a Lissajous figure and displays it using
OpenGL.

[OPENGL](../../cpp_src/opengl/opengl.html), C++ programs which
illustrate the use of the OpenGL graphics library;

[POLYGONAL\_SURFACE\_DISPLAY\_OPENGL](../../cpp_src/polygonal_surface_display_opengl/polygonal_surface_display_opengl.html),
a C++ program which displays a surface in 3D described as a set of
polygons, using OpenGL.

[ROTATING\_CUBE\_DISPLAY\_OPENGL](../../cpp_src/rotating_cube_display_opengl/rotating_cube_display_opengl.html),
a C++ program which displays a rotating color cube in 3D, using OpenGL;

[SPHERE\_XYZ\_DISPLAY\_OPENGL](../../cpp_src/sphere_xyz_display_opengl/sphere_xyz_display_opengl.html),
a C++ program which reads XYZ information defining points in 3D, and
displays a unit sphere and the points, using OpenGL.

[TABLE\_DELAUNAY](../../cpp_src/table_delaunay/table_delaunay.html), a
C++ program which computes the Delaunay triangulation of a set of
points.

[TABLE\_IO](../../cpp_src/table_io/table_io.html), a C++ library which
supplies the routines used to read the TABLE file.

[TABLE\_VORONOI](../../cpp_src/table_voronoi/table_voronoi.html), a C++
program which computes information about the Voronoi diagram of the
points.

[TRI\_SURFACE\_DISPLAY\_OPENGL](../../cpp_src/tri_surface_display_opengl/tri_surface_display_opengl.html),
a C++ program which displays the 3D graphics information in a
TRI\_SURFACE file using OpenGL.

[TRIANGULATION\_DISPLAY\_OPENGL](../../cpp_src/triangulation_display_opengl/triangulation_display_opengl.html),
a C++ program which reads data defining a triangulation and creates an
image using OpenGL.

[TRIANGULATION\_MASK](../../cpp_src/triangulation_mask/triangulation_mask.html),
a C++ program which takes an existing triangulation and deletes
triangles and their corresponding nodes as requested by the user.

[TRIANGULATION\_ORDER3](../../data/triangulation_order3/triangulation_order3.html),
a directory which contains a description and examples of order 3
triangulations.

[TRIANGULATION\_ORDER6](../../data/triangulation_order6/triangulation_order6.html),
a directory which contains a description and examples of order 6
triangulations.

[TRIANGULATION\_PLOT](../../cpp_src/triangulation_plot/triangulation_plot.html),
a C++ program which reads data defining a triangulation and creates a
PostScript image of the nodes and triangles.

[XY\_DISPLAY\_OPENGL](../../cpp_src/xy_display_opengl/xy_display_opengl.html),
is a C++ program which reads an XY file of 2D point coordinates, and
displays an image of those points using OpenGL.

[XYL\_DISPLAY\_OPENGL](../../cpp_src/xyl_display_opengl/xyl_display_opengl.html),
a C++ program which reads XYL information defining points and lines in
2D, and displays an image using OpenGL.

[XYZ\_DISPLAY\_OPENGL](../../cpp_src/xyz_display_opengl/xyz_display_opengl.html),
a C++ program which reads an XYZ file of 3D point coordinates, and
displays an image of those points using OpenGL.

### Reference: {#reference align="center"}

1.  Edward Angel,\
    Interactive Computer Graphics,\
    A Top-Down Approach with OpenGL,\
    Addison-Wesley, 2000,\
    LC: T385.A514.
2.  Renate Kempf, Chris Frazier, editors,\
    OpenGL Reference Manual,\
    Addison-Wesley, 1997,\
    LC: T385.O642.
3.  Mason Woo, Jackie Neider, Tom Davis,\
    OpenGL Programming Guide,\
    Addison-Wesley, 1997,\
    LC: T385.N435.
4.  Richard Wright, Michael Sweet,\
    OpenGL Superbible,\
    Waite Group Press, 1996,\
    LC: T385.W73.

### Source Code: {#source-code align="center"}

-   [fem2d\_mesh\_display\_opengl.cpp](fem2d_mesh_display_opengl.cpp),
    the source code.

### Examples and Tests: {#examples-and-tests align="center"}

**ELL** is an L-shaped region covered by triangles.

-   [ell\_nodes.txt](ell_nodes.txt), the node coordinates.
-   [ell\_elements.txt](ell_elements.txt), the nodes that form each
    element.
-   [ell.png](ell.png), a PNG image of the mesh.

**RECT** is a rectangular region covered by quadrilaterals.

-   [rect\_nodes.txt](rect_nodes.txt), the node coordinates.
-   [rect\_elements.txt](rect_elements.txt), the nodes that form each
    element.
-   [rect.png](rect.png), a PNG image of the mesh.

**Q4** is a rectangular region covered by quadrilaterals, with a hole.

-   [q4\_nodes.txt](q4_nodes.txt), the node coordinates.
-   [q4\_elements.txt](q4_elements.txt), the nodes that form each
    element.
-   [q4.png](q4.png), a PNG image of the mesh.

**HEX** is a mesh of hexagons.

-   [hex\_nodes.txt](hex_nodes.txt), the node coordinates.
-   [hex\_elements.txt](hex_elements.txt), the nodes that form each
    element.
-   [hex.png](hex.png), a PNG mage of the mesh.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for FEM2D\_MESH\_DISPLAY\_OPENGL.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **DISPLAY** generates the graphics output.
-   **FILE\_COLUMN\_COUNT** counts the number of columns in the first
    line of a file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the smaller of two I4's.
-   **I4MAT\_DATA\_READ** reads data from an I4MAT file.
-   **I4MAT\_HEADER\_READ** reads the header from an I4MAT file.
-   **MESH\_BASE\_ZERO** ensures that the element definition is
    zero-based.
-   **MYINIT** initializes OpenGL state variables dealing with viewing
    and attributes.
-   **R8\_MAX** returns the maximum of two R8's.
-   **R82VEC\_MAX** returns the maximum value in a R82VEC.
-   **R82VEC\_MIN** returns the minimum value in a R82VEC.
-   **R8MAT\_DATA\_READ** reads the data from an R8MAT file.
-   **R8MAT\_HEADER\_READ** reads the header from an R8MAT file.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_I4VEC** reads an I4VEC from a string.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 13 October 2014.*
