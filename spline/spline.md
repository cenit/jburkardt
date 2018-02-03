SPLINE\
Interpolation and Approximation of Data {#spline-interpolation-and-approximation-of-data align="center"}
=======================================

------------------------------------------------------------------------

**SPLINE** is a C++ library which constructs and evaluates spline
functions.

These spline functions are typically used to

-   interpolate data exactly at a set of points;
-   approximate data at many points, or over an interval.

The most common use of this software is for situations where a set of
(X,Y) data points is known, and it is desired to determine a smooth
function which passes exactly through those points, and which can be
evaluated everywhere. Thus, it is possible to get a formula that allows
you to "connect the dots".

Of course, you could could just connect the dots with straight lines,
but that would look ugly, and if there really is some function that
explains your data, you'd expect it to curve around rather than make
sudden angular turns. The functions in **SPLINE** offer a variety of
choices for slinky curves that will make pleasing interpolants of your
data.

There are a variety of types of approximation curves available,
including:

-   least squares polynomials,
-   divided difference polynomials,
-   piecewise polynomials,
-   B splines,
-   Bernstein splines,
-   beta splines,
-   Bezier splines,
-   Hermite splines,
-   Overhauser (or Catmull-Rom) splines.

Also included are a set of routines that return the local "basis
matrix", which allows the evaluation of the spline in terms of local
function data.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SPLINE** is available in [a C version](../../c_src/spline/spline.html)
and [a C++ version](../../cpp_src/spline/spline.html) and [a FORTRAN77
version](../../f77_src/spline/spline.html) and [a FORTRAN90
version](../../f_src/spline/spline.html) and [a MATLAB
version.](../../m_src/spline/spline.html)

### Related Data and Programs: {#related-data-and-programs align="center"}

[BERNSTEIN\_POLYNOMIAL](../../cpp_src/bernstein_polynomial/bernstein_polynomial.html),
a C++ library which evaluates the Bernstein polynomials, useful for
uniform approximation of functions;

[CHEBYSHEV](../../cpp_src/chebyshev/chebyshev.html), a C++ library which
computes the Chebyshev interpolant/approximant to a given function over
an interval.

[DIVDIF](../../cpp_src/divdif/divdif.html), a C++ library which uses
divided differences to interpolate data.

[HERMITE\_CUBIC](../../cpp_src/hermite_cubic/hermite_cubic.html), a C++
library which can compute the value, derivatives or integral of a
Hermite cubic polynomial, or manipulate an interpolating function made
up of piecewise Hermite cubic polynomials.

[LAGRANGE\_INTERP\_1D](../../cpp_src/lagrange_interp_1d/lagrange_interp_1d.html),
a C++ library which defines and evaluates the Lagrange polynomial p(x)
which interpolates a set of data, so that p(x(i)) = y(i).

[TEST\_APPROX](../../cpp_src/test_approx/test_approx.html), a C++
library which defines test problems for approximation, provided as a set
of (x,y) data.

[TEST\_INTERP\_1D](../../cpp_src/test_interp_1d/test_interp_1d.html), a
C++ library which defines test problems for interpolation of data y(x),
depending on a 1D argument.

### Reference: {#reference align="center"}

1.  JA Brewer, DC Anderson,\
    Visual Interaction with Overhauser Curves and Surfaces,\
    SIGGRAPH 77,\
    in Proceedings of the 4th Annual Conference on Computer Graphics and
    Interactive Techniques,\
    ASME, July 1977, pages 132-137.
2.  Edwin Catmull, Raphael Rom,\
    A Class of Local Interpolating Splines,\
    in Computer Aided Geometric Design,\
    edited by Robert Barnhill, Richard Reisenfeld,\
    Academic Press, 1974,\
    ISBN: 0120790505.
3.  Samuel Conte, Carl deBoor,\
    Elementary Numerical Analysis,\
    Second Edition,\
    McGraw Hill, 1972,\
    ISBN: 07-012446-4.
4.  Alan Davies, Philip Samuels,\
    An Introduction to Computational Geometry for Curves and Surfaces,\
    Clarendon Press, 1996,\
    ISBN: 0-19-851478-6,\
    LC: QA448.D38.
5.  Carl deBoor,\
    A Practical Guide to Splines,\
    Springer, 2001,\
    ISBN: 0387953663.
6.  Jack Dongarra, Jim Bunch, Cleve Moler, Pete Stewart,\
    LINPACK User's Guide,\
    SIAM, 1979,\
    ISBN13: 978-0-898711-72-1.
7.  Gisela Engeln-Muellges, Frank Uhlig,\
    Numerical Algorithms with C,\
    Springer, 1996,\
    ISBN: 3-540-60530-4.
8.  James Foley, Andries vanDam, Steven Feiner, John Hughes,\
    Computer Graphics, Principles and Practice,\
    Second Edition,\
    Addison Wesley, 1995,\
    ISBN: 0201848406,\
    LC: T385.C5735.
9.  Fred Fritsch, Judy Butland,\
    A Method for Constructing Local Monotone Piecewise Cubic
    Interpolants,\
    SIAM Journal on Scientific and Statistical Computing,\
    Volume 5, Number 2, 1984, pages 300-304.
10. Fred Fritsch, Ralph Carlson,\
    Monotone Piecewise Cubic Interpolation,\
    SIAM Journal on Numerical Analysis,\
    Volume 17, Number 2, April 1980, pages 238-246.
11. David Kahaner, Cleve Moler, Steven Nash,\
    Numerical Methods and Software,\
    Prentice Hall, 1989,\
    ISBN: 0-13-627258-4,\
    LC: TA345.K34.
12. David Rogers, Alan Adams,\
    Mathematical Elements of Computer Graphics,\
    Second Edition,\
    McGraw Hill, 1989,\
    ISBN: 0070535299.

### Source Code: {#source-code align="center"}

-   [spline.cpp](spline.cpp), the source code;
-   [spline.hpp](spline.hpp), the include file;

### Examples and Tests: {#examples-and-tests align="center"}

-   [spline\_prb.cpp](spline_prb.cpp), the calling program;
-   [spline\_prb\_output.txt](spline_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **BASIS\_FUNCTION\_B\_VAL** evaluates the B spline basis function.
-   **BASIS\_FUNCTION\_BETA\_VAL** evaluates the beta spline basis
    function.
-   **BASIS\_MATRIX\_B\_UNI** sets up the uniform B spline basis matrix.
-   **BASIS\_MATRIX\_BETA\_UNI** sets up the uniform beta spline basis
    matrix.
-   **BASIS\_MATRIX\_BEZIER\_UNI** sets up the cubic Bezier spline basis
    matrix.
-   **BASIS\_MATRIX\_HERMITE** sets up the Hermite spline basis matrix.
-   **BASIS\_MATRIX\_OVERHAUSER\_NONUNI** sets the nonuniform Overhauser
    spline basis matrix.
-   **BASIS\_MATRIX\_OVERHAUSER\_NUL** sets the nonuniform left
    Overhauser spline basis matrix.
-   **BASIS\_MATRIX\_OVERHAUSER\_NUR** sets the nonuniform right
    Overhauser spline basis matrix.
-   **BASIS\_MATRIX\_OVERHAUSER\_UNI** sets the uniform Overhauser
    spline basis matrix.
-   **BASIS\_MATRIX\_OVERHAUSER\_UNI\_L** sets the left uniform
    Overhauser spline basis matrix.
-   **BASIS\_MATRIX\_OVERHAUSER\_UNI\_R** sets the right uniform
    Overhauser spline basis matrix.
-   **BASIS\_MATRIX\_TMP** computes Q = T \* MBASIS \* P
-   **BC\_VAL** evaluates a parameterized Bezier curve.
-   **BEZ\_VAL** evaluates a Bezier function at a point.
-   **BP\_APPROX** evaluates the Bernstein polynomial for F(X) on
    \[A,B\].
-   **BP01** evaluates the Bernstein basis polynomials for \[0,1\] at a
    point.
-   **BPAB** evaluates the Bernstein basis polynomials for \[A,B\] at a
    point.
-   **CHFEV** evaluates a cubic polynomial given in Hermite form.
-   **D3\_MXV** multiplies a D3 matrix times a vector.
-   **D3\_NP\_FS** factors and solves a D3 system.
-   **D3\_PRINT** prints a D3 matrix.
-   **D3\_PRINT\_SOME** prints some of a D3 matrix.
-   **D3\_UNIFORM** randomizes a D3 matrix.
-   **DATA\_TO\_DIF** sets up a divided difference table from raw data.
-   **DIF\_VAL** evaluates a divided difference polynomial at a point.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the smaller of two I4's.
-   **LEAST\_SET** defines a least squares polynomial for given data.
-   **LEAST\_VAL** evaluates a least squares polynomial defined by
    LEAST\_SET.
-   **LEAST\_VAL2** evaluates a least squares polynomial defined by
    LEAST\_SET.
-   **LEAST\_SET\_OLD** constructs the least squares polynomial
    approximation to data.
-   **LEAST\_VAL\_OLD** evaluates a least squares polynomial defined by
    LEAST\_SET\_OLD.
-   **PARABOLA\_VAL2** evaluates a parabolic function through 3 points
    in a table.
-   **PCHST:** PCHIP sign-testing routine.
-   **R8\_MAX** returns the maximum of two R8's.
-   **R8\_MIN** returns the minimum of two R8's.
-   **R8\_UNIFORM\_01** is a portable pseudorandom number generator.
-   **R8VEC\_BRACKET** searches a sorted array for successive brackets
    of a value.
-   **R8VEC\_BRACKET3** finds the interval containing or nearest a given
    value.
-   **R8VEC\_EVEN** returns N real values, evenly spaced between ALO and
    AHI.
-   **R8VEC\_INDICATOR** sets an R8VEC to the indicator vector.
-   **R8VEC\_ORDER\_TYPE** determines if an R8VEC is (non)strictly
    ascending/descending.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **R8VEC\_SORT\_BUBBLE\_A** ascending sorts an R8VEC using bubble
    sort.
-   **R8VEC\_UNIFORM** returns a scaled pseudorandom R8VEC.
-   **R8VEC\_UNIQUE\_COUNT** counts the unique elements in an unsorted
    real array.
-   **R8VEC\_ZERO** zeroes an R8VEC.
-   **SPLINE\_B\_VAL** evaluates a cubic B spline approximant.
-   **SPLINE\_BETA\_VAL** evaluates a cubic beta spline approximant.
-   **SPLINE\_CONSTANT\_VAL** evaluates a piecewise constant spline at a
    point.
-   **SPLINE\_CUBIC\_SET** computes the second derivatives of a
    piecewise cubic spline.
-   **SPLINE\_CUBIC\_VAL** evaluates a piecewise cubic spline at a
    point.
-   **SPLINE\_CUBIC\_VAL2** evaluates a piecewise cubic spline at a
    point.
-   **SPLINE\_HERMITE\_SET** sets up a piecewise cubic Hermite
    interpolant.
-   **SPLINE\_HERMITE\_VAL** evaluates a piecewise cubic Hermite
    interpolant.
-   **SPLINE\_LINEAR\_INT** evaluates the integral of a piecewise linear
    spline.
-   **SPLINE\_LINEAR\_INTSET** sets a piecewise linear spline with given
    integral properties.
-   **SPLINE\_LINEAR\_VAL** evaluates a piecewise linear spline at a
    point.
-   **SPLINE\_OVERHAUSER\_NONUNI\_VAL** evaluates the nonuniform
    Overhauser spline.
-   **SPLINE\_OVERHAUSER\_UNI\_VAL** evaluates the uniform Overhauser
    spline.
-   **SPLINE\_OVERHAUSER\_VAL** evaluates an Overhauser spline.
-   **SPLINE\_PCHIP\_SET** sets derivatives for a piecewise cubic
    Hermite interpolant.
-   **SPLINE\_PCHIP\_VAL** evaluates a piecewise cubic Hermite function.
-   **SPLINE\_QUADRATIC\_VAL** evaluates a piecewise quadratic spline at
    a point.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 10 October 2012.*
