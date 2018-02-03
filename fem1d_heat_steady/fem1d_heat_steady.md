FEM1D\_HEAT\_STEADY\
Finite Element Method, 1D, Steady State Heat Equation {#fem1d_heat_steady-finite-element-method-1d-steady-state-heat-equation align="center"}
=====================================================

------------------------------------------------------------------------

**FEM1D\_HEAT\_STEADY** is a C++ program which applies the finite
element method, with piecewise linear elements, to solve the steady
state heat equation in one spatial dimension.

The finite element method is used with piecewise linear elements.

The steady state heat equation that is to be solved has the form:

            - d/dx ( k(x) * du/dx ) = f(x)
          

in the interval A &lt; x &lt; B. The functions k(x) and f(x) are given.

Boundary conditions are applied at the endpoints, and in this case,
these are assumed to have the form:

            u(A) = UA;
            u(B) = UB.
          

To compute a finite element approximation, a set of N equally spaced
nodes is defined from A to B, a set of piecewise linear basis functions
is set up, with one basis function associated with each node, and then
the differential equation is multiplied by each basis function, and
integration by parts is used to simplify the integrand.

A simple two point Gauss quadrature formula is used to estimate the
resulting integrals over each interval.

### Usage: {#usage align="center"}

> call **fem1d\_heat\_steady** ( *n*, *a*, *b*, *ua*, *ub*, *k*, *f*,
> *x*, *u* )

where

-   *n* is the number of equally spaced nodes.
-   *a, b* are the left and right endpoints.
-   *ua, ub* are the prescribed values of U at the endpoints;
-   *k* is the function which evaluates k(x);
-   *f* is the function which evaluates f(x).
-   *x* is the input vector of *n* nodes, with x(1) = a, x(n) = b.
-   *u* is the output vector containing the estimated solution value at
    the nodes.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FEM1D\_HEAT\_STEADY** is available in [a C
version](../../c_src/fem1d_heat_steady/fem1d_heat_steady.md) and [a
C++ version](../../master/fem1d_heat_steady/fem1d_heat_steady.md) and
[a FORTRAN77
version](../../f77_src/fem1d_heat_steady/fem1d_heat_steady.md) and [a
FORTRAN90 version](../../f_src/fem1d_heat_steady/fem1d_heat_steady.md)
and [a MATLAB
version](../../m_src/fem1d_heat_steady/fem1d_heat_steady.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FD1D\_HEAT\_STEADY](../../master/fd1d_heat_steady/fd1d_heat_steady.md),
a C++ program which applies the finite difference method to the steady
state heat equation in one spatial dimension.

[FEM1D](../../data/fem1d/fem1d.md), a data directory which contains
examples of 1D FEM files, three text files that describe a 1D finite
element model;

[FEM1D](../../master/fem1d/fem1d.md), a C++ program which applies the
finite element method to a linear two point boundary value problem in a
1D region.

[FEM1D\_ADAPTIVE](../../master/fem1d_adaptive/fem1d_adaptive.md), a
C++ program which applies the finite element method to a linear two
point boundary value problem in a 1D region, using adaptive refinement
to improve the solution.

[FEM1D\_BVP\_LINEAR](../../master/fem1d_bvp_linear/fem1d_bvp_linear.md),
a C++ program which applies the finite element method to a linear two
point boundary value problem in a 1D region, using piecewise linear
elements.

[FEM1D\_NONLINEAR](../../master/fem1d_nonlinear/fem1d_nonlinear.md),
a C++ program which applies the finite element method to a nonlinear two
point boundary value problem in a 1D region.

[FEM1D\_PACK](../../master/fem1d_pack/fem1d_pack.md), a C++ library
which contains utilities for 1D finite element calculations.

[FEM1D\_PMETHOD](../../master/fem1d_pmethod/fem1d_pmethod.md), a C++
program which applies the p-method version of the finite element method
to a linear two point boundary value problem in a 1D region.

[STOCHASTIC\_HEAT2D](../../master/stochastic_heat2d/stochastic_heat2d.md),
a C++ program which implements a finite difference method (FDM) for the
steady (time independent) 2D heat equation, with a stochastic heat
diffusivity coefficient, using gnuplot to illustrate the results.

### Reference: {#reference align="center"}

1.  Dianne O'Leary,\
    Finite Differences and Finite Elements: Getting to Know You,\
    Computing in Science and Engineering,\
    Volume 7, Number 3, May/June 2005.
2.  Dianne O'Leary,\
    Scientific Computing with Case Studies,\
    SIAM, 2008,\
    ISBN13: 978-0-898716-66-5,\
    LC: QA401.O44.
3.  Hans Rudolf Schwarz,\
    Finite Element Methods,\
    Academic Press, 1988,\
    ISBN: 0126330107,\
    LC: TA347.F5.S3313..
4.  Gilbert Strang, George Fix,\
    An Analysis of the Finite Element Method,\
    Cambridge, 1973,\
    ISBN: 096140888X,\
    LC: TA335.S77.
5.  Olgierd Zienkiewicz,\
    The Finite Element Method,\
    Sixth Edition,\
    Butterworth-Heinemann, 2005,\
    ISBN: 0750663200,\
    LC: TA640.2.Z54

### Source Code: {#source-code align="center"}

-   [fem1d\_heat\_steady.cpp](fem1d_heat_steady.cpp), the source code.
-   [fem1d\_heat\_steady.hpp](fem1d_heat_steady.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [fem1d\_heat\_steady\_prb.cpp](fem1d_heat_steady_prb.cpp), a sample
    calling program.
-   [fem1d\_heat\_steady\_prb\_output.txt](fem1d_heat_steady_prb_output.txt),
    the output file.

### List of Routines: {#list-of-routines align="center"}

-   **FEM1D\_HEAT\_STEADY** solves the steady 1D heat equation with
    finite elements.
-   **I4VEC\_ZERO\_NEW** creates and zeroes an I4VEC.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8MAT\_SOLVE2** computes the solution of an N by N linear system.
-   **R8MAT\_ZERO\_NEW** returns a new zeroed R8MAT.
-   **R8VEC\_EVEN** returns an R8VEC of values evenly spaced between ALO
    and AHI.
-   **R8VEC\_ZERO\_NEW** creates and zeroes an R8VEC.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 09 April 2011.*
