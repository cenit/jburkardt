WAVELET\
Wavelet Computations. {#wavelet-wavelet-computations. align="center"}
=====================

------------------------------------------------------------------------

**WAVELET** is a C++ library which contains some utilities for
computations involving wavelets.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**WAVELET** is available in [a C
version](../../c_src/wavelet/wavelet.html) and [a C++
version](../../cpp_src/wavelet/wavelet.html) and [a FORTRAN77
version](../../f77_src/wavelet/wavelet.html) and [a FORTRAN90
version](../../f_src/wavelet/wavelet.html) and [a MATLAB
version](../../m_src/wavelet/wavelet.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[HAAR](../../cpp_src/haar/haar.html), a C++ library which computes the
Haar transform of data.

[SFTPACK](../../cpp_src/sftpack/sftpack.html), a C++ library which
implements the "slow" Fourier transform, intended as a teaching tool and
comparison with the fast Fourier transform.

[SINE\_TRANSFORM](../../cpp_src/sine_transform/sine_transform.html), a
C++ library which demonstrates some simple properties of the discrete
sine transform.

[WALSH](../../cpp_src/walsh/walsh.html), a C++ library which implements
versions of the Walsh and Haar transforms.

### Reference: {#reference align="center"}

1.  Gilbert Strang, Truong Nguyen,\
    Wavelets and Filter Banks,\
    Wellesley-Cambridge Press, 1997,\
    ISBN: 0-9614088-7-1,\
    LC: TK7872.F5S79 / QA403.3.S87

### Source Code: {#source-code align="center"}

-   [wavelet.cpp](wavelet.cpp), the source code.
-   [wavelet.hpp](wavelet.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [wavelet\_prb.cpp](wavelet_prb.cpp), a sample calling program.
-   [wavelet\_prb\_output.txt](wavelet_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **CASCADE** carries out the cascade algorithm.
-   **DAUB\_COEFFICIENTS** returns a set of Daubechies coefficients.
-   **DAUB2\_MATRIX** returns the DAUB2 matrix.
-   **DAUB2\_SCALE** recursively evaluates the DAUB2 scaling function.
-   **DAUB2\_TRANSFORM** computes the DAUB2 transform of a vector.
-   **DAUB2\_TRANSFORM\_INVERSE** inverts the DAUB2 transform of a
    vector.
-   **DAUB4\_MATRIX** returns the DAUB4 matrix.
-   **DAUB4\_SCALE** recursively evaluates the DAUB4 scaling function.
-   **DAUB4\_TRANSFORM** computes the DAUB4 transform of a vector.
-   **DAUB4\_TRANSFORM\_INVERSE** inverts the DAUB4 transform of a
    vector.
-   **DAUB6\_MATRIX** returns the DAUB6 matrix.
-   **DAUB6\_SCALE** recursively evaluates the DAUB6 scaling function.
-   **DAUB6\_TRANSFORM** computes the DAUB6 transform of a vector.
-   **DAUB6\_TRANSFORM\_INVERSE** inverts the DAUB6 transform of a
    vector.
-   **DAUB8\_MATRIX** returns the DAUB8 matrix.
-   **DAUB8\_SCALE** recursively evaluates the DAUB8 scaling function.
-   **DAUB8\_TRANSFORM** computes the DAUB8 transform of a vector.
-   **DAUB8\_TRANSFORM\_INVERSE** inverts the DAUB8 transform of a
    vector.
-   **DAUB10\_MATRIX** returns the DAUB10 matrix.
-   **DAUB10\_SCALE** recursively evaluates the DAUB10 scaling function.
-   **DAUB10\_TRANSFORM** computes the DAUB10 transform of a vector.
-   **DAUB10\_TRANSFORM\_INVERSE** inverts the DAUB10 transform of a
    vector.
-   **DAUB12\_MATRIX** returns the DAUB12 matrix.
-   **DAUB12\_TRANSFORM** computes the DAUB12 transform of a vector.
-   **DAUB12\_TRANSFORM\_INVERSE** inverts the DAUB12 transform of a
    vector.
-   **DAUB14\_TRANSFORM** computes the DAUB14 transform of a vector.
-   **DAUB14\_TRANSFORM\_INVERSE** inverts the DAUB14 transform of a
    vector.
-   **DAUB16\_TRANSFORM** computes the DAUB16 transform of a vector.
-   **DAUB16\_TRANSFORM\_INVERSE** inverts the DAUB16 transform of a
    vector.
-   **DAUB18\_TRANSFORM** computes the DAUB18 transform of a vector.
-   **DAUB18\_TRANSFORM\_INVERSE** inverts the DAUB18 transform of a
    vector.
-   **DAUB20\_TRANSFORM** computes the DAUB20 transform of a vector.
-   **DAUB20\_TRANSFORM\_INVERSE** inverts the DAUB20 transform of a
    vector.
-   **I4\_IS\_POWER\_OF\_2** reports whether an I4 is a power of 2.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4\_MODP** returns the nonnegative remainder of I4 division.
-   **I4\_WRAP** forces an I4 to lie between given limits by wrapping.
-   **R8\_UNIFORM\_01** returns a unit pseudorandom R8.
-   **R8MAT\_IS\_IDENTITY** determines if an R8MAT is the identity.
-   **R8MAT\_ZERO\_NEW** returns a new zeroed R8MAT.
-   **R8VEC\_CONJUGATE** reverses a vector and negates even-indexed
    entries.
-   **R8VEC\_CONVOLUTION** returns the convolution of two R8VEC's.
-   **R8VEC\_COPY\_NEW** copies an R8VEC to a new R8VEC.
-   **R8VEC\_LINSPACE\_NEW** creates a vector of linearly spaced values.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **R8VEC\_UNIFORM\_01\_NEW** returns a new unit pseudorandom R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 13 May 2012.*
