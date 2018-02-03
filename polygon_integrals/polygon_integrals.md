POLYGON\_INTEGRALS\
Arbitrary Moments of a Polygon {#polygon_integrals-arbitrary-moments-of-a-polygon align="center"}
==============================

------------------------------------------------------------------------

**POLYGON\_INTEGRALS** is a C++ library which returns the exact value of
the integral of any monomial over the interior of a polygon in 2D.

We suppose that POLY is a planar polygon with N vertices X, Y, listed in
counterclockwise order.

For nonnegative integers P and Q, the (unnormalized) moment of order
(P,Q) for POLY is defined by:

            Nu(P,Q) = Integral ( x, y in POLY ) x^p y^q dx dy
          

In particular, Nu(0,0) is the area of POLY.

Simple formulas are available for low orders:

            Nu(0,0) = 1/2 (1<=i<=N) X(i-1)Y(i)-X(i)Y(i-1)
            Nu(1,0) = 1/6 (1<=i<=N) ( X(i-1)Y(i)-X(i)Y(i-1) ) * (X(i-1)+X(i))
            Nu(0,1) = 1/6 (1<=i<=N) ( X(i-1)Y(i)-X(i)Y(i-1) ) * (Y(i-1)+Y(i))
            Nu(2,0) = 1/12 (1<=i<=N) ( X(i-1)Y(i)-X(i)Y(i-1) ) * (X(i-1)^2+X(i-1)X(i)+X(i)^2)
            Nu(1,1) = 1/24 (1<=i<=N) ( X(i-1)Y(i)-X(i)Y(i-1) ) * (2X(i-1)Y(i-1)+X(i-1)Y(i)+X(i)Y(i-1)+2X(i)Y(i))
            Nu(0,2) = 1/12 (1<=i<=N) ( X(i-1)Y(i)-X(i)Y(i-1) ) * (Y(i-1)^2+Y(i-1)Y(i)+Y(i)^2)
          

The normalized moment of order (P,Q) for POLY is defined by:

            Alpha(P,Q) = Integral ( x, y in POLY ) x^p y^q dx dy / Area ( Poly )
                       = Nu(P,Q) / Nu(0,0)
          

In particular, Alpha(0,0) is 1.

The central moment of order (P,Q) for POLY is defined by:

            x* = Alpha(1,0)
            y* = Alpha(0,1)
            Mu(P,Q) = Integral ( x, y in POLY ) (x-x*)^p (y-y*)^q dx dy / Area ( Poly )
          

Simple formulas are available for low orders:

            Mu(0,0) = 1
            Mu(1,0) = 0
            Mu(0,1) = 0
            Mu(2,0) = Alpha(2,0) - Alpha(1,0)^2
            Mu(1,1) = Alpha(1,1) - Alpha(1,0) * Alpha(0,1)
            Mu(0,2) = Alpha(0,2) - Alpha(0,1)^2
          

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**POLYGON\_INTEGRALS** is available in [a C
version](../../c_src/polygon_integrals/polygon_integrals.md) and [a
C++ version](../../master/polygon_integrals/polygon_integrals.md) and
[a FORTRAN77
version](../../f77_src/polygon_integrals/polygon_integrals.md) and [a
FORTRAN90 version](../../f_src/polygon_integrals/polygon_integrals.md)
and [a MATLAB
version](../../m_src/polygon_integrals/polygon_integrals.md) and [a
Python version](../../py_src/polygon_integrals/polygon_integrals.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BALL\_INTEGRALS](../../master/ball_integrals/ball_integrals.md), a
C++ library which returns the exact value of the integral of any
monomial over the interior of the unit ball in 3D.

[CIRCLE\_INTEGRALS](../../master/circle_integrals/circle_integrals.md),
a C++ library which returns the exact value of the integral of any
monomial over the surface of the unit circle in 2D.

[CUBE\_INTEGRALS](../../master/cube_integrals/cube_integrals.md), a
C++ library which returns the exact value of the integral of any
monomial over the interior of the unit cube in 3D.

[DISK\_INTEGRALS](../../master/disk_integrals/disk_integrals.md), a
C++ library which returns the exact value of the integral of any
monomial over the interior of the unit disk in 2D.

[HYPERBALL\_INTEGRALS](../../master/hyperball_integrals/hyperball_integrals.md),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit hyperball in M dimensions.

[HYPERCUBE\_INTEGRALS](../../master/hypercube_integrals/hypercube_integrals.md),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit hypercube in M dimensions.

[HYPERSPHERE\_INTEGRALS](../../master/hypersphere_integrals/hypersphere_integrals.md),
a C++ library which returns the exact value of the integral of any
monomial over the surface of the unit hypersphere in M dimensions.

[LINE\_INTEGRALS](../../master/line_integrals/line_integrals.md), a
C++ library which returns the exact value of the integral of any
monomial over the length of the unit line in 1D.

[POLYGON\_MONTE\_CARLO](../../master/polygon_monte_carlo/polygon_monte_carlo.md),
a C++ library which applies a Monte Carlo method to estimate the
integral of a function over the interior of a polygon in 2D.

[POLYGON\_PROPERTIES](../../master/polygon_properties/polygon_properties.md),
a C++ library which computes properties of an arbitrary polygon in the
plane, defined by a sequence of vertices, including interior angles,
area, centroid, containment of a point, convexity, diameter, distance to
a point, inradius, lattice area, nearest point in set, outradius,
uniform sampling.

[POLYGON\_TRIANGULATE](../../master/polygon_triangulate/polygon_triangulate.md),
a C++ library which triangulates a possibly nonconvex polygon, and which
can use gnuplot to display the external edges and internal diagonals of
the triangulation.

[PYRAMID\_INTEGRALS](../../master/pyramid_integrals/pyramid_integrals.md),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit pyramid in 3D.

[SIMPLEX\_INTEGRALS](../../master/simplex_integrals/simplex_integrals.md),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit simplex in M dimensions.

[SPHERE\_INTEGRALS](../../master/sphere_integrals/sphere_integrals.md),
a C++ library which returns the exact value of the integral of any
monomial over the surface of the unit sphere in 3D.

[SQUARE\_INTEGRALS](../../master/square_integrals/square_integrals.md),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit square in 2D.

[TETRAHEDRON\_INTEGRALS](../../master/tetrahedron_integrals/tetrahedron_integrals.md),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit tetrahedron in 3D.

[TRIANGLE\_INTEGRALS](../../master/triangle_integrals/triangle_integrals.md),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit triangle in 2D.

[WEDGE\_INTEGRALS](../../master/wedge_integrals/wedge_integrals.md),
a C++ library which returns the exact value of the integral of any
monomial over the interior of the unit wedge in 3D.

### Reference: {#reference align="center"}

1.  SF Bockman,\
    Generalizing the Formula for Areas of Polygons to Moments,\
    American Mathematical Society Monthly,\
    Volume 96, Number 2, February 1989, pages 131-132.
2.  Carsten Steger,\
    On the calculation of arbitrary moments of polygons,\
    Technical Report FGBV-96-05,\
    Forschungsgruppe Bildverstehen, Informatik IX,\
    Technische Universitaet Muenchen, October 1996.

### Source Code: {#source-code align="center"}

-   [polygon\_integrals.cpp](polygon_integrals.cpp), the source code.
-   [polygon\_integrals.hpp](polygon_integrals.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [polygon\_integrals\_prb.cpp](polygon_integrals_prb.cpp), a sample
    calling program.
-   [polygon\_integrals\_prb\_output.txt](polygon_integrals_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **MOMENT** computes an unnormalized moment of a polygon.
-   **MOMENT\_CENTRAL** computes central moments of a polygon.
-   **MOMENT\_NORMALIZED** computes a normalized moment of a polygon.
-   **R8\_CHOOSE** computes the binomial coefficient C(N,K) as an R8.
-   **R8\_MOP** returns the I-th power of -1 as an R8.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 03 October 2012.*
