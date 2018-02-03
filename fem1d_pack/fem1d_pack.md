FEM1D\_PACK\
1D Finite Element Routines {#fem1d_pack-1d-finite-element-routines align="center"}
==========================

------------------------------------------------------------------------

**FEM1D\_PACK** is a C++ library which contains utilities for
implementing the finite element method in a 1D region.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FEM1D\_PACK** is available in [a C
version](../../c_src/fem1d_pack/fem1d_pack.html) and [a C++
version](../../cpp_src/fem1d_pack/fem1d_pack.html) and [a FORTRAN90
version](../../f_src/fem1d_pack/fem1d_pack.html) and [a FORTRAN77
version](../../f77_src/fem1d_pack/fem1d_pack.html) and [a MATLAB
version](../../m_src/fem1d_pack/fem1d_pack.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FEM1D](../../data/fem1d/fem1d.html), a data directory which contains
examples of 1D FEM files, text files that describe a 1D finite element
model and associated nodal values.

[FEM1D](../../cpp_src/fem1d/fem1d.html), a C++ program which applies the
finite element method to a 1D linear two point boundary value problem.

[FEM1D\_ADAPTIVE](../../cpp_src/fem1d_adaptive/fem1d_adaptive.html), a
C++ program which applies the finite element method to a 1D linear two
point boundary value problem using adaptive refinement to improve the
solution.

[FEM1D\_BVP\_LINEAR](../../cpp_src/fem1d_bvp_linear/fem1d_bvp_linear.html),
a C++ program which applies the finite element method, with piecewise
linear elements, to a two point boundary value problem in one spatial
dimension.

[FEM1D\_HEAT\_STEADY](../../cpp_src/fem1d_heat_steady/fem1d_heat_steady.html),
a C++ program which uses the finite element method to solve the steady
(time independent) heat equation in 1D.

[FEM1D\_NONLINEAR](../../cpp_src/fem1d_nonlinear/fem1d_nonlinear.html),
a C++ program which applies the finite element method to a 1D nonlinear
two point boundary value problem.

[FEM1D\_PMETHOD](../../cpp_src/fem1d_pmethod/fem1d_pmethod.html), a C++
program which applies the p-method version of the finite element method
to a 1D linear two point boundary value problem.

[FEM1D\_PROJECT](../../cpp_src/fem1d_project/fem1d_project.html), a C++
program which projects data into a finite element space, including the
least squares approximation of data, or the projection of a finite
element solution from one mesh to another.

[FEM1D\_SAMPLE](../../cpp_src/fem1d_sample/fem1d_sample.html), a C++
program which samples a scalar or vector finite element function of one
variable, defined by FEM files, returning interpolated values at the
sample points.

[FEM2D\_PACK](../../cpp_src/fem2d_pack/fem2d_pack.html), a C++ library
which contains utilities for 2D finite element calculations.

[FEM3D\_PACK](../../cpp_src/fem3d_pack/fem3d_pack.html), a C++ library
which contains utilities for 3D finite element calculations.

### Reference: {#reference align="center"}

1.  Hans Rudolf Schwarz,\
    Finite Element Methods,\
    Academic Press, 1988,\
    ISBN: 0126330107,\
    LC: TA347.F5.S3313.
2.  Gilbert Strang, George Fix,\
    An Analysis of the Finite Element Method,\
    Cambridge, 1973,\
    ISBN: 096140888X,\
    LC: TA335.S77.
3.  Olgierd Zienkiewicz,\
    The Finite Element Method,\
    Sixth Edition,\
    Butterworth-Heinemann, 2005,\
    ISBN: 0750663200,\
    LC: TA640.2.Z54

### Source Code: {#source-code align="center"}

-   [fem1d\_pack.cpp](fem1d_pack.cpp), the source code.
-   [fem1d\_pack.hpp](fem1d_pack.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [fem1d\_pack\_prb.cpp](fem1d_pack_prb.cpp), a sample calling
    program.
-   [fem1d\_pack\_prb\_output.txt](fem1d_pack_prb_output.txt), the
    output file.

### List of Routines: {#list-of-routines align="center"}

-   **BANDWIDTH\_MESH** determines the bandwidth of the coefficient
    matrix.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **LEGENDRE\_COM** computes abscissas and weights for Gauss-Legendre
    quadrature.
-   **LOCAL\_BASIS\_1D** evaluates the basis functions in an element.
-   **LOCAL\_BASIS\_PRIME\_1D** evaluates the basis function derivatives
    in an element.
-   **LOCAL\_FEM\_1D** evaluates a local finite element function.
-   **R8\_UNIFORM** returns a scaled pseudorandom R8.
-   **R8MAT\_PRINT** prints an R8MAT.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **R8VEC\_DOT\_PRODUCT** computes the dot product of a pair of
    R8VEC's.
-   **R8VEC\_SUM** returns the sum of an R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 03 June 2011.*
