CPP\_RANDOM\
C++ Random Number Generator Routines {#cpp_random-c-random-number-generator-routines align="center"}
====================================

------------------------------------------------------------------------

**CPP\_RANDOM** is a directory of C++ programs which illustrate the use
of the C++ random number generator routines.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**CPP\_RANDOM** is available in [a C
version](../../c_src/c_random/c_random.md) and [a C++
version](../../master/cpp_random/cpp_random.md) and [a FORTRAN90
version](../../f_src/f90_random/f90_random.md) and [a MATLAB
version](../../m_src/matlab_random/matlab_random.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[ASA183](../../master/asa183/asa183.md), a C++ library which
implements a pseudorandom number generator, by Wichman and Hill. This is
a C++ version of Applied Statistics Algorithm 183.

[NORMAL](../../master/normal/normal.md), a C++ library which computes
elements of a sequence of pseudorandom normally distributed values.

[RAND48](../../master/rand48/rand48.md), a C++ program which
demonstrates the use of the rand48 family of random number generators
available in the C/C++ standard library.

[RANDLC](../../master/randlc/randlc.md), a C++ library which
generates a sequence of pseudorandom numbers, used by the NAS Benchmark
programs.

[RNGLIB](../../master/rnglib/rnglib.md), a C++ library which
implements a random number generator (RNG) with splitting facilities,
allowing multiple independent streams to be computed, by L'Ecuyer and
Cote.

[UNIFORM](../../master/uniform/uniform.md), a C++ library which
computes elements of a uniform pseudorandom sequence.

[VAN\_DER\_CORPUT](../../master/van_der_corput/van_der_corput.md), a
C++ library which computes elements of a 1D van der Corput Quasi Monte
Carlo (QMC) sequence using a simple interface.

### Reference: {#reference align="center"}

1.  Paul Deitel, Harvey Deitel,\
    C++: How to Program,\
    Seventh Edition,\
    Prentice Hall, 2011,\
    ISBN: 978-013-216541-9,\
    LC: QA76.73.C153.D45.
2.  Steve Oaulline,\
    Practical C++ Programming,\
    Second Edition,\
    O'Reilly, 2003,\
    ISBN: 1-56592-139-9,\
    LC: QA76.73.C15.O84.
3.  Bjarne Stroustrup,\
    The C++ Programming Language,\
    Addison-Wesley, 2000,\
    ISBN: 0-201-70073-5,\
    LC: QA76.73.C153.S77.

### Examples and Tests: {#examples-and-tests align="center"}

**DRAND48\_TEST** shows how to use the standard library routines SRAND48
to set the seed and DRAND48 to return random real numbers in \[0,1\].

-   [drand48\_test.cpp](drand48_test.cpp), the source code;
-   [drand48\_test\_output.txt](drand48_test_output.txt), the output
    file.

**RAND\_TEST** shows how to use the standard library routines SRAND to
set the seed and RAND to return random integers which can be scaled to
real numbers in \[0,1\].

-   [rand\_test.cpp](rand_test.cpp), the source code;
-   [rand\_test\_output.txt](rand_test_output.txt), the output file.

**RANDOM\_TEST** shows how to use the standard library routines SRANDOM
to set the seed and RANDOM to return random integers which can be scaled
to real numbers in \[0,1\].

-   [random\_test.cpp](random_test.cpp), the source code;
-   [random\_test\_output.txt](random_test_output.txt), the output file.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 15 September 2012.*
