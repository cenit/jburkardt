IMAGE\_COMPONENTS\
Connected Components of an Image or Matrix {#image_components-connected-components-of-an-image-or-matrix align="center"}
==========================================

------------------------------------------------------------------------

**IMAGE\_COMPONENTS** is a C++ library which seeks to count and label
the connected nonzero/nonblack components in an image or integer vector,
matrix or 3D block.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**IMAGE\_COMPONENTS** is available in [a C
version](../../c_src/image_components/image_components.md) and [a C++
version](../../master/image_components/image_components.md) and [a
FORTRAN77 version](../../f77_src/image_components/image_components.md)
and [a FORTRAN90
version](../../f_src/image_components/image_components.md) and [a
MATLAB version](../../m_src/image_components/image_components.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[IMAGE\_DENOISE](../../master/image_denoise/image_denoise.md), a C++
library which applies simple filtering techniques to remove noise from
an image.

[IMAGE\_EDGE](../../master/image_edge/image_edge.md), a C++ library
which demonstrates a simple procedure for edge detection in images.

[REGION](../../f_src/region/region.md), a FORTRAN90 library which
reads 3D MRI voxel data, and groups the voxels into connected regions;

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

### Source Code: {#source-code align="center"}

-   [components.cpp](components.cpp), the source code.
-   [components.hpp](components.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [components\_prb.cpp](components_prb.cpp), a sample calling program.
-   [components\_prb\_output.txt](components_prb_output.txt), the output
    file.
-   [indices.txt](indices.txt), a file of 3D indices needed for the test
    of I4BLOCK\_COMPONENTS.

### List of Routines: {#list-of-routines align="center"}

-   **FILE\_COLUMN\_COUNT** counts the columns in the first line of a
    file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4BLOCK\_COMPONENTS** assigns contiguous nonzero pixels to a
    common component.
-   **I4MAT\_COMPONENTS** assigns contiguous nonzero pixels to a common
    component.
-   **I4MAT\_DATA\_READ** reads data from an I4MAT file.
-   **I4MAT\_HEADER\_READ** reads the header from an I4MAT file.
-   **I4VEC\_COMPONENTS** assigns contiguous nonzero pixels to a common
    component.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_I4VEC** reads an I4VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 01 March 2011.*
