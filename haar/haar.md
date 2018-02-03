HAAR\
The Haar Transform {#haar-the-haar-transform align="center"}
==================

------------------------------------------------------------------------

**HAAR** is a C++ library which computes the Haar transform of data.

In the simplest case, one is given a vector X whose length N is a power
of 2. We now consider consecutive pairs of entries of X, and for I from
0 to (N/2)-1 we define:

            S[I] = ( X[2*I] + X[2*I+1] ) / sqrt ( 2 )
            D[I] = ( X[2*I] - X[2*I+1] ) / sqrt ( 2 )
          

We now replace X by the vector S concatenated with D. Assuming that
(N/2) is greater than 1, we repeat the operation on the (N/2) entries of
S, and so on, until we have reached a stage where our resultant S and D
each contain one entry.

For data in the form of a 2D array, the transform is applied to the
columns and then the rows.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**HAAR** is available in [a C version](../../c_src/haar/haar.md) and
[a C++ version](../../master/haar/haar.md) and [a FORTRAN77
version](../../f77_src/haar/haar.md) and [a FORTRAN90
version](../../f_src/haar/haar.md) and [a MATLAB
version](../../m_src/haar/haar.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[SFTPACK](../../master/sftpack/sftpack.md), a C++ library which
implements the "slow" Fourier transform, intended as a teaching tool and
comparison with the fast Fourier transform.

[SINE\_TRANSFORM](../../master/sine_transform/sine_transform.md), a
C++ library which demonstrates some simple properties of the discrete
sine transform.

[WALSH](../../master/walsh/walsh.md), a C++ library which implements
versions of the Walsh and Haar transforms.

### Reference: {#reference align="center"}

1.  Ken Beauchamp,\
    Walsh functions and their applications,\
    Academic Press, 1975,\
    ISBN: 0-12-084050-2,\
    LC: QA404.5.B33.

### Source Code: {#source-code align="center"}

-   [haar.cpp](haar.cpp), the source code.
-   [haar.hpp](haar.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [haar\_prb.cpp](haar_prb.cpp) a sample calling program.
-   [haar\_prb\_output.txt](haar_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **HAAR\_1D** computes the Haar transform of a vector.
-   **HAAR\_1D\_INVERSE** computes the inverse Haar transform of a
    vector.
-   **HAAR\_2D** computes the Haar transform of an array.
-   **HAAR\_2D\_INVERSE** inverts the Haar transform of an array.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **R8MAT\_PRINT** prints an R8MAT.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **R8MAT\_UNIFORM\_01\_NEW** returns a unit pseudorandom R8MAT.
-   **R8VEC\_COPY\_NEW** copies an R8VEC to a "new" R8VEC.
-   **R8VEC\_LINSPACE\_NEW** creates a vector of linearly spaced values.
-   **R8VEC\_ONES\_NEW** creates a vector of 1's.
-   **R8VEC\_TRANSPOSE\_PRINT** prints an R8VEC "transposed".
-   **R8VEC\_UNIFORM\_01\_NEW** returns a new unit pseudorandom R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 17 March 2011.*
