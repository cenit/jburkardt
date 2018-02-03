CVT\_DATASET\
Generate CVT Datasets {#cvt_dataset-generate-cvt-datasets align="center"}
=====================

------------------------------------------------------------------------

**CVT\_DATASET** is a C++ program which creates a CVT dataset and writes
it to a file.

The program is interactive, and allows the user to choose the parameters
that define the dataset.

Normally, data is computed in the unit hypercube, with uniform density.
However, if you wish to work in a more interesting geometry, or to
control the density function, it is necessary to modify the **USER**
routine in the **CVT** library, and then direct **CVT\_DATASET** to use
that routine for initialization and sampling.

The data that the user may set includes:

-   **DIM\_NUM**, the spatial dimension,
-   **N**, the number of points to generate,
-   **SEED**, a seed to use for random number generation;
-   **INIT**, initialize the points:
    -   *file*, by reading data from file;
    -   *GRID*, picking points from a grid;
    -   *HALTON*, from a Halton sequence;
    -   *RANDOM*, using FORTRAN RANDOM function;
    -   *UNIFORM*, using a simple uniform RNG;
    -   *USER*, by calling the "user" routine;
-   **IT\_MAX**, the maximum number of iterations;
-   **IT\_FIXED**, the number of iterations for which each set of sample
    points should be used (between 1 and **IT\_MAX**);
-   **SAMPLE**, how to conduct the sampling:
    -   *GRID*, picking points from a grid;
    -   *HALTON*, from a Halton sequence;
    -   *RANDOM*, using FORTRAN RANDOM function;
    -   *UNIFORM*, using a simple uniform RNG;
    -   *USER*, by calling the "user" routine;
-   **SAMPLE\_NUM**, the number of sampling points;
-   **BATCH**, the number of sampling points to create at one time
    (between 1 and **SAMPLE\_NUM**);
-   **OUTPUT**, a file in which to store the data.

A "CVT" is a Centroidal Voronoi Tessellation. Essentially, a CVT is a
set of sample points in a (finite) region with the property that each
point is the centroid of its Voronoi subregion. A "random" set of sample
points will not have this property. However, it is possible to begin
with a random set of sample points, and drive it towards a CVT set, by
applying an iterative refinement process.

The generation of a CVT dataset is of necessity more complicated than
for a quasirandom sequence. An iteration is involved, so there must be
an initial assignment for the generators, and then a number of
iterations. Moreover, in each iteration, estimates must be made of the
volume and location of the Voronoi subregions. This is typically done by
Monte Carlo sampling. The accuracy of the resulting CVT depends in part
on the number of sampling points and the number of iterations taken.

A reasonable set of input data might be:

            2             spatial dimension is 2
            10            compute 10 points
            123456789     seed for random numbers
            uniform       initialize by UNIFORM
            40            40 iterations
            0.0           zero tolerance; won't stop early
            uniform       sample using UNIFORM
            10000         use 10,000 sample points on each iteration
            1000          create 1,000 sample points at a time
            -1            stop; don't want to define another set.
          

Once these parameters are set, the program generates the data and writes
it to a file. The user may then specify another set of input data, or
terminate the program.

### Usage: {#usage align="center"}

 **cvt\_dataset** 
:   will start the program, which will interactively request information
    from the user.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages {#languages align="center"}

**CVT\_DATASET** is available in [a C++
version](../../cpp_src/cvt_dataset/cvt_dataset.html) and [a FORTRAN90
version](../../f_src/cvt_dataset/cvt_dataset.html) and [a MATLAB
version](../../m_src/cvt_dataset/cvt_dataset.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CCVT\_BOX](../../cpp_src/ccvt_box/ccvt_box.html), a C++ program which
computes a CVT with some points forced to lie on the boundary.

[CVT](../../cpp_src/cvt/cvt.html), a C++ library which creates a CVT
dataset.

[CVT](../../datasets/cvt/cvt.html), a dataset directory which contains a
collection of datasets created by **CVT\_DATASET** (along with the
commands used to create them).

[FAURE\_DATASET](../../cpp_src/faure_dataset/faure_dataset.html), a C++
program which creates a Faure quasirandom dataset;

[GRID\_DATASET](../../cpp_src/grid_dataset/grid_dataset.html), a C++
program which creates a grid sequence and writes it to a file.

[LATIN\_CENTER\_DATASET](../../cpp_src/latin_center_dataset/latin_center_dataset.html),
a C++ program which creates a Latin Center Hypercube dataset;

[LATIN\_EDGE\_DATASET](../../cpp_src/latin_edge_dataset/latin_edge_dataset.html),
a C++ program which creates a Latin Edge Hypercube dataset;

[LATIN\_RANDOM\_DATASET](../../cpp_src/latin_random_dataset/latin_random_dataset.html),
a C++ program which creates a Latin Random Hypercube dataset;

[NIEDERREITER2\_DATASET](../../cpp_src/niederreiter2_dataset/niederreiter2_dataset.html),
a C++ program which creates a Niederreiter quasirandom dataset with base
2;

[NORMAL\_DATASET](../../cpp_src/normal_dataset/normal_dataset.html), a
C++ program which generates a dataset of multivariate normal
pseudorandom values and writes them to a file.

[SOBOL\_DATASET](../../cpp_src/sobol_dataset/sobol_dataset.html), a C++
program which computes a Sobol quasirandom sequence and writes it to a
file.

[UNIFORM\_DATASET](../../cpp_src/uniform_dataset/uniform_dataset.html),
a C++ program which generates a dataset of uniform pseudorandom values
and writes them to a file.

[VAN\_DER\_CORPUT\_DATASET](../../cpp_src/van_der_corput_dataset/van_der_corput_dataset.html),
a C++ program which creates a van der Corput quasirandom sequence and
writes it to a file.

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
    SIAM Review,\
    Volume 41, 1999, pages 637-676.
4.  Lili Ju, Qiang Du, Max Gunzburger,\
    Probabilistic methods for centroidal Voronoi tessellations and their
    parallel implementations,\
    Parallel Computing,\
    Volume 28, 2002, pages 1477-1500.

### Source Code: {#source-code align="center"}

-   [cvt\_dataset.cpp](cvt_dataset.cpp), the source code;

### Examples and Tests: {#examples-and-tests align="center"}

**Test 1** computes 85 CVT points in 2 dimensions, using uniform
initialization, a seed of 123456789, 40 iterations, a zero tolerance,
uniform sampling, 10,000 sample points in batches of 1000:

-   [input01.txt](input01.txt), the input defining the dataset;
-   [output01.txt](output01.txt), the printed response to the commands;
-   [cvt01.txt](cvt01.txt), the dataset created by the commands;
-   [cvt01.png](cvt01.png), a PNG image of the dataset;

**Test 2** repeats Test 1, but with 80 iterations:

-   [input02.txt](input02.txt), the input defining the dataset;
-   [output02.txt](output02.txt), the printed response to the commands;
-   [cvt02.txt](cvt02.txt), the dataset created by the commands;
-   [cvt02.png](cvt02.png), a [PNG](../../data/png/png.html) image of
    the dataset;

**Test 3** repeats test 1, but with 1,000,000 sample points:

-   [input03.txt](input03.txt), the input defining the dataset;
-   [output03.txt](output03.txt), the printed response to the commands;
-   [cvt03.txt](cvt03.txt), the dataset created by the commands;
-   [cvt03.png](cvt03.png), a [PNG](../../data/png/png.html) image of
    the dataset;

**Test 4** repeats test 1, but with Halton sampling:

-   [input04.txt](input04.txt), the input defining the dataset;
-   [output04.txt](output04.txt), the printed response to the commands;
-   [cvt04.txt](cvt04.txt), the dataset created by the commands;
-   [cvt04.png](cvt04.png), a [PNG](../../data/png/png.html) image of
    the dataset;

**Test 5** repeats test 1, but with Grid sampling:

-   [input05.txt](input05.txt), the input defining the dataset;
-   [output05.txt](output05.txt), the printed response to the commands;
-   [cvt05.txt](cvt05.txt), the dataset created by the commands;
-   [cvt05.png](cvt05.png), a [PNG](../../data/png/png.html) image of
    the dataset;

**Test 6** repeats Test 1, but with Random sampling:

-   [input06.txt](input06.txt), the input defining the dataset;
-   [output06.txt](output06.txt), the printed response to the commands;
-   [cvt06.txt](cvt06.txt), the dataset created by the commands;
-   [cvt06.png](cvt06.png), a [PNG](../../data/png/png.html) image of
    the dataset;

**Test 7** repeats Test 1, but with a seed of 987654321:

-   [input07.txt](input07.txt), the input defining the dataset;
-   [output07.txt](output07.txt), the printed response to the commands;
-   [cvt07.txt](cvt07.txt), the dataset created by the commands;
-   [cvt07.png](cvt07.png), a [PNG](../../data/png/png.html) image of
    the dataset;

**Test 8** repeats Test 1, but with a batch size of 5:

-   [input08.txt](input08.txt), the input defining the dataset;
-   [output08.txt](output08.txt), the printed response to the commands;
-   [cvt08.txt](cvt08.txt), the dataset created by the commands;
-   [cvt08.png](cvt08.png), a [PNG](../../data/png/png.html) image of
    the dataset;

**Test 9** computes 100 CVT points in 3 dimensions, using uniform
initialization, a seed of 123456789, 40 iterations, a tolerance of
0.000001, uniform sampling, 10,000 sample points in batches of 1000:

-   [input09.txt](input09.txt), the input defining the dataset;
-   [output09.txt](output09.txt), the printed response to the commands;
-   [cvt09.txt](cvt09.txt), the dataset created by the commands;

**Test 10** investigates the unstable CVT formed by a Cartesian grid of
100 points in 2D. Starting from this unstable solution, the iteration
proceeds towards a more "hexagonal" pattern :

-   [input10.txt](input10.txt), the input defining the dataset;
-   [output10.txt](output10.txt), the printed response to the commands;
-   [cvt10.txt](cvt10.txt), the dataset created by the commands;
-   [cvt10.png](cvt10.png), a [PNG](../../data/png/png.html) image of
    the dataset;

**Test 11** shows how the user may specify the initial point locations
in a file. 15 points are specified in 2D:

-   [input11.txt](input11.txt), the input defining the dataset;
-   [output11.txt](output11.txt), the printed response to the commands;
-   [initial11.txt](initial11.txt), the initial dataset, created by the
    user;
-   [initial11.png](initial11.png), a [PNG](../../data/png/png.html)
    image of the initial dataset;
-   [cvt11.txt](cvt11.txt), the dataset created by the commands;
-   [cvt11.png](cvt11.png), a [PNG](../../data/png/png.html) image of
    the dataset;

**Test 12**:

-   [input12.txt](input12.txt), the input defining the dataset;
-   [output12.txt](output12.txt), the printed response to the commands;
-   [cvt12.txt](cvt12.txt), the dataset created by the commands;

**Test 13**:

-   [input13.txt](input13.txt), the input defining the dataset;
-   [output13.txt](output13.txt), the printed response to the commands;
-   [cvt13.txt](cvt13.txt), the dataset created by the commands;

**Test 14** shows how the user may refer to the USER routine for a
different geometry. The default USER routine is set up to sample the
unit circle in 2D. 100 points are requested:

-   [input14.txt](input14.txt), the input defining the dataset;
-   [output14.txt](output14.txt), the printed response to the commands;
-   [cvt14.txt](cvt14.txt), the dataset created by the commands;
-   [cvt14.png](cvt14.png), a [PNG](../../data/png/png.html) image of
    the dataset;

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for CVT\_DATASET.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 10 January 2006.*
