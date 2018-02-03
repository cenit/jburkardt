SINE\_TRANSFORM\
A Discrete Fourier Transform for Real Data {#sine_transform-a-discrete-fourier-transform-for-real-data align="center"}
==========================================

------------------------------------------------------------------------

**SINE\_TRANSFORM** is a C++ library which demonstrates some simple
properties of the discrete sine transform for real data.

The code is not optimized in any way, and is intended instead for
investigation and education.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SINE\_TRANSFORM** is available in [a C
version](../../c_src/sine_transform/sine_transform.md) and [a C++
version](../../master/sine_transform/sine_transform.md) and [a
FORTRAN77 version](../../f77_src/sine_transform/sine_transform.md) and
[a FORTRAN90 version](../../f_src/sine_transform/sine_transform.md)
and [a MATLAB version](../../m_src/sine_transform/sine_transform.md)
and [a Python version](../../py_src/sine_transform/sine_transform.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[COSINE\_TRANSFORM](../../master/cosine_transform/cosine_transform.md),
a C++ library which demonstrates some simple properties of the discrete
cosine transform (DCT).

[FFT\_SERIAL](../../master/fft_serial/fft_serial.md), a C++ program
which demonstrates the computation of a Fast Fourier Transform, and is
intended as a starting point for implementing a parallel version.

[HAAR](../../master/haar/haar.md), a C++ library which computes the
Haar transform of data.

[SFTPACK](../../master/sftpack/sftpack.md), a C++ library which
implements the "slow" Fourier transform, intended as a teaching tool and
comparison with the fast Fourier transform.

[WALSH](../../master/walsh/walsh.md), a C++ library which implements
versions of the Walsh and Haar transforms.

[WAVELET](../../master/wavelet/wavelet.md), a C++ library which does
some simple calculations with wavelet transforms;

### Reference: {#reference align="center"}

1.  William Briggs, Van Emden Henson,\
    The DFT: An Owner's Manual for the Discrete Fourier Transform,\
    SIAM, 1995,\
    ISBN13: 978-0-898713-42-8,\
    LC: QA403.5.B75.
2.  Eleanor Chu, Alan George,\
    Inside the FFT Black Box,\
    CRC Press,\
    ISBN: 0849302706,\
    LC: QA403.5C5.

### Source Code: {#source-code align="center"}

-   [sine\_transform.cpp](sine_transform.cpp), the source code.
-   [sine\_transform.hpp](sine_transform.hpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [sine\_transform\_prb.cpp](sine_transform_prb.cpp), a sample calling
    program.
-   [sine\_transform\_prb\_output.txt](sine_transform_prb_output.txt),
    the output file.
-   [sine\_transform\_prb03.png](sine_transform_prb03.png), a PNG image
    comparing the function and interpolant.
-   [sine\_transform\_prb04.png](sine_transform_prb04.png), a PNG image
    comparing the function and interpolant.

### List of Routines: {#list-of-routines align="center"}

-   **R8VEC\_UNIFORM\_01\_NEW** returns a unit pseudorandom R8VEC.
-   **SINE\_TRANSFORM\_DATA** does a sine transform on a vector of data.
-   **SINE\_TRANSFORM\_FUNCTION** does a sine transform on functional
    data.
-   **SINE\_TRANSFORM\_INTERPOLANT** evaluates the sine transform
    interpolant.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last modified on 19 February 2012.*
