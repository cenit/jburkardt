ANN\
Approximate Nearest Neighbors {#ann-approximate-nearest-neighbors align="center"}
=============================

------------------------------------------------------------------------

**ANN** is a C++ library which computes approximate nearest neighbors,
by David Mount and Sunil Arya.

ANN is a library written in the C++ programming language to support both
exact and approximate nearest neighbor searching in spaces of various
dimensions. It was implemented by David M. Mount of the University of
Maryland, and Sunil Arya of the Hong Kong University of Science and
Technology. ANN stands for "Approximate Nearest Neighbors". ANN is also
a testbed containing programs and procedures for generating data sets,
collecting and analyzing statistics on the performance of nearest
neighbor algorithms and data structures, and visualizing the geometric
structure of these data structures.

In the nearest neighbor problem a set P of data points in d-dimensional
space is given. These points are preprocessed into a data structure, so
that given any query point q, the nearest (or generally k nearest)
points of P to q can be reported efficiently. ANN is designed for data
sets that are small enough that the search structure can be stored in
main memory (in contrast to approaches from databases that assume that
the data resides in secondary storage). The distance between two points
can be defined in many ways. ANN assumes that distances are measured
using any class of distance functions called Minkowski metrics. These
include the well-known Euclidean distance, Manhattan distance, and max
distance.

### Languages: {#languages align="center"}

**ANN** is available in [a C++ version](../../master/ann/ann.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[ANN\_TEST](../../master/ann_test/ann_test.md), a C++ program which
can be used with the ANN library to perform approximate nearest neighbor
calculations.

[ANN\_TO\_FIG](../../master/ann_to_fig/ann_to_fig.md), a C++ program
which can convert the record of a search carried out by ANN\_TEST into a
graphical image in the FIG format.

### Author: {#author align="center"}

1.  David Mount,\
    Department of Computer Science,\
    University of Maryland,\
    College Park, MD 20742 USA,\
    mount@cs.umd.edu
2.  Sunil Arya,\
    Department of Computer Science,\
    The Hong Kong University of Science and Technology,\
    Clear Water Bay, Kowloon, Hong Kong,\
    arya@cs.ust.hk

### Reference: {#reference align="center"}

1.  Sunil Arya, David Mount, Nathan Netanyahu, Ruth Silverman, Angela
    Wu,\
    An Optimal Algorithm for Approximate Nearest Neighbor Searching in
    Fixed Dimensions,\
    Journal of the ACM,\
    Volume 45, Number 6, November 1998, pages 891-923.
2.  David Mount,\
    The ANN Programming Manual.
3.  <http://www.cs.umd.edu/~mount/ANN/>, the web site.

### Source Code: {#source-code align="center"}

-   [ann.cpp](ann.cpp), the main library;
-   [ann.hpp](ann.hpp);
-   [ann\_perf.hpp](ann_perf.hpp);
-   [ann\_x.hpp](ann_x.hpp);
-   [bd\_pr\_search.cpp](bd_pr_search.cpp) carries out approximate
    priority searching using BD trees;
-   [bd\_search.cpp](bd_search.cpp) carries out approximate searching
    using BD trees;
-   [bd\_tree.cpp](bd_tree.cpp) prints a BD tree;
-   [bd\_tree.hpp](bd_tree.hpp);
-   [brute.cpp](brute.cpp), carries out a brute force search;
-   [kd\_pr\_search.cpp](kd_pr_search.cpp) carries out approximate
    priority searching using KD trees;
-   [kd\_pr\_search.hpp](kd_pr_search.hpp);
-   [kd\_search.cpp](kd_search.cpp) carries out approximate searching
    using KD trees;
-   [kd\_search.hpp](kd_search.hpp);
-   [kd\_split.cpp](kd_split.cpp), a splitting routine for KD trees;
-   [kd\_split.hpp](kd_split.hpp);
-   [kd\_tree.cpp](kd_tree.cpp) prints a KD tree;
-   [kd\_tree.hpp](kd_tree.hpp);
-   [kd\_util.cpp](kd_util.cpp) utility routines for splitting KD trees;
-   [kd\_util.hpp](kd_util.hpp);
-   [perf.cpp](perf.cpp) computes performance statistics;
-   [pr\_queue.hpp](pr_queue.hpp);
-   [pr\_queue\_k.hpp](pr_queue_k.hpp);

### Examples and Tests: {#examples-and-tests align="center"}

-   [ann\_sample\_output.txt](ann_sample_output.txt), the output file.
-   [sample.save](sample.save), a record of the run of the sample
    application program.
-   [ann\_sample.cpp](ann_sample.cpp), the sample application program;
-   [data.pts](data.pts), a data file which can be used by the sample
    application.
-   [query.pts](query.pts), a query file which can be used by the sample
    application.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 19 March 2008.*
