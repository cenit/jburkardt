COSINE\_TRANSFORM\
A Discrete Cosine Transform for Real Data {#cosine_transform-a-discrete-cosine-transform-for-real-data align="center"}
=========================================

------------------------------------------------------------------------

**COSINE\_TRANSFORM** is a C++ library which demonstrates some simple
properties of the discrete cosine transform (DCT) for real data.

The code is not optimized in any way, and is intended instead for
investigation and education.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**COSINE\_TRANSFORM** is available in [a C
version](../../c_src/cosine_transform/cosine_transform.html) and [a C++
version](../../cpp_src/cosine_transform/cosine_transform.html) and [a
FORTRAN90 version](../../f_src/cosine_transform/cosine_transform.html)
and [a MATLAB
version](../../m_src/cosine_transform/cosine_transform.html) and [a
Python version](../../py_src/cosine_transform/cosine_transform.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FFT\_SERIAL](../../cpp_src/fft_serial/fft_serial.html), a C++ program
which demonstrates the computation of a Fast Fourier Transform, and is
intended as a starting point for implementing a parallel version.

[HAAR](../../cpp_src/haar/haar.html), a C++ library which computes the
Haar transform of data.

[SFTPACK](../../cpp_src/sftpack/sftpack.html), a C++ library which
implements the "slow" Fourier transform, intended as a teaching tool and
comparison with the fast Fourier transform.

[SINE\_TRANSFORM](../../cpp_src/sine_transform/sine_transform.html), a
C++ library which implements the discrete sine transform.

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

-   [cosine\_transform.cpp](cosine_transform.cpp), the source code.
-   [cosine\_transform.hpp](cosine_transform.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [cosine\_transform\_prb.cpp](cosine_transform_prb.cpp), a sample
    calling program.
-   [cosine\_transform\_prb\_output.txt](cosine_transform_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **COSINE\_TRANSFORM\_DATA** does a cosine transform on a vector of
    data.
-   **COSINE\_TRANSFORM\_INVERSE** does an inverse cosine transform.
-   **R8VEC\_UNIFORM\_01** returns a unit pseudorandom R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last modified on 27 August 2015.*
