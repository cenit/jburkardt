TILER\_3D\
3D Transfinite Interpolation {#tiler_3d-3d-transfinite-interpolation align="center"}
============================

------------------------------------------------------------------------

**TILER\_3D** is a C++ program which carries out transfinite
interpolation to "tile" a 3D box that has already been subdivided into
sub-boxes.

A simple "tile pattern" of a tetrahedron is used, and the resulting
object is written out as an ASCII **TRI** graphics file.

The ASCII **TRI** graphics file can be easily converted to other 3D
formats, such as **IV** or **STLA**. In particular, if the **STLA**
format is used, then the object can be read into MATLAB and displayed,
using the **STLA\_DISPLAY** program.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TILER\_3D** is available in [a C++
version](../../master/tiler_3d/tiler_3d.md) and [a FORTRAN90
version.](../../f_src/tiler_3d/tiler_3d.md)

### Related Data and Programs: {#related-data-and-programs align="center"}

[BLEND](../../master/blend/blend.md), a C++ library which carries out
the blending demonstrated byTILER\_3D.

[IV](../../data/iv/iv.md), a data directory which contains a
description and examples of the IV (Inventor) 3D graphics format.

[IVCON](../../master/ivcon/ivcon.md), a C++ program which can convert
the **TRI** file output by TILER\_3D into various other formats.

[IVREAD](../../f_src/ivread/ivread.md), a FORTRAN90 program which can
convert the **TRI** file output by TILER\_3D into various other formats.

[STLA](../../data/stla/stla.md), a data directory which contains a
description and examples of the ASCII STL (stereolithography) 3D
graphics format.

[STLA\_DISPLAY](../../m_src/stla_display/stla_display.md), a MATLAB
program which reads in an ASCII STL file and displays the 3D graphics
image it describes.

[TILER\_2D](../../f_src/tiler_2d/tiler_2d.md), a FORTRAN90 program
which is a 2D version of TILER\_3D.

[TRIA](../../data/tria/tria.md), a data directory which contains a
description and examples of TRIA, the ASCII TRIANGLE 3D graphics format.

### Reference: {#reference align="center"}

-   William Gordon, Charles Hall,\
    Construction of Curvilinear Coordinate Systems and Application to
    Mesh Generation,\
    International Journal of Numerical Methods in Engineering,\
    Volume 7, pages 461-477, 1973.
-   Joe Thompson, Bharat Soni, Nigel Weatherill,\
    Handbook of Grid Generation,\
    CRC Press, 1999.

### Source Code: {#source-code align="center"}

-   [tiler\_3d.cpp](tiler_3d.cpp), the source code;

### Examples and Tests: {#examples-and-tests align="center"}

-   [tiler\_3d.tri](tiler_3d.tri), the output ASCII **TRI** graphics
    file;
-   [tiler\_3d.iv](tiler_3d.iv), a copy of the graphics file converted
    to **IV** format;
-   [tiler\_3d.stla](tiler_3d.stla), a copy of the graphics file
    converted to **STLA** format;
-   [tiler\_3d.png](tiler_3d.png), a PNG image of a snapshot of the
    **STLA** file, as displayed by **STLA\_DISPLAY**.

### List of Routines: {#list-of-routines align="center"}

-   **TILER\_3D** illustrates the use of 3D blending.
-   **BOUNDARY\_3D** returns the (X,Y,Z) coordinates of a point (U,V,W).
-   **SUB\_BOX\_TILER\_3D** "tiles" a 3D sub-box with a given pattern.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 05 January 2006.*
