CCVT\_BOX\
Centroidal Voronoi Tessellation\
Constrained to a Box {#ccvt_box-centroidal-voronoi-tessellation-constrained-to-a-box align="center"}
================================

------------------------------------------------------------------------

**CCVT\_BOX** is a C++ program which creates a Centroidal Voronoi
Tessellation of points in a 2D box, with points constrained to lie on
the boundary of the region.

This is a fairly simple and limited code, and was designed mainly for
testing and experimentation. Current work is investigating more
interesting regions, including holes, and other ways of "encouraging"
some points to move to the boundary and stay there.

The original version of CCVT\_BOX was written by Lili Ju.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**CCVT\_BOX** is available in [a C++
version](../../cpp_src/ccvt_box/ccvt_box.html) and [a FORTRAN90
version](../../f_src/ccvt_box/ccvt_box.html) and [a MATLAB
version.](../../m_src/ccvt_box/ccvt_box.html)

### Related Data and Programs: {#related-data-and-programs align="center"}

[CVT](../../cpp_src/cvt/cvt.html), a C++ library which can compute
CVT's.

[CVT](../../datasets/cvt/cvt.html), a dataset directory which contains
files describing a number of CVT's.

[CVT\_DATASET](../../cpp_src/cvt_dataset/cvt_dataset.html), a C++
program which creates a CVT dataset.

### Reference: {#reference align="center"}

1.  Franz Aurenhammer,\
    Voronoi diagrams - a study of a fundamental geometric data
    structure,\
    ACM Computing Surveys,\
    Volume 23, Number 3, pages 345-405, September 1991.
2.  John Burkardt, Max Gunzburger, Janet Peterson, Rebecca Brannon,\
    User Manual and Supporting Information for Library of Codes for
    Centroidal Voronoi Placement and Associated Zeroth, First, and
    Second Moment Determination,\
    Sandia National Laboratories Technical Report SAND2002-0099,\
    February 2002.
3.  Qiang Du, Vance Faber, Max Gunzburger,\
    Centroidal Voronoi Tessellations: Applications and Algorithms,\
    SIAM Review, Volume 41, 1999, pages 637-676.
4.  Qiang Du, Max Gunzburger, Lili Ju,\
    Meshfree, Probabilistic Determination of Point Sets and Support
    Regions for Meshfree Computing,\
    Computer Methods in Applied Mechanics in Engineering,\
    Volume 191, 2002, pages 1349-1366;
5.  Lili Ju, Qiang Du, Max Gunzburger,\
    Probabilistic Methods for Centroidal Voronoi Tessellations and their
    Parallel Implementations,\
    Parallel Computing, Volume 28, 2002, pages 1477-1500.

### Source Code: {#source-code align="center"}

-   [ccvt\_box.cpp](ccvt_box.cpp), the source code;

### Examples and Tests: {#examples-and-tests align="center"}

-   [ccvt\_box\_input.txt](ccvt_box_input.txt), input that would
    normally be entered interactively by the user.
-   [ccvt\_box\_output.txt](ccvt_box_output.txt), printed output from a
    run of the program.
-   [initial.txt](initial.txt), a TABLE file containing the initial CVT
    generators.
-   [initial.png](initial.png), a PNG image of the initial CVT
    generators.
-   [final.txt](final.txt), a TABLE file containing the final CVT
    generators.
-   [final.png](final.png), a PNG image of the final CVT generators.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for CCVT\_BOX.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **CVT\_ENERGY** computes the CVT energy of a dataset.
-   **CVT\_SAMPLE** returns sample points.
-   **CVT\_WRITE** writes a CVT dataset to a file.
-   **DATA\_READ** reads generator coordinate data from a file.
-   **DIGIT\_TO\_CH** returns the base 10 digit character corresponding
    to a digit.
-   **FIND\_CLOSEST** finds the nearest R point to each S point.
-   **GET\_SEED** returns a random seed for the random number generator.
-   **HALHAM\_LEAP\_CHECK** checks LEAP for a Halton or Hammersley
    sequence.
-   **HALHAM\_N\_CHECK** checks N for a Halton or Hammersley sequence.
-   **HALHAM\_NDIM\_CHECK** checks NDIM for a Halton or Hammersley
    sequence.
-   **HALHAM\_SEED\_CHECK** checks SEED for a Halton or Hammersley
    sequence.
-   **HALHAM\_STEP\_CHECK** checks STEP for a Halton or Hammersley
    sequence.
-   **HALTON\_BASE\_CHECK** checks BASE for a Halton sequence.
-   **I4\_LOG\_10** returns the whole part of the logarithm base 10 of
    an integer.
-   **I4\_MAX** returns the maximum of two integers.
-   **I4\_MIN** returns the smaller of two integers.
-   **I4\_TO\_HALTON\_SEQUENCE** computes N elements of a leaped Halton
    subsequence.
-   **I4\_TO\_S** converts an integer to a string.
-   **MPB** projects generators onto the boundary of the region.
-   **POINTS\_EPS** creates an EPS file image of a set of points.
-   **PRIME** returns any of the first PRIME\_MAX prime numbers.
-   **R8\_EPSILON** returns the round off unit for double precision
    arithmetic.
-   **R8\_HUGE** returns a "huge" real value, usually the largest legal
    real.
-   **R8\_MAX** returns the maximum of two double precision values.
-   **R8\_MIN** returns the minimum of two double precision values.
-   **R8MAT\_TRANSPOSE\_PRINT** prints an R8MAT, transposed.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **R8MAT\_UNIFORM\_01** fills a double precision array with
    pseudorandom values.
-   **RANDOM\_INITIALIZE** initializes the RANDOM random number
    generator.
-   **S\_EQI** reports whether two strings are equal, ignoring case.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TIMESTRING** returns the current YMDHMS date as a string.
-   **TUPLE\_NEXT\_FAST** computes the next element of a tuple space,
    "fast".

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 02 December 2006.*
