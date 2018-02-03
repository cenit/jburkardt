IMAGE\_DENOISE\
Remove Noise from an Image {#image_denoise-remove-noise-from-an-image align="center"}
==========================

------------------------------------------------------------------------

**IMAGE\_DENOISE** is a C++ library which uses the median filter to try
to remove noise from an image.

A gray scale image can be represented using a 2D array of nonnegative
integers over some range 0 to GMAX. The value 0 indicates black, and
GMAX white. Intermediate values represent shades of gray in a natural
way. Note, however, that the eye has a nonlinear response to intensity,
so that the value GMAX/2 will not be perceived as halfway between 0 and
GMAX. That is a separate issue.

A color image can be represented using a set of three 2D arrays, which
can be thought of as R, G, and B, and which represent the intensity of
the red, green and blue signals that combine to form the color image. A
common maximum value is assumed, RGBMAX.

The ASCII PGM and PPM formats are a convenient, if somewhat inefficient,
way to store such images. These ASCII formats are easy to read and write
from a program.

In the example considered here, a good image is damaged by the addition
of "salt and pepper" noise; that is, a scattering of individual pixels
have been randomly reset to the lowest or highest possible values. In a
gray scale picture, such noise looks as though salt and pepper were
added to the picture.

Since an image is fairly "smooth", each good pixel should actually be
fairly close to the values of good pixels nearby, while this will not be
true for the salt and pepper pixels. So one way to make the noise go
away, at the cost of some minor blurring, is to replace each pixel by
the median value of itself and its neighbors.

There are sophisticated programs for applying the filters to a noisy
image, with the user allowed to specify the shape of a rectangular
neighborhood about each pixel. However, in this example, we go through
some of the lower level details "by hand", applying simple versions of
the median filter, in which each pixel is replaced by the median of
nearby values.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**IMAGE\_DENOISE** is available in [a C
version](../../c_src/image_denoise/image_denoise.html) and [a C++
version](../../cpp_src/image_denoise/image_denoise.html) and [a
FORTRAN77 version](../../f77_src/image_denoise/image_denoise.html) and
[a FORTRAN90 version](../../f_src/image_denoise/image_denoise.html) and
[a MATLAB version](../../m_src/image_denoise/image_denoise.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[IMAGE\_COMPONENTS](../../cpp_src/image_components/image_components.html),
a C++ library which seeks the connected "nonzero" or "nonblack"
components or "segments" of an image or integer vector, array or 3D
block.

[IMAGE\_EDGE](../../cpp_src/image_edge/image_edge.html), a C++ library
which demonstrates a simple procedure for edge detection in images.

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

### Source Code: {#source-code align="center"}

-   [image\_denoise.cpp](image_denoise.cpp), the source code.
-   [image\_denoise.hpp](image_denoise.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [image\_denoise\_prb.cpp](image_denoise_prb.cpp), a sample calling
    program.
-   [image\_denoise\_prb\_output.txt](image_denoise_prb_output.txt), the
    output file.

**BALLOONS** is an RGB image of a couple with balloons, to which salt
and pepper noise has been added.

-   [balloons\_noisy.ascii.pgm](balloons_noisy.ascii.pgm), the ASCII PGM
    file of glassware, with added noise.
-   [balloons\_noisy.png](balloons_noisy.png), a PNG version.

**GLASSWARE** is a grayscale image of glassware, to which salt and
pepper noise has been added.

-   [glassware\_noisy.ascii.pgm](glassware_noisy.ascii.pgm), the ASCII
    PGM file of glassware, with added noise.
-   [glassware\_noisy.png](glassware_noisy.png), a PNG version.
-   [glassware\_median\_news.ascii.pgm](glassware_median_news.ascii.pgm),
    the ASCII PGM file of glassware, after the noise has been filtered
    using the median NEWS filter.
-   [glassware\_median\_news.png](glassware_median_news.png), a PNG
    version.

### List of Routines: {#list-of-routines align="center"}

-   **GRAY\_MEDIAN\_NEWS** uses a median NEWS filter on a gray scale
    image to remove noise.
-   **I4VEC\_FRAC** searches for the K-th smallest entry in an I4VEC.
-   **I4VEC\_MEDIAN** returns the median of an unsorted I4VEC.
-   **PGMA\_READ\_DATA** reads the data in an ASCII PGM file.
-   **PGMA\_READ\_HEADER** reads the header of an ASCII PGM file.
-   **PGMA\_WRITE** writes the header and data for an ASCII PGM file.
-   **PGMA\_WRITE\_DATA** writes the data for an ASCII PGM file.
-   **PGMA\_WRITE\_HEADER** writes the header of an ASCII PGM file.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 22 July 2011.*
