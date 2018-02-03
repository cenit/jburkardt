MONTE\_CARLO\_RULE\
Monte Carlo Sampling Regarded as Quadrature Rule {#monte_carlo_rule-monte-carlo-sampling-regarded-as-quadrature-rule align="center"}
================================================

------------------------------------------------------------------------

**MONTE\_CARLO\_RULE** is a C++ program which generates a dataset of N
random M-dimensional points, regards it as a quadrature rule for the
unit hypercube, and writes out three files of information.

### Usage: {#usage align="center"}

> **monte\_carlo\_rule** *m* *n* *s*

where

-   *m* is the spatial dimension;
-   *n* is the number of points to generate;
-   *s* is the initial seed value.

The data is written to three files:

-   an "R" or "region" file, which lists two points that bound the
    region, which will be the unit hypercube.
-   a "W" or "weight" file, which lists the weight for each abscissa.
    each weight will equal 1/N.
-   an "X" or "abscissa" file, which lists the abscissas of the rule.
    These will simply be the N random points in the M-dimensional
    hypercube.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**MONTE\_CARLO\_RULE** is available in [a C
version](../../c_src/monte_carlo_rule/monte_carlo_rule.md) and [a C++
version](../../master/monte_carlo_rule/monte_carlo_rule.md) and [a
FORTRAN77 version](../../f77_src/monte_carlo_rule/monte_carlo_rule.md)
and [a FORTRAN90
version](../../f_src/monte_carlo_rule/monte_carlo_rule.md) and [a
MATLAB version.](../../m_src/monte_carlo_rule/monte_carlo_rule.md)

### Related Data and Programs: {#related-data-and-programs align="center"}

[LINE\_FELIPPA\_RULE](../../master/line_felippa_rule/line_felippa_rule.md),
a C++ library which returns the points and weights of a Felippa
quadrature rule over the interior of a line segment in 1D.

[LINE\_NCO\_RULE](../../master/line_nco_rule/line_nco_rule.md), a C++
library which computes a Newton Cotes Open (NCO) quadrature rule, using
equally spaced points, over the interior of a line segment in 1D.

[POWER\_RULE](../../master/power_rule/power_rule.md), a C++ program
which constructs a power rule, that is, a product quadrature rule from
identical 1D factor rules.

[QUADRATURE\_RULES\_UNIFORM](../../datasets/quadrature_rules_uniform/quadrature_rules_uniform.md),
a dataset directory which contains quadrature rules for M-dimensional
unit cubes, based on a uniform pseudorandom sequence. stored as a file
of abscissas, a file of weights, and a file of region limits.

[SPARSE\_GRID\_CC\_DATASET](../../master/sparse_grid_cc_dataset/sparse_grid_cc_dataset.md),
a C++ program which creates a Clenshaw-Curtis sparse grid and write the
data to three files.

[SPARSE\_GRID\_GL\_DATASET](../../master/sparse_grid_gl_dataset/sparse_grid_gl_dataset.md),
a C++ program which creates a Gauss-Legendre sparse grid and write the
data to three files.

[SPARSE\_GRID\_HERMITE\_DATASET](../../master/sparse_grid_hermite_dataset/sparse_grid_hermite_dataset.md),
a C++ program which creates a Gauss-Hermite sparse grid and write the
data to three files.

[SPARSE\_GRID\_LAGUERRE\_DATASET](../../master/sparse_grid_laguerre_dataset/sparse_grid_laguerre_dataset.md),
a C++ program which creates a Gauss-Laguerre sparse grid and write the
data to three files.

[SPARSE\_GRID\_MIXED\_DATASET](../../master/sparse_grid_mixed_dataset/sparse_grid_mixed_dataset.md),
a C++ program which creates a sparse grid dataset based on a mixture of
1D rules.

[SPARSE\_GRID\_OPEN\_DATASET](../../master/sparse_grid_open_dataset/sparse_grid_open_dataset.md),
a C++ program which creates a sparse grid dataset based on open rules
(Fejer 2, Gauss-Patterson, Newton-Cotes-Open).

### Reference: {#reference align="center"}

1.  Paul Bratley, Bennett Fox, Linus Schrage,\
    A Guide to Simulation,\
    Springer Verlag, pages 201-202, 1983.
2.  Bennett Fox,\
    Algorithm 647: Implementation and Relative Efficiency of Quasirandom
    Sequence Generators,\
    ACM Transactions on Mathematical Software,\
    Volume 12, Number 4, pages 362-376, 1986.
3.  Donald Knuth,\
    The Art of Computer Programming,\
    Volume 2: Seminumerical Algorithms,\
    Addison Wesley, 1969.

### Source Code: {#source-code align="center"}

-   [monte\_carlo\_rule.cpp](monte_carlo_rule.cpp), the source code.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for MONTE\_CARLO\_RULE.
-   **I4\_TO\_STRING** converts an I4 to a C++ string.
-   **R8MAT\_UNIFORM\_01\_NEW** returns a unit pseudorandom R8MAT.
-   **R8MAT\_WRITE** writes an R8MAT file with no header.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 29 March 2013.*
