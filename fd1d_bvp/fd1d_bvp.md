FD1D\_BVP\
Finite Difference Method\
1D Boundary Value Problem {#fd1d_bvp-finite-difference-method-1d-boundary-value-problem align="center"}
=========================

------------------------------------------------------------------------

**FD1D\_BVP** is a C++ program which applies the finite difference
method to solve a two point boundary value problem in one spatial
dimension.

The boundary value problem (BVP) that is to be solved has the form:

            - d/dx ( a(x) * du/dx ) + c(x) * u(x) = f(x)
          

in the interval X\[0\] &lt; x &lt; X\[N-1\]. The functions a(x), c(x),
and f(x) are given functions, and a formula for a'(x) is also available.

Boundary conditions are applied at the endpoints, and in this case,
these are assumed to have the form:

            u(X[0]) = 0.0;
            u(X[N-1]) = 0.0.
          

To compute a finite difference approximation, a set of n nodes is
defined over the interval, and, at each interior node, a discretized
version of the BVP is written, with u''(x) and u'(x) approximated by
central differences.

### Usage: {#usage align="center"}

> **fd1d\_bvp** ( *n*, *a*, *aprime*, *c*, *f*, *x*, *u* )

where

-   *n* the number of nodes.
-   *a* the function which evaluates a(x);
-   *aprime* the function which evaluates a'(x);
-   *c* the function which evaluates c(x);
-   *f* the function which evaluates f(x).
-   *x* the vector of n nodes, which may be nonuniformly spaced.
-   *u* the output vector of solution values at the nodes.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FD1D\_BVP** is available in [a C
version](../../c_src/fd1d_bvp/fd1d_bvp.html) and [a C++
version](../../cpp_src/fd1d_bvp/fd1d_bvp.html) and [a FORTRAN77
version](../../f77_src/fd1d_bvp/fd1d_bvp.html) and [a FORTRAN90
version](../../f_src/fd1d_bvp/fd1d_bvp.html) and [a MATLAB
version](../../m_src/fd1d_bvp/fd1d_bvp.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FD1D\_BURGERS\_LAX](../../cpp_src/fd1d_burgers_lax/fd1d_burgers_lax.html),
a C++ program which applies the finite difference method and the
Lax-Wendroff method to solve the non-viscous time-dependent Burgers
equation in one spatial dimension.

[FD1D\_BURGERS\_LEAP](../../cpp_src/fd1d_burgers_leap/fd1d_burgers_leap.html),
a C++ program which applies the finite difference method and the
leapfrog approach to solve the non-viscous time-dependent Burgers
equation in one spatial dimension.

[FD1D\_DISPLAY](../../m_src/fd1d_display/fd1d_display.html), a MATLAB
program which reads a pair of files defining a 1D finite difference
model, and plots the data.

[FD1D\_HEAT\_EXPLICIT](../../cpp_src/fd1d_heat_explicit/fd1d_heat_explicit.html),
a C++ program which uses the finite difference method and explicit time
stepping to solve the time dependent heat equation in 1D.

[FD1D\_HEAT\_IMPLICIT](../../cpp_src/fd1d_heat_implicit/fd1d_heat_implicit.html),
a C++ program which uses the finite difference method and implicit time
stepping to solve the time dependent heat equation in 1D.

[FD1D\_HEAT\_STEADY](../../cpp_src/fd1d_heat_steady/fd1d_heat_steady.html),
a C++ program which uses the finite difference method to solve the
steady (time independent) heat equation in 1D.

[FD1D\_WAVE](../../cpp_src/fd1d_wave/fd1d_wave.html), a C++ program
which applies the finite difference method to solve the time-dependent
wave equation utt = c \* uxx in one spatial dimension.

[FEM1D](../../cpp_src/fem1d/fem1d.html), a C++ program which applies the
finite element method to a linear two point boundary value problem in a
1D region.

[FEM1D\_BVP\_LINEAR](../../cpp_src/fem1d_bvp_linear/fem1d_bvp_linear.html),
a C++ program which applies the finite element method, with piecewise
linear elements, to a two point boundary value problem in one spatial
dimension.

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

-   [fd1d\_bvp.cpp](fd1d_bvp.cpp), the source code.
-   [fd1d\_bvp.hpp](fd1d_bvp.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [fd1d\_bvp\_prb.cpp](fd1d_bvp_prb.cpp), a sample calling program.
-   [fd1d\_bvp\_prb\_output.txt](fd1d_bvp_prb_output.txt), the output
    file.

-   [fd1d\_bvp\_test01\_nodes.txt](fd1d_bvp_test01_nodes.txt), the nodes
    for test 1.
-   [fd1d\_bvp\_test01\_values.txt](fd1d_bvp_test01_values.txt), the
    computed and exact values for test 1.
-   [fd1d\_bvp\_test01.png](fd1d_bvp_test01.png), a PNG image of a plot
    of the computed and exact values.

-   [fd1d\_bvp\_test02\_nodes.txt](fd1d_bvp_test02_nodes.txt), the nodes
    for test 2.
-   [fd1d\_bvp\_test02\_values.txt](fd1d_bvp_test02_values.txt), the
    computed and exact values for test 2.
-   [fd1d\_bvp\_test02.png](fd1d_bvp_test02.png), a PNG image of a plot
    of the computed and exact values.

-   [fd1d\_bvp\_test03\_nodes.txt](fd1d_bvp_test03_nodes.txt), the nodes
    for test 3.
-   [fd1d\_bvp\_test03\_values.txt](fd1d_bvp_test03_values.txt), the
    computed and exact values for test 3.
-   [fd1d\_bvp\_test03.png](fd1d_bvp_test03.png), a PNG image of a plot
    of the computed and exact values.

-   [fd1d\_bvp\_test04\_nodes.txt](fd1d_bvp_test04_nodes.txt), the nodes
    for test 4
-   [fd1d\_bvp\_test04\_values.txt](fd1d_bvp_test04_values.txt), the
    computed and exact values for test 4.
-   [fd1d\_bvp\_test04.png](fd1d_bvp_test04.png), a PNG image of a plot
    of the computed and exact values.

-   [fd1d\_bvp\_test05\_nodes.txt](fd1d_bvp_test05_nodes.txt), the nodes
    for test 5.
-   [fd1d\_bvp\_test05\_values.txt](fd1d_bvp_test05_values.txt), the
    computed and exact values for test 5.
-   [fd1d\_bvp\_test05.png](fd1d_bvp_test05.png), a PNG image of a plot
    of the computed and exact values.

### List of Routines: {#list-of-routines align="center"}

-   **FD1D\_BVP** solves a two point boundary value problem.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R83NP\_FS** factors and solves an R83NP system.
-   **R8MAT\_WRITE** writes an R8MAT file.
-   **R8VEC\_EVEN** returns N real values, evenly spaced between ALO and
    AHI.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 17 May 2009.*
