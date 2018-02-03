WALSH\
Walsh and Haar Transforms {#walsh-walsh-and-haar-transforms align="center"}
=========================

------------------------------------------------------------------------

**WALSH** is a C++ library which implements versions of the Walsh and
Haar transforms.

Note that the programs, as printed in the reference, had a few
typographical errors. Several programs, in particular FHT and FRT, could
not be made to perform as described in the text, and hence have been
omitted.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**WALSH** is available in [a C version](../../c_src/walsh/walsh.html)
and [a C++ version](../../cpp_src/walsh/walsh.html) and [a FORTRAN77
version](../../f77_src/walsh/walsh.html) and [a FORTRAN90
version](../../f_src/walsh/walsh.html) and [a MATLAB
version](../../m_src/walsh/walsh.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[HAAR](../../cpp_src/haar/haar.html), a C++ library which computes the
Haar transform of data.

[SFTPACK](../../cpp_src/sftpack/sftpack.html), a C++ library which
implements the "slow" Fourier transform, intended as a teaching tool and
comparison with the fast Fourier transform.

[SINE\_TRANSFORM](../../cpp_src/sine_transform/sine_transform.html), a
C++ library which demonstrates some simple properties of the discrete
sine transform.

### Reference: {#reference align="center"}

1.  Ken Beauchamp,\
    Walsh functions and their applications,\
    Academic Press, 1975,\
    ISBN: 0-12-084050-2,\
    LC: QA404.5.B33.

### Source Code: {#source-code align="center"}

-   [walsh.cpp](walsh.cpp), the source code.
-   [walsh.hpp](walsh.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [walsh\_prb.cpp](walsh_prb.cpp), a sample calling program.
-   [walsh\_prb\_output.txt](walsh_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **FFWT** performs an in-place fast Walsh transform.
-   **FWT** performs a fast Walsh transform.
-   **HAAR** performs a Haar transform.
-   **HAARIN** inverts a Haar transform.
-   **HNORM** computes normalization factors for a forward or inverse
    Haar transform.
-   **I4\_LOG\_2** returns the integer part of the logarithm base 2 of
    an I4.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4\_MODP** returns the nonnegative remainder of I4 division.
-   **I4\_POWER** returns the value of I\^J.
-   **I4\_WRAP** forces an I4 to lie between given limits by wrapping.
-   **R8VEC\_COPY** copies an R8VEC.
-   **R8VEC\_COPY\_NEW** copies an R8VEC to a "new" R8VEC.
-   **R8VEC\_UNIFORM\_01\_NEW** returns a new unit pseudorandom R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **WALSH** performs a fast Walsh transform.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 16 March 2011.*
