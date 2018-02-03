FEM3D\_PACK\
3D Finite Element Method Utility Library {#fem3d_pack-3d-finite-element-method-utility-library align="center"}
========================================

------------------------------------------------------------------------

**FEM3D\_PACK** is a C++ library which contains utility routines for 3D
finite element calculations.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FEM3D\_PACK** is available in [a C++
version](../../cpp_src/fem3d_pack/fem3d_pack.html) and [a FORTRAN90
version](../../f_src/fem3d_pack/fem3d_pack.html) and [a MATLAB
version](../../m_src/fem3d_pack/fem3d_pack.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FEM\_BASIS](../../cpp_src/fem_basis/fem_basis.html), a C++ library
which can define and evaluate basis functions for any degree in an
M-dimensional simplex (1D interval, 2D triangle, 3D tetrahedron, and
higher dimensional generalizations.)

[FEM1D\_PACK](../../cpp_src/fem1d_pack/fem1d_pack.html), a C++ library
which contains utilities for 1D finite element calculations.

[FEM2D\_PACK](../../cpp_src/fem2d_pack/fem2d_pack.html), a C++ library
which contains utilities for finite element calculations.

[FEM3D](../../data/fem3d/fem3d.html), a data directory which contains
examples of 3D FEM files, three text files that describe a 3D finite
element geometry;

[FEM3D\_PROJECT](../../cpp_src/fem3d_project/fem3d_project.html), a C++
program which projects a function F(X,Y,Z), given as a data, into a
given finite element space of piecewise linear tetrahedral elements.

[FEM3D\_SAMPLE](../../cpp_src/fem3d_sample/fem3d_sample.html), a C++
program which evaluates a finite element function defined on 3D
tetrahedral mesh.

### Reference: {#reference align="center"}

1.  Claudio Rocchini, Paolo Cignoni,\
    Generating Random Points in a Tetrahedron,\
    Journal of Graphics Tools,\
    Volume 5, Number 4, 2000, pages 9-12.
2.  Reuven Rubinstein,\
    Monte Carlo Optimization, Simulation and Sensitivity of Queueing
    Networks,\
    Krieger, 1992,\
    ISBN: 0894647644,\
    LC: QA298.R79.
3.  Gilbert Strang, George Fix,\
    An Analysis of the Finite Element Method,\
    Cambridge, 1973,\
    ISBN: 096140888X,\
    LC: TA335.S77.
4.  Olgierd Zienkiewicz,\
    The Finite Element Method,\
    Sixth Edition,\
    Butterworth-Heinemann, 2005,\
    ISBN: 0750663200,\
    LC: TA640.2.Z54.

### Source Code: {#source-code align="center"}

-   [fem3d\_pack.cpp](fem3d_pack.cpp), the source code.
-   [fem3d\_pack.hpp](fem3d_pack.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [fem3d\_pack\_prb.cpp](fem3d_pack_prb.cpp), a sample calling
    program.
-   [fem3d\_pack\_prb.sh](fem3d_pack_prb.sh), commands to compile and
    run the sample program.
-   [fem3d\_pack\_prb\_output.txt](fem3d_pack_prb_output.txt), the
    output file.

### List of Routines: {#list-of-routines align="center"}

-   **BANDWIDTH\_MESH** determines the bandwidth of the coefficient
    matrix.
-   **BANDWIDTH\_VAR** determines the bandwidth for finite element
    variables.
-   **BASIS\_BRICK8:** BRICK8 basis functions at natural coordinates.
-   **BASIS\_BRICK8\_TEST** verifies BASIS\_BRICK8.
-   **BASIS\_BRICK20:** BRICK20 basis functions at natural coordinates.
-   **BASIS\_BRICK20\_TEST** verifies BASIS\_BRICK20.
-   **BASIS\_BRICK20:** BRICK20 basis functions at natural coordinates.
-   **BASIS\_BRICK27\_TEST** verifies BASIS\_BRICK27.
-   **BASIS\_MN\_TET4:** all bases at N points for a TET4 element.
-   **BASIS\_MN\_T4\_TEST** verifies BASIS\_MN\_TET4.
-   **BASIS\_MN\_TET10:** all bases at N points for a TET10 element.
-   **BASIS\_MN\_TET10\_TEST** verifies BASIS\_MN\_TET10.
-   **I4\_MAX** returns the maximum of two I4's.
-   **NODES\_BRICK8** returns the natural coordinates of the BRICK8
    element.
-   **NODES\_BRICK20** returns the natural coordinates of the BRICK20
    element.
-   **NODES\_BRICK27** returns the natural coordinates of the BRICK27
    element.
-   **PHYSICAL\_TO\_REFERENCE\_TET4** maps physical points to reference
    points.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8GE\_FSS** factors and solves multiple R8GE systems.
-   **R8MAT\_COPY\_NEW** copies one R8MAT to a "new" R8MAT.
-   **R8MAT\_DET\_4D** computes the determinant of a 4 by 4 R8MAT.
-   **R8MAT\_MV** multiplies a matrix times a vector.
-   **R8MAT\_SOLVE** uses Gauss-Jordan elimination to solve an N by N
    linear system.
-   **R8MAT\_UNIFORM\_01\_NEW** returns a new unit pseudorandom R8MAT.
-   **R8VEC\_SUM** returns the sum of an R8VEC.
-   **R8VEC\_UNIFORM\_01\_NEW** returns a new unit pseudorandom R8VEC.
-   **REFERENCE\_TET4\_SAMPLE:** sample points in the reference
    tetrahedron.
-   **REFERENCE\_TET4\_UNIFORM:** uniform sample points in the reference
    tetrahedron.
-   **REFERENCE\_TET4\_UNIFORM2:** uniform sample points in the
    reference tetrahedron.
-   **REFERENCE\_TO\_PHYSICAL\_TET4** maps TET4 reference points to
    physical points.
-   **TETRAHEDRON\_BARYCENTRIC** returns the barycentric coordinates of
    a point.
-   **TETRAHEDRON\_VOLUME** computes the volume of a tetrahedron in 3D.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 02 March 2010.*
