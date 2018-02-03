FREEFEM++\_MSH\_IO\
Read and Write FreeFem++ MSH files {#freefem_msh_io-read-and-write-freefem-msh-files align="center"}
==================================

------------------------------------------------------------------------

**FREEFEM++\_MSH\_IO**, a C++ library which can read and write files
used by the FreeFem++ finite element program to store mesh information.

Note that the GMSH program creates mesh files that use the ".msh"
extension, but which are an entirely different format.

The msh file format is obliquely described in section 12.5 of the
FreeFem++ documentation.

At least for the 2D case of a triangular mesh, the format seems to be as
follows:

1.  a single line giving NV, NE, NT, the number of vertices, boundary
    edges, and triangles
2.  NV lines, each containing the (X,Y) coordinates and integer label
    for a node.
3.  NT lines, each containing three vertex indices and integer label for
    a triangle.
4.  NE lines, each containing two vertex indices and integer label for a
    boundary edge.

The "labels" seem to be "0" for interior objects and 1 for boundary
objects. All edges are boundary objects. (This might not be true. A
geometry might include internal edges, and perhaps these count as
interior objects, but definitely, the edge list does not include
arbitrary triangle edges, only those on the boundary.) All triangles are
interior objects. Vertices may be boundary or interior objects.

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FREEFEM++\_MSH\_IO** is available in [a C
version](../../c_src/freefem++_msh_io/freefem++_msh_io.html) and [a C++
version](../../cpp_src/freefem++_msh_io/freefem++_msh_io.html) and [a
FORTRAN77 version](../../f77_src/freefem++_msh_io/freefem++_msh_io.html)
and [a FORTRAN90
version](../../f_src/freefem++_msh_io/freefem++_msh_io.html) and [a
MATLAB version](../../m_src/freefem++_msh_io/freefem++_msh_io.html) and
[a Python version](../../py_src/freefem++_msh_io/freefem++_msh_io.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BAMG](../../examples/bamg/bamg.html), examples which illustrate the use
of BAMG, a program for generating 2D meshes that can be used to define
the geometry for the the finite element package FREEFEM++.

[FREEFEM++](../../examples/freefem++/freefem++.html), examples which
illustrate the use of the FREEFEM++ package, a high-level integrated
development environment for the numerical solution of nonlinear
multiphysics partial differential equations (PDE's) in 2D and 3D.

[FREEFEM++\_MSH](../../data/freefem++_msh/freefem++_msh.html), a data
directory which contains examples of the mesh files created by the
FreeFem++ program, which use the extension ".msh".

[MITCHELL\_FREEFEM++](../../examples/mitchell_freefem++/mitchell_freefem++.html),
examples which illustrate the implementation of the Mitchell 2D elliptic
partial differential equation (PDE) test problems using FREEFEM++.

### Reference: {#reference align="center"}

1.  Frederic Hecht,\
    New development in FreeFem++,\
    Journal of Numerical Mathematics,\
    Volume 20, Number 3-4, 2012, pages 251-265.
2.  Frederic Hecht,\
    BAMG: Bidimensional Anisotropic Mesh Generator,\
    draft version v1.00, December 2006.

### Source Code: {#source-code align="center"}

-   [ffmsh\_io.cpp](ffmsh_io.cpp), the source code.
-   [ffmsh\_io.hpp](ffmsh_io.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [ffmsh\_io\_prb.cpp](ffmsh_io_prb.cpp), a sample calling program.
-   [ffmsh\_io\_prb\_output.txt](ffmsh_io_prb_output.txt), the output
    file.
-   [input.msh](input.msh), a FreeFem++ file read by the program.
-   [output.msh](output.msh), a FreeFem++ file written by the program.

### List of Routines: {#list-of-routines align="center"}

-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is TRUE (1) if two characters are equal, disregarding
    case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **FFMSH\_2D\_DATA\_EXAMPLE** returns example FFMSH data.
-   **FFMSH\_2D\_DATA\_PRINT** prints FFMSH data.
-   **FFMSH\_2D\_DATA\_READ** reads data from an FFMSH file.
-   **FFMSH\_2D\_SIZE\_EXAMPLE** returns sizes for the 2D example.
-   **FFMSH\_2D\_SIZE\_PRINT** prints the sizes of an FFMSH.
-   **FFMSH\_2D\_SIZE\_READ** reads sizes from a FFMSH file.
-   **FFMSH\_2D\_WRITE** writes FFMSH data to a file.
-   **I4MAT\_COPY** copies one I4MAT to another.
-   **I4MAT\_TRANSPOSE\_PRINT** prints an I4MAT, transposed.
-   **I4MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an I4MAT,
    transposed.
-   **I4VEC\_COPY** copies an I4VEC.
-   **I4VEC\_PRINT** prints an I4VEC.
-   **MESH\_BASE\_ONE** ensures that the element definition is
    one-based.
-   **R8MAT\_COPY** copies one R8MAT to another.
-   **R8MAT\_TRANSPOSE\_PRINT** prints an R8MAT, transposed.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_R8** reads an R8 from a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 22 December 2014.*
