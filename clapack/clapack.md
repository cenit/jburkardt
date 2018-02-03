CLAPACK\
C Translation of BLAS and LAPACK {#clapack-c-translation-of-blas-and-lapack align="center"}
================================

------------------------------------------------------------------------

**CLAPACK** is a C++ program which illustrates the use of CLAPACK, a C
translation of the FORTRAN77 BLAS and LAPACK linear algebra libraries.

By translating the LAPACK library into C, several important linear
algebra operations were made available in efficient, reliable versions,
including:

-   solution of linear systems A\*x=b;
-   the QR factorization of a (possibly rectangular) matrix, A = Q\*R,
    as a product of an orthogonal matrix Q and upper triangular
    matrix R.
-   the SVD factorization of a (possibly rectangular) matrix, A =
    U\*S\*V', as a product of an orthogonal matrix U, a diagonal matrix
    S, and an orthogonal matrix V.
-   the computation of the condition number, determinant, or inverse of
    a square matrix A.
-   the eigenvalue decomposition of a square matrix A, A\*X=X\*LAMBDA,
    where the columns of X are eigenvectors, and LAMBDA is a diagonal
    matrix of eigenvalues.
-   the Cholesky decomposition of a symmetric positive definite matrix A
    = L \* L' = R' \* R, where L is a lower triangular matrix, and R an
    upper triangular matrix.

The translation was done using the automatic F2C translator. As a
consequence, the resulting C source code is at best unpleasant to read.
Moreover, the user's C code must be written and processed in a
particular way.

First, the user code must have the necessary "include" statements.
Usually, this means adding the statements:

            # include "blaswrap.h"
            # include "f2c.h"
            # include "clapack.h"
          

Note that, for convenience, on the Department of Scientific Computing
classroom system, it is enough to say simply

            # include "clapack.h"
          

because the three include files have been merged into one.

Secondly, all variables that will be passed to a CLAPACK function must
be declared using types that can be handled by the FORTRAN package. In
general, this only affects integer variables; as a rule this means that
if PIV is an integer scalar, vector or array that will be passed to
CLAPACK, its type must be either "integer" (a type defined by f2c.h), or
else as "long int" (a standard C type). Declaring such a variable as
"int" will not work!

Each user accessible routine in the FORTRAN version of LAPACK has a
corresponding CLAPACK version. However, to access the CLAPACK version,
the user must specify the name of the routine in lower case letters
only, and must append an underscore to the name. Thus, to access a
LAPACK routine such as DGETRF(), the user's C code must look something
like this:

            dgetrf_ ( list of arguments )
          

Because all FORTRAN subroutine arguments can be modified during the
execution of the subroutine, the CLAPACK interface requires that every
argument in the argument list must be modifiable. In cases where a
vector or array is being passed, this happens automatically. However,
when passing a scalar variable, such as "N", the size of the linear
system, or "LDA", the leading dimension of array A, or "INFO", an error
return flag, it is necessary to prefix the name with an ampersand. Thus,
a call to DGESV() might look like:

            dgesv_ ( &n, &nrhs, a, &lda, ipiv, b, &ldb, &info );
          

because **n**, **nrhs**, **lda**, **ldb** and **info** are scalar
variables.

The vector and matrix arguments to the CLAPACK routine don't require the
ampersand. Moreover, vectors (singly indexed lists of numbers)
essentially work the same in C and FORTRAN, so it's not difficult to
correctly set up vector arguments for CLAPACK. However, matrices (doubly
indexed sets of data) are handled differently, and the user's C code
must either set up the data in a FORTRAN way immediately, or else set it
up in a way natural to C and then convert the data to make a FORTRAN
copy.

Let's assume that we have an M by N set of data, and to be concrete,
let's consider an example where M = 3 and N = 2. In C, it would be
natural to declare this data as follows:

            double a[3][2] = {
              { 11, 12 },
              { 21, 22 },
              { 31, 32 } };
          

In this case, the (I,J) entry (using 0-based indexing) can be retrieved
as **a\[i\]\[j\]**.

However, FORTRAN essentially stores a matrix as a vector, in which the
data is stored on column at a time. Thus, if we wished to pass the
example data to CLAPACK as an array, we might instead use the following
declaration:

            double b[3*2] = {
              11, 21, 31,
              12, 22, 32 };
          

In this case, the (I,J) entry (using 0-based indexing) can be retrieved
as **b\[i+j\*3\]** where the number 3 is the "leading dimension" of the
array, that is, the length of one column.

But suppose we need to build the array using the double indexed version,
although we know we have to pass a single indexed copy to CLAPACK? Then
we can start with the following declarations:

            double a[3][2];
            double b[3*2];
          

and calculate the entries of **a** using double indexing, and then copy
the information into **b** using code like the following:

            for ( j = 0; j < 2; j++ )
            {
              for ( i = 0; i < 3; i++ )
              {
                b[i+j*3] = a[i][j];
              }
            }
          

after which, the vector **b** will contain a copy of the data that is in
**a**, suitable for use by CLAPACK.

Both LAPACK and CLAPACK allow you to store M by N data inside arrays of
larger size. In that case, the actual first dimension of the double
dimensioned array is called the "leading dimension", and its value must
be available whenever entries of the smaller array must be located
inside the bigger array. I will assume for now that you always make your
arrays exactly big enough to hold the data you are interested in.
Typically, this will mean that the variables LDA and LDB are equal to N.

Once you think you've got your user code all set up, you need to compile
and load your program. Compilation requires access to a copy of the
CLAPACK include file, and that depends on how CLAPACK was installed on
your system. For our local system, the include file is stored in
/usr/common/clapack, so the compile statement might be

            gcc -I/usr/common/clapack myprog.c
          

The load procedure requires access to the CLAPACK library. For our local
system, the library is stored as libclapack.a in /usr/local/common, and
so the load statement is:

            gcc myprog.o -L/usr/common/clapack -lclapack -lm
          

which should create an executable program.

The source code for the CLAPACK library is available from
<http://www.netlib.org/clapack>. Actually setting up the library for use
can be surprisingly awkward and failure-prone.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

This refers to the EXAMPLES presented here. The CLAPACK library itself
is licensed under a different arrangement.

### Languages: {#languages align="center"}

The examples for **CLAPACK** are available in [a C
version](../../c_src/clapack/clapack.html) and [a C++
version](../../cpp_src/clapack/clapack.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[BLAS1\_C](../../cpp_src/blas1_c/blas1_c.html), a C++ library which
contains basic linear algebra subprograms (BLAS) for vector-vector
operations, using single precision complex arithmetic, by Charles
Lawson, Richard Hanson, David Kincaid, Fred Krogh.

[BLAS1\_D](../../cpp_src/blas1_d/blas1_d.html), a C++ library which
contains basic linear algebra subprograms (BLAS) for vector-vector
operations, using double precision real arithmetic, by Charles Lawson,
Richard Hanson, David Kincaid, Fred Krogh.

[BLAS1\_S](../../cpp_src/blas1_s/blas1_s.html), a C++ library which
contains basic linear algebra subprograms (BLAS) for vector-vector
operations, using single precision real arithmetic, by Charles Lawson,
Richard Hanson, David Kincaid, Fred Krogh.

[BLAS1\_Z](../../cpp_src/blas1_z/blas1_z.html), a C++ library which
contains basic linear algebra subprograms (BLAS) for vector-vector
operations, using double precision complex arithmetic, by Charles
Lawson, Richard Hanson, David Kincaid, Fred Krogh.

[CLAPACK\_SC](../../cpp_src/clapack_sc/clapack_sc.html), C++ programs
which illustrate the use of the CLAPACK library, a C translation of the
FORTRAN77 BLAS and LAPACK linear algebra libraries, including single and
double precision, real and complex arithmetic, as customized for the FSU
Department of Scientific Computing.

[LINPACK\_D](../../cpp_src/linpack_d/linpack_d.html), a C++ library
which solves linear systems using double precision real arithmetic;

[LINPACK\_S](../../cpp_src/linpack_s/linpack_s.html), a C++ library
which solves linear systems using single precision real arithmetic;

### Reference: {#reference align="center"}

1.  Edward Anderson, Zhaojun Bai, Christian Bischof, Susan Blackford,
    James Demmel, Jack Dongarra, Jeremy DuCroz, Anne Greenbaum, Sven
    Hammarling, Alan McKenney, Danny Sorensen,\
    LAPACK User's Guide,\
    Third Edition,\
    SIAM, 1999,\
    ISBN: 0898714478,\
    LC: QA76.73.F25L36

### Examples and Tests: {#examples-and-tests align="center"}

**CLAPACK\_PRB.CPP** is a complicated example that uses vectors to store
the matrix information.

-   [clapack\_prb.cpp](clapack_prb.cpp), a sample calling program.
-   [clapack\_prb\_output.txt](clapack_prb_output.txt), the output file.

**CLAPACK\_PRB2.CPP** is a simplified example that stores the matrix as
a double-indexed array, typical for C programs, but then shows how to
convert it to the form that CLAPACK needs.

-   [clapack\_prb2.cpp](clapack_prb2.cpp), a sample calling program.
-   [clapack\_prb2\_output.txt](clapack_prb2_output.txt), the output
    file.

**CLAPACK\_PRB3.CPP** shows how to use DGBTRF and DGBTRS to factor a
banded matrix and solve a related linear system. The banded matrix is
stored as a double-indexed array of bands, but then the program converts
the matrix data to the form that CLAPACK needs.

-   [clapack\_prb3.cpp](clapack_prb3.cpp), a sample calling program.
-   [clapack\_prb3\_output.txt](clapack_prb3_output.txt), the output
    file.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 09 January 2014.*
