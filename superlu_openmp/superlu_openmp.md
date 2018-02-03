SUPERLU\_OPENMP\
Sparse Linear Equation Solver with OpenMP {#superlu_openmp-sparse-linear-equation-solver-with-openmp align="center"}
=========================================

------------------------------------------------------------------------

**SUPERLU\_OPENMP**, C++ programs which illustrate the use of the
SUPERLU\_OPENMP library, a version of SUPERLU compiled with the OpenMP
parallel programming interface, for the fast direct solution of large
sparse systems of linear equations.

SUPERLU\_OPENMP contains a set of subroutines to solve a sparse linear
system A\*X=B. It uses Gaussian elimination with partial pivoting
(GEPP). The columns of A may be preordered before factorization; the
preordering for sparsity is completely separate from the factorization.

SUPERLU\_OPENMP is implemented in ANSI C, and must be compiled with an
ANSI C compiler. It provides functionality for both real and complex
matrices, in both single and double precision. The initial letter of a
routine name indicates the arithmetic type and precision:

-   C, such as **cgstrf**, is for single precision complex arithmetic;
-   D, such as **dgstrf**, is for double precision real arithmetic;
-   S, such as **sgstrf**, is for single precision real arithmetic;
-   Z, such as **zgstrf**, is for double precision complex arithmetic.

SUPERLU\_OPENMP includes functions to read a sparse matrix from a file
in the Harwell-Boeing sparse matrix format.

### Licensing: {#licensing align="center"}

Copyright (c) 2003, The Regents of the University of California, through
Lawrence Berkeley National Laboratory (subject to receipt of any
required approvals from U.S. Dept. of Energy)

All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are
met:

1.  Redistributions of source code must retain the above copyright
    notice, this list of conditions and the following disclaimer.
2.  Redistributions in binary form must reproduce the above copyright
    notice, this list of conditions and the following disclaimer in the
    documentation and/or other materials provided with the distribution.
3.  Neither the name of Lawrence Berkeley National Laboratory, U.S.
    Dept. of Energy nor the names of its contributors may be used to
    endorse or promote products derived from this software without
    specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER
OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

### Languages: {#languages align="center"}

**SUPERLU\_OPENMP** is available in [a C
version](../../c_src/superlu_openmp/superlu_openmp.html) and [a C++
version](../../cpp_src/superlu_openmp/superlu_openmp.html) and [a
FORTRAN77 version](../../f77_src/superlu_openmp/superlu_openmp.html) and
[a FORTRAN90 version](../../f_src/superlu_openmp/superlu_openmp.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[HB](../../data/hb/hb.html), a data directory which contains examples of
Harwell Boeing (HB) files, a sparse matrix file format;

[HB\_IO](../../cpp_src/hb_io/hb_io.html), a C++ library which reads and
writes sparse linear systems stored in the Harwell Boeing (HB) format
for sparse matrices.

[MGMRES](../../cpp_src/mgmres/mgmres.html), a C++ library which applies
the restarted GMRES algorithm to solve a sparse linear system, by Lili
Ju.

[OPENMP](../../cpp_src/openmp/openmp.html), C++ programs which
illustrate the use of the OpenMP application program interface for
carrying out parallel computations in a shared memory environment.

[OPENMP\_RCC](../../cpp_src/openmp_rcc/openmp_rcc.html), C++ programs
which illustrate how a C program, using OpenMP, can be compiled and run
in batch mode on the FSU High Performance Computing (HPC) cluster
operated by the Research Computing Center (RCC).

[SPARSE\_CC](../../data/sparse_cc/sparse_cc.html), a data directory
which contains a description and examples of the CC format, ("compressed
column") for storing a sparse matrix, including a way to write the
matrix as a set of three files.

[SUPER\_BLAS](../../cpp_src/super_blas/super_blas.html), a C++ library
which implements some of the Basic Linear Algebra Subprograms for fast
execution.

[SUPERLU](../../cpp_src/superlu/superlu.html), C++ programs which
illustrate how to use the SUPERLU library, which applies a fast direct
solution method to solve sparse linear systems, by James Demmel, John
Gilbert, and Xiaoye Li.

### Reference: {#reference align="center"}

1.  <http://crd.lbl.gov/~xiaoye/SuperLU/> the SuperLU web site.
2.  James Demmel, John Gilbert, Xiaoye Li,\
    SuperLU Users's Guide.
3.  James Demmel, Stanley Eisenstat, John Gilbert, Xiaoye Li, Joseph
    Liu\
    A Supernodal Approach to Sparse Partial Pivoting,\
    SIAM Journal on Matrix Analysis and Applications,\
    Volume 20, Number 3, pages 720-755, 1999.

### Examples and Tests: {#examples-and-tests align="center"}

Many of the examples read the matrix from a file, which uses the
Harwell-Boeing sparse matrix format. These matrices include:

-   [cg20\_cua.txt](cg20_cua.txt), a complex matrix in UA format;
-   [cmat\_cua.txt](cmat_cua.txt), a complex matrix in UA format.
-   [g10\_rua.txt](g10_rua.txt), a real matrix in UA format;
-   [g20\_rua.txt](g20_rua.txt), a real matrix in UA format;

------------------------------------------------------------------------

**PCLINSOL** uses CGSSV to solve a linear system one time. The program
reads the matrix from the file cg20\_cua.txt. Single precision complex
arithmetic is used.

-   [pclinsol.cpp](pclinsol.cpp), the calling program;
-   [pclinsol\_1\_output.txt](pclinsol_1_output.txt), the sample output
    using 1 processor.
-   [pclinsol\_4\_output.txt](pclinsol_4_output.txt), the sample output
    using 4 processors.

------------------------------------------------------------------------

**PSLINSOL** uses SGSSV to solve a linear system one time. The program
reads the matrix from the file g20\_rua.txt. Single precision real
arithmetic is used.

-   [pslinsol.cpp](pslinsol.cpp), the calling program;
-   [pslinsol\_1\_output.txt](pslinsol_1_output.txt), the sample output
    using 1 processor.
-   [pslinsol\_4\_output.txt](pslinsol_4_output.txt), the sample output
    using 4 processors.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 12 March 2014.*
