SUPERLU\
Sparse Linear Equation Solver {#superlu-sparse-linear-equation-solver align="center"}
=============================

------------------------------------------------------------------------

**SUPERLU**, C++ programs which illustrate the use of the SUPERLU
library for the fast direct solution of large sparse systems of linear
equations.

Although SUPERLU is written in C, these examples show how a C++ program
can pass data to SUPERLU and receive results computed by it.

SUPERLU contains a set of subroutines to solve a sparse linear system
A\*X=B. It uses Gaussian elimination with partial pivoting (GEPP). The
columns of A may be preordered before factorization; the preordering for
sparsity is completely separate from the factorization.

SUPERLU is implemented in ANSI C, and must be compiled with an ANSI C
compiler. It provides functionality for both real and complex matrices,
in both single and double precision. The initial letter of a routine
name indicates the arithmetic type and precision:

-   C, such as **cgstrf**, is for single precision complex arithmetic;
-   D, such as **dgstrf**, is for double precision real arithmetic;
-   S, such as **sgstrf**, is for single precision real arithmetic;
-   Z, such as **zgstrf**, is for double precision complex arithmetic.

SUPERLU includes functions to read a sparse matrix from a file in the
Harwell-Boeing sparse matrix format.

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

**SUPERLU** is available in [a C
version](../../c_src/superlu/superlu.md) and [a C++
version](../../master/superlu/superlu.md) and [a FORTRAN77
version](../../f77_src/superlu/superlu.md) and [a FORTRAN90
version](../../f_src/superlu/superlu.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CC](../../data/cc/cc.md), a data directory which contains a
description and examples of the CC format, ("compressed column") for
storing a sparse matrix, including a way to write the matrix as a set of
three files.

[CG\_RC](../../master/cg_rc/cg_rc.md), a C++ library which implements
the conjugate gradient method for solving a positive definite sparse
linear system A\*x=b, using reverse communication.

[HB](../../data/hb/hb.md), a data directory which contains examples of
Harwell Boeing (HB) files, a sparse matrix file format;

[MGMRES](../../master/mgmres/mgmres.md), a C++ library which applies
the restarted GMRES algorithm to solve a sparse linear system, by Lili
Ju.

[ST\_TO\_CC](../../c_src/st_to_cc/st_to_cc.md), a C library which
converts sparse matrix data from Sparse Triplet (ST) format to
Compressed Column (CC) format.

[SUPERLU\_OPENMP](../../master/superlu_openmp/superlu_openmp.md), C++
programs which illustrate how to use the SUPERLU library with the OpenMP
parallel programming interface, which applies a fast direct solution
method to solve sparse linear systems, by James Demmel, John Gilbert,
and Xiaoye Li.

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

-   [sample\_cst.txt](sample_cst.txt), a complex 5x5 matrix in Sparse
    Triplet (ST) format;
-   [sample\_cua.txt](sample_cua.txt), a complex 5x5 matrix in Harwell
    Boeing (HB) CUA format;
-   [sample\_rst.txt](sample_rst.txt), a real 5x5 matrix in Sparse
    Triplet (ST) format;
-   [sample\_rua.txt](sample_rua.txt), a real 5x5 matrix in Harwell
    Boeing (HB) RUA format;

**C\_SAMPLE** uses CGSSV to solve a 5x5 system. Single precision complex
arithmetic is used.

-   [c\_sample.cpp](c_sample.cpp), the calling program;
-   [c\_sample\_output.txt](c_sample_output.txt), the sample output.

**C\_SAMPLE\_HB** reads a 5x5 matrix from a file in Harwell-Boeing (HB)
format, into compressed column (CC) format, and then uses CGSSV to solve
the linear system. Single precision complex arithmetic is used.

-   [c\_sample\_hb.cpp](c_sample_hb.cpp), the calling program;
-   [c\_sample\_hb\_output.txt](c_sample_hb_output.txt), the sample
    output.

**C\_SAMPLE\_ST** reads a 5x5 matrix from a file in Sparse Triplet (ST)
format, into compressed column (CC) format, and then uses CGSSV to solve
the linear system. Single precision complex arithmetic is used.

-   [c\_sample\_st.cpp](c_sample_st.cpp), the calling program;
-   [c\_sample\_st\_output.txt](c_sample_st_output.txt), the sample
    output.

**D\_SAMPLE** uses DGSSV to solve a 5x5 system. Double precision real
arithmetic is used.

-   [d\_sample.cpp](d_sample.cpp), the calling program;
-   [d\_sample\_output.txt](d_sample_output.txt), the sample output.

**D\_SAMPLE\_HB** reads a 5x5 matrix from a file in Harwell-Boeing (HB)
format, into compressed column (CC) format, and then uses DGSSV to solve
the linear system. Double precision real arithmetic is used.

-   [d\_sample\_hb.cpp](d_sample_hb.cpp), the calling program;
-   [d\_sample\_hb\_output.txt](d_sample_hb_output.txt), the sample
    output.

**D\_SAMPLE\_ST** reads a 5x5 matrix from a file in Sparse Triplet (ST)
format, into compressed column (CC) format, and then uses DGSSV to solve
the linear system. Double precision real arithmetic is used.

-   [d\_sample\_st.cpp](d_sample_st.cpp), the calling program;
-   [d\_sample\_st\_output.txt](d_sample_st_output.txt), the sample
    output.

**S\_SAMPLE** uses SGSSV to solve a 5x5 system. Single precision real
arithmetic is used.

-   [s\_sample.cpp](s_sample.cpp), the calling program;
-   [s\_sample\_output.txt](s_sample_output.txt), the sample output.

**S\_SAMPLE\_HB** reads a 5x5 matrix from a file in Harwell-Boeing (HB)
format, into compressed column (CC) format, and then uses SGSSV to solve
the linear system. Single precision real arithmetic is used.

-   [s\_sample\_hb.cpp](s_sample_hb.cpp), the calling program;
-   [s\_sample\_hb\_output.txt](s_sample_hb_output.txt), the sample
    output.

**S\_SAMPLE\_ST** reads a 5x5 matrix from a file in Sparse Triplet (ST)
format, into compressed column (CC) format, and then uses SGSSV to solve
the linear system. Single precision real arithmetic is used.

-   [s\_sample\_st.cpp](s_sample_st.cpp), the calling program;
-   [s\_sample\_st\_output.txt](s_sample_st_output.txt), the sample
    output.

**Z\_SAMPLE** uses ZGSSV to solve a 5x5 system. Double precision complex
arithmetic is used.

-   [z\_sample.cpp](z_sample.cpp), the calling program;
-   [z\_sample\_output.txt](z_sample_output.txt), the sample output.

**Z\_SAMPLE\_HB** reads a 5x5 matrix from a file in Harwell-Boeing (HB)
format, into compressed column (CC) format, and then uses ZGSSV to solve
the linear system. Double precision complex arithmetic is used.

-   [z\_sample\_hb.cpp](z_sample_hb.cpp), the calling program;
-   [z\_sample\_hb\_output.txt](z_sample_hb_output.txt), the sample
    output.

**Z\_SAMPLE\_ST** reads a 5x5 matrix from a file in Sparse Triplet (ST)
format, into compressed column (CC) format, and then uses ZGSSV to solve
the linear system. Double precision complex arithmetic is used.

-   [z\_sample\_st.cpp](z_sample_st.cpp), the calling program;
-   [z\_sample\_st\_output.txt](z_sample_st_output.txt), the sample
    output.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 17 July 2014.*
