SVD\_BASIS\
Extract singular vectors from data {#svd_basis-extract-singular-vectors-from-data align="center"}
==================================

------------------------------------------------------------------------

**SVD\_BASIS** is a C++ program which applies the singular value
decomposition to a set of data vectors, to extract the leading "modes"
of the data.

This procedure, originally devised by Karl Pearson, has arisen
repeatedly in a variety of fields, and hence is known under various
names, including:

-   the Hotelling transform;
-   the discrete Karhunen-Loeve transform (KLT)
-   Principal Component Analysis (PCA)
-   Principal Orthogonal Direction (POD)
-   Proper Orthogonal Decomposition (POD)
-   Singular Value Decomposition (SVD)

This program is intended as an intermediate application, in the
following situation:

1.  a "high fidelity" or "high resolution" PDE solver is used to
    determine many (say **N** = 500) solutions of a discretized PDE at
    various times, or parameter values. Each solution may be regarded as
    an **M** vector. Typically, each solution involves an **M** by **M**
    linear system, greatly reduced in complexity because of bandedness
    or sparsity.
2.  This program is applied to extract **L** dominant modes from the
    **N** solutions. This is done using the singular value decomposition
    of the **M** by **N** matrix, each of whose columns is one of the
    original solution vectors.
3.  a "reduced order model" program may then attempt to solve a
    discretized version of the PDE, using the **L** dominant modes as
    basis vectors. Typically, this means that a dense **L** by**L**
    linear system will be involved.

Thus, the program might read in 500 files, and write out 5 or 10 files
of the corresponding size and "shape", representing the dominant
solution modes.

To compute the singular value decomposition, we first construct the
**M** by **N** matrix **A** using individual solution vectors as
columns:

> **A = \[ X1 | X2 | ... | XN \]**

The singular value decomposition has the form:

> **A = U \* S \* V'**

and is determined using the DSVDC routine from the linear algebra
package LINPACK. The leading **L** columns of the orthogonal **M** by
**M** matrix **U**, associated with the largest singular values **S**,
are chosen to form the basis.

In most PDE's, the solution vector has some structure; perhaps there are
100 nodes, and at each node the solution has perhaps 4 components
(horizontal and vertical velocity, pressure, and temperature, say).
While the solution is therefore a vector of length 400, it's more
natural to think of it as a sort of table of 100 items, each with 4
components. You can use that idea to organize your solution data files;
in other words, your data files can each have 100 lines, containing 4
values on each line. As long as every line has the same number of
values, and every data file has the same form, the program can figure
out what's going on.

The program assumes that each solution vector is stored in a separate
data file and that the files are numbered consecutively, such as
*data01.txt*, *data02,txt*, ... In a data file, comments (beginning with
'\#") and blank lines are allowed. Except for comment lines, each line
of the file is assumed to represent all the component values of the
solution at a particular node.

Here, for instance, is a tiny data file for a problem with just 3 nodes,
and 4 solution components at each node:

          #  This is solution file number 1
          #
            1   2   3   4
            5   6   7   8
            9  10  11  12
          

The program is interactive, but requires only a very small amound of
input:

-   **L**, the number of basis vectors to be extracted from the data;
-   the name of the first input data file in the first set.
-   the name of the first input data file in the second set, if any.
    (you are allowed to define a master data set composed of several
    groups of files, each consisting of a sequence of consecutive file
    names)
-   a BLANK line, when there are no more sets of data to be added.
-   "Y" if the output files may include some initial comment lines,
    which will be indicated by initial "\#" characters.

The program computes **L** basis vectors, and writes each one to a
separate file, starting with *svd\_001.txt*, *svd\_002.txt* and so on.
The basis vectors are written with the same component and node structure
that was encountered on the solution files. Each vector will have unit
Euclidean norm.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SVD\_BASIS** is available in [a C++
version](../../cpp_src/svd_basis/svd_basis.html) and [a FORTRAN90
version](../../f_src/svd_basis/svd_basis.html) and [a MATLAB
version](../../m_src/svd_basis/svd_basis.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BLAS1](../../cpp_src/blas1/blas1.html), a C++ library which contains an
implementation of the Level 1 Basic Linear Algebra Subprograms, which
are used by this program. To build a copy of **SVD\_BASIS** requires
access to a compiled copy of the **BLAS1** library.

[BRAIN\_SENSOR\_POD](../../m_src/brain_sensor_pod/brain_sensor_pod.html),
a MATLAB program which applies the method of Proper Orthogonal
Decomposition to seek underlying patterns in sets of 40 sensor readings
of brain activity.

[BURGERS](../../datasets/burgers/burgers.html), a dataset directory
which contains a set of 40 successive solutions to the Burgers equation.
This data can be analyzed using **SVD\_BASIS**.

[LINPACK](../../cpp_src/linpack/linpack.html), a C++ library which
supplies the routine DSVDC, needed by this program. To build a copy of
**SVD\_BASIS** requires access to a compiled copy of the **LINPACK**
library.

[SVD\_BASIS\_WEIGHT](../../f_src/svd_basis_weight/svd_basis_weight.html),
a FORTRAN90 program which is similar to SVD\_BASIS, but which allows the
user to assign weights to each data vector.

[SVD\_DEMO](../../cpp_src/svd_demo/svd_demo.html), a C++ program which
demonstrates the singular value decomposition for a simple example.

[SVD\_SNOWFALL](../../cpp_src/svd_snowfall/svd_snowfall.html), a C++
library which reads a file containing historical snowfall data and
analyzes the data with the Singular Value Decomposition (SVD), and plots
created by GNUPLOT.

[SVD\_TRUNCATED](../../cpp_src/svd_truncated/svd_truncated.html), a C++
program which demonstrates the computation of the reduced or truncated
Singular Value Decomposition (SVD) that is useful for cases when one
dimension of the matrix is much smaller than the other.

### Reference: {#reference align="center"}

1.  Edward Anderson, Zhaojun Bai, Christian Bischof, Susan Blackford,
    James Demmel, Jack Dongarra, Jeremy Du Croz, Anne Greenbaum, Sven
    Hammarling, Alan McKenney, Danny Sorensen,\
    LAPACK User's Guide,\
    Third Edition,\
    SIAM, 1999,\
    ISBN: 0898714478,\
    LC: QA76.73.F25L36
2.  Gal Berkooz, Philip Holmes, John Lumley,\
    The proper orthogonal decomposition in the analysis of turbulent
    flows,\
    Annual Review of Fluid Mechanics,\
    Volume 25, 1993, pages 539-575.
3.  John Burkardt, Max Gunzburger, Hyung-Chun Lee,\
    Centroidal Voronoi Tessellation-Based Reduced-Order Modelling of
    Complex Systems,\
    SIAM Journal on Scientific Computing,\
    Volume 28, Number 2, 2006, pages 459-484.
4.  Lawrence Sirovich,\
    Turbulence and the dynamics of coherent structures, Parts I-III,\
    Quarterly of Applied Mathematics,\
    Volume XLV, Number 3, 1987, pages 561-590.

### Source Code: {#source-code align="center"}

-   [svd\_basis.cpp](svd_basis.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [input.txt](input.txt), three lines of input that define a run.
-   [output.txt](output.txt), the printed output.
-   [data01.txt](data01.txt), input data file \#1.
-   [data02.txt](data02.txt), input data file \#2.
-   [data04.txt](data04.txt), input data file \#3.
-   [data05.txt](data05.txt), input data file \#4.
-   [svd\_001.txt](svd_001.txt), output SVD file \#1.
-   [svd\_002.txt](svd_002.txt), output SVD file \#2.
-   [svd\_003.txt](svd_003.txt), output SVD file \#3.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main program for SVD\_BASIS.
-   **BASIS\_WRITE** writes a basis vector to a file.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_IS\_DIGIT** returns TRUE if a character is a decimal digit.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **DIGIT\_INC** increments a decimal digit.
-   **DIGIT\_TO\_CH** returns the base 10 digit character corresponding
    to a digit.
-   **FILE\_COLUMN\_COUNT** counts the columns in the first line of a
    file.
-   **FILE\_EXIST** reports whether a file exists.
-   **FILE\_NAME\_INC\_NOWRAP** increments a partially numeric file
    name.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **I4\_HUGE** returns a "huge" I4 value.
-   **R8\_EPSILON** returns the roundoff unit for R8 arithmetic.
-   **R8MAT\_DATA\_READ** reads the data from an R8MAT file.
-   **R8MAT\_HEADER\_READ** reads the header from an R8MAT file.
-   **R8MAT\_PRINT** prints an R8MAT.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **SINGULAR\_VECTORS** computes the desired singular values.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 22 November 2011.*
