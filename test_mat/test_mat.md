TEST\_MAT\
Test Matrices {#test_mat-test-matrices align="center"}
=============

------------------------------------------------------------------------

**TEST\_MAT** is a C++ library which defines test matrices for which
some of the determinant, eigenvalues, inverse, null vectors, P\*L\*U
factorization or linear system solution are already known, including the
Vandermonde and Wathen matrix.

A wide range of matrix dimensions, forms and properties are available.
These matrices may be useful in testing an algorithm for correctness on
a variety of problems.

Many of the matrices can be rectangular, with the user specifying the
number of rows and columns. Almost all the matrices can be made of
arbitrary size, with the user specifying the dimension.

Many different matrix zero structures are available, including diagonal,
bidiagonal, tridiagonal, pentadiagonal, banded, upper and lower
triangular, and Hessenberg.

Many different matrix symmetry patterns are available, including
symmetric, antisymmetric, persymmetric, circulant, Toeplitz, and Hankel.

Matrices are available with known inverses, condition numbers,
determinants, rank, eigenvalues, and characteristic polynomials. Other
matrix properties include positive definiteness, positivity, zero/one,
and adjacency matrices.

Many of the matrices come from a MATLAB M file collection developed by
Nicholas Higham, Department of Mathematics, University of Manchester.

An earlier version of the collection is available, again as MATLAB M
files, in ACM TOMS Algorithm 694, in the TOMS directory of [the NETLIB
web site](http://www.netlib.org/).

Many of these matrices, and many other matrices, are available at
[http://math.nist.gov](http://math.nist.gov/), the Matrix Market web
site.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**TEST\_MAT** is available in [a C
version](../../c_src/test_mat/test_mat.html) and [a C++
version](../../cpp_src/test_mat/test_mat.html) and [a FORTRAN77
version](../../f77_src/test_mat/test_mat.html) and [a FORTRAN90
version](../../f_src/test_mat/test_mat.html) and [a MATLAB
version](../../m_src/test_mat/test_mat.html) and [a Python
version.](../../py_src/test_mat/test_mat.html)

### Related Data and Programs: {#related-data-and-programs align="center"}

[CG](../../cpp_src/cg/cg.html), a C++ library which implements a simple
version of the conjugate gradient (CG) method for solving a system of
linear equations of the form A\*x=b, suitable for situations in which
the matrix A is positive definite (only real, positive eigenvalues) and
symmetric.

[CONDITION](../../cpp_src/condition/condition.html), a C++ library which
implements methods of computing or estimating the condition number of a
matrix.

[EISPACK](../../cpp_src/eispack/eispack.html), a C++ library which
carries out eigenvalue computations. It includes a function to compute
the singular value decomposition (SVD) of a rectangular matrix.
superseded by LAPACK;

[JACOBI\_EIGENVALUE](../../cpp_src/jacobi_eigenvalue/jacobi_eigenvalue.html),
a C++ library which implements the Jacobi iteration for the iterative
determination of the eigenvalues and eigenvectors of a real symmetric
matrix.

[LINPACK\_D](../../cpp_src/linpack_d/linpack_d.html), a C++ library
which solves linear systems using double precision real arithmetic;

[TEST\_MATRIX\_EXPONENTIAL](../../cpp_src/test_matrix_exponential/test_matrix_exponential.html),
a C++ library which defines a set of test cases for computing the matrix
exponential.

[WATHEN](../../cpp_src/wathen/wathen.html), a C++ library which compares
storage schemes (full, banded, sparse triplet) and solution strategies
(Linpack full, Linpack banded, conjugate gradient (CG)) for linear
systems involving the Wathen matrix, which can arise when solving a
problem using the finite element method (FEM).

### Source Code: {#source-code align="center"}

-   , the source code.
-   [test\_mat.hpp](test_mat.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [test\_mat\_prb.cpp](test_mat_prb.cpp), a sample calling program.
-   [test\_mat\_prb\_output.txt](test_mat_prb_output.txt), the output
    file.

### List of Routines: {#list-of-routines align="center"}

-   **AEGERTER** returns the AEGERTER matrix.
-   **AEGERTER\_CONDITION** returns the L1 condition of the AEGERTER
    matrix.
-   **AEGERTER\_DETERMINANT** returns the determinant of the AEGERTER
    matrix.
-   **AEGERTER\_EIGENVALUES** returns the eigenvalues of the AEGERTER
    matrix.
-   **AEGERTER\_INVERSE** returns the inverse of the AEGERTER matrix.
-   **ANTICIRCULANT** returns an ANTICIRCULANT matrix.
-   **ANTICIRCULANT\_DETERMINANT:** determinant of the ANTICIRCULANT
    matrix.
-   **ANTIHADAMARD** returns an approximate ANTIHADAMARD matrix.
-   **ANTIHADAMARD\_DETERMINANT** returns the determinant of the
    ANTIHADAMARD matrix.
-   **ANTISYMM\_RANDOM** returns an ANTISYMMETRIC matrix.
-   **ARCHIMEDES** returns the ARCHIMEDES matrix.
-   **ARCHIMEDES\_NULL** returns a null vector for the ARCHIMEDES
    matrix.
-   **BAB** returns the BAB matrix.
-   **BAB\_CONDITION** returns the L1 condition of the BAB matrix.
-   **BAB\_DETERMINANT** returns the determinant of the BAB matrix.
-   **BAB\_EIGENVALUES** returns the eigenvalues of the BAB matrix.
-   **BAB\_INVERSE** returns the inverse of the BAB matrix.
-   **BERNSTEIN** returns the Bernstein matrix.
-   **BERNSTEIN\_INVERSE** returns the inverse Bernstein matrix.
-   **BIMARKOV\_RANDOM** returns a BIMARKOV matrix.
-   **BIS** returns the BIS matrix.
-   **BIS\_DETERMINANT** returns the determinant of the BIS matrix.
-   **BIS\_EIGENVALUES** returns the eigenvalues of the BIS matrix.
-   **BIS\_INVERSE** returns the inverse of the BIS matrix.
-   **BODEWIG** returns the BODEWIG matrix.
-   **BODEWIG\_CONDITION** returns the L1 condition of the BODEWIG
    matrix.
-   **BODEWIG\_DETERMINANT** returns the determinant of the BODEWIG
    matrix.
-   **BODEWIG\_EIGENVALUES** returns the eigenvalues of the BODEWIG
    matrix.
-   **BODEWIG\_INVERSE** returns the inverse of the BODEWIG matrix.
-   **BODEWIG\_PLU** returns the PLU factors of the BODEWIG matrix.
-   **BODEWIG\_RHS** returns the BODEWIG right hand side.
-   **BODEWIG\_RIGHT** returns the right eigenvectors of the BODEWIG
    matrix.
-   **BODEWIG\_SOLUTION** returns the BODEWIG\_SOLUTION
-   **BOOTHROYD** returns the BOOTHROYD matrix.
-   **BOOTHROYD\_DETERMINANT** returns the determinant of the BOOTHROYD
    matrix.
-   **BOOTHROYD\_INVERSE** returns the inverse of the BOOTHROYD matrix.
-   **BORDERBAND** returns the BORDERBAND matrix.
-   **BORDERBAND\_DETERMINANT** returns the determinant of the
    BORDERBAND matrix.
-   **BORDERBAND\_INVERSE** returns the inverse of the BORDERBAND
    matrix.
-   **BORDERBAND\_PLU** returns the PLU factors of the BORDERBAND
    matrix.
-   **C8\_ABS** returns the absolute value of a C8.
-   **C8\_I** returns the value of the imaginary unit, i as a C8.
-   **C8\_LE\_L2** := X &lt;= Y for C8 values, and the L2 norm.
-   **C8\_NORMAL\_01** returns a unit pseudonormal C8.
-   **C8\_ONE** returns the value of complex 1.
-   **C8\_SWAP** swaps two C8's.
-   **C8\_UNIFORM\_01** returns a unit pseudorandom C8.
-   **C8\_ZERO** returns the value of 0 as a C8.
-   **C8MAT\_COPY\_NEW** copies one C8MAT to a "new" C8MAT.
-   **C8MAT\_IDENTITY** sets a C8MAT to the identity.
-   **C8MAT\_MM\_NEW** multiplies two C8MAT's.
-   **C8MAT\_NORM\_FRO** returns the Frobenius norm of a C8MAT.
-   **C8MAT\_PRINT** prints a C8MAT.
-   **C8MAT\_PRINT\_SOME** prints some of a C8MAT.
-   **C8MAT\_UNIFORM\_01** returns a unit pseudorandom C8MAT.
-   **C8MAT\_ZERO\_NEW** returns a new zeroed C8MAT.
-   **C8VEC\_COPY\_NEW** copies a C8VEC to a "new" C8VEC.
-   **C8VEC\_NORM\_L2** returns the L2 norm of a C8VEC.
-   **C8VEC\_PRINT** prints a C8VEC, with an optional title.
-   **C8VEC\_UNIFORM\_01** returns a unit C8VEC.
-   **C8VEC\_UNITY** returns the N roots of unity in a C8VEC.
-   **CARRY** returns the CARRY matrix.
-   **CARRY\_DETERMINANT** returns the determinant of the CARRY matrix.
-   **CARRY\_EIGENVALUES** returns the eigenvalues of the CARRY matrix.
-   **CARRY\_INVERSE** returns the inverse of the CARRY matrix.
-   **CARRY\_LEFT** returns the left eigenvectors of the CARRY matrix.
-   **CARRY\_RIGHT** returns the right eigenvectors of the CARRY matrix.
-   **CAUCHY** returns the CAUCHY matrix.
-   **CAUCHY\_DETERMINANT** returns the determinant of the CAUCHY
    matrix.
-   **CAUCHY\_INVERSE** returns the inverse of the CAUCHY matrix.
-   **CHEBY\_DIFF1** returns the CHEBY\_DIFF1 matrix.
-   **CHEBY\_DIFF1\_NULL** returns a null vector of the CHEBY\_DIFF1
    matrix.
-   **CHEBY\_T** returns the CHEBY\_T matrix.
-   **CHEBY\_T\_DETERMINANT** returns the determinant of the CHEBY\_T
    matrix.
-   **CHEBY\_T\_INVERSE** returns the inverse of the CHEBY\_T matrix.
-   **CHEBY\_U** returns the CHEBY\_U matrix.
-   **CHEBY\_U\_DETERMINANT** returns the determinant of the CHEBY\_U
    matrix.
-   **CHEBY\_U\_INVERSE** returns the inverse of the CHEBY\_U matrix.
-   **CHEBY\_U\_POLYNOMIAL** evaluates the Chebyshev polynomials of the
    second kind.
-   **CHEBY\_VAN1** returns the CHEBY\_VAN1 matrix.
-   **CHEBY\_VAN2** returns the CHEBY\_VAN2 matrix.
-   **CHEBY\_VAN2\_DETERMINANT** returns the determinant of the
    CHEBY\_VAN2 matrix.
-   **CHEBY\_VAN2\_INVERSE** returns the inverse of the CHEBY\_VAN2
    matrix.
-   **CHEBY\_VAN3** returns the CHEBY\_VAN3 matrix.
-   **CHEBY\_VAN3\_DETERMINANT** returns the determinant of the
    CHEBY\_VAN3 matrix.
-   **CHEBY\_VAN3\_INVERSE** returns the inverse of the CHEBY\_VAN3
    matrix.
-   **CHOW** returns the CHOW matrix.
-   **CHOW\_DETERMINANT** returns the determinant of the CHOW matrix.
-   **CHOW\_EIGENVALUES** returns the eigenvalues of the CHOW matrix.
-   **CHOW\_INVERSE** returns the inverse of the CHOW matrix.
-   **CHOW\_LEFT** returns the left eigenvectors for the CHOW matrix.
-   **CHOW\_RIGHT** returns the right eigenvectors for the CHOW matrix.
-   **CIRCULANT** returns the CIRCULANT matrix.
-   **CIRCULANT\_DETERMINANT** returns the determinant of the CIRCULANT
    matrix.
-   **CIRCULANT\_EIGENVALUES** returns the eigenvalues of the CIRCULANT
    matrix.
-   **CIRCULANT\_INVERSE** returns the inverse of the CIRCULANT matrix.
-   **CIRCULANT2** returns the CIRCULANT2 matrix.
-   **CIRCULANT2\_DETERMINANT** returns the determinant of the
    CIRCULANT2 matrix.
-   **CIRCULANT2\_EIGENVALUES** returns the eigenvalues of the
    CIRCULANT2 matrix.
-   **CIRCULANT2\_INVERSE** returns the inverse of the CIRCULANT2
    matrix.
-   **CLEMENT1** returns the CLEMENT1 matrix.
-   **CLEMENT1\_DETERMINANT** returns the determinant of the CLEMENT1
    matrix.
-   **CLEMENT1\_EIGENVALUES** returns the eigenvalues of the CLEMENT1
    matrix.
-   **CLEMENT1\_INVERSE** returns the inverse of the CLEMENT1 matrix.
-   **CLEMENT2** returns the CLEMENT2 matrix.
-   **CLEMENT2\_DETERMINANT** returns the determinant of the CLEMENT2
    matrix.
-   **CLEMENT2\_EIGENVALUES** returns the eigenvalues of the CLEMENT2
    matrix.
-   **CLEMENT2\_INVERSE** returns the inverse of the CLEMENT2 matrix.
-   **CLEMENT3** returns the CLEMENT3 matrix.
-   **CLEMENT3\_DETERMINANT** returns the determinant of the CLEMENT3
    matrix.
-   **CLEMENT3\_INVERSE** returns the inverse of the CLEMENT3 matrix.
-   **COMBIN** returns the COMBIN matrix.
-   **COMBIN\_CONDITION** returns the L1 condition of the COMBIN matrix.
-   **COMBIN\_DETERMINANT** returns the determinant of the COMBIN
    matrix.
-   **COMBIN\_EIGENVALUES** returns the eigenvalues of the COMBIN
    matrix.
-   **COMBIN\_INVERSE** returns the inverse of the COMBIN matrix.
-   **COMBIN\_RIGHT** returns the right eigenvectors of the COMBIN
    matrix.
-   **COMPANION** returns the COMPANION matrix.
-   **COMPANION\_DETERMINANT** returns the determinant of the COMPANION
    matrix.
-   **COMPANION\_INVERSE** returns the inverse of the COMPANION matrix.
-   **COMPLEX3** returns the COMPLEX3 matrix.
-   **COMPLEX3\_INVERSE** returns the inverse of the COMPLEX3 matrix.
-   **COMPLEX\_I** returns the COMPLEX\_I matrix.
-   **COMPLEX\_I\_DETERMINANT** returns the determinant of the
    COMPLEX\_I matrix.
-   **COMPLEX\_I\_INVERSE** returns the inverse of the COMPLEX\_I
    matrix.
-   **CONEX1** returns the CONEX1 matrix.
-   **CONEX1\_DETERMINANT** returns the determinant of the CONEX1
    matrix.
-   **CONEX1\_INVERSE** returns the inverse of the CONEX1 matrix.
-   **CONEX2** returns the CONEX2 matrix.
-   **CONEX2\_DETERMINANT** returns the determinant of the CONEX2
    matrix.
-   **CONEX2\_INVERSE** returns the inverse of the CONEX2 matrix.
-   **CONEX3** returns the CONEX3 matrix.
-   **CONEX3\_CONDITION** returns the L1 condition of the CONEX3 matrix.
-   **CONEX3\_DETERMINANT** returns the determinant of the CONEX3
    matrix.
-   **CONEX3\_INVERSE** returns the inverse of the CONEX3 matrix.
-   **CONEX4** returns the CONEX4 matrix.
-   **CONEX4\_INVERSE** returns the inverse of the CONEX4 matrix.
-   **CONFERENCE** returns the CONFERENCE matrix.
-   **CONFERENCE\_DETERMINANT** returns the determinant of the
    CONFERENCE matrix.
-   **CONFERENCE\_INVERSE** returns the inverse of the CONFERENCE
    matrix.
-   **CREATION** returns the CREATION matrix.
-   **CREATION\_DETERMINANT** returns the determinant of the CREATION
    matrix.
-   **CREATION\_NULL** returns a null vector of the CREATION matrix.
-   **CYCOL\_RANDOM** returns the CYCOL\_RANDOM matrix.
-   **DAUB2** returns the DAUB2 matrix.
-   **DAUB2\_DETERMINANT** returns the determinant of the DAUB2 matrix.
-   **DAUB2\_INVERSE** returns the inverse of the DAUB2 matrix.
-   **DAUB4** returns the DAUB4 matrix.
-   **DAUB4\_DETERMINANT** returns the determinant of the DAUB4 matrix.
-   **DAUB4\_INVERSE** returns the inverse of the DAUB4 matrix.
-   **DAUB6** returns the DAUB6 matrix.
-   **DAUB6\_DETERMINANT** returns the determinant of the DAUB6 matrix.
-   **DAUB6\_INVERSE** returns the inverse of the DAUB6 matrix.
-   **DAUB8** returns the DAUB8 matrix.
-   **DAUB8\_DETERMINANT** returns the determinant of the DAUB8 matrix.
-   **DAUB8\_INVERSE** returns the inverse of the DAUB8 matrix.
-   **DAUB10** returns the DAUB10 matrix.
-   **DAUB10\_DETERMINANT** returns the determinant of the DAUB10
    matrix.
-   **DAUB10\_INVERSE** returns the inverse of the DAUB10 matrix.
-   **DAUB12** returns the DAUB12 matrix.
-   **DAUB12\_DETERMINANT** returns the determinant of the DAUB12
    matrix.
-   **DAUB12\_INVERSE** returns the inverse of the DAUB12 matrix.
-   **DIAGONAL** returns the DIAGONAL matrix.
-   **DIAGONAL\_DETERMINANT** returns the determinant of the DIAGONAL
    matrix.
-   **DIAGONAL\_EIGENVALUES** returns the eigenvalues of the DIAGONAL
    matrix.
-   **DIAGONAL\_INVERSE** returns the inverse of the DIAGONAL matrix.
-   **DIF1** returns the DIF1 matrix.
-   **DIF1\_DETERMINANT** returns the determinant of the DIF1 matrix.
-   **DIF1\_EIGENVALUES** returns the eigenvalues of the DIF1 matrix.
-   **DIF1\_NULL** returns a null vector of the DIF1 matrix.
-   **DIF1CYCLIC** returns the DIF1CYCLIC matrix.
-   **DIF1CYCLIC\_DETERMINANT:** determinant of the DIF1CYCLIC matrix.
-   **DIF1CYCLIC\_NULL** returns a null vector of the DIF1CYCLIC matrix.
-   **DIF2** returns the DIF2 matrix.
-   **DIF2\_CHOLESKY** returns the Cholesky factor of the DIF2 matrix.
-   **DIF2\_DETERMINANT** returns the determinant of the DIF2 matrix.
-   **DIF2\_EIGENVALUES** returns the eigenvalues of the DIF2 matrix.
-   **DIF2\_INVERSE** returns the inverse of the DIF2 matrix.
-   **DIF2\_PLU** returns the PLU factors of the DIF2 matrix.
-   **DIF2\_RHS** returns the DIF2 right hand side.
-   **DIF2\_RIGHT** returns the right eigenvectors of the DIF2 matrix.
-   **DIF2\_SOLUTION** returns the DIF2 solution matrix.
-   **DIF2CYCLIC** returns the DIF2CYCLIC matrix.
-   **DIF2CYCLIC\_DETERMINANT:** determinant of the DIF2CYCLIC matrix.
-   **DIF2CYCLIC\_NULL:** null vector of the DIF2CYCLIC matrix.
-   **DORR** returns the DORR matrix.
-   **DOWNSHIFT** returns the DOWNSHIFT matrix.
-   **DOWNSHIFT\_DETERMINANT** returns the determinant of the DOWNSHIFT
    matrix.
-   **DOWNSHIFT\_EIGENVALUES** returns the eigenvalues of the DOWNSHIFT
    matrix.
-   **DOWNSHIFT\_INVERSE** returns the inverse of the DOWNSHIFT matrix.
-   **EBERLEIN** returns the EBERLEIN matrix.
-   **EBERLEIN\_DETERMINANT** returns the determinant of the EBERLEIN
    matrix.
-   **EBERLEIN\_EIGENVALUES** returns the eigenvalues of the EBERLEIN
    matrix.
-   **EBERLEIN\_NULL** returns a left null vector of the EBERLEIN
    matrix.
-   **EULERIAN** returns the EULERIAN matrix.
-   **EULERIAN\_DETERMINANT** returns the determinant of the EULERIAN
    matrix.
-   **EULERIAN\_INVERSE** computes the inverse of the EULERIAN matrix.
-   **EXCHANGE** returns the EXCHANGE matrix.
-   **EXCHANGE\_DETERMINANT** returns the determinant of the EXCHANGE
    matrix.
-   **EXCHANGE\_EIGENVALUES** returns the eigenvalues of the EXCHANGE
    matrix.
-   **EXCHANGE\_INVERSE** returns the inverse of the EXCHANGE matrix.
-   **EXCHANGE\_RIGHT** returns the right eigenvectors of the EXCHANGE
    matrix.
-   **FIBONACCI1** returns the FIBONACCI1 matrix.
-   **FIBONACCI1\_DETERMINANT** returns the determinant of the
    FIBONACCI1 matrix.
-   **FIBONACCI1\_NULL** returns a null vector of the FIBONACCI1 matrix.
-   **FIBONACCI2** returns the FIBONACCI2 matrix.
-   **FIBONACCI2\_DETERMINANT** returns the determinant of the
    FIBONACCI2 matrix.
-   **FIBONACCI2\_EIGENVALUES** returns the eigenvalues of the
    FIBONACCI2 matrix.
-   **FIBONACCI2\_INVERSE** returns the inverse of the FIBONACCI2
    matrix.
-   **FIBONACCI3** returns the FIBONACCI3 matrix.
-   **FIBONACCI3\_DETERMINANT** returns the determinant of the
    FIBONACCI3 matrix.
-   **FIBONACCI3\_EIGENVALUES** returns the eigenvalues of the
    FIBONACCI3 matrix.
-   **FIBONACCI3\_INVERSE** returns the inverse of the FIBONACCI3
    matrix.
-   **FIEDLER** returns the FIEDLER matrix.
-   **FIEDLER\_DETERMINANT** returns the determinant of the FIEDLER
    matrix.
-   **FIEDLER\_INVERSE** returns the inverse of the FIEDLER matrix.
-   **FORSYTHE** returns the FORSYTHE matrix.
-   **FORSYTHE\_DETERMINANT** returns the determinant of the FORSYTHE
    matrix.
-   **FORSYTHE\_EIGENVALUES** returns the eigenvalues of the FORSYTHE
    matrix.
-   **FORSYTHE\_INVERSE** returns the inverse of the Forsythe matrix.
-   **FOURIER** returns the FOURIER matrix.
-   **FOURIER\_DETERMINANT** returns the determinant of the FOURIER
    matrix.
-   **FOURIER\_EIGENVALUES** returns the eigenvalues of the FOURIER
    matrix.
-   **FOURIER\_INVERSE** returns the inverse of the FOURIER matrix.
-   **FOURIER\_COSINE** returns the FOURIER\_COSINE matrix.
-   **FOURIER\_COSINE\_DETERMINANT:** determinant of the FOURIER\_COSINE
    matrix.
-   **FOURIER\_COSINE\_INVERSE** returns the inverse of the
    FOURIER\_COSINE matrix.
-   **FOURIER\_SINE** returns the FOURIER\_SINE matrix.
-   **FOURIER\_SINE\_DETERMINANT** returns the determinant of the
    FOURIER\_SINE matrix.
-   **FOURIER\_SINE\_INVERSE** returns the inverse of the FOURIER\_SINE
    matrix.
-   **FRANK** returns the FRANK matrix.
-   **FRANK\_DETERMINANT** returns the determinant of the FRANK matrix.
-   **FRANK\_INVERSE** returns the inverse of the FRANK matrix.
-   **FRANK\_RHS** returns the FRANK right hand side.
-   **FRANK\_SOLUTION** returns the FRANK solution matrix.
-   **GEAR** returns the GEAR matrix.
-   **GEAR\_DETERMINANT** returns the determinant of the GEAR matrix.
-   **GEAR\_EIGENVALUES** returns the eigenvalues of the GEAR matrix.
-   **GFPP** returns the GFPP matrix.
-   **GFPP\_DETERMINANT** returns the determinant of the GFPP matrix.
-   **GFPP\_INVERSE** returns the inverse of the GFPP matrix.
-   **GFPP\_PLU** returns the PLU factorization of the GFPP matrix.
-   **GIVENS** returns the GIVENS matrix.
-   **GIVENS\_DETERMINANT** returns the determinant of the GIVENS
    matrix.
-   **GIVENS\_EIGENVALUES** returns the eigenvalues of the GIVENS
    matrix.
-   **GIVENS\_INVERSE** returns the inverse of the GIVENS matrix.
-   **GIVENS\_PLU** returns the PLU factors of the GIVENS matrix.
-   **GK316** returns the GK316 matrix.
-   **GK316\_DETERMINANT** returns the determinant of the GK316 matrix.
-   **GK316\_EIGENVALUES** returns the eigenvalues of the GK316 matrix.
-   **GK316\_INVERSE** returns the inverse of the GK316 matrix.
-   **GK323** returns the GK323 matrix.
-   **GK323\_DETERMINANT** returns the determinant of the GK323 matrix.
-   **GK323\_INVERSE** returns the inverse of the GK323 matrix.
-   **GK324** returns the GK324 matrix.
-   **GK324\_DETERMINANT** returns the determinant of the GK324 matrix.
-   **GK324\_INVERSE** returns the inverse of the GK324 matrix.
-   **GRCAR** returns the GRCAR matrix.
-   **HADAMARD** returns the HADAMARD matrix.
-   **HAMMING** computes the HAMMING matrix.
-   **HANKEL** returns the HANKEL matrix.
-   **HANOWA** returns the HANOWA matrix.
-   **HANOWA\_DETERMINANT** returns the determinant of the HANOWA
    matrix.
-   **HANOWA\_EIGENVALUES** returns the eigenvalues of the HANOWA
    matrix.
-   **HANOWA\_INVERSE** returns the inverse of the Hanowa matrix.
-   **HARMAN** returns the HARMAN matrix.
-   **HARMAN\_DETERMINANT** returns the determinant of the HARMAN
    matrix.
-   **HARMAN\_EIGENVALUES** returns the eigenvalues of the HARMAN
    matrix.
-   **HARMAN\_INVERSE** returns the inverse of the HARMAN matrix.
-   **HARTLEY** returns the HARTLEY matrix.
-   **HARTLEY\_DETERMINANT** returns the determinant of the HARTLEY
    matrix.
-   **HARTLEY\_INVERSE** returns the inverse of the HARTLEY matrix.
-   **HELMERT** returns the HELMERT matrix.
-   **HELMERT\_DETERMINANT** returns the determinant of the HELMERT
    matrix.
-   **HELMERT\_INVERSE** returns the inverse of the HELMERT matrix.
-   **HELMERT2** returns the HELMERT2 matrix.
-   **HELMERT2\_INVERSE** returns the inverse of the HELMERT2 matrix.
-   **HERMITE** returns the HERMITE matrix.
-   **HERMITE\_DETERMINANT** returns the determinant of the HERMITE
    matrix.
-   **HERMITE\_INVERSE** returns the inverse of the HERMITE matrix.
-   **HERMITE\_ROOTS** computes the roots of a Hermite polynomial.
-   **HERNDON** returns the HERNDON matrix.
-   **HERNDON\_DETERMINANT** returns the determinant of the HERNDON
    matrix.
-   **HERNDON\_EIGENVALUES** returns the eigenvalues of the HERNDON
    matrix.
-   **HERNDON\_INVERSE** returns the inverse of the HERNDON matrix.
-   **HILBERT** returns the HILBERT matrix.
-   **HILBERT\_DETERMINANT** returns the determinant of the HILBERT
    matrix.
-   **HILBERT\_INVERSE** returns the inverse of the HILBERT matrix.
-   **HOFFMAN** computes the HOFFMAN matrix.
-   **HOFFMAN\_RHS** returns the HOFFMAN right hand side.
-   **HOFFMAN\_OPTIMUM** returns the HOFFMAN optimum solution.
-   **HOUSEHOLDER** constructs a HOUSEHOLDER matrix.
-   **HOUSEHOLDER\_DETERMINANT** returns the determinant of a
    HOUSEHOLDER matrix.
-   **HOUSEHOLDER\_EIGENVALUES** returns the eigenvalues of a
    HOUSEHOLDER matrix.
-   **HOUSEHOLDER\_INVERSE** returns the inverse of a HOUSEHOLDER
    matrix.
-   **I4\_EVEN** returns TRUE if an I4 is even.
-   **I4\_FACTOR** factors an I4 into prime factors.
-   **I4\_HUGE** returns a "huge" I4.
-   **I4\_IS\_PRIME** reports whether an I4 is prime.
-   **I4\_LOG\_10** returns the integer part of the logarithm base 10 of
    an I4.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the smaller of two I4's.
-   **I4\_MODP** returns the nonnegative remainder of I4 division.
-   **I4\_ODD** returns TRUE if an I4 is odd.
-   **I4\_POCHHAMMER** returns the value of ( I \* (I+1) \* ... \*
    (J-1) \* J ).
-   **I4\_POWER** returns the value of I\^J.
-   **I4\_SIGN** returns the sign of an I4.
-   **I4\_UNIFORM** returns a scaled pseudorandom I4.
-   **I4\_WRAP** forces an I4 to lie between given limits by wrapping.
-   **I4MAT\_PRINT** prints an I4MAT.
-   **I4MAT\_PRINT\_SOME** prints some of an I4MAT.
-   **I4VEC\_INDEX** returns the location of the first occurrence of a
    given value.
-   **I4VEC\_INDICATOR\_NEW** sets an I4VEC to the indicator vector.
-   **I4VEC\_PRINT** prints an I4VEC.
-   **IDEM\_RANDOM** returns the IDEM\_RANDOM matrix.
-   **IDEM\_RANDOM\_DETERMINANT** returns the determinant of the
    IDEM\_RANDOM matrix.
-   **IDEM\_RANDOM\_EIGENVALUES** returns the eigenvalues of the
    IDEM\_RANDOM matrix.
-   **IDEM\_RANDOM\_RIGHT** returns the right eigenvectors of the
    IDEM\_RANDOM matrix.
-   **IDENTITY** returns the IDENTITY matrix.
-   **IDENTITY\_DETERMINANT** returns the determinant of the IDENTITY
    matrix.
-   **IDENTITY\_EIGENVALUES** returns the eigenvalues of the IDENTITY
    matrix.
-   **IDENTITY\_INVERSE** returns the inverse of the IDENTITY matrix.
-   **IDENTITY\_LEFT** returns the left eigenvectors of the IDENTITY
    matrix.
-   **IDENTITY\_RIGHT** returns the right eigenvectors of the IDENTITY
    matrix.
-   **IJFACT1** returns the IJFACT1 matrix.
-   **IJFACT1\_DETERMINANT** returns the determinant of the IJFACT1
    matrix.
-   **IJFACT2** returns the IJFACT2 matrix.
-   **IJFACT2\_DETERMINANT** returns the determinant of the IJFACT2
    matrix.
-   **ILL3** returns the ILL3 matrix.
-   **ILL3\_DETERMINANT** returns the determinant of the ILL3 matrix.
-   **ILL3\_EIGENVALUES** returns the eigenvalues of the ILL3 matrix.
-   **ILL3\_INVERSE** returns the inverse of the ILL3 matrix.
-   **ILL3\_RIGHT** returns the right eigenvectors of the ILL3 matrix.
-   **INDICATOR** returns the INDICATOR matrix.
-   **INTEGRATION** returns the INTEGRATION matrix.
-   **INTEGRATION\_DETERMINANT** returns the determinant of the
    INTEGRATION matrix.
-   **INTEGRATION\_EIGENVALUES** returns the eigenvalues of the
    INTEGRATION matrix.
-   **INTEGRATION\_INVERSE** returns the inverse of the INTEGRATION
    matrix.
-   **INVOL** returns the INVOL matrix.
-   **INVOL\_DETERMINANT** returns the determinant of the INVOL matrix.
-   **INVOL\_EIGENVALUES** returns the eigenvalues of the INVOL matrix.
-   **INVOL\_INVERSE** returns the inverse of the INVOL matrix.
-   **INVOL\_RANDOM** returns the INVOL\_RANDOM matrix.
-   **JACOBI** returns the JACOBI matrix.
-   **JACOBI\_DETERMINANT** returns the determinant of the JACOBI
    matrix.
-   **JACOBI\_EIGENVALUES** returns the eigenvalues of the JACOBI
    matrix.
-   **JACOBI\_ITERATE** applies the Jacobi eigenvalue iteration to a
    symmetric matrix.
-   **JACOBI\_SYMBOL** evaluates the Jacobi symbol (Q/P).
-   **JORDAN** returns the JORDAN matrix.
-   **JORDAN\_DETERMINANT** returns the determinant of the JORDAN
    matrix.
-   **JORDAN\_INVERSE** returns the inverse of the JORDAN matrix.
-   **KAHAN** returns the KAHAN matrix.
-   **KAHAN\_DETERMINANT** returns the determinant of the KAHAN matrix.
-   **KAHAN\_INVERSE** returns the inverse of the KAHAN matrix.
-   **KERSHAW** returns the KERSHAW matrix.
-   **KERSHAW\_DETERMINANT** returns the determinant of the KERSHAW
    matrix.
-   **KERSHAW\_EIGENVALUES** returns the eigenvalues of the KERSHAW
    matrix.
-   **KERSHAW\_INVERSE** returns the inverse of the KERSHAW matrix.
-   **KERSHAWTRI** returns the KERSHAWTRI matrix.
-   **KERSHAWTRI\_DETERMINANT** returns the determinant of the
    KERSHAWTRI matrix.
-   **KERSHAWTRI\_INVERSE** returns the inverse of the KERSHAWTRI
    matrix.
-   **KMS** returns the KMS matrix.
-   **KMS\_DETERMINANT** returns the determinant of the KMS matrix.
-   **KMS\_EIGENVALUES** returns the eigenvalues of the KMS matrix.
-   **KMS\_EIGENVALUES\_THETA** returns data needed to compute KMS
    eigenvalues.
-   **KMS\_EIGENVALUES\_THETA\_F** evaluates a function for KMS
    eigenvalues.
-   **KMS\_INVERSE** returns the inverse of the KMS matrix.
-   **KMS\_LDL** returns the LDL factorization of the KMS matrix.
-   **KMS\_PLU** returns the PLU factorization of the KMS matrix.
-   **KMS\_RIGHT** returns the right eigenvectors of the KMS matrix.
-   **KRYLOV** returns the KRYLOV matrix.
-   **KSUB\_NEXT** generates the subsets of size K from a set of size N.
-   **LAGUERRE** returns the LAGUERRE matrix.
-   **LAGUERRE\_DETERMINANT** returns the determinant of the LAGUERRE
    matrix.
-   **LAGUERRE\_INVERSE** returns the inverse of the LAGUERRE matrix.
-   **LAUCHLI** returns the LAUCHLI matrix.
-   **LAUCHLI\_NULL\_LEFT** returns a left null vector of the LAUCHLI
    matrix.
-   **LEGENDRE** returns the LEGENDRE matrix.
-   **LEGENDRE\_INVERSE** returns the inverse of the LEGENDRE matrix.
-   **LEGENDRE\_SYMBOL** evaluates the Legendre symbol (Q/P).
-   **LEGENDRE\_ZEROS** computes the zeros of the Legendre polynomial.
-   **LEHMER** returns the LEHMER matrix.
-   **LEHMER\_INVERSE** returns the inverse of the LEHMER matrix.
-   **LESLIE** returns the LESLIE matrix.
-   **LESLIE\_DETERMINANT** returns the determinant of the LESLIE
    matrix.
-   **LESP** returns the LESP matrix.
-   **LESP\_DETERMINANT** computes the determinant of the LESP matrix.
-   **LIETZKE** returns the LIETZKE matrix.
-   **LIETZKE\_DETERMINANT** returns the determinant of the LIETZKE
    matrix.
-   **LIETZKE\_INVERSE** returns the inverse of the LIETZKE matrix.
-   **LINE\_ADJ** returns the LINE\_ADJ matrix.
-   **LINE\_ADJ\_DETERMINANT** returns the determinant of the LINE\_ADJ
    matrix.
-   **LINE\_ADJ\_EIGENVALUES** returns the eigenvalues of the LINE\_ADJ
    matrix.
-   **LINE\_ADJ\_NULL** returns a null vector of the LINE\_ADJ matrix.
-   **LINE\_LOOP\_ADJ** returns the LINE\_LOOP\_ADJ matrix.
-   **LINE\_LOOP\_ADJ\_DETERMINANT** returns the determinant of the
    LINE\_LOOP\_ADJ matrix.
-   **LINE\_LOOP\_ADJ\_EIGENVALUES** returns the eigenvalues of the
    LINE\_LOOP\_ADJ matrix.
-   **LOEWNER** returns the LOEWNER matrix.
-   **LOTKIN** returns the LOTKIN matrix.
-   **LOTKIN\_DETERMINANT** returns the determinant of the LOTKIN
    matrix.
-   **LOTKIN\_INVERSE** returns the inverse of the LOTKIN matrix.
-   **MARKOV\_RANDOM** returns the MARKOV\_RANDOM matrix.
-   **MAXIJ** returns the MAXIJ matrix.
-   **MAXIJ\_DETERMINANT** returns the determinant of the MAXIJ matrix.
-   **MAXIJ\_INVERSE** returns the inverse of the MAXIJ matrix.
-   **MAXIJ\_PLU** returns the PLU factors of the MAXIJ matrix.
-   **MERTENS** evaluates the Mertens function.
-   **MILNES** returns the MILNES matrix.
-   **MILNES\_DETERMINANT** returns the determinant of the MILNES
    matrix.
-   **MILNES\_INVERSE** returns the inverse of the MILNES matrix.
-   **MINIJ** returns the MINIJ matrix.
-   **MINIJ\_CHOLESKY** returns the Cholesky factor of the MINIJ matrix.
-   **MINIJ\_DETERMINANT** returns the determinant of the MINIJ matrix.
-   **MINIJ\_EIGENVALUES** returns the eigenvalues of the MINIJ matrix.
-   **MINIJ\_INVERSE** returns the inverse of the MINIJ matrix.
-   **MINIJ\_PLU** returns the PLU factors of the MINIJ matrix.
-   **MOEBIUS** returns the value of MU(N), the Moebius function of N.
-   **MOLER1** returns the MOLER1 matrix.
-   **MOLER1\_DETERMINANT** returns the determinant of the MOLER1
    matrix.
-   **MOLER1\_INVERSE** returns the inverse of the MOLER1 matrix.
-   **MOLER1\_PLU** returns the PLU factors of the MOLER1 matrix.
-   **MOLER2** returns the MOLER2 matrix.
-   **MOLER2\_DETERMINANT** returns the determinant of the MOLER2
    matrix.
-   **MOLER2\_EIGENVALUES** returns the eigenvalues of the MOLER2
    matrix.
-   **MOLER2\_NULL** returns a null vector for the MOLER2 matrix.
-   **MOLER3** returns the MOLER3 matrix.
-   **MOLER3\_CHOLESKY** returns the Cholesky factor of the MOLER3
    matrix.
-   **MOLER3\_DETERMINANT** returns the determinant of the MOLER3
    matrix.
-   **MOLER3\_INVERSE** returns the inverse of the MOLER3 matrix.
-   **MOLER3\_PLU** returns the PLU factors of the MOLER3 matrix.
-   **NEUMANN** returns the NEUMANN matrix.
-   **NEUMANN\_DETERMINANT** returns the determinant of the NEUMANN
    matrix.
-   **NEUMANN\_NULL** returns a null vector of the NEUMANN matrix.
-   **ONE** returns the ONE matrix.
-   **ONE\_DETERMINANT** returns the determinant of the ONE matrix.
-   **ONE\_EIGENVALUES** returns the eigenvalues of the ONE matrix.
-   **ONE\_NULL** returns a null vector of the ONE matrix.
-   **ONE\_RIGHT** returns the right eigenvectors of the ONE matrix.
-   **ORTEGA** returns the ORTEGA matrix.
-   **ORTEGA\_DETERMINANT** returns the determinant of the ORTEGA
    matrix.
-   **ORTEGA\_EIGENVALUES** returns the eigenvalues of the ORTEGA
    matrix.
-   **ORTEGA\_INVERSE** returns the inverse of the ORTEGA matrix.
-   **ORTEGA\_RIGHT** returns the (right) eigenvectors of the ORTEGA
    matrix.
-   **ORTH\_RANDOM** returns the ORTH\_RANDOM matrix.
-   **ORTH\_RANDOM\_DETERMINANT** returns the determinant of the
    ORTH\_RANDOM matrix.
-   **ORTH\_RANDOM\_INVERSE** returns the inverse of the ORTH\_RANDOM
    matrix.
-   **ORTH\_SYMM** returns the ORTH\_SYMM matrix.
-   **ORTH\_SYMM\_DETERMINANT** returns the determinant of the
    ORTH\_SYMM matrix.
-   **ORTH\_SYMM\_EIGENVALUES** returns eigenvalues of the ORTH\_SYMM
    matrix.
-   **ORTH\_SYMM\_INVERSE** returns the inverse of the ORTH\_SYMM
    matrix.
-   **OTO** returns the OTO matrix.
-   **OTO\_DETERMINANT** returns the determinant of the OTO matrix.
-   **OTO\_EIGENVALUES** returns the eigenvalues of the OTO matrix.
-   **OTO\_INVERSE** returns the inverse of the OTO matrix.
-   **OTO\_PLU** returns the PLU factors of the OTO matrix.
-   **OTO\_RIGHT** returns the right eigenvectors of the OTO matrix.
-   **PARLETT** returns the PARLETT matrix.
-   **PARLETT\_EIGENVALUES** returns the eigenvalues of the PARLETT
    matrix.
-   **PARTER** returns the PARTER matrix.
-   **PARTER\_DETERMINANT** returns the determinant of the PARTER
    matrix.
-   **PARTER\_INVERSE** returns the inverse of the PARTER matrix.
-   **PASCAL1** returns the PASCAL1 matrix.
-   **PASCAL1\_DETERMINANT** returns the determinant of the PASCAL1
    matrix.
-   **PASCAL1\_EIGENVALUES** returns eigenvalues of the PASCAL1 matrix.
-   **PASCAL1\_INVERSE** returns the inverse of the PASCAL1 matrix.
-   **PASCAL2** returns the PASCAL2 matrix.
-   **PASCAL2\_CHOLESKY** returns the Cholesky factor of the PASCAL2
    matrix.
-   **PASCAL2\_DETERMINANT** returns the determinant of the PASCAL2
    matrix.
-   **PASCAL2\_INVERSE** returns the inverse of the PASCAL2 matrix.
-   **PASCAL2\_PLU** returns the PLU factors of the PASCAL2 matrix.
-   **PASCAL3** returns the PASCAL3 matrix.
-   **PASCAL3\_DETERMINANT** returns the determinant of the PASCAL3
    matrix.
-   **PASCAL3\_INVERSE** returns the inverse of the PASCAL3 matrix.
-   **PDS\_RANDOM** returns the PDS\_RANDOM matrix.
-   **PDS\_RANDOM\_DETERMINANT** returns the determinant of the
    PDS\_RANDOM matrix.
-   **PDS\_RANDOM\_EIGENVALUES** returns the eigenvalues of the
    PDS\_RANDOM matrix.
-   **PDS\_RANDOM\_INVERSE** returns the inverse of the PDS\_RANDOM
    matrix.
-   **PDS\_RANDOM\_RIGHT** returns the right eigenvectors of the
    PDS\_RANDOM matrix.
-   **PEI** returns the PEI matrix.
-   **PEI\_DETERMINANT** returns the determinant of the PEI matrix.
-   **PEI\_EIGENVALUES** returns the eigenvalues of the PEI matrix.
-   **PEI\_INVERSE** returns the inverse of the PEI matrix.
-   **PEI\_RIGHT** returns the right eigenvectors of the PEI matrix.
-   **PERM\_CHECK** checks that a vector represents a permutation.
-   **PERM\_INVERSE** inverts a permutation "in place".
-   **PERM\_MAT\_TO\_VEC** returns a permutation from a permutation
    matrix.
-   **PERM\_SIGN** returns the sign of a permutation.
-   **PERM\_VEC\_TO\_MAT** returns a permutation matrix.
-   **PERMUTATION\_DETERMINANT** returns the determinant of a
    PERMUTATION matrix.
-   **PERMUTATION\_INVERSE** returns the inverse of a PERMUTATION
    matrix.
-   **PERMUTATION\_RANDOM** returns the PERMUTATION\_RANDOM matrix.
-   **PERMUTATION\_RANDOM\_DETERMINANT:** determinant of
    PERMUTATION\_RANDOM matrix.
-   **PERMUTATION\_RANDOM\_INVERSE:** inverse of PERMUTATION\_RANDOM
    matrix.
-   **PICK** returns the PICK matrix.
-   **PLU** returns a PLU matrix.
-   **PLU\_DETERMINANT** returns the determinant of the PLU matrix.
-   **PLU\_INVERSE** returns the inverse of a PLU matrix.
-   **POISSON** returns the POISSON matrix.
-   **POISSON\_DETERMINANT** returns the determinant of the POISSON
    matrix.
-   **POISSON\_EIGENVALUES** returns the eigenvalues of the POISSON
    matrix.
-   **POISSON\_RHS** returns the right hand side of a Poisson linear
    system.
-   **POISSON\_SOLUTION** returns the solution of a Poisson linear
    system.
-   **PRIME** returns any of the first PRIME\_MAX prime numbers.
-   **PROLATE** returns the PROLATE matrix.
-   **QUATERNION\_I** returns a 4 by 4 matrix that behaves like the
    quaternion unit I.
-   **QUATERNION\_J** returns a 4 by 4 matrix that behaves like the
    quaternion unit J.
-   **QUATERNION\_K** returns a 4 by 4 matrix that behaves like the
    quaternion unit K.
-   **R4\_ABS** returns the absolute value of an R4.
-   **R4\_NINT** returns the nearest integer to an R4.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_CHOOSE** computes the binomial coefficient C(N,K) as an R8.
-   **R8\_EPSILON** returns the R8 roundoff unit.
-   **R8\_FACTORIAL** computes the factorial of N.
-   **R8\_HUGE** returns a "huge" R8.
-   **R8\_MAX** returns the maximum of two R8's.
-   **R8\_MOP** returns the I-th power of -1 as an R8 value.
-   **R8\_NINT** returns the nearest integer to an R8.
-   **R8\_NORMAL\_01** samples the standard normal probability
    distribution.
-   **R8\_SIGN** returns the sign of an R8.
-   **R8\_UNIFORM** returns a scaled pseudorandom R8.
-   **R8\_UNIFORM\_01** returns a unit pseudorandom R8.
-   **R8COL\_SWAP** swaps columns J1 and J2 of an R8COL.
-   **R8COL\_TO\_R8VEC** converts an R8COL to an R8VEC.
-   **R8MAT\_COPY** copies one R8MAT to another.
-   **R8MAT\_COPY\_NEW** copies one R8MAT to another.
-   **R8MAT\_DETETMINANT** computes the determinant of an R8MAT.
-   **R8MAT\_DIAG\_GET\_VECTOR** gets the value of the diagonal of an
    R8MAT.
-   **R8MAT\_GEDET** computes the determinant of an R8MAT factored by
    R8MAT\_GEFA.
-   **R8MAT\_GEFA** factors an R8MAT.
-   **R8MAT\_GEINVERSE** computes the inverse of an R8MAT factored by
    R8MAT\_GEFA.
-   **R8MAT\_HOUSE\_AXH** computes A\*H where H is a compact Householder
    matrix.
-   **R8MAT\_HOUSE\_AXH\_NEW** computes A\*H where H is a compact
    Householder matrix.
-   **R8MAT\_HOUSE\_FORM** constructs a Householder matrix from its
    compact form.
-   **R8MAT\_IDENTITY** sets the square matrix A to the identity.
-   **R8MAT\_INVERSE** computes the inverse of an R8MAT.
-   **R8MAT\_IS\_ADJACENCY** checks whether an R8MAT is an adjacency
    matrix.
-   **R8MAT\_IS\_EIGEN\_RIGHT** determines the error in a (right)
    eigensystem.
-   **R8MAT\_IS\_IDENTITY** determines if an R8MAT is the identity.
-   **R8MAT\_IS\_INVERSE** determines if one R8MAT is the inverse of
    another.
-   **R8MAT\_IS\_INVERSE\_LEFT** determines if one R8MAT is the left
    inverse of another.
-   **R8MAT\_IS\_INVERSE\_RIGHT** determines if one R8MAT is the right
    inverse of another.
-   **R8MAT\_IS\_NULL\_VECTOR** determines if vector x is a null vector
    of an R8MAT.
-   **R8MAT\_IS\_PERM** checks whether an R8MAT is a permutation matrix.
-   **R8MAT\_IS\_PLU** measures the error in a PLU factorization.
-   **R8MAT\_IS\_SOLUTION** measures the error in a linear system
    solution.
-   **R8MAT\_IS\_SYMMETRIC** checks an R8MAT for symmetry.
-   **R8MAT\_IS\_ZERO\_ONE** checks whether an R8MAT is a zero/one
    matrix.
-   **R8MAT\_MM\_NEW** multiplies two matrices.
-   **R8MAT\_NORM\_EIS** returns the EISPACK norm of an R8MAT.
-   **R8MAT\_NORM\_FRO** returns the Frobenius norm of an R8MAT.
-   **R8MAT\_NORM\_L1** returns the matrix L1 norm of an R8MAT.
-   **R8MAT\_NORM\_L2** returns the matrix L2 norm of an R8MAT.
-   **R8MAT\_NORM\_LI** returns the matrix L-oo norm of an R8MAT.
-   **R8MAT\_PLOT** "plots" an R8MAT.
-   **R8MAT\_PLOT\_SYMBOL** returns a symbol for a double precision
    number.
-   **R8MAT\_POLY\_CHAR** computes the characteristic polynomial of an
    R8MAT.
-   **R8MAT\_PRINT** prints an R8MAT.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **R8MAT\_SYMM\_JACOBI** applies Jacobi eigenvalue iteration to a
    symmetric matrix.
-   **R8MAT\_TRACE** computes the trace of an R8MAT.
-   **R8MAT\_TRANSPOSE\_NEW** returns the transpose of an R8MAT.
-   **R8MAT\_TRANSPOSE\_IN\_PLACE** transposes a square matrix in place.
-   **R8MAT\_UNIFORM\_NEW** returns a scaled pseudorandom R8MAT.
-   **R8MAT\_UNIFORM\_01\_NEW** returns a unit pseudorandom R8MAT.
-   **R8MAT\_ZERO\_NEW** returns a new zeroed R8MAT.
-   **R8POLY\_DEGREE** returns the degree of an R8POLY.
-   **R8POLY\_PRINT** prints out a polynomial.
-   **R8ROW\_SWAP** swaps two rows of an R8ROW.
-   **R8ROW\_TO\_R8VEC** converts an R8ROW into an R8VEC.
-   **R8VEC\_COPY** copies an R8VEC.
-   **R8VEC\_COPY\_NE** Wcopies an R8VEC.
-   **R8VEC\_DOT\_PRODUCT** computes the dot product of a pair of
    R8VEC's.
-   **R8VEC\_HOUSE\_COLUMN** defines a Householder premultiplier that
    "packs" a column.
-   **R8VEC\_INDICATOR\_NEW** sets an R8VEC to the indicator vector
    {1,2,3...}.
-   **R8VEC\_MAX** returns the value of the maximum element in an R8VEC.
-   **R8VEC\_NORM\_L2** returns the L2 norm of an R8VEC.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **R8VEC\_PRODUCT** returns the product of the entries of an R8VEC.
-   **R8VEC\_SORT\_BUBBLE\_A** ascending sorts an R8VEC using bubble
    sort.
-   **R8VEC\_SUM** returns the sum of an R8VEC.
-   **R8VEC\_UNIFORM\_NEW** returns a scaled pseudorandom R8VEC.
-   **R8VEC\_UNIFORM\_01\_NEW** returns a unit pseudorandom R8VEC.
-   **R8VEC\_ZERO** zeroes an R8VEC.
-   **R8VEC\_ZERO\_NEW** creates and zeroes an R8VEC.
-   **R8VEC2\_PRINT** prints an R8VEC2.
-   **RAYLEIGH** returns the Rayleigh quotient of the matrix A and the
    vector X.
-   **RAYLEIGH2** returns the generalized Rayleigh quotient.
-   **RECTANGLE\_ADJ\_DETERMINANT:** the determinant of the
    RECTANGLE\_ADJ matrix.
-   **REDHEFFER** returns the REDHEFFER matrix.
-   **REDHEFFER\_DETERMINANT** returns the determinant of the REDHEFFER
    matrix.
-   **REF\_RANDOM** returns a REF\_RANDOM matrix.
-   **REF\_RANDOM\_DETERMINANT:** determinant of a REF\_RANDOM matrix.
-   **RIEMANN** returns the RIEMANN matrix.
-   **RING\_ADJ** returns the RING\_ADJ matrix.
-   **RING\_ADJ\_DETERMINANT** returns the determinant of the RING\_ADJ
    matrix.
-   **RING\_ADJ\_NULL** returns a null vector of the RING\_ADJ matrix.
-   **RIS** returns the RIS matrix.
-   **RIS\_DETERMINANT** returns the determinant of the RIS matrix.
-   **RIS\_INVERSE** returns the inverse of the RIS matrix.
-   **RODMAN** returns the RODMAN matrix.
-   **RODMAN\_DETERMINANT** returns the determinant of the RODMAN
    matrix.
-   **RODMAN\_EIGENVALUES** returns the eigenvalues of the RODMAN
    matrix.
-   **RODMAN\_INVERSE** returns the inverse of the RODMAN matrix.
-   **RODMAN\_RIGHT** returns the right eigenvectors of the RODMAN
    matrix.
-   **ROSSER1** returns the ROSSER1 matrix.
-   **ROSSER1\_DETERMINANT** returns the determinant of the ROSSER1
    matrix.
-   **ROSSER1\_EIGENVALUES** returns the eigenvalues of the ROSSER1
    matrix.
-   **ROSSER1\_NULL** returns a null vector of the ROSSER1 matrix.
-   **ROSSER1\_RIGHT** returns the right eigenvectors of the ROSSER1
    matrix.
-   **ROUTH** returns the ROUTH matrix.
-   **ROUTH\_DETERMINANT** returns the determinant of the ROUTH matrix.
-   **ROWCOLSUM\_MATRIX** returns the ROWCOLSUM matrix.
-   **RUTIS1** returns the RUTIS1 matrix.
-   **RUTIS1\_DETERMINANT** returns the determinant of the RUTIS1
    matrix.
-   **RUTIS1\_EIGENVALUES** returns the eigenvalues of the RUTIS1
    matrix.
-   **RUTIS1\_INVERSE** returns the inverse of the RUTIS1 matrix.
-   **RUTIS1\_RIGHT** returns the right eigenvectors of the RUTIS1
    matrix.
-   **RUTIS2** returns the RUTIS2 matrix.
-   **RUTIS2\_DETERMINANT** returns the determinant of the RUTIS2
    matrix.
-   **RUTIS2\_EIGENVALUES** returns the eigenvalues of the RUTIS2
    matrix.
-   **RUTIS2\_INVERSE** returns the inverse of the RUTIS2 matrix.
-   **RUTIS2\_RIGHT** returns the right eigenvectors of the RUTIS2
    matrix.
-   **RUTIS3** returns the RUTIS3 matrix.
-   **RUTIS3\_DETERMINANT** returns the determinant of the RUTIS3
    matrix.
-   **RUTIS3\_EIGENVALUES** returns the eigenvalues of the RUTIS3
    matrix.
-   **RUTIS3\_INVERSE** returns the inverse of the RUTIS3 matrix.
-   **RUTIS3\_LEFT** returns the left eigenvectors of the RUTIS3 matrix.
-   **RUTIS3\_RIGHT** returns the right eigenvectors of the RUTIS3
    matrix.
-   **RUTIS4** returns the RUTIS4 matrix.
-   **RUTIS4\_DETERMINANT** returns the determinant of the RUTIS4
    matrix.
-   **RUTIS4\_EIGENVALUES** returns the eigenvalues of the RUTIS4
    matrix.
-   **RUTIS4\_INVERSE** returns the inverse of the RUTIS4 matrix.
-   **RUTIS5** returns the RUTIS5 matrix.
-   **RUTIS5\_CONDITION** returns the L1 condition of the RUTIS5 matrix.
-   **RUTIS5\_DETERMINANT** returns the determinant of the RUTIS5
    matrix.
-   **RUTIS5\_EIGENVALUES** returns the eigenvalues of the RUTIS5
    matrix.
-   **RUTIS5\_INVERSE** returns the inverse of the RUTIS5 matrix.
-   **RUTIS5\_RIGHT** returns the right eigenvectors of the RUTIS5
    matrix.
-   **SCHUR\_BLOCK** returns the SCHUR\_BLOCK matrix.
-   **SCHUR\_BLOCK\_DETERMINANT** returns the determinant of the
    SCHUR\_BLOCK matrix.
-   **SCHUR\_BLOCK\_EIGENVALUES** returns the eigenvalues of the
    SCHUR\_BLOCK matrix.
-   **SCHUR\_BLOCK\_INVERSE** returns the inverse of the SCHUR\_BLOCK
    matrix.
-   **SKEW\_CIRCULANT** returns a SKEW\_CIRCULANT matrix.
-   **SKEW\_CIRCULANT\_DETERMINANT** returns the determinant of the
    SKEW\_CIRCULANT matrix.
-   **SKEW\_CIRCULANT\_EIGENVALUES** returns eigenvalues of the
    SKEW\_CIRCULANT matrix.
-   **SMOKE1** returns the SMOKE1 matrix.
-   **SMOKE1\_DETERMINANT** returns the determinant of the SMOKE1
    matrix.
-   **SMOKE1\_EIGENVALUES** returns the eigenvalues of the SMOKE1
    matrix.
-   **SMOKE2** returns the SMOKE2 matrix.
-   **SMOKE2\_DETERMINANT** returns the determinant of the SMOKE2
    matrix.
-   **SMOKE2\_EIGENVALUES** returns the eigenvalues of the SMOKE2
    matrix.
-   **SORT\_HEAP\_EXTERNAL** externally sorts a list of items into
    ascending order.
-   **SPLINE** returns the SPLINE matrix.
-   **SPLINE\_DETERMINANT** computes the determinant of the SPLINE
    matrix.
-   **SPLINE\_INVERSE** returns the inverse of the SPLINE matrix.
-   **STIRLING** returns the STIRLING matrix.
-   **STIRLING\_DETERMINANT** returns the determinant of the STIRLING
    matrix.
-   **STIRLING\_INVERSE** returns the inverse of the STIRLING matrix.
-   **STRIPE** returns the STRIPE matrix.
-   **SUBSET\_BY\_SIZE\_NEXT** returns all subsets of an N set, in order
    of size.
-   **SUBSET\_RANDOM** selects a random subset of an N-set.
-   **SUMMATION** returns the SUMMATION matrix.
-   **SUMMATION\_CONDITION** returns the L1 condition of the SUMMATION
    matrix.
-   **SUMMATION\_DETERMINANT** returns the determinant of the SUMMATION
    matrix.
-   **SUMMATION\_EIGENVALUES** returns the eigenvalues of the SUMMATION
    matrix.
-   **SUMMATION\_INVERSE** returns the inverse of the SUMMATION matrix.
-   **SWEET1** returns the SWEET1 matrix.
-   **SWEET2** returns the SWEET2 matrix.
-   **SWEET3** returns the SWEET3 matrix.
-   **SWEET4** returns the SWEET4 matrix.
-   **SYLVESTER** returns the SYLVESTER matrix.
-   **SYMM\_RANDOM** returns the SYMM\_RANDOM matrix.
-   **SYMM\_RANDOM\_DETERMINANT** returns the determinant of the
    SYMM\_RANDOM matrix.
-   **SYMM\_RANDOM\_EIGENVALUES** returns the eigenvalues of the
    SYMM\_RANDOM matrix.
-   **SYMM\_RANDOM\_INVERSE** returns the inverse of the SYMM\_RANDOM
    matrix.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TOEPLITZ** returns a TOEPLITZ matrix.
-   **TOEPLITZ\_5DIAG** returns the TOEPLITZ\_5DIAG matrix.
-   **TOEPLITZ\_5S** returns the TOEPLITZ\_5S matrix.
-   **TOEPLITZ\_5S\_EIGENVALUES** returns the eigenvalues of the
    TOEPLITZ\_5S matrix.
-   **TOEPLITZ\_PDS** returns the TOEPLITZ\_PDS matrix.
-   **TOURNAMENT\_RANDOM** returns the TOURNAMENT\_RANDOM matrix.
-   **TOURNAMENT\_RANDOM\_DETERMINANT:** determinant of the
    TOURNAMENT\_RANDOM matrix.
-   **TRANSITION\_RANDOM** returns the TRANSITION\_RANDOM matrix.
-   **TRENCH** returns the TRENCH matrix.
-   **TRI\_L1\_INVERSE** inverts a unit lower triangular R8MAT.
-   **TRI\_U\_INVERSE** inverts an upper triangular R8MAT.
-   **TRI\_UPPER** returns the TRI\_UPPER matrix.
-   **TRI\_UPPER\_CONDITION** returns the L1 condition of the TRI\_UPPER
    matrix.
-   **TRI\_UPPER\_DETERMINANT** returns the determinant of the
    TRI\_UPPER matrix.
-   **TRI\_UPPER\_EIGENVALUES** returns the eigenvalues of the
    TRI\_UPPER matrix.
-   **TRI\_UPPER\_INVERSE** returns the inverse of the TRI\_UPPER
    matrix.
-   **TRIDIAGONAL\_DETERMINANT** computes the determinant of a
    tridiagonal matrix.
-   **TRIS** returns the TRIS matrix.
-   **TRIS\_DETERMINANT** returns the determinant of the TRIS matrix.
-   **TRIS\_EIGENVALUES** returns the eigenvalues of the TRIS matrix.
-   **TRIS\_INVERSE** returns the inverse of the TRIS matrix.
-   **TRIV** returns the TRIV matrix.
-   **TRIV\_DETERMINANT** computes the determinant of the TRIV matrix.
-   **TRIV\_INVERSE** returns the inverse of the TRIV matrix.
-   **TRIW** returns the TRIW matrix.
-   **TRIW\_DETERMINANT** returns the determinant of the TRIW matrix.
-   **TRIW\_EIGENVALUES** returns the eigenvalues of the TRIW matrix.
-   **TRIW\_INVERSE** sets the inverse of the TRIW matrix.
-   **UPSHIFT** returns the UPSHIFT matrix.
-   **UPSHIFT\_DETERMINANT** returns the determinant of the UPSHIFT
    matrix.
-   **UPSHIFT\_EIGENVALUES** returns the eigenvalues of the UPSHIFT
    matrix.
-   **UPSHIFT\_INVERSE** returns the inverse of the UPSHIFT matrix.
-   **VAND1** returns the VAND1 matrix.
-   **VAND1\_DETERMINANT** returns the determinant of the VAND1 matrix.
-   **VAND1\_INVERSE** returns the inverse of the VAND1 matrix.
-   **VAND2** returns the VAND2 matrix.
-   **VAND2\_DETERMINANT** returns the determinant of the VAND2 matrix.
-   **VAND2\_INVERSE** returns the inverse of the VAND2 matrix.
-   **WATHEN** returns the WATHEN matrix.
-   **WATHEN\_ORDER** returns the order of the WATHEN matrix.
-   **WILK03** returns the WILK03 matrix.
-   **WILK03\_CONDITION** returns the L1 condition of the WILK03 matrix.
-   **WILK03\_DETERMINANT** returns the determinant of the WILK03
    matrix.
-   **WILK03\_EIGENVALUES** returns the eigenvalues of the WILK03
    matrix.
-   **WILK03\_INVERSE** returns the inverse of the WILK03 matrix.
-   **WILK03\_RHS** returns the right hand side of the WILK03 linear
    system.
-   **WILK03\_SOLUTION** returns the solution of the WILK03 linear
    system.
-   **WILK04** returns the WILK04 matrix.
-   **WILK04\_DETERMINANT** returns the determinant of the WILK04
    matrix.
-   **WILK04\_EIGENVALUES** returns the eigenvalues of the WILK04
    matrix.
-   **WILK04\_INVERSE** returns the inverse of the WILK04 matrix.
-   **WILK04\_RHS** returns the right hand side of the WILK04 linear
    system.
-   **WILK04\_SOLUTION** returns the solution of the WILK04 linear
    system.
-   **WILK05** returns the WILK05 matrix.
-   **WILKO5** returns the determinant of the WILK05 matrix.
-   **WILK05\_INVERSE** returns the inverse of the WILK05 matrix.
-   **WILK12** returns the WILK12 matrix.
-   **WILK12\_DETERMINANT** returns the determinant of the WILK12
    matrix.
-   **WILK12\_EIGENVALUES** returns the eigenvalues of the WILK12
    matrix.
-   **WILK12\_RIGHT** returns the right eigenvectors of the WILK12
    matrix.
-   **WILK20** returns the WILK20 matrix.
-   **WILK21** returns the WILK21 matrix.
-   **WILK21\_DETERMINANT** computes the determinant of the WILK21
    matrix.
-   **WILK21\_INVERSE** returns the inverse of the WILK21 matrix.
-   **WILSON** returns the WILSON matrix.
-   **WILSON\_CONDITION** returns the L1 condition of the WILSON matrix.
-   **WILSON\_DETERMINANT** returns the determinant of the WILSON
    matrix.
-   **WILSON\_EIGENVALUES** returns the eigenvalues of the WILSON
    matrix.
-   **WILSON\_INVERSE** returns the inverse of the WILSON matrix.
-   **WILSON\_PLU** returns the PLU factors of the WILSON matrix.
-   **WILSON\_RHS** returns the WILSON right hand side.
-   **WILSON\_RIGHT** returns the right eigenvectors of the WILSON
    matrix.
-   **WILSON\_SOLUTION** returns the WILSON solution.
-   **ZERO** returns the ZERO matrix.
-   **ZERO\_DETERMINANT** returns the determinant of the ZERO matrix.
-   **ZERO\_EIGENVALUES** returns the eigenvalues of the ZERO matrix.
-   **ZERO\_NULL** returns a null vector of the ZERO matrix.
-   **ZERO\_RIGHT** returns the right eigenvectors of the ZERO matrix.
-   **ZIELKE** returns the ZIELKE matrix.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 11 April 2012.*
