POWER\_METHOD\
The Power Method for Eigenvalues and Eigenvectors {#power_method-the-power-method-for-eigenvalues-and-eigenvectors align="center"}
=================================================

------------------------------------------------------------------------

**POWER\_METHOD** is a C++ library which carries out the power method.

The power method seeks to determine the eigenvalue of maximum modulus,
and a corresponding eigenvector.

The basic power method will not perform as expected if, corresponding to
the maximum modulus, there are complex eigenvalues, or a pair of real
eigenvalues of opposite sign. The power method's behavior can break down
or be very slow initially if the starting vector has a zero or very
small component in the eigenspace corresponding to the maximal
eigenvalue.

A second version of the power method is included which can handle the
case of complex eigenvalues.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**POWER\_METHOD** is available in [a C
version](../../c_src/power_method/power_method.html) and [a C++
version](../../cpp_src/power_method/power_method.html) and [a FORTRAN77
version](../../f77_src/power_method/power_method.html) and [a FORTRAN90
version](../../f_src/power_method/power_method.html) and [a MATLAB
version](../../m_src/power_method/power_method.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[ARPACK](../../f_src/arpack/arpack.html), a FORTRAN90 library which
computes eigenvalues for large matrices;

[EISPACK](../../f77_src/eispack/eispack.html), a FORTRAN77 library which
carries out eigenvalue computations; superseded by
[LAPACK](../../f77_src/lapack/lapack.html);

[TEST\_EIGEN](../../cpp_src/test_eigen/test_eigen.html), a C++ library
which implements test matrices for eigenvalue analysis.

[TEST\_MAT](../../cpp_src/test_mat/test_mat.html), a C++ library which
defines test matrices.

[TOMS343](../../f77_src/toms343/toms343.html), a FORTRAN77 library which
computes the eigenvalues and eigenvectors of a general real matrix;\
this is a FORTRAN77 version of ACM TOMS algorithm 343.

[TOMS384](../../f77_src/toms384/toms384.html), a FORTRAN77 library which
computes the eigenvalues and eigenvectors of a symmetric matrix;\
this is a FORTRAN77 version of ACM TOMS algorithm 384.

### Reference: {#reference align="center"}

1.  Richard Burden, Douglas Faires,\
    Numerical Analysis,\
    Thomson Brooks/Cole, 2004,\
    ISBN13: 978-0534392000,\
    LC: QA297.B84.
2.  Ward Cheney, David Kincaid,\
    Numerical Mathematics and Computing,\
    Brooks-Cole Publishing, 2004,\
    ISBN: 0534201121,\
    LC: QA297.C426.
3.  Gene Golub, Charles VanLoan,\
    Matrix Computations, Third Edition,\
    Johns Hopkins, 1996,\
    ISBN: 0-8018-4513-X,\
    LC: QA188.G65.
4.  Eric VanDeVelde,\
    Concurrent Scientific Programming,\
    Springer, 1994,\
    ISBN: 0-387-94195-9,\
    LC: QA76.58.V35.

### Source Code: {#source-code align="center"}

-   [power\_method.cpp](power_method.cpp), the source code.
-   [power\_method.hpp](power_method.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [power\_method\_prb.cpp](power_method_prb.cpp), the tests;
-   [power\_method\_prb\_output.txt](power_method_prb_output.txt), the
    output file.

### List of Routines: {#list-of-routines align="center"}

-   **CPU\_TIME** reports the elapsed CPU time.
-   **FIBONACCI2** returns the FIBONACCI2 matrix.
-   **POWER\_METHOD** applies several steps of the power method.
-   **POWER\_METHOD2** applies the power method for possibly complex
    eigenvalues.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_EPSILON** returns the R8 roundoff unit.
-   **R8MAT\_MV** multiplies a matrix times a vector.
-   **R8VEC\_COPY** copies an R8VEC.
-   **R8VEC\_DIVIDE** divides an R8VEC by a nonzero scalar.
-   **R8VEC\_DOT** computes the dot product of a pair of R8VEC's.
-   **R8VEC\_NORM\_L2** returns the L2 norm of an R8VEC.
-   **R8VEC\_UNIFORM\_01** returns a unit pseudorandom R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TRIS** returns the TRIS matrix.
-   **TRIS\_EIGENVALUES** returns the eigenvalues of the TRIS matrix.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last modified on 28 May 2008.*
