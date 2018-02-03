SVD\_SNOWFALL\
Singular Value Decomposition of Snowfall Data {#svd_snowfall-singular-value-decomposition-of-snowfall-data align="center"}
=============================================

------------------------------------------------------------------------

**SVD\_SNOWFALL** is a C++ library which demonstrates the use of the
Singular Value Decomposition (SVD) to analyze a set of historical
snowfall data, with plots created by GNUPLOT.

The snowfall data consists of records for the winters of 1890-1891 to
2014-2015, of the snowfall in inches, over the months from October to
May, as measured at Michigan Tech.

This data can be regarded as an 8 by 125 matrix A. Applying the singular
value decomposition produces the factors

> A = U \* S \* V'

and it is the purpose of this library to consider what these factors
indicate about the snowfall data.

The sample problem writes files that can be processed by GNUPLOT to
create plots.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SVD\_SNOWFALL** is available in [a C
version](../../c_src/svd_snowfall/svd_snowfall.html) and [a C++
version](../../cpp_src/svd_snowfall/svd_snowfall.html) and [a FORTRAN77
version](../../f77_src/svd_snowfall/svd_snowfall.html) and [a FORTRAN90
version](../../f_src/svd_snowfall/svd_snowfall.html) and [a MATLAB
version](../../m_src/svd_snowfall/svd_snowfall.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FINGERPRINTS](../../datasets/fingerprints/fingerprints.html), a dataset
directory which contains a few images of fingerprints.

[GNUPLOT](../../cpp_src/gnuplot/gnuplot.html), C++ programs which
illustrate how a program can write data and command files so that
gnuplot can create plots of the program results.

[SVD\_BASIS](../../cpp_src/svd_basis/svd_basis.html), a C++ program
which applies the Singular Value Decomposition (SVD) to a set of
vectors, extracting dominant modes;

[SVD\_DEMO](../../cpp_src/svd_demo/svd_demo.html), a C++ program which
demonstrates the singular value decomposition (SVD) for a simple
example.

[SVD\_TRUNCATED](../../cpp_src/svd_truncated/svd_truncated.html), a C++
program which demonstrates the computation of the reduced or truncated
Singular Value Decomposition (SVD) that is useful for cases when one
dimension of the matrix is much smaller than the other.

[TIME\_SERIES](../../datasets/time_series/time_series.html), a dataset
directory which contains examples of files describing time series.

### Reference: {#reference align="center"}

1.  Edward Anderson, Zhaojun Bai, Christian Bischof, Susan Blackford,
    James Demmel, Jack Dongarra, Jeremy Du Croz, Anne Greenbaum, Sven
    Hammarling, Alan McKenney, Danny Sorensen,\
    LAPACK User's Guide,\
    Third Edition,\
    SIAM, 1999,\
    ISBN: 0898714478,\
    LC: QA76.73.F25L36
2.  Gene Golub, Charles VanLoan,\
    Matrix Computations, Third Edition,\
    Johns Hopkins, 1996,\
    ISBN: 0-8018-4513-X,\
    LC: QA188.G65.
3.  David Kahaner, Cleve Moler, Steven Nash,\
    Numerical Methods and Software,\
    Prentice Hall, 1989,\
    ISBN: 0-13-627258-4,\
    LC: TA345.K34.
4.  Lloyd Trefethen, David Bau,\
    Numerical Linear Algebra,\
    SIAM, 1997,\
    ISBN: 0-89871-361-7,\
    LC: QA184.T74.

### Source Code: {#source-code align="center"}

-   [svd\_snowfall.cpp](svd_snowfall.cpp), the source code.
-   [svd\_snowfall.hpp](svd_snowfall.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [svd\_snowfall\_prb.cpp](svd_snowfall_prb.cpp), a sample calling
    program.
-   [svd\_snowfall\_prb\_output.txt](svd_snowfall_prb_output.txt), the
    output file.

The snowfall data itself must be read into the program from a file:

-   [snowfall.txt](snowfall.txt), the snowfall data.

The second test function writes "command" and "data" files that can be
used by gnuplot to create plots.

-   [singular\_values\_commands.txt](singular_values_commands.txt), a
    command file.
-   [singular\_values\_data.txt](singular_values_data.txt), a data file.
-   [singular\_values.png](singular_values.png), the resulting plot.

The third test function writes "command" and "data" files that can be
used by gnuplot to create plots.

-   [approx\_commands.txt](approx_commands.txt), a command file.
-   [approx\_data.txt](approx_data.txt), a data file.
-   [approx0.png](approx0.png), the 2012 snowfall (red).
-   [approx1.png](approx1.png), the 2012 snowfall (red) and rank 1
    approximation (blue).
-   [approx2.png](approx2.png), the 2012 snowfall (red) and rank 2
    approximation (blue).
-   [approx3.png](approx3.png), the 2012 snowfall (red) and rank 3
    approximation (blue).
-   [approx4.png](approx4.png), the 2012 snowfall (red) and rank 4
    approximation (blue).
-   [approx5.png](approx5.png), the 2012 snowfall (red) and rank 5
    approximation (blue).

The fourth test function writes "command" and "data" files that can be
used by gnuplot to create plots of the first 6 U modes, which form a
basis for average snowfall as a function of the month.

-   [umode\_commands.txt](umode_commands.txt), a command file.
-   [umode\_data.txt](umode_data.txt), a data file.
-   [umode1.png](umode1.png), basis vector 1 for snowfall as a function
    of month.
-   [umode2.png](umode2.png), basis vector 2 for snowfall as a function
    of month.
-   [umode3.png](umode3.png), basis vector 3 for snowfall as a function
    of month.
-   [umode4.png](umode4.png), basis vector 4 for snowfall as a function
    of month.
-   [umode5.png](umode5.png), basis vector 5 for snowfall as a function
    of month.
-   [umode6.png](umode6.png), basis vector 6 for snowfall as a function
    of month.

The fifth test function writes "command" and "data" files that can be
used by gnuplot to create plots of the first 6 V modes, which form a
basis for total yearly snowfall behavior as a function of the year.

-   [vmode\_commands.txt](vmode_commands.txt), a command file.
-   [vmode\_data.txt](vmode_data.txt), a data file.
-   [vmode1.png](vmode1.png), basis vector 1 for total yearly snowfall
    as a function of year.
-   [vmode2.png](vmode2.png), basis vector 2 for total yearly snowfall
    as a function of year.
-   [vmode3.png](vmode3.png), basis vector 3 for total yearly snowfall
    as a function of year.
-   [vmode4.png](vmode4.png), basis vector 4 for total yearly snowfall
    as a function of year.
-   [vmode5.png](vmode5.png), basis vector 5 for total yearly snowfall
    as a function of year.
-   [umode6.png](umode6.png), basis vector 6 for snowfall as a function
    of month.

### List of Routines: {#list-of-routines align="center"}

-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is TRUE (1) if two characters are equal, disregarding
    case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **DAXPY** computes constant times a vector plus a vector.
-   **DDOT** forms the dot product of two vectors.
-   **DNRM2** returns the euclidean norm of a vector.
-   **DROT** applies a plane rotation.
-   **DROTG** constructs a Givens plane rotation.
-   **DSCAL** scales a vector by a constant.
-   **DSVDC** computes the singular value decomposition of a real
    rectangular matrix.
-   **DSWAP** interchanges two vectors.
-   **FILE\_COLUMN\_COUNT** counts the number of columns in the first
    line of a file.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the smaller of two I4's.
-   **R8\_ABS** returns the absolute value of a R8.
-   **R8\_MAX** returns the maximum of two R8's.
-   **R8\_SIGN** returns the sign of a R8.
-   **R8COL\_NORMALIZE\_LI** normalizes an R8COL with the column
    infinity norm.
-   **R8COL\_REVERSE** reverses the order of columns in an R8COL.
-   **R8MAT\_DATA\_READ** reads the data from an R8MAT file.
-   **R8MAT\_HEADER\_READ** reads the header from an R8MAT file.
-   **R8MAT\_MM\_NEW** multiplies two matrices.
-   **R8MAT\_MMT\_NEW** computes C = A \* B'.
-   **R8MAT\_PRINT** prints an R8MAT.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **R8MAT\_SVD\_LINPACK** gets the SVD of a matrix using a call to
    LINPACK.
-   **R8MAT\_SVD\_LOW\_RANK** forms a rank R approximation using the
    SVD.
-   **R8ROW\_REVERSE** reverses the order of the rows of an R8ROW.
-   **R8VEC\_CUM0\_NEW** computes the cumulutive sums of an R8VEC.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **R8VEC\_SUM** returns the sum of an R8VEC.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_R8** reads an R8 value from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 09 May 2013.*
