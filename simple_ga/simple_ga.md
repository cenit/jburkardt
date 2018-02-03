SIMPLE\_GA\
A Simple Genetic Algorithm {#simple_ga-a-simple-genetic-algorithm align="center"}
==========================

------------------------------------------------------------------------

**SIMPLE\_GA** is a C++ program which implements a simple genetic
algorithm, by Dennis Cormier and Sita Raghavan.

Here, we consider the task of constrained optimization of a scalar
function. That is, we have a function F(X), where X is an M-vector
satisfying simple constraints for each component I:

            X_MIN[I] <= X[I] <= X_MAX[I]
          

and, subject to those constraints, we seek a vector X which maximizes
the value F(X).

In the example given here, the spatial dimension M is 3, the function
F(X) is X\[1\]\^2 - X\[1\]\*X\[2\] + X\[3\], and the constraints are

            0 <= X[1] <= 5
            0 <= X[2] <= 5
           -2 <= X[3] <= 2
          

The correct solution is \[5,0,2\].

### Licensing: {#licensing align="center"}

The computer code and data files made available on this web page are
distributed under [the GNU LGPL license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**SIMPLE\_GA** is available in [a C++
version](../../cpp_src/simple_ga/simple_ga.html).

### Related Programs and Data: {#related-programs-and-data align="center"}

[IMAGE\_MATCH\_GENETIC](../../m_src/image_match_genetic/image_match_genetic.html),
a MATLAB program which tries to match a 256x256 JPEG image by blending
32 colored rectangles, using ideas from genetic algorithms, based on an
example by Nick Berry.

### Author: {#author align="center"}

Original version by Dennis Cormier, Sita Raghavan. This C++ version by
John Burkardt.

### Reference: {#reference align="center"}

1.  Zbigniew Michalewicz,\
    Genetic Algorithms + Data Structures = Evolution Programs,\
    Third Edition,\
    Springer, 1996,\
    ISBN: 3-540-60676-9,\
    LC: QA76.618.M53.

### Source Code: {#source-code align="center"}

-   [simple\_ga.cpp](simple_ga.cpp), the source code.

### Examples and Tests: {#examples-and-tests align="center"}

-   [simple\_ga\_input.txt](simple_ga_input.txt), an input file.
-   [simple\_ga\_output.txt](simple_ga_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** supervises the genetic algorithm.
-   **CROSSOVER** selects two parents for the single point crossover.
-   **ELITIST** stores the best member of the previous generation.
-   **EVALUATE** implements the user-defined valuation function
-   **I4\_UNIFORM\_AB** returns a scaled pseudorandom I4 between A
    and B.
-   **INITIALIZE** initializes the genes within the variables bounds.
-   **KEEP\_THE\_BEST** keeps track of the best member of the
    population.
-   **MUTATE** performs a random uniform mutation.
-   **R8\_UNIFORM\_AB** returns a scaled pseudorandom R8.
-   **REPORT** reports progress of the simulation.
-   **SELECTOR** is the selection function.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **XOVER** performs crossover of the two selected parents.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 28 April 2014.*
