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
version](../../c_src/sine_transform/sine_transform.html) and [a C++
version](../../cpp_src/sine_transform/sine_transform.html) and [a
FORTRAN77 version](../../f77_src/sine_transform/sine_transform.html) and
[a FORTRAN90 version](../../f_src/sine_transform/sine_transform.html)
and [a MATLAB version](../../m_src/sine_transform/sine_transform.html)
and [a Python version](../../py_src/sine_transform/sine_transform.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[COSINE\_TRANSFORM](../../cpp_src/cosine_transform/cosine_transform.html),
a C++ library which demonstrates some simple properties of the discrete
cosine transform (DCT).

[FFT\_SERIAL](../../cpp_src/fft_serial/fft_serial.html), a C++ program
which demonstrates the computation of a Fast Fourier Transform, and is
intended as a starting point for implementing a parallel version.

[HAAR](../../cpp_src/haar/haar.html), a C++ library which computes the
Haar transform of data.

[SFTPACK](../../cpp_src/sftpack/sftpack.html), a C++ library which
implements the "slow" Fourier transform, intended as a teaching tool and
comparison with the fast Fourier transform.

[WALSH](../../cpp_src/walsh/walsh.html), a C++ library which implements
versions of the Walsh and Haar transforms.

[WAVELET](../../cpp_src/wavelet/wavelet.html), a C++ library which does
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

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last modified on 19 February 2012.*
