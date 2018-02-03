SFTPACK\
"Slow" Fourier Transforms {#sftpack-slow-fourier-transforms align="center"}
=========================

------------------------------------------------------------------------

**SFTPACK** is a C++ library which carries out some "slow" Fourier
transforms, that is, Fourier transforms without the techniques that
allow for very fast computation.

The intention is to make the underlying calculation clear, and to
provide a simple check and comparison of timing and usage for the fast
calculations.

The fast Fourier transform is a highly efficient procedure. However, the
coding of the algorithm, and the conventions for indexing, ordering, and
normalization, can make it quite difficult to understand what is being
done, or even to see how to use the software correctly. This means that
a coding error or mistaken use can be undetected.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SFTPACK** is available in [a C
version](../../c_src/sftpack/sftpack.html) and [a C++
version](../../cpp_src/sftpack/sftpack.html) and [a FORTRAN77
version](../../f77_src/sftpack/sftpack.html) and [a FORTRAN90
version](../../f_src/sftpack/sftpack.html) and [a MATLAB
version](../../m_src/sftpack/sftpack.html) and [a Python
version](../../py_src/sftpack/sftpack.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[C4LIB](../../cpp_src/c4lib/c4lib.html), a C++ library which implements
certain elementary functions for single precision complex variables;

[C8LIB](../../cpp_src/c8lib/c8lib.html), a C++ library which implements
certain elementary functions for double precision complex variables;

[COMPLEX\_NUMBERS](../../cpp_src/complex_numbers/complex_numbers.html),
a C++ program which demonstrates some simple features involved in the
use of complex numbers in C programming.

[COSINE\_TRANSFORM](../../cpp_src/cosine_transform/cosine_transform.html),
a C++ library which demonstrates some simple properties of the discrete
cosine transform (DCT).

[FFT\_OPENMP](../../cpp_src/fft_openmp/fft_openmp.html), a C++ program
which demonstrates the computation of a Fast Fourier Transform in
parallel, using OpenMP.

[HAAR](../../cpp_src/haar/haar.html), a C++ library which computes the
Haar transform of data.

[SINE\_TRANSFORM](../../cpp_src/sine_transform/sine_transform.html), a
C++ library which demonstrates some simple properties of the discrete
sine transform.

### Reference: {#reference align="center"}

1.  William Briggs, Van Emden Henson,\
    The DFT: An Owner's Manual for the Discrete Fourier Transform,\
    SIAM, 1995,\
    ISBN13: 978-0-898713-42-8,\
    LC: QA403.5.B75.
2.  Ralph Hartley,\
    A More Symmetrical Fourier Analysis Applied to Transmission
    Problems,\
    Proceedings of the Institute of Radio Engineers,\
    Volume 30, 1942, pages 144-150.

### Source Code: {#source-code align="center"}

-   [sftpack.cpp](sftpack.cpp), the source code;
-   [sftpack.hpp](sftpack.hpp), the include file;

### Examples and Tests: {#examples-and-tests align="center"}

-   [sftpack\_prb.cpp](sftpack_prb.cpp), the calling program;
-   [sftpack\_prb\_output.txt](sftpack_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **C4MAT\_PRINT\_SOME** prints some of a C4MAT.
-   **C4MAT\_SFTB** computes a "slow" backward Fourier transform of a
    C4MAT.
-   **C4MAT\_SFTF** computes a "slow" forward Fourier transform of a
    C4MAT.
-   **C4MAT\_UNIFORM\_01\_NEW** returns a new unit pseudorandom C4MAT.
-   **C4VEC\_PRINT\_PART** prints "part" of a C4VEC.
-   **C4VEC\_SFTB** computes a "slow" backward Fourier transform of a
    C4VEC.
-   **C4VEC\_SFTF** computes a "slow" forward Fourier transform of a
    C4VEC.
-   **C4VEC\_UNIFORM\_01\_NEW** returns a unit pseudorandom C4VEC.
-   **C8MAT\_PRINT\_SOME** prints some of a C8MAT.
-   **C8MAT\_SFTB** computes a "slow" backward Fourier transform of a
    C8MAT.
-   **C8MAT\_SFTF** computes a "slow" forward Fourier transform of a
    C8MAT.
-   **C8MAT\_UNIFORM\_01\_NEW** returns a new unit pseudorandom C8MAT.
-   **C8VEC\_PRINT\_PART** prints "part" of a C8VEC.
-   **C8VEC\_SFTB** computes a "slow" backward Fourier transform of a
    C8VEC.
-   **C8VEC\_SFTF** computes a "slow" forward Fourier transform of a
    C8VEC.
-   **C8VEC\_UNIFORM\_01\_NEW** returns a unit pseudorandom C8VEC.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **R4VEC\_PRINT\_PART** prints "part" of an R4VEC.
-   **R4VEC\_SCT** computes a "slow" cosine transform of an R4VEC.
-   **R4VEC\_SFTB** computes a "slow" backward Fourier transform of an
    R4VEC.
-   **R4VEC\_SFTF** computes a "slow" forward Fourier transform of an
    R4VEC.
-   **R4VEC\_SHT** computes a "slow" Hartley transform of an R4VEC.
-   **R4VEC\_SQCTB** computes a "slow" quarter cosine transform backward
    of an R4VEC.
-   **R4VEC\_SQCTF** computes a "slow" quarter cosine transform forward
    of an R4VEC.
-   **R4VEC\_SQSTB** computes a "slow" quarter sine transform backward
    of an R4VEC.
-   **R4VEC\_SQSTF** computes a "slow" quarter sine transform forward of
    an R4VEC.
-   **R4VEC\_SST** computes a "slow" sine transform of an R4VEC.
-   **R4VEC\_UNIFORM\_NEW** returns a scaled pseudorandom R4VEC.
-   **R8VEC\_PRINT\_PART** prints "part" of an R8VEC.
-   **R8VEC\_SCT** computes a "slow" cosine transform of an R8VEC.
-   **R8VEC\_SFTB** computes a "slow" backward Fourier transform of an
    R8VEC.
-   **R8VEC\_SFTF** computes a "slow" forward Fourier transform of an
    R8VEC.
-   **R8VEC\_SHT** computes a "slow" Hartley transform of an R8VEC.
-   **R8VEC\_SQCTB** computes a "slow" quarter cosine transform backward
    of an R8VEC.
-   **R8VEC\_SQCTF** computes a "slow" quarter cosine transform forward
    of an R8VEC.
-   **R8VEC\_SQSTB** computes a "slow" quarter sine transform backward
    of an R8VEC.
-   **R8VEC\_SQSTF** computes a "slow" quarter sine transform forward of
    an R8VEC.
-   **R8VEC\_SST** computes a "slow" sine transform of an R8VEC.
-   **R8VEC\_UNIFORM\_NEW** returns a scaled pseudorandom R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 22 June 2010.*
