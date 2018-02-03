SCVT\_MPI\
Parallel Program for Centroidal Voronoi Tessellations on Spheres {#scvt_mpi-parallel-program-for-centroidal-voronoi-tessellations-on-spheres align="center"}
================================================================

------------------------------------------------------------------------

**SCVT\_MPI** is a C++ program which carries out a procedure that
produces Centroidal Voronoi Tessellations (CVT's) on the surface of a
sphere.

A CVT is a kind of mesh. Such meshes can be used for weather or climate
modeling on the Earth's surface, for instance.

The program uses Jonathan Shewchuk's triangle library, which can
triangulate a set of points in the plane.

The program uses the boost library of high-quality arithmetic
procedures, in particular, it refers to the boost mpi and boost
serialization libraries.

The program relies on the boost mpi library to implement the parallel
execution of the algorithm.

The program relies on the boost serialization library to encode a C++
structure as a sequence of bytes that can be recorded in a file or
transmitted as a message, which can then be decoded by a receiving
program to recover the original C++ structure.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SCVT\_MPI** is available in [a C++
version](../../master/divdif/divdif.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BOOST](../../master/boost/boost.md), C++ programs which demonstrate
the use of the Boost libraries;

[MPI](../../master/mpi/mpi.md), C++ programs which illustrate the use
of the MPI application program interface for carrying out parallel
computations in a distributed memory environment.

[TRIANGLE](../../c_src/triangle/triangle.md), a C program which
computes a triangulation of a geometric region, by Jonathan Shewchuk.

### Reference: {#reference align="center"}

1.  Douglas Jacobsen, Max Gunzburger, Todd Ringler, John Burkardt, Janet
    Peterson,\
    Parallel algorithms for planar and spherical Delaunay construction
    with an application to centroidal Voronoi tessellations,\
    Geoscientific Model Development.
2.  Jonathan Shewchuk,\
    Delaunay Refinement Algorithms for Triangular Mesh Generation,\
    Computational Geometry, Theory and Applications,\
    Volume 23, pages 21-74, May 2002.

### Source Code: {#source-code align="center"}

-   [scvt\_mpi.cpp](scvt_mpi.cpp), the source code;
-   [triangle.h](triangle.h), an include file for accessing the triangle
    library.
-   [triangulation.h](triangulation.h), an include file containing
    useful definitions.

### Examples and Tests: {#examples-and-tests align="center"}

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 25 February 2013.*
