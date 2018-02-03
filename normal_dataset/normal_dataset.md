NORMAL\_DATASET\
Generate Multivariate Normal Random Datasets {#normal_dataset-generate-multivariate-normal-random-datasets align="center"}
============================================

------------------------------------------------------------------------

**NORMAL\_DATASET** is a C++ program which creates a multivariate normal
random dataset and writes it to a file.

The multivariate normal distribution for the M dimensional vector X has
the form:

            pdf(X) = (2*pi*det(A))**(-M/2) * exp(-0.5*(X-MU)'*inverse(A)*(X-MU))
          

where MU is the mean vector, and A is a positive definite symmetric
matrix called the variance-covariance matrix.

To create X, an MxN matrix containing N samples from this distribution,
it is only necessary to

1.  create an MxN vector Y, each of whose elements is a sample of the
    1-dimensional normal distribution with mean 0 and variance 1;
2.  determine the upper triangular Cholesky factor R of the matrix A, so
    that A = R' \* R;
3.  compute X = MU + R' \* Y.

### Usage: {#usage align="center"}

> **normal\_dataset** *m* *n* *seed* *mu* *a*

where

-   *m* is the spatial dimension;
-   *n* is the number of points to generate;
-   *seed* is the initial seed value;
-   *mu* is the mean vector, of length *m*;
-   *a* is the positive definite symmetric variance-covariance matrix of
    dimension *m* by *m*.

The data is written to the file **normal\_*m*\_*n*.txt**.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**NORMAL\_DATASET** is available in [a C++
version](../../cpp_src/normal_dataset/normal_dataset.html) and [a
FORTRAN90 version](../../f_src/normal_dataset/normal_dataset.html) and
[a MATLAB version](../../m_src/normal_dataset/normal_dataset.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[CVT\_DATASET](../../cpp_src/cvt_dataset/cvt_dataset.html), a C++
program which computes a Centroidal Voronoi Tessellation and writes it
to a file.

[FAURE\_DATASET](../../cpp_src/faure_dataset/faure_dataset.html), a C++
program which creates a Faure quasirandom dataset;

[GRID\_DATASET](../../cpp_src/grid_dataset/grid_dataset.html), a C++
program which creates a grid sequence and writes it to a file.

[HALTON\_DATASET](../../cpp_src/halton_dataset/halton_dataset.html), a
C++ program which creates a Halton sequence and writes it to a file.

[HAMMERSLEY\_DATASET](../../cpp_src/hammersley_dataset/hammersley_dataset.html),
a C++ program which creates a Hammersley sequence and writes it to a
file.

[HEX\_GRID\_DATASET](../../cpp_src/hex_grid_dataset/hex_grid_dataset.html),
a C++ program which creates a hexagonal grid dataset and writes it to a
file.

[IHS\_DATASET](../../cpp_src/ihs_dataset/ihs_dataset.html), a C++
program which creates an improved distributed Latin hypercube dataset
and writes it to a file.

[LATIN\_CENTER\_DATASET](../../cpp_src/latin_center_dataset/latin_center_dataset.html),
a C++ program which creates a Latin Center Hypercube dataset;

[LATIN\_EDGE\_DATASET](../../cpp_src/latin_edge_dataset/latin_edge_dataset.html),
a C++ program which creates a Latin Edge Hypercube dataset;

[LATIN\_RANDOM\_DATASET](../../cpp_src/latin_random_dataset/latin_random_dataset.html),
a C++ program which creates a Latin Random Hypercube dataset;

[LCVT\_DATASET](../../cpp_src/lcvt_dataset/lcvt_dataset.html), a C++
program which computes a latinized Centroidal Voronoi Tessellation and
writes it to a file.

[NIEDERREITER2\_DATASET](../../cpp_src/niederreiter2_dataset/niederreiter2_dataset.html),
a C++ program which creates a Niederreiter quasirandom dataset with base
2;

[NORMAL](../../cpp_src/normal/normal.html), a C++ library which computes
normally distributed pseudorandom values.

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

1.  Paul Bratley, Bennett Fox, Linus Schrage,\
    A Guide to Simulation,\
    Springer Verlag, pages 201-202, 1983.
2.  Donald Knuth,\
    The Art of Computer Programming,\
    Volume 2: Seminumerical Algorithms,\
    Addison Wesley, 1969.

### Source Code: {#source-code align="center"}

-   [normal\_dataset.cpp](normal_dataset.cpp), the source code.

### Examples: {#examples align="center"}

[normal\_2\_1000.txt](normal_2_1000.txt), is the file created in
response to the command

              "normal_dataset 2 1000 123456789 1 2 1 0 0 3".
            
          
        

        
          List of Routines:
        

        
          
            
              MAIN is the main program for NORMAL_DATASET.
            
            
              I4_MAX returns the maximum of two I4's.
            
            
              I4_MIN returns the minimum of two I4's.
            
            
              MULTINORMAL_SAMPLE samples a multivariate normal distribution.
            
            
              R8_UNIFORM_01 returns a unit pseudorandom R8.
            
            
              R8MAT_PRINT prints an R8MAT.
            
            
              R8MAT_PRINT_SOME prints some of an R8MAT.
            
            
              R8MAT_WRITE writes an R8MAT file with no header.
            
            
              R8PO_FA factors a R8PO matrix.
            
            
              R8VEC_NORMAL_01_NEW returns a unit pseudonormal R8VEC.
            
            
              R8VEC_PRINT prints an R8VEC.
            
            
              R8VEC_UNIFORM_01_NEW returns a new unit pseudorandom R8VEC.
            
            
              TIMESTAMP prints the current YMDHMS date as a time stamp.
            
          
        

        
          You can go up one level to 
          the C++ source codes.
        

        

        
          Last revised on 09 December 2009.
        

        

      

      


