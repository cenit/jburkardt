TEST\_INTERP\
Interpolation Test Data {#test_interp-interpolation-test-data align="center"}
=======================

------------------------------------------------------------------------

**TEST\_INTERP** is a C++ library which defines data that may be used to
test interpolation algorithms.

The following sets of data are available:

1.  [p01\_plot.png](p01_plot.png), 18 data points, 2 dimensions. This
    example is due to Hans-Joerg Wenz. It is an example of good data,
    which is dense enough in areas where the expected curvature of the
    interpolant is large. Good results can be expected with almost any
    reasonable interpolation method.
2.  [p02\_plot.png](p02_plot.png), 18 data points, 2 dimensions. This
    example is due to ETY Lee of Boeing. Data near the corners is more
    dense than in regions of small curvature. A local interpolation
    method will produce a more plausible interpolant than a nonlocal
    interpolation method, such as cubic splines.
3.  [p03\_plot.png](p03_plot.png), 11 data points, 2 dimensions. This
    example is due to Fred Fritsch and Ralph Carlson. This data can
    cause problems for interpolation methods. There are sudden changes
    in direction, and at the same time, sparsely-placed data. This can
    cause an interpolant to overshoot the data in a way that seems
    implausible.
4.  [p04\_plot.png](p04_plot.png), 8 data points, 2 dimensions. This
    example is due to Larry Irvine, Samuel Marin and Philip Smith. This
    data can cause problems for interpolation methods. There are sudden
    changes in direction, and at the same time, sparsely-placed data.
    This can cause an interpolant to overshoot the data in a way that
    seems implausible.
5.  [p05\_plot.png](p05_plot.png), 9 data points, 2 dimensions. This
    example is due to Larry Irvine, Samuel Marin and Philip Smith. This
    data can cause problems for interpolation methods. There are sudden
    changes in direction, and at the same time, sparsely-placed data.
    This can cause an interpolant to overshoot the data in a way that
    seems implausible.
6.  [p06\_plot.png](p06_plot.png), 49 data points, 2 dimensions. The
    data is due to deBoor and Rice. The data represents a temperature
    dependent property of titanium. The data has been used extensively
    as an example in spline approximation with variably-spaced knots.
    DeBoor considers two sets of knots: (595,675,755,835,915,995,1075)
    and (595,725,850,910,975,1040,1075).
7.  [p07\_plot.png](p07_plot.png), 4 data points, 2 dimensions. The data
    is a simple symmetric set of 4 points, for which it is interesting
    to develop the Shepard interpolants for varying values of the
    exponent p.
8.  [p08\_plot.png](p08_plot.png), 12 data points, 2 dimensions. This is
    equally spaced data for y = x\^2, except for one extra point whose x
    value is close to another, but whose y value is not so close. A
    small disagreement in nearby data can become a disaster.

**TEST\_INTERP** requires access to a compiled copy of the R8LIB
library.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TEST\_INTERP** is available in [a C
version](../../c_src/test_interp/test_interp.md) and [a C++
version](../../master/test_interp/test_interp.md) and [a FORTRAN77
version](../../f77_src/test_interp/test_interp.md) and [a FORTRAN90
version](../../f_src/test_interp/test_interp.md) and [a MATLAB
version](../../m_src/test_interp/test_interp.md) and [a Python
version](../../py_src/test_interp/test_interp.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[DIVDIF](../../master/divdif/divdif.md), a C++ library which includes
many routines to construct and evaluate divided difference interpolants.

[HERMITE](../../master/hermite/hermite.md), a C++ library which
computes the Hermite interpolant, a polynomial that matches function
values and derivatives.

[INTERPOLATION](../../datasets/interpolation/interpolation.md), a
dataset directory which contains datasets to be interpolated.

[LAGRANGE\_INTERP\_1D](../../master/lagrange_interp_1d/lagrange_interp_1d.md),
a C++ library which defines and evaluates the Lagrange polynomial p(x)
which interpolates a set of data, so that p(x(i)) = y(i).

[NEAREST\_INTERP\_1D](../../master/nearest_interp_1d/nearest_interp_1d.md),
a C++ library which interpolates a set of data using a piecewise
constant interpolant defined by the nearest neighbor criterion.

[NEWTON\_INTERP\_1D](../../master/newton_interp_1d/newton_interp_1d.md),
a C++ library which finds a polynomial interpolant to data using Newton
divided differences.

[PWL\_INTERP\_1D](../../master/pwl_interp_1d/pwl_interp_1d.md), a C++
library which interpolates a set of data using a piecewise linear
function.

[R8LIB](../../master/r8lib/r8lib.md), a C++ library which contains
many utility routines using double precision real (R8) arithmetic.

[RBF\_INTERP](../../master/rbf_interp/rbf_interp.md), a C++ library
which defines and evaluates radial basis function (RBF) interpolants to
multidimensional data.

[SPLINE](../../master/spline/spline.md), a C++ library which includes
many routines to construct and evaluate spline interpolants and
approximants.

[TEST\_APPROX](../../master/test_approx/test_approx.md), a C++
library which defines test problems for approximation, provided as a set
of (x,y) data.

[TEST\_INTERP\_ND](../../master/test_interp_nd/test_interp_nd.md), a
C++ library which defines test problems for interpolation of data z(x),
depending on an M-dimensional argument.

### Reference: {#reference align="center"}

1.  Carl DeBoor, John Rice,\
    Least-squares cubic spline approximation II - variable knots.\
    Technical Report CSD TR 21,\
    Purdue University, Lafayette, Indiana, 1968.
2.  Carl DeBoor,\
    A Practical Guide to Splines,\
    Springer, 2001,\
    ISBN: 0387953663,\
    LC: QA1.A647.v27.
3.  Fred Fritsch, Ralph Carlson,\
    Monotone Piecewise Cubic Interpolation,\
    SIAM Journal on Numerical Analysis,\
    Volume 17, Number 2, April 1980, pages 238-246.
4.  Larry Irvine, Samuel Marin, Philip Smith,\
    Constrained Interpolation and Smoothing,\
    Constructive Approximation,\
    Volume 2, Number 1, December 1986, pages 129-151.
5.  ETY Lee,\
    Choosing Nodes in Parametric Curve Interpolation,\
    Computer-Aided Design,\
    Volume 21, Number 6, July/August 1989, pages 363-370.
6.  Hans-Joerg Wenz,\
    Interpolation of Curve Data by Blended Generalized Circles,\
    Computer Aided Geometric Design,\
    Volume 13, Number 8, November 1996, pages 673-680.

### Source Code: {#source-code align="center"}

-   [test\_interp.cpp](test_interp.cpp), the source code.
-   [test\_interp.hpp](test_interp.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [test\_interp\_prb.cpp](test_interp_prb.cpp), a sample calling
    program.
-   [test\_interp\_prb\_output.txt](test_interp_prb_output.txt), the
    output file.

### List of Routines: {#list-of-routines align="center"}

-   **P00\_DATA** returns the data for any problem.
-   **P00\_DATA\_NUM** returns the number of data points for any
    problem.
-   **P00\_DIM\_NUM** returns the spatial dimension for any problem.
-   **P00\_PROB\_NUM** returns the number of test problems.
-   **P00\_STORY** prints the "story" for any problem.
-   **P01\_DATA** returns the data for problem 01.
-   **P01\_DATA\_NUM** returns the number of data points for problem 01.
-   **P01\_DIM\_NUM** returns the spatial dimension for problem 01.
-   **P01\_STORY** prints the "story" for problem 01.
-   **P02\_DATA** returns the data for problem 02.
-   **P02\_DATA\_NUM** returns the number of data points for problem 02.
-   **P02\_DIM\_NUM** returns the spatial dimension for problem 02.
-   **P02\_STORY** prints the "story" for problem 02.
-   **P03\_DATA** returns the data for problem 03.
-   **P03\_DATA\_NUM** returns the number of data points for problem 03.
-   **P03\_DIM\_NUM** returns the spatial dimension for problem 03.
-   **P03\_STORY** prints the "story" for problem 03.
-   **P04\_DATA** returns the data for problem 04.
-   **P04\_DATA\_NUM** returns the number of data points for problem 04.
-   **P04\_DIM\_NUM** returns the spatial dimension for problem 04.
-   **P04\_STORY** prints the "story" for problem 04.
-   **P05\_DATA** returns the data for problem 05.
-   **P05\_DATA\_NUM** returns the number of data points for problem 05.
-   **P05\_DIM\_NUM** returns the spatial dimension for problem 05.
-   **P05\_STORY** prints the "story" for problem 05.
-   **P06\_DATA** returns the data for problem 06.
-   **P06\_DATA\_NUM** returns the number of data points for problem 06.
-   **P06\_DIM\_NUM** returns the spatial dimension for problem 06.
-   **P06\_STORY** prints the "story" for problem 06.
-   **P07\_DATA** returns the data for problem 07.
-   **P07\_DATA\_NUM** returns the number of data points for problem 07.
-   **P07\_DIM\_NUM** returns the spatial dimension for problem 07.
-   **P07\_STORY** prints the "story" for problem 07.
-   **P08\_DATA** returns the data for problem 08.
-   **P08\_DATA\_NUM** returns the number of data points for problem 08.
-   **P08\_DIM\_NUM** returns the spatial dimension for problem 08.
-   **P08\_STORY** prints the "story" for problem 08.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 04 October 2012.*
