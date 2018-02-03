HERMITE\_CUBIC\
Hermite Cubic Polynomial Evaluation, Interpolation, Integration, Splines {#hermite_cubic-hermite-cubic-polynomial-evaluation-interpolation-integration-splines align="center"}
========================================================================

------------------------------------------------------------------------

**HERMITE\_CUBIC** is a C++ library which demonstrates the use of cubic
polynomials in the Hermite form.

### The Hermite Cubic {#the-hermite-cubic align="center"}

The Hermite form of a cubic polynomial defines the polynomial **p(x)**
by specifying two distinct points **x1** and **x2**, and providing
values for the following four items:

            f1 = p(x1)
            d1 = p'(x1)
            f2 = p(x2)
            d2 = p'(x2)
          

The locations of the abscissas and the four data values are enough to
uniquely define a cubic polynomial, known as the Hermite cubic.

From the Hermite cubic representation, it is possible to determine the
standard power series form:

            p(x) = c0 + c1 * x + c2 * x2 + c3 * x3
          

It is possible, given any value of the argument **x** and the data
values that define the Hermite cubic polynomial, to determine the value
of **p(x)**, as well as the values of the first, second and third
derivatives.

It is possible, given two values of the argument **x3** and **x4**, and
the data values that define the Hermite cubic polynomial, to determine
the value of the integral of **p(x)** over the interval \[x3,x4\].

### Hermite Cubic Splines: {#hermite-cubic-splines align="center"}

A sequence of Hermite cubic polynomials can be used to produce a
piecewise cubic Hermite interpolant, if we are given a strictly
increasing sequence of **n** nodes **x(1:n)**, and corresponding data
vectors **f(1:n)** and **d(1:n)**. This is done by defining **n-1**
cubic Hermite polynomials, with the **i**-th polynomial defined using
the data at nodes **x(i)** and **x(i+1)**. The resulting function
interpolates the value and derivative data, and is continuous and
continuously differentiable everywhere, and in particular, at the nodes.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**HERMITE\_CUBIC** is available in [a C
version](../../c_src/hermite_cubic/hermite_cubic.html) and [a C++
version](../../cpp_src/hermite_cubic/hermite_cubic.html) and [a
FORTRAN77 version](../../f77_src/hermite_cubic/hermite_cubic.html) and
[a FORTRAN90 version](../../f_src/hermite_cubic/hermite_cubic.html) and
[a MATLAB version](../../m_src/hermite_cubic/hermite_cubic.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BERNSTEIN\_POLYNOMIAL](../../cpp_src/bernstein_polynomial/bernstein_polynomial.html),
a C++ library which evaluates the Bernstein polynomials, useful for
uniform approximation of functions;

[CHEBYSHEV](../../cpp_src/chebyshev/chebyshev.html), a C++ library which
computes the Chebyshev interpolant/approximant to a given function over
an interval.

[DIVDIF](../../cpp_src/divdif/divdif.html), a C++ library which computes
divided difference polynomials from data;

[NMS](../../f_src/nms/nms.html), a FORTRAN90 library which includes a
wide variety of numerical software, including solvers for linear systems
of equations, interpolation of data, numerical quadrature, linear least
squares data fitting, the solution of nonlinear equations, ordinary
differential equations, optimization and nonlinear least squares,
simulation and random numbers, trigonometric approximation and Fast
Fourier Transforms.

[SPLINE](../../cpp_src/spline/spline.html), a C++ library which includes
many routines to construct and evaluate spline interpolants and
approximants.

[TEST\_APPROX](../../cpp_src/test_approx/test_approx.html), a C++
library which defines test problems for approximation, provided as a set
of (x,y) data.

[TEST\_INTERP\_1D](../../cpp_src/test_interp_1d/test_interp_1d.html), a
C++ library which defines test problems for interpolation of data y(x),
depending on a 1D argument.

### Reference: {#reference align="center"}

1.  Fred Fritsch, Ralph Carlson,\
    Monotone Piecewise Cubic Interpolation,\
    SIAM Journal on Numerical Analysis,\
    Volume 17, Number 2, April 1980, pages 238-246.

### Source Code: {#source-code align="center"}

-   [hermite\_cubic.cpp](hermite_cubic.cpp), the source code.
-   [hermite\_cubic.hpp](hermite_cubic.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [hermite\_cubic\_prb.cpp](hermite_cubic_prb.cpp), a sample calling
    program.
-   [hermite\_cubic\_prb\_output.txt](hermite_cubic_prb_output.txt), the
    output file.

### List of Routines: {#list-of-routines align="center"}

-   **HERMITE\_CUBIC\_INTEGRAL** returns the integral of a Hermite cubic
    polynomial.
-   **HERMITE\_CUBIC\_INTEGRATE** integrates a Hermite cubic polynomial
    from A to B.
-   **HERMITE\_CUBIC\_LAGRANGE\_INTEGRAL:** Hermite cubic Lagrange
    integrals.
-   **HERMITE\_CUBIC\_LAGRANGE\_INTEGRATE** integrates Hermite cubic
    Lagrange polynomials.
-   **HERMITE\_CUBIC\_LAGRANGE\_VALUE** evaluates the Hermite cubic
    Lagrange polynomials.
-   **HERMITE\_CUBIC\_SPLINE\_INTEGRAL:** Hermite cubic spline integral.
-   **HERMITE\_CUBIC\_SPLINE\_INTEGRATE** integrates a Hermite cubic
    spline over \[A,B\].
-   **HERMITE\_CUBIC\_SPLINE\_QUAD\_RULE:** Hermite cubic spline
    quadrature rule.
-   **HERMITE\_CUBIC\_SPLINE\_VALUE** evaluates a Hermite cubic spline.
-   **HERMITE\_CUBIC\_TO\_POWER\_CUBIC** converts a Hermite cubic to
    power form.
-   **HERMITE\_CUBIC\_VALUE** evaluates a Hermite cubic polynomial.
-   **POWER\_CUBIC\_TO\_HERMITE\_CUBIC** converts a power cubic to
    Hermite form.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_UNIFORM\_01** returns a unit pseudorandom R8.
-   **R8VEC\_BRACKET3** finds the interval containing or nearest a given
    value.
-   **R8VEC\_EVEN\_NEW** returns an R8VEC evenly spaced between ALO and
    AHI.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last modified on 28 February 2011.*
