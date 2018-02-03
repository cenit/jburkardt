ANN\_TEST\
Compute Approximate Nearest Neighbors {#ann_test-compute-approximate-nearest-neighbors align="center"}
=====================================

------------------------------------------------------------------------

**ANN\_TEST** is a C++ program which computes approximate nearest
neighbors when the data and query points are available in files.

ANN\_TEST relies on the ANN library to quickly and efficiently compute
the information. The brute force method simply computes, for each query
point, the distance to every data point, and returns the data point
whose distance is least.

This approach might seem to be the fastest possible, but it is not.
Particularly when there are many data points or query points, it is
worth the overhead of computing a data structure that allows nearest
neighbor queries to be computed quickly and efficiently.

The greatest efficiency occurs if the user is willing to accept
*approximate* nearest neighbors. That is, the program will return a data
point that is either the nearest, or "almost" the nearest, to within
some tolerance. In many applications, the controllable error of this
approximation is worth the marked speedup in execution.

### Program Details: {#program-details align="center"}

ANN\_TEST is a driver for testing and evaluating the **ANN** library for
computing approximate nearest neighbors. It allows the user to generate
data and query sets of various sizes, dimensions, and distributions, to
build KD and BD trees of various types, run queries and output
performance statistics.

### Usage: {#usage align="center"}

 **ann\_test** &lt; *test\_input* &gt; *test\_output* 
:   reads *test\_input*, a list of directives described below, and
    writes the results to *test\_output*.

Directives consist of a directive name, followed by list of arguments.
Arguments and directives are separated by white space (blank, tab, and
newline). String arguments are not quoted, and consist of a string of
nonwhite chacters. A character "\#" denotes a comment. The following
characters up to the end of line are ignored. Comments may only be
inserted between directives (not within the argument list of a
directive).

**ANN\_TEST** can perform the following operations. How these operations
are performed depends on the options which are described later:

-   *Data Generation*:

     read\_data\_pts *file* 
    :   Create a set of data points whose coordinates are input from
        file *file*.

     gen\_data\_pts 
    :   Create a set of data points whose coordinates are generated from
        the current point distribution.

-   *Building the tree*

     build\_ann 
    :   Generate an approximate nearest neighbor structure for the
        current data set, using the selected splitting rules. Any
        existing tree will be destroyed.

-   *Query Generation/Searching:*

     read\_query\_pts *file* 
    :   Create a set of query points whose coordinates are input from
        file *file*.

     gen\_query\_pts 
    :   Create a set of query points whose coordinates are generated
        from the current point distribution.

     run\_queries *string* 
    :   Apply nearest neighbor searching to the query points using the
        approximate nearest neighbor structure and the search strategy
        specified by *string* = "standard" for standard KD tree search,
        or "priority" for a priority search.

-   *Miscellaneous:*

     output\_label 
    :   Output a label to the output file.

     dump *file* 
    :   Dump the current structure to the given *file*. (The dump format
        is explained further in the source file for kd\_tree.C)

     load *file* 
    :   Load a tree from the data file *file*, which was created by the
        dump operation. Any existing tree will be destroyed.

### Options {#options align="center"}

How these operations are performed depends on a set of options. If an
option is not specified, a default value is used. An option retains its
value until it is set again. String inputs are not enclosed in quotes,
and must contain no embedded white space (sorry, this is C++'s
convention).

### Options affecting search tree structure: {#options-affecting-search-tree-structure align="center"}

The test program can perform the following operations. How these
operations are performed depends on the options which are described
later:

 split\_rule *type* 
:   Type of splitting rule to use in building the search tree. The
    default is "suggest". See the file kd\_split.C for more information.
    Choices are:
    -   **kd** = optimized KD tree
    -   **midpt** = midpoint split
    -   **fair** = fair split
    -   **sl\_midpt** = sliding midpoint split
    -   **sl\_fair** = sliding fair split
    -   **suggest** = authors's choice for best

 shrink\_rule *type* 
:   Type of shrinking rule to use in building a BD tree data structure.
    If "none" is given, then no shrinking is performed and the result is
    a KD tree. The default is "none". See the file bd\_tree.C for more
    information. Choices are:
    -   **none** = perform no shrinking
    -   **simple** = simple shrinking
    -   **centroid** = centroid shrinking
    -   **suggest** = authors's choice for best

 bucket\_size *int* 
:   Bucket size, that is, the maximum number of points stored in each
    leaf node.

### Options affecting data and query point generation: {#options-affecting-data-and-query-point-generation align="center"}

 dim *int* 
:   Dimension of space.

 seed *int* 
:   Seed for random number generation.

 data\_size *int* 
:   Number of data points. When reading data points from a file, this
    indicates the maximum number of points for storage allocation.
    Default = 100.

 query\_size *int* 
:   Same as data\_size for query points.

 std\_dev *float* 
:   Standard deviation (used in Gauss, and clustered distributions).
    This is the "small" distribution for clus\_ellipsoids. Default = 1.

 std\_dev\_lo *float* 
:   Low standard deviation (used in clus ellipsoids). Default = 1.

 std\_dev\_hi *float* 
:   High standard deviation (used in clus\_ellipsoids). Default = 1.

 corr\_coef *float* 
:   Correlation coefficient (used in co-Gauss and co\_Lapace
    distributions). Default = 0.05.

 colors *int* 
:   Number of color classes (clusters) (used in the clustered
    distributions). Default = 5.

 new\_clust 
:   Once generated, cluster centers are not normally regenerated. This
    is so that both query points and data points can be generated using
    the same set of clusters. This option forces new cluster centers to
    be generated with the next generation of either data or query
    points.

 max\_clus\_dim *int* 
:   Maximum dimension of clusters (used in clus\_orth\_flats and
    clus\_ellipsoids). Default = 1.

 distribution *string* 
:   Type of input distribution. See the file rand.C for further
    information. Values for *string* are:
    -   **uniform** = uniform over cube \[-1,1\]\^d.
    -   **gauss** = Gaussian with mean 0
    -   **laplace** = Laplacian, mean 0 and var 1
    -   **co\_gauss** = correlated Gaussian
    -   **co\_laplace** = correlated Laplacian
    -   **clus\_gauss** = clustered Gaussian
    -   **clus\_orth\_flats** = clusters of orth flats
    -   **clus\_ellipsoids** = clusters of ellipsoids

### Options affecting nearest neighbor search: {#options-affecting-nearest-neighbor-search align="center"}

 epsilon *float* 
:   Error bound for approx. near neigh. search.

 near\_neigh *int* 
:   Number of nearest neighbors to compute.

 max\_pts\_visit *int* 
:   Maximum number of points to visit before terminating. (Used in
    applications where real-time performance is important.) (Default =
    0, which means no limit.)

### Options affection general program behavior: {#options-affection-general-program-behavior align="center"}

 stats *string* 
:   Level of statistics output. Values for *string* are:
    -   **silent** = no output,
    -   **exec\_time** += execution time only
    -   **prep\_stats** += preprocessing statistics
    -   **query\_stats** += query performance stats
    -   **query\_res** += results of queries
    -   **show\_pts** += show the data points
    -   **show\_struct** += print search structure

 validate *string* 
:   Validate experiment and compute average error. Since validation
    causes exact nearest neighbors to be computed by the brute force
    method, this can take a long time. Values for *string* are:
    -   **on** = turn validation on
    -   **off** = turn validation off

 true\_near\_neigh *int* 
:   Number of true nearest neighbors to compute. When validating, we
    compute the difference in rank between each reported nearest
    neighbor and the true nearest neighbor of the same rank. Thus it is
    necessary to compute a few more true nearest neighbors. By default
    we compute 10 more than near\_neigh. With this option the exact
    number can be set. (Used only when validating.)

### Example: {#example align="center"}

          output_label test_run_0   # Label this run "test_run_0".
          validate off              # Do not perform validation.
          dim 16                    # The points are in dimension 16.
          stats query_stats         # Output performance statistics for queries
          seed 121212               # Set the random number seed.

          data_size 1000
          distribution uniform
          gen_data_pts              # Generate 1000 uniform data points in dim 16.

          query_size 100
          std_dev 0.05
          distribution clus_gauss
          gen_query_pts             # Generate 100 query points
                                    # in 10 clusters with std_dev 0.05

          bucket_size 2
          split_rule kd
          shrink_rule none
          build_ann                 # Set up a KD tree with bucket size 2.

          epsilon 0.1               # We accept 10% error.
          near_neigh 5              # We ask for the 5 nearest neighbors;
          max_pts_visit 100         # Stop search if more than 100 points seen

          run_queries standard      # Run the queries;

          data_size 500
          read_data_pts data.in     # Read up to 500 data points from file data.in

          split_rule sl_midpt       # Use the sliding midpoint shrink.
          shrink_rule simple        # Use a simple shrink.
          build_ann                 # Set up a BD tree. midpoint split

          epsilon 0                 # We accept 0% error.
          run_queries priority      # Run the queries.
        

### Languages: {#languages align="center"}

**ANN\_TEST** is available in [a C++
version](../../cpp_src/ann_test/ann_test.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[ANN](../../cpp_src/ann/ann.html), a C++ library which creates and
manipulates the data structures necessary to carry out the approximate
nearest neighbor computations.

[ANN\_TO\_FIG](../../cpp_src/ann_to_fig/ann_to_fig.html), a C++ program
which can convert the record of a search carried out by ANN\_TEST into a
graphical image in the **FIG** format.

### Author: {#author align="center"}

David Mount, Sunil Arya.

### Reference: {#reference align="center"}

1.  David Mount,\
    The ANN Programming Manual.
2.  Sunil Arya, David Mount, Nathan Netanyahu, Ruth Silverman, Angela
    Wu,\
    An Optimal Algorithm for Approximate Nearest Neighbor Searching in
    Fixed Dimensions,\
    Journal of the ACM,\
    Volume 45, Number 6, November 1998, pages 891-923.
3.  <http://www.cs.umd.edu/~mount/ANN/>, the web site.

### Source Code: {#source-code align="center"}

-   [ann\_test.cpp](ann_test.cpp), the main library;
-   [rand.cpp](rand.cpp), the main library;
-   [rand.hpp](rand.hpp);

### Examples and Tests: {#examples-and-tests align="center"}

**TEST1:**

-   [test1\_data.pts](test1_data.pts), a set of 20 data points in 2D.
-   [test1\_query.pts](test1_query.pts), a set of 10 query points in 2D.
-   [test1\_input.txt](test1_input.txt), the input commands.
-   [test1\_output.txt](test1_output.txt), the printed output from
    **ANN\_TEST**.

**TEST2:**

-   [test2\_data.pts](test2_data.pts), a set of 5000 data points in 8D.
-   [test2\_query.pts](test2_query.pts), a set of 100 query points in
    8D.
-   [test2\_input.txt](test2_input.txt), the input commands.
-   [test2\_output.txt](test2_output.txt), the printed output from
    **ANN\_TEST**.

**TEST3:**

-   [test3\_input.txt](test3_input.txt), the input commands.
-   [test3\_output.txt](test3_output.txt), the printed output from
    **ANN\_TEST**.
-   [test3.dmp](test3.dmp), a dump file containing information about the
    search tree, which can be plotted by **ANN\_TO\_FIG**.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 15 May 2006.*
