CVT\
Centroidal Voronoi Tessellations {#cvt-centroidal-voronoi-tessellations align="center"}
================================

------------------------------------------------------------------------

**CVT** is a C++ library which creates Centroidal Voronoi Tessellation
(CVT) datasets.

The generation of a CVT dataset is of necessity more complicated than
for a quasirandom sequence. An iteration is involved, so there must be
an initial assignment for the generators, and then a number of
iterations. Moreover, in each iteration, estimates must be made of the
volume and location of the Voronoi cells. This is typically done by
Monte Carlo sampling. The accuracy of the resulting CVT depends in part
on the number of sampling points and the number of iterations taken.

The library is mostly used to generate a dataset of points uniformly
distributed in the unit hypersquare. However, a user may be interested
in computations with other geometries or point densities. To do this,
the user needs to replace the **USER** routine in the **CVT** library,
and then specify the appropriate values **init=3** and **sample=3**.

The **USER** routine returns a set of sample points from the region of
interest. The default **USER** routine samples points uniformly from the
unit circle. But other geometries are easy to set up. Changing the point
density simply requires weighting the sampling in the region.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**CVT** is available in [a C++ version](../../cpp_src/cvt/cvt.html) and
[a FORTRAN90 version](../../f_src/cvt/cvt.html) and [a MATLAB
version](../../m_src/cvt/cvt.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BOX\_BEHNKEN](../../cpp_src/box_behnken/box_behnken.html), a C++
library which computes a Box-Behnken design, that is, a set of arguments
to sample the behavior of a function of multiple parameters;

[CCVT\_BOX](../../cpp_src/ccvt_box/ccvt_box.html), a C++ program which
computes a CVT with some points forced to lie on the boundary.

[CVT](../../datasets/cvt/cvt.html), a dataset directory which contains
files describing a number of CVT's.

[CVT\_DATASET](../../cpp_src/cvt_dataset/cvt_dataset.html), a C++
program which creates a CVT dataset.

[FAURE](../../cpp_src/faure/faure.html), a C++ library which computes
Faure sequences.

[GRID](../../cpp_src/grid/grid.html), a C++ library which computes
points on a grid.

[HALTON](../../cpp_src/halton/halton.html), a C++ library which computes
Halton sequences.

[HAMMERSLEY](../../cpp_src/hammersley/hammersley.html), a C++ library
which computes Hammersley sequences.

[HEX\_GRID](../../cpp_src/hex_grid/hex_grid.html), a C++ library which
computes sets of points in a 2D hexagonal grid.

[IHS](../../cpp_src/ihs/ihs.html), a C++ library which computes improved
Latin Hypercube datasets.

[LATIN\_CENTER](../../cpp_src/latin_center/latin_center.html), a C++
library which computes Latin square data choosing the center value.

[LATIN\_EDGE](../../cpp_src/latin_edge/latin_edge.html), a C++ library
which computes Latin square data choosing the edge value.

[LATIN\_RANDOM](../../cpp_src/latin_random/latin_random.html), a C++
library which computes Latin square data choosing a random value in the
square.

[NIEDERREITER2](../../cpp_src/niederreiter2/niederreiter2.html), a C++
library which computes Niederreiter sequences with base 2.

[NORMAL](../../cpp_src/normal/normal.html), a C++ library which computes
elements of a sequence of pseudorandom normally distributed values.

[SOBOL](../../cpp_src/sobol/sobol.html), a C++ library which computes
Sobol sequences.

[UNIFORM](../../cpp_src/uniform/uniform.html), a C++ library which
computes uniform random values.

[VAN\_DER\_CORPUT](../../cpp_src/van_der_corput/van_der_corput.html), a
C++ library which computes van der Corput sequences.

### Reference: {#reference align="center"}

1.  Franz Aurenhammer,\
    Voronoi diagrams - a study of a fundamental geometric data
    structure,\
    ACM Computing Surveys,\
    Volume 23, Number 3, pages 345-405, September 1991.
2.  Paul Bratley, Bennett Fox, Linus Schrage,\
    A Guide to Simulation,\
    Springer Verlag, pages 201-202, 1983.
3.  John Burkardt, Max Gunzburger, Janet Peterson, Rebecca Brannon,\
    User Manual and Supporting Information for Library of Codes for
    Centroidal Voronoi Placement and Associated Zeroth, First, and
    Second Moment Determination,\
    Sandia National Laboratories Technical Report SAND2002-0099,\
    February 2002.
4.  Qiang Du, Vance Faber, Max Gunzburger,\
    Centroidal Voronoi Tessellations: Applications and Algorithms,\
    SIAM Review,\
    Volume 41, 1999, pages 637-676.
5.  Bennett Fox,\
    Algorithm 647:\
    Implementation and Relative Efficiency of Quasirandom Sequence
    Generators,\
    ACM Transactions on Mathematical Software,\
    Volume 12, Number 4, pages 362-376, 1986.
6.  John Halton,\
    On the efficiency of certain quasi-random sequences of points in
    evaluating multi-dimensional integrals,\
    Numerische Mathematik,\
    Volume 2, pages 84-90, 1960.
7.  Lili Ju, Qiang Du, Max Gunzburger,\
    Probabilistic methods for centroidal Voronoi tessellations and their
    parallel implementations,\
    Parallel Computing,\
    Volume 28, 2002, pages 1477-1500.

### Source Code: {#source-code align="center"}

-   [cvt.cpp](cvt.cpp), the source code;
-   [cvt.hpp](cvt.hpp), the include file;

### Examples and Tests: {#examples-and-tests align="center"}

-   [cvt\_prb.cpp](cvt_prb.cpp), a sample calling program.
-   [cvt\_prb\_output.txt](cvt_prb_output.txt), the output file.
-   [cvt\_circle.txt](cvt_circle.txt), a set of 100 CVT points in a
    circle, generated using the built in **USER** routine.
-   [cvt\_circle.png](cvt_circle.png), a PNG image of the 100 CVT points
    in a circle.

### List of Routines: {#list-of-routines align="center"}

-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **CVT** computes a Centroidal Voronoi Tessellation.
-   **CVT\_ENERGY** computes the CVT energy of a dataset.
-   **CVT\_ITERATE** takes one step of the CVT iteration.
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
-   **HALHAM\_DIM\_NUM\_CHECK** checks DIM\_NUM for a Halton or
    Hammersley sequence.
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
-   **PRIME** returns any of the first PRIME\_MAX prime numbers.
-   **R8\_EPSILON** returns the R8 round off unit.
-   **R8\_HUGE** returns a "huge" R8.
-   **R8MAT\_TRANSPOSE\_PRINT** prints an R8MAT, transposed.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **R8MAT\_UNIFORM\_01** returns a unit pseudorandom R8MAT.
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
-   **USER** samples points in a user-specified region with given
    density.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 10 November 2006.*
