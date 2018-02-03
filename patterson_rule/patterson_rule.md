PATTERSON\_RULE\
Gauss-Patterson Quadrature Rules {#patterson_rule-gauss-patterson-quadrature-rules align="center"}
================================

------------------------------------------------------------------------

**PATTERSON\_RULE** is a C++ program which generates a specific
Gauss-Patterson quadrature rule, based on user input.

The rule is written to three files for easy use as input to other
programs.

The Gauss-Patterson quadrature is a nested family which begins with the
Gauss-Legendre rules of orders 1 and 3, and then succesively inserts one
new abscissa in each subinterval. Thus, after the second rule, the
Gauss-Patterson rules do not have the super-high precision of the
Gauss-Legendre rules. They trade this precision in exchange for the
advantages of nestedness. This means that Gauss-Patterson rules are only
available for orders of 1, 3, 7, 15, 31, 63, 127, 255 or 511.

The *standard Gauss-Patterson quadrature rule* is used as follows:

            Integral ( A <= x <= B ) f(x) dx
          

is to be approximated by

            Sum ( 1 <= i <= order ) w(i) * f(x(i))
          

The polynomial precision of a Gauss-Patterson rule can be checked
numerically by the **INT\_EXACTNESS\_LEGENDRE** program. We should
expect

  Index   Order   Free+Fixed   Expected Precision   Actual Precision
  ------- ------- ------------ -------------------- ------------------
  0       1       1 + 0        2\*1+0-1=1           1
  1       3       3 + 0        2\*3+0-1=5           5
  2       7       4 + 3        2\*4+3-1=10          10 + 1 = 11
  3       15      8 + 7        2\*8+7-1=22          22 + 1 = 23
  4       31      16 + 15      2\*16+15-1=46        46 + 1 = 47
  5       63      32 + 31      2\*32+31-1=94        94 + 1 = 95
  6       127     64 + 63      2\*64+63-1=190       190 + 1 = 191
  7       255     128 + 127    2\*128+127-1=382     382 + 1 = 383
  8       511     256 + 255    2\*256+255-1=766     766 + 1 = 767

where the extra 1 degree of precision comes about because the rules are
symmetric, and can integrate any odd monomial exactly. Thus, after the
first rule, the precision is 3\*2\^index - 1.

### Usage: {#usage align="center"}

> **patterson\_rule** *order* *a* *b* *filename*

where

-   *order* is the number of points in the quadrature rule. Acceptable
    values are 1, 3, 7, 15, 31, 63, 127, 255 or 511.
-   *a* is the left endpoint;
-   *b* is the right endpoint;
-   *filename* specifies the output filenames: *filename***\_w.txt**,
    *filename***\_x.txt**, and *filename***\_r.txt**, containing the
    weights, abscissas, and interval limits.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**PATTERSON\_RULE** is available in [a C
version](../../c_src/patterson_rule/patterson_rule.html) and [a C++
version](../../cpp_src/patterson_rule/patterson_rule.html) and [a
FORTRAN77 version](../../f77_src/patterson_rule/patterson_rule.html) and
[a FORTRAN90 version](../../f_src/patterson_rule/patterson_rule.html)
and [a MATLAB version](../../m_src/patterson_rule/patterson_rule.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CCN\_RULE](../../cpp_src/ccn_rule/ccn_rule.html), a C++ program which
defines a nested Clenshaw Curtis quadrature rule.

[CHEBYSHEV1\_RULE](../../cpp_src/chebyshev1_rule/chebyshev1_rule.html),
a C++ program which can compute and print a Gauss-Chebyshev type 1
quadrature rule.

[CHEBYSHEV2\_RULE](../../cpp_src/chebyshev2_rule/chebyshev2_rule.html),
a C++ program which can compute and print a Gauss-Chebyshev type 2
quadrature rule.

[CLENSHAW\_CURTIS\_RULE](../../cpp_src/clenshaw_curtis_rule/clenshaw_curtis_rule.html),
a C++ program which defines a Clenshaw Curtis quadrature rule.

[GEGENBAUER\_RULE](../../cpp_src/gegenbauer_rule/gegenbauer_rule.html),
a C++ program which can compute and print a Gauss-Gegenbauer quadrature
rule.

[GEN\_HERMITE\_RULE](../../cpp_src/gen_hermite_rule/gen_hermite_rule.html),
a C++ program which can compute and print a generalized Gauss-Hermite
quadrature rule.

[GEN\_LAGUERRE\_RULE](../../cpp_src/gen_laguerre_rule/gen_laguerre_rule.html),
a C++ program which can compute and print a generalized Gauss-Laguerre
quadrature rule.

[HERMITE\_RULE](../../cpp_src/hermite_rule/hermite_rule.html), a C++
program which can compute and print a Gauss-Hermite quadrature rule.

[INT\_EXACTNESS\_LEGENDRE](../../cpp_src/int_exactness_legendre/int_exactness_legendre.html),
a C++ program which checks the polynomial exactness of a Gauss-Legendre
quadrature rule.

[JACOBI\_RULE](../../cpp_src/jacobi_rule/jacobi_rule.html), a C++
program which can compute and print a Gauss-Jacobi quadrature rule.

[KRONROD](../../cpp_src/kronrod/kronrod.html), a C++ library which can
compute a Gauss and Gauss-Kronrod pair of quadrature rules of arbitrary
order, by Robert Piessens, Maria Branders.

[LAGUERRE\_RULE](../../cpp_src/laguerre_rule/laguerre_rule.html), a C++
program which can compute and print a Gauss-Laguerre quadrature rule.

[LATTICE\_RULE](../../cpp_src/lattice_rule/lattice_rule.html), a C++
library which approximates M-dimensional integrals using lattice rules.

[LEGENDRE\_RULE](../../cpp_src/legendre_rule/legendre_rule.html), a C++
program which can compute and print a Gauss-Legendre quadrature rule.

[LINE\_FELIPPA\_RULE](../../cpp_src/line_felippa_rule/line_felippa_rule.html),
a C++ library which returns the points and weights of a Felippa
quadrature rule over the interior of a line segment in 1D.

[LINE\_NCC\_RULE](../../cpp_src/line_ncc_rule/line_ncc_rule.html), a C++
library which computes a Newton Cotes Closed (NCC) quadrature rule for
the line, that is, for an interval of the form \[A,B\], using equally
spaced points which include the endpoints.

[LINE\_NCO\_RULE](../../cpp_src/line_nco_rule/line_nco_rule.html), a C++
library which computes a Newton Cotes Open (NCO) quadrature rule, using
equally spaced points, over the interior of a line segment in 1D.

[QUADRULE](../../cpp_src/quadrule/quadrule.html), a C++ library which
defines 1-dimensional quadrature rules.

[TOMS699](../../f77_src/toms699/toms699.html), a FORTRAN77 library which
implements a new representation of Patterson's quadrature formula;\
this is ACM TOMS algorithm 699.

[TRUNCATED\_NORMAL\_RULE](../../cpp_src/truncated_normal_rule/truncated_normal_rule.html),
a C++ program which computes a quadrature rule for a normal probability
density function (PDF), also called a Gaussian distribution, that has
been truncated to \[A,+oo), (-oo,B\] or \[A,B\].

### Reference: {#reference align="center"}

1.  Milton Abramowitz, Irene Stegun,\
    Handbook of Mathematical Functions,\
    National Bureau of Standards, 1964,\
    ISBN: 0-486-61272-4,\
    LC: QA47.A34.
2.  Philip Davis, Philip Rabinowitz,\
    Methods of Numerical Integration,\
    Second Edition,\
    Dover, 2007,\
    ISBN: 0486453391,\
    LC: QA299.3.D28.
3.  Arthur Stroud, Don Secrest,\
    Gaussian Quadrature Formulas,\
    Prentice Hall, 1966,\
    LC: QA299.4G3S7.

### Source Code: {#source-code align="center"}

-   [patterson\_rule.cpp](patterson_rule.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [gp\_o15\_r.txt](gp_o15_r.txt), the region file created by the
    command

                    patterson_rule 15 gp_o15
                  

-   [gp\_o15\_w.txt](gp_o15_w.txt), the weight file created by the
    command

                    patterson_rule 15 gp_o15
                  

-   [gp\_o15\_x.txt](gp_o15_x.txt), the abscissa file created by the
    command

                    patterson_rule 15 gp_o15
                  

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for PATTERSON\_RULE.
-   **ORDER\_CHECK** checks the value of ORDER.
-   **PATTERSON\_HANDLE** computes the requested Gauss-Patterson rule
    and outputs it.
-   **PATTERSON\_SET** sets abscissas and weights for Gauss-Patterson
    quadrature.
-   **R8MAT\_WRITE** writes an R8MAT file with no header.
-   **RESCALE** rescales a Legendre quadrature rule from \[-1,+1\] to
    \[A,B\].
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 16 February 2010.*
