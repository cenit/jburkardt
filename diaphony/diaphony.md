DIAPHONY\
the "Diaphony" (dispersion)\
of an M-dimensional Pointset {#diaphony-the-diaphony-dispersion-of-an-m-dimensional-pointset align="center"}
============================

------------------------------------------------------------------------

**DIAPHONY** is a C++ program which computes the "diaphony" of an
M-dimensional pointset.

The "diaphony" of an M-dimensional pointset is a numeric measure of the
uniformity of the dispersion of the points throughout the unit
hypercube.

Regarded as a random variable itself, the diaphony of a set of N points
has an expected value of 1/sqrt(N).

For the Halton datasets in 2D, 7D and 16D, here is the table of the
number of points versus the diaphony:

  Diaphony(M,N)   M=2D    M=7D    M=16D   1/Sqrt(N)
  --------------- ------- ------- ------- -----------
  N=10            0.246   0.316   0.316   0.316
  N=100           0.043   0.099   0.099   0.100
  N=1000          0.006   0.031   0.031   0.031
  N=10000         0.001   0.009   0.009   0.010

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**DIAPHONY** is available in [a C
version](../../c_src/diaphony/diaphony.html) and [a C++
version](../../cpp_src/diaphony/diaphony.html) and [a FORTRAN77
version](../../f77_src/diaphony/diaphony.html) and [a FORTRAN90
version](../../f_src/diaphony/diaphony.html) and [a MATLAB
version](../../m_src/diaphony/diaphony.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[STAR\_DISCREPANCY](../../cpp_src/star_discrepancy/star_discrepancy.html),
a C++ program which reads a **TABLE file** of points (presumed to lie in
the unit hypercube) and computes bounds on the star discrepancy, a
measure of dispersion, by Eric Thiemard.

[TABLE\_LATINIZE](../../cpp_src/table_latinize/table_latinize.html), a
C++ program which reads a file of points and creates a "latinized"
version by adjusting the data.

[TABLE\_QUALITY](../../cpp_src/table_quality/table_quality.html), a C++
program which reads a file of points and computes the quality of
dispersion.

### Reference: {#reference align="center"}

1.  Peter Heelekalek,\
    On Correlation Analysis of Pseudorandom Numbers, in Monte Carlo and
    Quasi-Monte Carlo Methods 1996,\
    edited by Harald Niederreiter, Peter Hellekalek, Gerhard Larcher,
    and Peter Zinterhof,\
    Volume 127 of Lecture Notes in Statistics,\
    Springer Verlag, 1997, pages 251-265.
2.  Peter Heelekalek, Harald Niederreiter,\
    The Weighted Spectral Test: Diaphony,\
    ACM Transactions on Modeling and Computer Simulation,\
    Volume 8, Number 1, January 1998, pages 43-60.
3.  Peter Heelekalek, Hannes Leeb,\
    Dyadic Diaphony,\
    Acta Arithmetica,\
    Volume 80, Number 2, 1997, pages 187-196.

### Source Code: {#source-code align="center"}

-   [diaphony.cpp](diaphony.cpp), the source code.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for DIAPHONY.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **DIAPHONY\_COMPUTE** evaluates the diaphony of a N-dimensional
    point set.
-   **FILE\_COLUMN\_COUNT** counts the columns in the first line of a
    file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **I4\_POWER** returns the value of I\^J.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_MODP** returns the nonnegative remainder of R8 division.
-   **R8MAT\_DATA\_READ** reads the data from an R8MAT file.
-   **R8MAT\_HEADER\_READ** reads the header from an R8MAT file.
-   **R8MAT\_MAX** returns the maximum entry of an R8MAT.
-   **R8MAT\_MIN** returns the minimum entry of an R8MAT.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 25 January 2012.*
