SUBPAK\
A C++ Utility Library {#subpak-a-c-utility-library align="center"}
=====================

------------------------------------------------------------------------

**SUBPAK** is a C++ library which includes a number of utility routines.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SUBPAK** is available in [a C version](../../c_src/subpak/subpak.html)
and [a C++ version](../../cpp_src/subpak/subpak.html) and [a FORTRAN77
version](../../f77_src/subpak/subpak.html) and [a FORTRAN90
version](../../f_src/subpak/subpak.html) and [a MATLAB
version.](../../m_src/subpak/subpak.html)

### Related Programs: {#related-programs align="center"}

[C4LIB](../../cpp_src/c4lib/c4lib.html), a C++ library which implements
certain elementary functions for "C4" or single precision complex
variables;

[C8LIB](../../cpp_src/c8lib/c8lib.html), a C++ library which implements
certain elementary functions for "C8" or double precision complex
variables;

[CELL](../../cpp_src/cell/cell.html), a C++ library which defines a cell
array, a generalization of an array which can compactly store and
retrieve vector or matrix data of varying size, such as the rows of a
triangular matrix.

[I4LIB](../../cpp_src/i4lib/i4lib.html), a C++ library which contains
many utility routines, using "I4" or "single precision integer"
arithmetic.

[I8LIB](../../cpp_src/i8lib/i8lib.html), a C++ library which contains
many utility routines, using "I8" or "double precision integer"
arithmetic.

[INDEX](../../cpp_src/index/index.html), a C++ library which converts a
multidimensional vector index to a one-dimensional vector index; it can
handle zero and one based indexing schemes, as well as column major and
row major conventions.

[R4LIB](../../cpp_src/r4lib/r4lib.html), a C++ library which contains
many utility routines, using "R4" or "single precision real" arithmetic.

[R8LIB](../../cpp_src/r8lib/r8lib.html), a C++ library which contains
many utility routines, using "R8" or "double precision real" arithmetic.

### Reference: {#reference align="center"}

1.  Milton Abramowitz, Irene Stegun,\
    Handbook of Mathematical Functions,\
    National Bureau of Standards, 1964,\
    ISBN: 0-486-61272-4,\
    LC: QA47.A34.
2.  Book Industry Study Group,\
    The Evolution in Product Identification: Sunrise 2005 and the
    ISBN-13,\
    <http://www.bisg.org/docs/The_Evolution_in_Product_ID.pdf>
3.  Thomas Cormen, Charles Leiserson, Ronald Rivest,\
    Introduction to Algorithms,\
    MIT Press, 2001,\
    ISBN: 0262032937,\
    LC: QA76.C662.
4.  Donald Kreher, Douglas Simpson,\
    Combinatorial Algorithms,\
    CRC Press, 1998,\
    ISBN: 0-8493-3988-X,\
    LC: QA164.K73.
5.  Albert Nijenhuis, Herbert Wilf,\
    Combinatorial Algorithms for Computers and Calculators,\
    Second Edition,\
    Academic Press, 1978,\
    ISBN: 0-12-519260-6,\
    LC: QA164.N54.
6.  Branch Rickey,\
    Goodby to Some Old Baseball Ideas,\
    Life Magazine,\
    2 August 1954.
7.  Alan Schwarz,\
    Looking Beyond the Batting Average,\
    The New York Times,\
    Sunday, 1 August 2004.
8.  Daniel Zwillinger, editor,\
    CRC Standard Mathematical Tables and Formulae,\
    30th Edition,\
    CRC Press, 1996,\
    ISBN: 0-8493-2479-3,\
    LC: QA47.M315.

### Source Code: {#source-code align="center"}

-   [subpak.cpp](subpak.cpp), the source code;
-   [subpak.hpp](subpak.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [subpak\_prb.cpp](subpak_prb.cpp), the calling program;
-   [subpak\_prb\_output.txt](subpak_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **ANGLE\_SHIFT** shifts angle ALPHA to lie between BETA and
    BETA+2PI.
-   **ANGLE\_SHIFT\_DEG** shifts angle ALPHA to lie between BETA and
    BETA+360.
-   **ANGLE\_TO\_RGB** returns a color on the perimeter of the color
    hexagon.
-   **AXIS\_LIMITS** returns "nice" axis limits for a plot.
-   **BAR\_CHECK** computes the check digit for a barcode.
-   **BAR\_CODE** constructs the 113 character barcode from 11 digits.
-   **BAR\_DIGIT\_CODE\_LEFT** returns the 7 character left bar code for
    a digit.
-   **BAR\_DIGIT\_CODE\_RIGHT** returns the 7 character right bar code
    for a digit.
-   **BMI\_ENGLISH** computes the body mass index given English
    measurements.
-   **BMI\_METRIC** computes the body mass index given metric
    measurements.
-   **C8\_ARGUMENT** returns the argument of a C8.
-   **C8\_MAGNITUDE** returns the magnitude of a C8.
-   **C8\_SQRT** returns the principal square root of a C8.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_IS\_DIGIT** returns TRUE if a character is a decimal digit.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **CHARSTAR\_LEN\_TRIM** returns the length of a CHAR\* to the last
    nonblank.
-   **DEGREES\_TO\_RADIANS** converts an angle measure from degrees to
    radians.
-   **E\_CONSTANT** returns the value of E.
-   **EULER\_CONSTANT** returns the value of the Euler-Mascheroni
    constant.
-   **FAC\_DIV** divides two quantities represented as prime factors.
-   **FAC\_GCD** finds the GCD of two products of prime factors.
-   **FAC\_LCM** finds the LCM of two products of prime factors.
-   **FAC\_MUL** multiplies two quantities represented as prime factors.
-   **FAC\_PRINT** prints a product of prime factors.
-   **FAC\_TO\_I4** converts a product of prime factors into an I4.
-   **FAC\_TO\_RAT** converts a prime factorization into a rational
    value.
-   **FEET\_TO\_METERS** converts a measurement in feet to meters.
-   **GAUSS\_SUM** evaluates a function that is the sum of Gaussians.
-   **GET\_SEED** returns a random seed for the random number generator.
-   **GRID1** finds grid points between X1 and X2 in N dimensions.
-   **GRID1N** finds the I-th grid point between X1 and X2 in N
    dimensions.
-   **GRID2** computes grid points between X1 and X2 in N dimensions.
-   **GRID2N** computes one grid point between X1 and X2 in N
    dimensions.
-   **GRID3** computes a grid on the parallelogram set by X1, X2 and X3
    in N space.
-   **GRID3N** computes a parallelogram grid on 3 points in N
    dimensions.
-   **GRID4** computes a grid on the parallelogram set by X1, X2 and X3
    in N space.
-   **GRID4N** computes a single point on a parallelogram grid in N
    space.
-   **I2\_REVERSE\_BYTES** reverses the two bytes in an I2.
-   **I4\_LOG\_10** returns the integer part of the logarithm base 10 of
    an I4.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4\_MODP** returns the nonnegative remainder of I4 division.
-   **I4\_POWER** returns the value of I\^J.
-   **I4\_SIGN** returns the sign of an I4.
-   **I4\_SWAP** switches two I4's.
-   **I4\_TO\_DIGITS\_DECIMAL** determines the last N decimal digits of
    an I4.
-   **I4\_TO\_FAC** converts an I4 into a product of prime factors.
-   **I4\_TO\_ISBN** converts an I4 to an ISBN digit.
-   **I4\_UNIFORM** returns a scaled pseudorandom I4.
-   **I4INT\_TO\_R8INT** maps an I4 interval to an R8 interval.
-   **I4VEC\_COPY** copies an I4VEC.
-   **I4VEC\_INDICATOR\_NEW** sets an I4VEC to the indicator vector.
-   **I4VEC\_MIN** returns the value of the minimum element in an I4VEC.
-   **I4VEC\_PERMUTE** permutes an I4VEC in place.
-   **I4VEC\_PRINT** prints an I4VEC.
-   **I4VEC\_SUM** sums the entries of an I4VEC.
-   **I4VEC\_ZERO** zeroes an I4VEC.
-   **I4VEC\_ZERO\_NEW** creates and zeroes an I4VEC.
-   **IJ\_NEXT** returns the next matrix index.
-   **IJ\_NEXT\_GT** returns the next matrix index, with the constraint
    that I &lt; J.
-   **INDEX\_BOX2\_NEXT\_2D** produces indices on the surface of a box
    in 2D.
-   **INDEX\_BOX2\_NEXT\_3D** produces indices on the surface of a box
    in 3D.
-   **INDEX1\_COL** indexes a 1D vector by columns.
-   **INDEX1\_ROW** indexes a 1D vector by rows.
-   **INDEX2\_COL** indexes a 2D array by columns.
-   **INDEX2\_ROW** indexes a 2D array by row.
-   **INDEX3\_COL** indexes a 3D array by columns.
-   **INDEX3\_ROW** indexes a 3D array by rows.
-   **INDEX4\_COL** indexes a 4D array by columns.
-   **INDEX4\_ROW** indexes a 4D array by rows.
-   **INDEXN\_COL** indexes an ND array by columns.
-   **INDEXN\_ROW** indexes an ND array by rows.
-   **ISBN\_CHECK** checks an ISBN code.
-   **ISBN\_FILL** fills in a missing digit in an ISBN code.
-   **ISBN\_TO\_I4** converts an ISBN character into an I4.
-   **ISET2\_COMPARE** compares two I2 sets.
-   **LCM\_12N** computes the least common multiple of the integers 1
    through N.
-   **LMAT\_PRINT** prints an LMAT.
-   **LMAT\_PRINT\_SOME** prints some of an LMAT.
-   **LMAT\_TRANSPOSE\_PRINT** prints an LMAT, transposed.
-   **LMAT\_TRANSPOSE\_PRINT\_SOME** prints some of an LMAT, transposed.
-   **LUHN\_CHECK** computes the Luhn checksum for a string of digits.
-   **LVEC\_PRINT** prints a logical vector.
-   **PAUSE\_INPUT** waits until an input character is entered.
-   **PAUSE\_SECONDS** waits a specified number of seconds.
-   **PERM\_CHECK** checks that a vector represents a permutation.
-   **PERM\_CYCLE** analyzes a permutation.
-   **PERM\_FREE** reports the number of unused items in a partial
    permutation.
-   **PERM\_INVERSE** inverts a permutation "in place".
-   **PERM\_PRINT** prints a permutation.
-   **PERM\_UNIFORM\_NEW** selects a random permutation of N objects.
-   **POUNDS\_TO\_KILOGRAMS** converts a measurement in pounds to
    kilograms.
-   **PRIME** returns any of the first PRIME\_MAX prime numbers.
-   **PRIME\_GE** returns the smallest prime greater than or equal to N.
-   **R4\_NINT** returns the nearest integer to an R4.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_HUGE** returns a "huge" R8.
-   **R8\_LOG\_10** returns the logarithm base 10 of the absolute value
    of an R8.
-   **R8\_MAX** returns the maximum of two R8's.
-   **R8\_MODP** returns the nonnegative remainder of R8 division.
-   **R8\_UNIFORM** returns a scaled pseudorandom R8.
-   **R8\_UNIFORM\_01** returns a unit pseudorandom R8.
-   **R8MAT\_PRINT** prints an R8MAT.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **R8MAT\_TRANSPOSE\_PRINT** prints an R8MAT, transposed.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **R8POLY\_DEGREE** returns the degree of a polynomial.
-   **R8POLY\_PRINT** prints out a polynomial.
-   **R8VEC\_INDICATOR\_NEW** sets an R8VEC to the indicator vector
    {1,2,3...}.
-   **R8VEC\_MAX** returns the value of the maximum element in an R8VEC.
-   **R8VEC\_MEAN** returns the mean of an R8VEC.
-   **R8VEC\_MIN** returns the value of the minimum element in an R8VEC.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **R8VEC\_VARIANCE** returns the variance of an R8VEC.
-   **R8VEC\_ZERO\_NEW** creates and zeroes an R8VEC.
-   **RADIANS\_TO\_DEGREES** converts an angle from radians to degrees.
-   **RAND\_INITIALIZE** initializes the random number generator.
-   **RANDOM\_INITIALIZE** initializes the RANDOM random number
    generator.
-   **RAT\_FACTOR** factors a rational value into a product of prime
    factors.
-   **RICKEY** evaluates Branch Rickey's baseball index.
-   **ROOTS\_TO\_I4POLY** converts polynomial roots to polynomial
    coefficients.
-   **ROOTS\_TO\_R8POLY** converts polynomial roots to polynomial
    coefficients.
-   **S\_EQI** reports whether two strings are equal, ignoring case.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_I4** reads an integer value from a string.
-   **S\_TO\_I4VEC** reads an I4VEC from a string.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **SORT\_HEAP\_EXTERNAL** externally sorts a list of items into
    ascending order.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TUPLE\_NEXT2** computes the next element of an integer tuple
    space.
-   **TVEC\_EVEN** computes an evenly spaced set of angles between 0 and
    2\*PI.
-   **TVEC\_EVEN2** computes evenly spaced angles between 0 and 2\*PI.
-   **TVEC\_EVEN3** computes an evenly spaced set of angles between 0
    and 2\*PI.
-   **TVEC\_EVEN\_BRACKET** computes evenly spaced angles between THETA1
    and THETA2.
-   **TVEC\_EVEN\_BRACKET2** computes evenly spaced angles from THETA1
    to THETA2.
-   **TVEC\_EVEN\_BRACKET3** computes evenly spaced angles from THETA1
    to THETA2.
-   **UPC\_CHECK\_DIGIT** returns the check digit of a UPC.
-   **VERSINE\_PULSE** adds a versine pulse to a constant.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 03 November 2011.*
