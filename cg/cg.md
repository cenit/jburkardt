CG\
Conjugate Gradient Solver for Linear Systems {#cg-conjugate-gradient-solver-for-linear-systems align="center"}
============================================

------------------------------------------------------------------------

**CG** is a C++ library which implements a simple version of the
conjugate gradient (CG) method for solving a system of linear equations
of the form A\*x=b, suitable for situations in which the matrix A is
positive definite (only real, positive eigenvalues) and symmetric.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**CG** is available in [a C version](../../c_src/cg/cg.html) and [a C++
version](../../cpp_src/cg/cg.html) and [a FORTRAN77
version](../../f77_src/cg/cg.html) and [a FORTRAN90
version](../../f_src/cg/cg.html) and [a MATLAB
version](../../m_src/cg/cg.html) and [a Python
version](../../py_src/cg/cg.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CG\_RC](../../cpp_src/cg_rc/cg_rc.html), a C++ library which implements
the conjugate gradient (CG) method for solving a positive definite
sparse linear system A\*x=b, using reverse communication (RC).

[SPARSE\_DISPLAY](../../cpp_src/sparse_display/sparse_display.html), a
C++ library which can read information defining a matrix of numbers and
display the sparsity pattern or location of the nonzero elements using
gnuplot. This operation is already available in the built-in MATLAB
"spy" command.

[WATHEN](../../cpp_src/wathen/wathen.html), a C++ library which compares
storage schemes (full, banded, sparse triplet) and solution strategies
(Linpack full, Linpack banded, conjugate gradient (CG)) for linear
systems involving the Wathen matrix, which can arise when solving a
problem using the finite element method (FEM).

### Reference: {#reference align="center"}

1.  Frank Beckman,\
    The Solution of Linear Equations by the Conjugate Gradient Method,\
    in Mathematical Methods for Digital Computers,\
    edited by John Ralston, Herbert Wilf,\
    Wiley, 1967,\
    ISBN: 0471706892,\
    LC: QA76.5.R3.
2.  Jonathan Shewchuk,\
    An introduction to the conjugate gradient method without the
    agonizing pain, Edition 1.25, August 1994.

### Source Code: {#source-code align="center"}

-   [cg.cpp](cg.cpp), the source code.
-   [cg.hpp](cg.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [cg\_prb.cpp](cg_prb.cpp) a sample calling program.
-   [cg\_prb\_output.txt](cg_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **I4\_MIN** returns the minimum of two I4's.
-   **ORTH\_RANDOM** returns the ORTH\_RANDOM matrix.
-   **PDS\_RANDOM** returns the PDS\_RANDOM matrix.
-   **R8\_NORMAL\_01** samples the standard normal probability
    distribution.
-   **R8\_SIGN** returns the sign of an R8.
-   **R8\_UNIFORM\_01** returns a unit pseudorandom R8.
-   **R83\_CG** uses the conjugate gradient method on an R83 system.
-   **R83\_DIF2** returns the DIF2 matrix in R83 format.
-   **R83\_MV** multiplies a R83 matrix times a vector.
-   **R83\_RESID** computes the residual R = B-A\*X for R83 matrices.
-   **R83S\_CG** uses the conjugate gradient method on an R83S system.
-   **R83S\_DIF2** returns the DIF2 matrix in R83S format.
-   **R83S\_MV** multiplies a R83S matrix times a vector.
-   **R83S\_RESID** computes the residual R = B-A\*X for R83S matrices.
-   **R83T\_CG** uses the conjugate gradient method on an R83T system.
-   **R83T\_DIF2** returns the DIF2 matrix in R83T format.
-   **R83T\_MV** multiplies a R83T matrix times a vector.
-   **R83T\_RESID** computes the residual R = B-A\*X for R83T matrices.
-   **R8GE\_CG** uses the conjugate gradient method on an R8GE system.
-   **R8GE\_DIF2** returns the DIF2 matrix in R8GE format.
-   **R8GE\_MV** multiplies an R8GE matrix by an R8VEC.
-   **R8GE\_RESID** computes the residual R = B-A\*X for R8GE matrices.
-   **R8MAT\_COPY** copies one R8MAT to another.
-   **R8MAT\_HOUSE\_AXH** computes A\*H where H is a compact Householder
    matrix.
-   **R8MAT\_IDENTITY\_NEW** returns an identity matrix.
-   **R8MAT\_PRINT** prints an R8MAT.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **R8MAT\_ZERO\_NEW** returns a new zeroed R8MAT.
-   **R8PBU\_CG** uses the conjugate gradient method on a R8PBU system.
-   **R8PBU\_DIF2** returns the DIF2 matrix in R8PBU format.
-   **R8PBU\_MV** multiplies a R8PBU matrix times a vector.
-   **R8PBU\_RESID** computes the residual R = B-A\*X for R8PBU
    matrices.
-   **R8SD\_CG** uses the conjugate gradient method on a R8SD linear
    system.
-   **R8SD\_DIF2** returns the DIF2 matrix in R8SD format.
-   **R8SD\_MV** multiplies a R8SD matrix times a vector.
-   **R8SD\_RESID** computes the residual R = B-A\*X for R8SD matrices.
-   **R8SP\_CG** uses the conjugate gradient method on a R8SP linear
    system.
-   **R8SP\_DIF2** returns the DIF2 matrix in R8SP format.
-   **R8SP\_MV** multiplies a R8SP matrix times a vector.
-   **R8SP\_RESID** computes the residual R = B-A\*X for R8SP matrices.
-   **R8VEC\_COPY** copies an R8VEC.
-   **R8VEC\_DIFF\_NORM** returns the L2 norm of the difference of
    R8VEC's.
-   **R8VEC\_DOT\_PRODUCT** computes the dot product of a pair of
    R8VEC's.
-   **R8VEC\_HOUSE\_COLUMN** defines a Householder premultiplier that
    "packs" a column.
-   **R8VEC\_NORM** returns the L2 norm of an R8VEC.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **R8VEC\_UNIFORM\_01\_NEW** returns a new unit pseudorandom R8VEC.
-   **R8VEC\_ZERO\_NEW** creates and zeroes an R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 09 July 2014.*
