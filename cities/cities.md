CITIES\
City Distance Tools {#cities-city-distance-tools align="center"}
===================

------------------------------------------------------------------------

**CITIES** is a C++ library which works with problems involving
intercity distances.

Such problems include:

-   traveling salesman problems (connected path through every city);
-   K-means calculations (find M spots that minimize total of the
    distance from each city to its nearest spot);
-   K-medians calculations (make M of the cities "special", to minimize
    the total distance from each city to its nearest special city);
-   Weighted K-means or K-medians (let the population of each city be
    used as a weight, which makes some cities more important);
-   Minimal spanning trees (construct the shortest highway system that
    connects all the cities, using only straight paths from one city to
    another (ignore the possibility that two roads could cross, or that
    a Y-shaped connector between three cities might be cheaper);
-   Voronoi diagrams (assign each spot of land to the nearest city,
    making "provinces");

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**CITIES** is available in [a C++
version](../../master/cities/cities.md) and [a FORTRAN90
version](../../f_src/cities/cities.md) and [a MATLAB
version.](../../m_src/cities/cities.md)

### Related Data and Programs: {#related-data-and-programs align="center"}

[ASA058](../../master/asa058/asa058.md), a C++ library which contains
the original text of the Sparks clustering algorithm.

[ASA136](../../master/asa136/asa136.md), a C++ library which
implements the K-Means algorithm.

[CITIES](../../datasets/cities/cities.md), a dataset directory which
contains a number of city distance datasets.

[DISTANCE\_TO\_POSITION](../../f_src/distance_to_position/distance_to_position.md),
a FORTRAN90 program which estimates the positions of cities based on a
city-to-city distance table.

[DISTANCE\_TO\_POSITION\_SPHERE](../../m_src/distance_to_position_sphere/distance_to_position_sphere.md),
a MATLAB program which estimates the positions of cities on a sphere
(such as the earth) based on a city-to-city distance table.

[FLOYD](../../master/floyd/floyd.md), a C++ library which implements
Floyd's algorithm for finding the shortest distance between pairs of
nodes on a directed graph.

[KMEANS](../../master/kmeans/kmeans.md), a C++ library which treats
the K-means problem of grouping a discrete set of N points into K
clusters.

[LAU\_NP](../../f_src/lau_np/lau_np.md), a FORTRAN90 library which
includes heuristic approaches to certain NP-complete problems, including
the traveling salesman problem, the K-center problem and the K-median
problem.

[POINT\_MERGE](../../master/point_merge/point_merge.md), a C++
library which considers N points in M dimensional space, and counts or
indexes the unique or "tolerably unique" items.

[SPAETH](../../f_src/spaeth/spaeth.md), a FORTRAN90 library which can
cluster data according to various principles.

[SPAETH](../../datasets/spaeth/spaeth.md), a dataset collection which
contains a set of test data.

[SPAETH2](../../f_src/spaeth2/spaeth2.md), a FORTRAN90 library which
can cluster data according to various principles.

[SPAETH2](../../datasets/spaeth2/spaeth2.md), a dataset collection
which contains a set of test data.

[TOMS456](../../f77_src/toms456/toms456.md), a FORTRAN77 library which
solves the routing problem, connecting some nodes in a network.

[TSP](../../datasets/tsp/tsp.md), a dataset directory which contains
test data for the traveling salesperson problem;

### Reference: {#reference align="center"}

1.  Franz Aurenhammer,\
    Voronoi diagrams - a study of a fundamental geometric data
    structure,\
    ACM Computing Surveys,\
    Volume 23, Number 3, pages 345-405, September 1991.
2.  John Burkardt, Max Gunzburger, Janet Peterson, Rebecca Brannon,\
    User Manual and Supporting Information for Library of Codes for
    Centroidal Voronoi Placement and Associated Zeroth, First, and
    Second Moment Determination,\
    Sandia National Laboratories Technical Report SAND2002-0099,\
    February 2002.
3.  Marc de Berg, Marc Krevald, Mark Overmars, Otfried Schwarzkopf,\
    Computational Geometry,\
    Springer, 2000.
4.  Qiang Du, Vance Faber, Max Gunzburger,\
    Centroidal Voronoi Tessellations: Applications and Algorithms,\
    SIAM Review, Volume 41, 1999, pages 637-676.
5.  Alan Gibbons,\
    Algorithmic Graph Theory,\
    Cambridge University Press, 1985.
6.  John Hartigan, M A Wong,\
    Algorithm AS 136: A K-Means Clustering Algorithm,\
    Applied Statistics,\
    Volume 28, Number 1, 1979, pages 100-108.
7.  Barry Joe,\
    GEOMPACK - a software package for the generation of meshes using
    geometric algorithms,\
    Advances in Engineering Software,\
    Volume 13, pages 325-331, 1991.
8.  Hang Tong Lau,\
    Algorithms on Graphs,\
    Tab Books, 1989.
9.  Atsuyuki Okabe, Barry Boots, Kokichi Sugihara, Sung Nok Chiu,\
    Spatial Tesselations: Concepts and Applications of Voronoi
    Diagrams,\
    Second Edition,\
    Wiley, 2000.
10. Joseph O'Rourke,\
    Computational Geometry,\
    Cambridge University Press,\
    Second Edition, 1998.
11. Helmut Spaeth,\
    Cluster Analysis Algorithms for Data Reduction and Classification of
    Objects,\
    Ellis Horwood, 1980.
12. David Sparks,\
    Algorithm AS 58: Euclidean Cluster Analysis,\
    Applied Statistics,\
    Volume 22, Number 1, 1973,\
    pages 126-130.

### Source Code: {#source-code align="center"}

-   [cities.cpp](cities.cpp), the source code.
-   [cities.hpp](cities.hpp), the include file.

### Examples and Tests: {#examples-and-tests align="center"}

-   [cities\_prb.cpp](cities_prb.cpp), a sample problem.
-   [spaeth2\_09\_dist.txt](spaeth2_09_dist.txt), a distance table.
-   [usca312\_main.txt](usca312_main.txt), is the main file for 312 city
    locations in the US and Canada.
-   [usca312\_dms.txt](usca312_dms.txt), the latitude and longitude of
    each city.
-   [uscap\_ll.txt](uscap_ll.txt), the latitude and longitude of each
    capital.
-   [uscap\_xy.txt](uscap_xy.txt), the (X,Y) coordinates of each capital
    using a cylindrical projection.
-   [wg22\_dist.txt](wg22_dist.txt), a distance table.
-   [wg22\_xy.txt](wg22_xy.txt), the (X,Y) coordinates of each city.
-   [cities\_prb\_output.txt](cities_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **DIST\_TABLE\_CHECK** checks a distance table.
-   **DMS\_PRINT** prints the latitude and longitude in
    degrees/minutes/seconds.
-   **DMS\_READ** reads DMS data from a file.
-   **DMS\_TO\_DIST** creates a distance table from latitudes and
    longitudes.
-   **DMS\_TO\_DISTANCE\_EARTH** finds the distance between two points
    on the earth.
-   **DMS\_TO\_RADIANS** converts degrees, minutes, seconds to radians.
-   **DMS\_TO\_XY:** Latitude/Longitude in DMS to XY coordinates.
-   **DMS\_WRITE** writes a DMS latitude, longitude file.
-   **FILE\_COLUMN\_COUNT** counts the columns in the first line of a
    file.
-   **FILE\_EXIST** reports whether a file exists.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **I4\_HUGE** returns a "huge" I4.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4\_SIGN** returns the sign of an I4.
-   **LAT\_CHAR** returns a character for negative or positive latitude.
-   **LL\_RAD\_DIST\_SPHERE:** spherical distance, latitude and
    longitude in radians.
-   **LONG\_CHAR** returns a character for negative or positive
    longitude.
-   **MAIN\_READ\_CODE** reads the name of the code file from the main
    file.
-   **MAIN\_READ\_DIST** reads the name of the distance file from the
    main file.
-   **MAIN\_READ\_DMS** reads the name of the DMS file from the main
    file.
-   **MAIN\_READ\_GEOM** reads the name of the geometry from the main
    file.
-   **MAIN\_READ\_NAME** reads the name of the name file from the main
    file.
-   **MAIN\_READ\_SIZE** reads the problem size N from the main file.
-   **MAIN\_READ\_XY** reads the name of the XY file from the main file.
-   **POINT\_TO\_DIST\_TABLE** creates a distance table from Cartesian
    coordinates.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8MAT\_DATA\_READ** reads the data from an R8MAT file.
-   **R8MAT\_HEADER\_READ** reads the header from an R8MAT file.
-   **R8MAT\_NINT** rounds the entries of an R8MAT.
-   **R8MAT\_PRINT** prints an R8MAT.
-   **R8MAT\_PRINT\_SOME** prints some of an R8MAT.
-   **R8MAT\_TRANSPOSE\_PRINT** prints an R8MAT, transposed.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **R8MAT\_WRITE** writes an R8MAT file.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **S\_EQI** reports whether two strings are equal, ignoring case.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_I4** reads an I4 from a string.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **WORD\_NEXT\_READ** "reads" words from a string, one at a time.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 30 October 2010.*
