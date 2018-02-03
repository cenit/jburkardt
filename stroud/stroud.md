STROUD\
Numerical Integration\
in M Dimensions {#stroud-numerical-integration-in-m-dimensions align="center"}
======================

------------------------------------------------------------------------

**STROUD** is a C++ library which defines quadrature rules for a variety
of M-dimensional regions, including the interior of the square, cube and
hypercube, the pyramid, cone and ellipse, the hexagon, the M-dimensional
octahedron, the circle, sphere and hypersphere, the triangle,
tetrahedron and simplex, and the surface of the circle, sphere and
hypersphere.

A few other rules have been collected as well, particularly for
quadrature over the interior of a triangle, which is useful in finite
element calculations.

Arthur Stroud published his vast collection of quadrature formulas for
multidimensional regions in 1971. In a few cases, he printed sample
FORTRAN77 programs to compute these integrals. Integration regions
included:

-   **C2**, the interior of the square;
-   **C3**, the interior of the cube;
-   **CN**, the interior of the N-dimensional hypercube;
-   **CN:C2**, a 3-dimensional pyramid;
-   **CN:S2**, a 3-dimensional cone;
-   **CN\_SHELL**, the region contained between two concentric
    N-dimensional hypercubes;
-   **ELP**, the interior of the 2-dimensional ellipse with weight
    function 1/sqrt((x-c)\^2+y\^2)/(sqrt((x+c)\^2+y\^2);
-   **EN\_R**, all of N-dimensional space, with the weight function:\
    w(x) = exp ( - sqrt ( sum ( 1 &lt;= i &lt; n ) x(i)\^2 ) );
-   **EN\_R2**, all of N-dimensional space, with the Hermite weight
    function: w(x) = product ( 1 &lt;= i &lt;= n ) exp ( - x(i)\^2 );
-   **GN**, the interior of the N-dimensional octahedron;
-   **H2**, the interior of the 2-dimensional hexagon;
-   **PAR**, the first parabolic region;
-   **PAR2**, the second parabolic region;
-   **PAR3**, the third parabolic region;
-   **S2**, the interior of the circle;
-   **S3**, the interior of the sphere;
-   **SN**, the interior of the N-dimensional hypersphere;
-   **SN\_SHELL**, the region contained between two concentric
    N-dimensional hyperspheres;
-   **T2**, the interior of the triangle;
-   **T3**, the interior of the tetrahedron;
-   **TN**, the interior of the N-dimensional simplex;
-   **TOR3:S2**, the interior of a 3-dimensional torus with circular
    cross-section;
-   **TOR3:C2**, the interior of a 3-dimensional torus with square
    cross-section;
-   **U2**, the "surface" of the circle;
-   **U3**, the surface of the sphere;
-   **UN**, the surface of the N-dimensional sphere;

We have added a few new terms for regions:

-   **CN\_GEG**, the N dimensional hypercube \[-1,+1\]\^N, with the
    Gegenbauer weight function:\
    w(alpha;x) = product ( 1 &lt;= i &lt;= n ) ( 1 - x(i)\^2 )\^alpha;
-   **CN\_JAC**, the N dimensional hypercube \[-1,+1\]\^N, with the Beta
    or Jacobi weight function:\
    w(alpha,beta;x) = product ( 1 &lt;= i &lt;= n ) ( 1 - x(i)
    )\^alpha \* ( 1 + x(i) )\^beta;
-   **CN\_LEG**, the N dimensional hypercube \[-1,+1\]\^N, with the
    Legendre weight function:\
    w(x) = 1;
-   **EPN\_GLG**, the positive space \[0,+oo)\^N, with the generalized
    Laguerre weight function:\
    w(alpha;x) = product ( 1 &lt;= i &lt;= n ) x(i)\^alpha exp ( - x(i)
    );
-   **EPN\_LAG**, the positive space \[0,+oo)\^N, with the exponential
    or Laguerre weight function:\
    w(x) = product ( 1 &lt;= i &lt;= n ) exp ( - x(i) );

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**STROUD** is available in [a C version](../../c_src/stroud/stroud.md)
and [a C++ version](../../master/stroud/stroud.md) and [a FORTRAN77
version](../../f77_src/stroud/stroud.md) and [a FORTRAN90
version](../../f_src/stroud/stroud.md) and [a MATLAB
version](../../m_src/stroud/stroud.md).

### Related Data and Programs: {#related-data-and-programs align="center"}

[DISK\_RULE](../../master/disk_rule/disk_rule.md), a C++ library
which computes quadrature rules for the unit disk in 2D, that is, the
interior of the circle of radius 1 and center (0,0).

[FELIPPA](../../master/felippa/felippa.md), a C++ library which
defines quadrature rules for lines, triangles, quadrilaterals, pyramids,
wedges, tetrahedrons and hexahedrons.

[PYRAMID\_RULE](../../master/pyramid_rule/pyramid_rule.md), a C++
program which computes a quadrature rule for a pyramid.

[SIMPLEX\_GM\_RULE](../../master/simplex_gm_rule/simplex_gm_rule.md),
a C++ library which defines Grundmann-Moeller quadrature rules over the
interior of a triangle in 2D, a tetrahedron in 3D, or over the interior
of the simplex in M dimensions.

[SPHERE\_LEBEDEV\_RULE](../../master/sphere_lebedev_rule/sphere_lebedev_rule.md),
a C++ library which computes Lebedev quadrature rules on the surface of
the unit sphere in 3D.

[TETRAHEDRON\_ARBQ\_RULE](../../master/tetrahedron_arbq_rule/tetrahedron_arbq_rule.md),
a C++ library which returns quadrature rules, with exactness up to total
degree 15, over the interior of a tetrahedron in 3D, by Hong Xiao and
Zydrunas Gimbutas.

[TETRAHEDRON\_KEAST\_RULE](../../master/tetrahedron_keast_rule/tetrahedron_keast_rule.md),
a C++ library which defines ten quadrature rules, with exactness degrees
0 through 8, over the interior of a tetrahedron in 3D.

[TETRAHEDRON\_NCC\_RULE](../../master/tetrahedron_ncc_rule/tetrahedron_ncc_rule.md),
a C++ library which defines Newton-Cotes Closed (NCC) quadrature rules
over the interior of a tetrahedron in 3D.

[TETRAHEDRON\_NCO\_RULE](../../master/tetrahedron_nco_rule/tetrahedron_nco_rule.md),
a C++ library which defines Newton-Cotes Open (NCO) quadrature rules
over the interior of a tetrahedron in 3D.

[TRIANGLE\_DUNAVANT\_RULE](../../master/triangle_dunavant_rule/triangle_dunavant_rule.md),
a C++ library which defines Dunavant rules for quadrature over the
interior of a triangle in 2D.

[TRIANGLE\_FEKETE](../../master/triangle_fekete/triangle_fekete.md),
a C++ library which defines Fekete rules for interpolation or quadrature
over the interior of a triangle in 2D.

[TRIANGLE\_LYNESS\_RULE](../../master/triangle_lyness_rule/triangle_lyness_rule.md),
a C++ library which returns Lyness-Jespersen quadrature rules over the
interior of a triangle in 2D.

[TRIANGLE\_NCC\_RULE](../../master/triangle_ncc_rule/triangle_ncc_rule.md),
a C++ library which defines Newton-Cotes Closed (NCC) quadrature rules
over the interior of a triangle in 2D.

[TRIANGLE\_NCO\_RULE](../../master/triangle_nco_rule/triangle_nco_rule.md),
a C++ library which defines Newton-Cotes Open (NCO) quadrature rules
over the interior of a triangle in 2D.

[TRIANGLE\_WANDZURA\_RULE](../../master/triangle_wandzura_rule/triangle_wandzura_rule.md),
a C++ library which returns quadrature rules of exactness 5, 10, 15, 20,
25 and 30 over the interior of the triangle in 2D.

### Reference: {#reference align="center"}

1.  Milton Abramowitz, Irene Stegun,\
    Handbook of Mathematical Functions,\
    National Bureau of Standards, 1964,\
    ISBN: 0-486-61272-4,\
    LC: QA47.A34.
2.  Jarle Berntsen, Terje Espelid,\
    Algorithm 706: DCUTRI: an algorithm for adaptive cubature over a
    collection of triangles,\
    ACM Transactions on Mathematical Software,\
    Volume 18, Number 3, September 1992, pages 329-342.
3.  SF Bockman,\
    Generalizing the Formula for Areas of Polygons to Moments,\
    American Mathematical Society Monthly,\
    Volume 96, Number 2, February 1989, pages 131-132.
4.  Paul Bratley, Bennett Fox, Linus Schrage,\
    A Guide to Simulation,\
    Second Edition,\
    Springer, 1987,\
    ISBN: 0387964673,\
    LC: QA76.9.C65.B73.
5.  William Cody, Kenneth Hillstrom,\
    Chebyshev Approximations for the Natural Logarithm of the Gamma
    Function, Mathematics of Computation,\
    Volume 21, Number 98, April 1967, pages 198-203.
6.  Philip Davis, Philip Rabinowitz,\
    Methods of Numerical Integration,\
    Second Edition,\
    Dover, 2007,\
    ISBN: 0486453391,\
    LC: QA299.3.D28.
7.  Elise deDoncker, Ian Robinson,\
    Algorithm 612: Integration over a Triangle Using Nonlinear
    Extrapolation,\
    ACM Transactions on Mathematical Software,\
    Volume 10, Number 1, March 1984, pages 17-22.
8.  Hermann Engels,\
    Numerical Quadrature and Cubature,\
    Academic Press, 1980,\
    ISBN: 012238850X,\
    LC: QA299.3E5.
9.  Thomas Ericson, Victor Zinoviev,\
    Codes on Euclidean Spheres,\
    Elsevier, 2001,\
    ISBN: 0444503293,\
    LC: QA166.7E75
10. Carlos Felippa,\
    A compendium of FEM integration formulas for symbolic work,\
    Engineering Computation,\
    Volume 21, Number 8, 2004, pages 867-890.
11. Gerald Folland,\
    How to Integrate a Polynomial Over a Sphere,\
    American Mathematical Monthly,\
    Volume 108, Number 5, May 2001, pages 446-448.
12. Bennett Fox,\
    Algorithm 647: Implementation and Relative Efficiency of Quasirandom
    Sequence Generators,\
    ACM Transactions on Mathematical Software,\
    Volume 12, Number 4, December 1986, pages 362-376.
13. Axel Grundmann, Michael Moeller,\
    Invariant Integration Formulas for the N-Simplex by Combinatorial
    Methods,\
    SIAM Journal on Numerical Analysis,\
    Volume 15, Number 2, April 1978, pages 282-290.
14. John Harris, Horst Stocker,\
    Handbook of Mathematics and Computational Science,\
    Springer, 1998,\
    ISBN: 0-387-94746-9,\
    LC: QA40.S76.
15. Patrick Keast,\
    Moderate Degree Tetrahedral Quadrature Formulas,\
    Computer Methods in Applied Mechanics and Engineering,\
    Volume 55, Number 3, May 1986, pages 339-348.
16. Vladimir Krylov,\
    Approximate Calculation of Integrals,\
    Dover, 2006,\
    ISBN: 0486445798,\
    LC: QA311.K713.
17. Dirk Laurie,\
    Algorithm 584: CUBTRI, Automatic Cubature Over a Triangle,\
    ACM Transactions on Mathematical Software,\
    Volume 8, Number 2, 1982, pages 210-218.
18. Frank Lether,\
    A Generalized Product Rule for the Circle,\
    SIAM Journal on Numerical Analysis,\
    Volume 8, Number 2, June 1971, pages 249-253.
19. James Lyness, Dennis Jespersen,\
    Moderate Degree Symmetric Quadrature Rules for the Triangle,\
    Journal of the Institute of Mathematics and its Applications,\
    Volume 15, Number 1, February 1975, pages 19-32.
20. James Lyness, BJJ McHugh,\
    Integration Over Multidimensional Hypercubes, A Progressive
    Procedure,\
    The Computer Journal,\
    Volume 6, 1963, pages 264-270.
21. AD McLaren,\
    Optimal Numerical Integration on a Sphere,\
    Mathematics of Computation,\
    Volume 17, Number 84, October 1963, pages 361-383.
22. Albert Nijenhuis, Herbert Wilf,\
    Combinatorial Algorithms for Computers and Calculators,\
    Second Edition,\
    Academic Press, 1978,\
    ISBN: 0-12-519260-6,\
    LC: QA164.N54.
23. William Peirce,\
    Numerical Integration Over the Planar Annulus,\
    Journal of the Society for Industrial and Applied Mathematics,\
    Volume 5, Number 2, June 1957, pages 66-73.
24. Hans Rudolf Schwarz,\
    Finite Element Methods,\
    Academic Press, 1988,\
    ISBN: 0126330107,\
    LC: TA347.F5.S3313.
25. Gilbert Strang, George Fix,\
    An Analysis of the Finite Element Method,\
    Cambridge, 1973,\
    ISBN: 096140888X,\
    LC: TA335.S77.
26. Arthur Stroud,\
    Approximate Calculation of Multiple Integrals,\
    Prentice Hall, 1971,\
    ISBN: 0130438936,\
    LC: QA311.S85.
27. Arthur Stroud, Don Secrest,\
    Gaussian Quadrature Formulas,\
    Prentice Hall, 1966,\
    LC: QA299.4G3S7.
28. Stephen Wandzura, Hong Xiao,\
    Symmetric Quadrature Rules on a Triangle,\
    Computers and Mathematics with Applications,\
    Volume 45, 2003, pages 1829-1840.
29. Stephen Wolfram,\
    The Mathematica Book,\
    Fourth Edition,\
    Cambridge University Press, 1999,\
    ISBN: 0-521-64314-7,\
    LC: QA76.95.W65.
30. Dongbin Xiu,\
    Numerical integration formulas of degree two,\
    Applied Numerical Mathematics,\
    Volume 58, 2008, pages 1515-1520.
31. Olgierd Zienkiewicz,\
    The Finite Element Method,\
    Sixth Edition,\
    Butterworth-Heinemann, 2005,\
    ISBN: 0750663200,\
    LC: TA640.2.Z54
32. Daniel Zwillinger, editor,\
    CRC Standard Mathematical Tables and Formulae,\
    30th Edition,\
    CRC Press, 1996,\
    ISBN: 0-8493-2479-3,\
    LC: QA47.M315.

### Source Code: {#source-code align="center"}

-   [stroud.cpp](stroud.cpp), the source code;
-   [stroud.hpp](stroud.hpp), the include file;

### Examples and Tests: {#examples-and-tests align="center"}

-   [stroud\_prb.cpp](stroud_prb.cpp), the calling program;
-   [stroud\_prb\_output.txt](stroud_prb_output.txt), the output file.

### List of Routines: {#list-of-routines align="center"}

-   **ARC\_SINE** computes the arc sine function, with argument
    truncation.
-   **BALL\_F1\_ND** approximates an integral inside a ball in ND.
-   **BALL\_F3\_ND** approximates an integral inside a ball in ND.
-   **BALL\_MONOMIAL\_ND** integrates a monomial on a ball in ND.
-   **BALL\_UNIT\_07\_3D** approximates an integral inside the unit ball
    in 3D.
-   **BALL\_UNIT\_14\_3D** approximates an integral inside the unit ball
    in 3D.
-   **BALL\_UNIT\_15\_3D** approximates an integral inside the unit ball
    in 3D.
-   **BALL\_UNIT\_F1\_ND** approximates an integral inside the unit ball
    in ND.
-   **BALL\_UNIT\_F3\_ND** approximates an integral inside the unit ball
    in ND.
-   **BALL\_UNIT\_VOLUME\_3D** computes the volume of the unit ball in
    3D.
-   **BALL\_UNIT\_VOLUME\_ND** computes the volume of the unit ball in
    ND.
-   **BALL\_VOLUME\_3D** computes the volume of a ball in 3D.
-   **BALL\_VOLUME\_ND** computes the volume of a ball in ND.
-   **C1\_GEG\_MONOMIAL\_INTEGRAL:** integral of monomial with
    Gegenbauer weight on C1.
-   **C1\_JAC\_MONOMIAL\_INTEGRAL:** integral of a monomial with Jacobi
    weight over C1.
-   **C1\_LEG\_MONOMIAL\_INTEGRAL:** integral of monomial with Legendre
    weight on C1.
-   **CIRCLE\_ANNULUS** approximates an integral in an annulus.
-   **CIRCLE\_ANNULUS\_AREA\_2D** returns the area of a circular annulus
    in 2D.
-   **CIRCLE\_ANNULUS\_SECTOR** approximates an integral in a circular
    annulus sector.
-   **CIRCLE\_ANNULUS\_SECTOR\_AREA\_2D** returns the area of a circular
    annulus sector in 2D.
-   **CIRCLE\_AREA\_2D** returns the area of a circle in 2D.
-   **CIRCLE\_CAP\_AREA\_2D** computes the area of a circle cap in 2D.
-   **CIRCLE\_CUM** approximates an integral on the circumference of a
    circle in 2D.
-   **CIRCLE\_RT\_SET** sets an R, THETA product quadrature rule in the
    unit circle.
-   **CIRCLE\_RT\_SIZE** sizes an R, THETA product quadrature rule in
    the unit circle.
-   **CIRCLE\_RT\_SUM** applies an R, THETA product quadrature rule
    inside a circle.
-   **CIRCLE\_SECTOR** approximates an integral in a circular sector.
-   **CIRCLE\_SECTOR\_AREA\_2D** returns the area of a circular sector
    in 2D.
-   **CIRCLE\_TRIANGLE\_AREA\_2D** returns the area of a circle triangle
    in 2D.
-   **CIRCLE\_XY\_SET** sets an XY quadrature rule inside the unit
    circle in 2D.
-   **CIRCLE\_XY\_SIZE** sizes an XY quadrature rule inside the unit
    circle in 2D.
-   **CIRCLE\_XY\_SUM** applies an XY quadrature rule inside a circle in
    2D.
-   **CN\_GEG\_00\_1** implements the midpoint rule for region CN\_GEG.
-   **CN\_GEG\_00\_1\_SIZE** sizes the midpoint rule for region CN\_GEG.
-   **CN\_GEG\_01\_1** implements a precision 1 rule for region CN\_GEG.
-   **CN\_GEG\_01\_1\_SIZE** sizes a precision 1 rule for region
    CN\_GEG.
-   **CN\_GEG\_02\_XIU** implements the Xiu rule for region CN\_GEG.
-   **CN\_GEG\_02\_XIU\_SIZE** sizes the Xiu rule for region CN\_GEG.
-   **CN\_GEG\_03\_XIU** implements the Xiu precision 3 rule for region
    CN\_GEG.
-   **CN\_GEG\_03\_XIU\_SIZE** sizes the Xiu precision 3 rule for region
    CN\_GEG.
-   **CN\_GEG\_MONOMIAL\_INTEGRAL:** integral of monomial with
    Gegenbauer weight on CN.
-   **CN\_JAC\_00\_1** implements the midpoint rule for region CN\_JAC.
-   **CN\_JAC\_00\_1\_SIZE** sizes the midpoint rule for region CN\_JAC.
-   **CN\_JAC\_01\_1** implements a precision 1 rule for region CN\_JAC.
-   **CN\_JAC\_01\_1\_SIZE** sizes a precision 1 rule for region
    CN\_JAC.
-   **CN\_JAC\_02\_XIU** implements the Xiu rule for region CN\_JAC.
-   **CN\_JAC\_02\_XIU\_SIZE** sizes the Xiu rule for region CN\_JAC.
-   **CN\_JAC\_MONOMIAL\_INTEGRAL:** integral of a monomial with Jacobi
    weight over CN.
-   **CN\_LEG\_01\_1** implements the midpoint rule for region CN\_LEG.
-   **CN\_LEG\_01\_1\_SIZE** sizes the midpoint rule for region CN\_LEG.
-   **CN\_LEG\_02\_XIU** implements the Xiu rule for region CN\_LEG.
-   **CN\_LEG\_02\_XIU\_SIZE** sizes the Xiu rule for region CN\_LEG.
-   **CN\_LEG\_03\_1** implements the Stroud rule CN:3-1 for region
    CN\_LEG.
-   **CN\_LEG\_03\_1\_SIZE** sizes the Stroud rule CN:3-1 for region
    CN\_LEG.
-   **CN\_LEG\_03\_XIU** implements the Xiu precision 3 rule for region
    CN\_LEG.
-   **CN\_LEG\_03\_XIU\_SIZE** sizes the Xiu precision 3 rule for region
    CN\_LEG.
-   **CN\_LEG\_05\_1** implements the Stroud rule CN:5-1 for region
    CN\_LEG.
-   **CN\_LEG\_05\_1\_SIZE** sizes the Stroud rule CN:5-1 for region
    CN\_LEG.
-   **CN\_LEG\_05\_2** implements the Stroud rule CN:5-2 for region
    CN\_LEG.
-   **CN\_LEG\_05\_2\_SIZE** sizes the Stroud rule CN:5-2 for region
    CN\_LEG.
-   **CN\_LEG\_MONOMIAL\_INTEGRAL:** integral of monomial with Legendre
    weight on CN.
-   **CONE\_UNIT\_3D** approximates an integral inside the unit cone in
    3D.
-   **CONE\_VOLUME\_3D** returns the volume of a cone in 3D.
-   **CUBE\_SHELL\_ND** approximates an integral inside a cubic shell in
    N dimensions.
-   **CUBE\_SHELL\_VOLUME\_ND** computes the volume of a cubic shell in
    ND.
-   **CUBE\_UNIT\_3D** approximates an integral inside the unit cube in
    3D.
-   **CUBE\_UNIT\_ND** approximates an integral inside the unit cube in
    ND.
-   **CUBE\_UNIT\_VOLUME\_ND** returns the volume of the unit cube in
    ND.
-   **ELLIPSE\_AREA\_2D** returns the area of an ellipse in 2D.
-   **ELLIPSE\_CIRCUMFERENCE\_2D** returns the circumference of an
    ellipse in 2D.
-   **ELLIPSE\_ECCENTRICITY\_2D** returns the eccentricity of an ellipse
    in 2D.
-   **ELLIPSOID\_VOLUME\_3D** returns the volume of an ellipsoid in 3d.
-   **EN\_R2\_01\_1** implements the Stroud rule 1.1 for region EN\_R2.
-   **EN\_R2\_01\_1\_SIZE** sizes the Stroud rule 1.1 for region EN\_R2.
-   **EN\_R2\_02\_XIU** implements the Xiu rule for region EN\_R2.
-   **EN\_R2\_02\_XIU\_SIZE** sizes the Xiu for region EN\_R2.
-   **EN\_R2\_03\_1** implements the Stroud rule 3.1 for region EN\_R2.
-   **EN\_R2\_03\_1\_SIZE** sizes the Stroud rule 3.1 for region EN\_R2.
-   **EN\_R2\_03\_2** implements the Stroud rule 3.2 for region EN\_R2.
-   **EN\_R2\_03\_2\_SIZE** sizes the Stroud rule 3.2 for region EN\_R2.
-   **EN\_R2\_03\_XIU** implements the Xiu precision 3 rule for region
    EN\_R2.
-   **EN\_R2\_03\_XIU\_SIZE** sizes the Xiu precision 3 rule for region
    EN\_R2.
-   **EN\_R2\_05\_1** implements the Stroud rule 5.1 for region EN\_R2.
-   **EN\_R2\_05\_1\_SIZE** sizes the Stroud rule 5.1 for region EN\_R2.
-   **EN\_R2\_05\_2** implements the Stroud rule 5.2 for region EN\_R2.
-   **EN\_R2\_05\_2\_SIZE** sizes the Stroud rule 5.2 for region EN\_R2.
-   **EN\_R2\_05\_3** implements the Stroud rule 5.3 for region EN\_R2.
-   **EN\_R2\_05\_3\_SIZE** sizes the Stroud rule 5.3 for region EN\_R2.
-   **EN\_R2\_05\_4** implements the Stroud rule 5.4 for region EN\_R2.
-   **EN\_R2\_05\_4\_SIZE** sizes the Stroud rule 5.4 for region EN\_R2.
-   **EN\_R2\_05\_5** implements the Stroud rule 5.5 for region EN\_R2.
-   **EN\_R2\_05\_5\_SIZE** sizes the Stroud rule 5.5 for region EN\_R2.
-   **EN\_R2\_05\_6** implements the Stroud rule 5.6 for region EN\_R2.
-   **EN\_R2\_05\_6\_SIZE** sizes the Stroud rule 5.6 for region EN\_R2.
-   **EN\_R2\_07\_1** implements the Stroud rule 7.1 for region EN\_R2.
-   **EN\_R2\_07\_1\_SIZE** sizes the Stroud rule 7.1 for region EN\_R2.
-   **EN\_R2\_07\_2** implements the Stroud rule 7.2 for region EN\_R2.
-   **EN\_R2\_07\_2\_SIZE** sizes the Stroud rule 7.2 for region EN\_R2.
-   **EN\_R2\_07\_3** implements the Stroud rule 7.3 for region EN\_R2.
-   **EN\_R2\_07\_3\_SIZE** sizes the Stroud rule 7.3 for region EN\_R2.
-   **EN\_R2\_09\_1** implements the Stroud rule 9.1 for region EN\_R2.
-   **EN\_R2\_09\_1\_SIZE** sizes the Stroud rule 9.1 for region EN\_R2.
-   **EN\_R2\_11\_1** implements the Stroud rule 11.1 for region EN\_R2.
-   **EN\_R2\_11\_1\_SIZE** sizes the Stroud rule 11.1 for region
    EN\_R2.
-   **EN\_R2\_MONOMIAL\_INTEGRAL** evaluates monomial integrals in
    EN\_R2.
-   **EP1\_GLG\_MONOMIAL\_INTEGRAL:** integral of monomial with GLG
    weight on EP1.
-   **EP1\_LAG\_MONOMIAL\_INTEGRAL:** integral of monomial with Laguerre
    weight on EP1.
-   **EPN\_GLG\_00\_1** implements the "midpoint rule" for region
    EPN\_GLG.
-   **EPN\_GLG\_00\_1\_SIZE** sizes the midpoint rule for region
    EPN\_GLG.
-   **EPN\_GLG\_01\_1** implements a precision 1 rule for region
    EPN\_GLG.
-   **EPN\_GLG\_01\_1\_SIZE** sizes a precision 1 rule for region
    EPN\_GLG.
-   **EPN\_GLG\_02\_XIU** implements the Xiu rule for region EPN\_GLG.
-   **EPN\_GLG\_02\_XIU\_SIZE** sizes the Xiu rule for region EPN\_GLG.
-   **EPN\_GLG\_MONOMIAL\_INTEGRAL:** integral of monomial with GLG
    weight on EPN.
-   **EPN\_LAG\_00\_1** implements the "midpoint rule" for region
    EPN\_LAG.
-   **EPN\_LAG\_00\_1\_SIZE** sizes the midpoint rule for region
    EPN\_LAG.
-   **EPN\_LAG\_01\_1** implements a precision 1 rule for region
    EPN\_LAG.
-   **EPN\_LAG\_01\_1\_SIZE** sizes a precision 1 rule for region
    EPN\_LAG.
-   **EPN\_LAG\_02\_XIU** implements the Xiu rule for region EPN\_LAG.
-   **EPN\_LAG\_02\_XIU\_SIZE** sizes the Xiu rule for region EPN\_LAG.
-   **EPN\_LAG\_MONOMIAL\_INTEGRAL:** integral of monomial with Laguerre
    weight on EPN.
-   **HEXAGON\_AREA\_2D** returns the area of a regular hexagon in 2D.
-   **HEXAGON\_SUM** applies a quadrature rule inside a hexagon in 2D.
-   **HEXAGON\_UNIT\_AREA\_2D** returns the area of the unit regular
    hexagon in 2D.
-   **HEXAGON\_UNIT\_SET** sets a quadrature rule inside the unit
    hexagon in 2D.
-   **HEXAGON\_UNIT\_SIZE** sizes a quadrature rule inside the unit
    hexagon in 2D.
-   **I4\_FACTORIAL** returns N!.
-   **I4\_FACTORIAL2** computes the double factorial function.
-   **I4\_MAX** returns the maximum of two I4's.
-   **I4\_MIN** returns the minimum of two I4's.
-   **I4\_POWER** returns the value of I\^J.
-   **I4VEC\_SUM** sums the entries of an I4VEC.
-   **I4VEC\_ZERO** zeroes an I4VEC.
-   **KSUB\_NEXT2** generates the subsets of size K from a set of
    size N.
-   **LEGENDRE\_SET** sets abscissas and weights for Gauss-Legendre
    quadrature.
-   **LEGENDRE\_SET\_X1** sets a Gauss-Legendre rule for ( 1 + X ) \*
    F(X) on \[-1,1\].
-   **LEGENDRE\_SET\_X2** sets Gauss-Legendre rules for ( 1 + X
    )\^2\*F(X) on \[-1,1\].
-   **LENS\_HALF\_2D** approximates an integral in a circular half lens
    in 2D.
-   **LENS\_HALF\_AREA\_2D** returns the area of a circular half lens in
    2D.
-   **LENS\_HALF\_H\_AREA\_2D** returns the area of a circular half lens
    in 2D.
-   **LENS\_HALF\_W\_AREA\_2D** returns the area of a circular half lens
    in 2D.
-   **MONOMIAL\_VALUE** evaluates a monomial.
-   **OCTAHEDRON\_UNIT\_ND** approximates integrals in the unit
    octahedron in ND.
-   **OCTAHEDRON\_UNIT\_VOLUME\_ND** returns the volume of the unit
    octahedron in ND.
-   **PARALLELIPIPED\_VOLUME\_3D** returns the volume of a
    parallelipiped in 3D.
-   **PARALLELIPIPED\_VOLUME\_ND** returns the volume of a
    parallelipiped in ND.
-   **POLYGON\_1\_2D** integrates the function 1 over a polygon in 2D.
-   **POLYGON\_X\_2D** integrates the function X over a polygon in 2D.
-   **POLYGON\_XX\_2D** integrates the function X\*X over a polygon in
    2D.
-   **POLYGON\_XY\_2D** integrates the function X\*Y over a polygon in
    2D.
-   **POLYGON\_Y\_2D** integrates the function Y over a polygon in 2D.
-   **POLYGON\_YY\_2D** integrates the function Y\*Y over a polygon in
    2D.
-   **PYRAMID\_UNIT\_O01\_3D** approximates an integral inside the unit
    pyramid in 3D.
-   **PYRAMID\_UNIT\_O05\_3D** approximates an integral inside the unit
    pyramid in 3D.
-   **PYRAMID\_UNIT\_O06\_3D** approximates an integral inside the unit
    pyramid in 3D.
-   **PYRAMID\_UNIT\_O08\_3D** approximates an integral inside the unit
    pyramid in 3D.
-   **PYRAMID\_UNIT\_O08B\_3D** approximates an integral inside the unit
    pyramid in 3D.
-   **PYRAMID\_UNIT\_O09\_3D** approximates an integral inside the unit
    pyramid in 3D.
-   **PYRAMID\_UNIT\_O13\_3D** approximates an integral inside the unit
    pyramid in 3D.
-   **PYRAMID\_UNIT\_O18\_3D** approximates an integral inside the unit
    pyramid in 3D.
-   **PYRAMID\_UNIT\_O27\_3D** approximates an integral inside the unit
    pyramid in 3D.
-   **PYRAMID\_UNIT\_O48\_3D** approximates an integral inside the unit
    pyramid in 3D.
-   **PYRAMID\_UNIT\_MONOMIAL\_3D:** monomial integral in a unit pyramid
    in 3D.
-   **PYRAMID\_UNIT\_VOLUME\_3D:** volume of a unit pyramid with square
    base in 3D.
-   **PYRAMID\_VOLUME\_3D** returns the volume of a pyramid with square
    base in 3D.
-   **QMDPT** carries out product midpoint quadrature for the unit cube
    in ND.
-   **QMULT\_1D** approximates an integral over an interval in 1D.
-   **QMULT\_2D** approximates an integral with varying Y dimension in
    2D.
-   **QMULT\_3D** approximates an integral with varying Y and Z
    dimension in 3D.
-   **R8\_ABS** returns the absolute value of an R8.
-   **R8\_CHOOSE** computes the binomial coefficient C(N,K) as an R8.
-   **R8\_EPSILON** returns the R8 roundoff unit.
-   **R8\_FACTORIAL** computes the factorial of N.
-   **R8\_GAMMA** evaluates Gamma(X) for a real argument.
-   **R8\_GAMMA\_LOG** calculates the natural logarithm of GAMMA ( X )
    for positive X.
-   **R8\_HUGE** returns a "huge" R8.
-   **R8\_HYPER\_2F1** evaluates the hypergeometric function
    2F1(A,B,C,X).
-   **R8\_MAX** returns the maximum of two R8's.
-   **R8\_MIN** returns the minimum of two R8's.
-   **R8\_MOP** returns the I-th power of -1 as an R8 value.
-   **R8\_PSI** evaluates the function Psi(X).
-   **R8\_SWAP** switches two R8's.
-   **R8\_SWAP3** swaps three R8's.
-   **R8\_UNIFORM\_01** is a unit pseudorandom R8.
-   **R8GE\_DET** computes the determinant of a matrix factored by
    R8GE\_FA or R8GE\_TRF.
-   **R8GE\_FA** performs a LINPACK-style PLU factorization of a R8GE
    matrix.
-   **R8VEC\_DOT\_PRODUCT** computes the dot product of a pair of
    R8VEC's.
-   **R8VEC\_EVEN\_SELECT** returns the I-th of N evenly spaced values
    in \[ XLO, XHI \].
-   **R8VEC\_MIRROR\_NEXT** steps through all sign variations of an
    R8VEC.
-   **R8VEC\_PRINT** prints an R8VEC.
-   **R8VEC\_ZERO** zeroes an R8VEC.
-   **RECTANGLE\_3D** approximates an integral inside a rectangular
    block in 3D.
-   **RECTANGLE\_SUB\_2D** carries out a composite quadrature over a
    rectangle in 2D.
-   **RULE\_ADJUST** maps a quadrature rule from \[A,B\] to \[C,D\].
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **SIMPLEX\_ND** approximates an integral inside a simplex in ND.
-   **SIMPLEX\_UNIT\_01\_ND** approximates an integral inside the unit
    simplex in ND.
-   **SIMPLEX\_UNIT\_03\_ND** approximates an integral inside the unit
    simplex in ND.
-   **SIMPLEX\_UNIT\_05\_ND** approximates an integral inside the unit
    simplex in ND.
-   **SIMPLEX\_UNIT\_05\_2\_ND** approximates an integral inside the
    unit simplex in ND.
-   **SIMPLEX\_UNIT\_VOLUME\_ND** returns the volume of the unit simplex
    in ND.
-   **SIMPLEX\_VOLUME\_ND** returns the volume of a simplex in ND.
-   **SIN\_POWER\_INT** evaluates the sine power integral.
-   **SPHERE\_05\_ND** approximates an integral on the surface of a
    sphere in ND.
-   **SPHERE\_07\_1\_ND** approximates an integral on the surface of a
    sphere in ND.
-   **SPHERE\_AREA\_3D** computes the area of a sphere in 3D.
-   **SPHERE\_AREA\_ND** computes the area of a sphere in ND.
-   **SPHERE\_CAP\_AREA\_2D** computes the surface area of a spherical
    cap in 2D.
-   **SPHERE\_CAP\_AREA\_3D** computes the surface area of a spherical
    cap in 3D.
-   **SPHERE\_CAP\_AREA\_ND** computes the area of a spherical cap in
    ND.
-   **SPHERE\_CAP\_VOLUME\_2D** computes the volume of a spherical cap
    in 2D.
-   **SPHERE\_CAP\_VOLUME\_3D** computes the volume of a spherical cap
    in 3D.
-   **SPHERE\_CAP\_VOLUME\_ND** computes the volume of a spherical cap
    in ND.
-   **SPHERE\_K** computes a factor useful for spherical computations.
-   **SPHERE\_MONOMIAL\_INT\_ND** integrates a monomial on the surface
    of a sphere in ND.
-   **SPHERE\_SHELL\_03\_ND** approximates an integral inside a
    spherical shell in ND.
-   **SPHERE\_SHELL\_VOLUME\_ND** computes the volume of a spherical
    shell in ND.
-   **SPHERE\_UNIT\_03\_ND** approximates an integral on the surface of
    the unit sphere in ND.
-   **SPHERE\_UNIT\_04\_ND** approximates an integral on the surface of
    the unit sphere in ND.
-   **SPHERE\_UNIT\_05\_ND** approximates an integral on the surface of
    the unit sphere in ND.
-   **SPHERE\_UNIT\_07\_3D** approximates an integral on the surface of
    the unit sphere in 3D.
-   **SPHERE\_UNIT\_07\_1\_ND** approximates an integral on the surface
    of the unit sphere in ND.
-   **SPHERE\_UNIT\_07\_2\_ND** approximates an integral on the surface
    of the unit sphere in ND.
-   **SPHERE\_UNIT\_11\_3D** approximates an integral on the surface of
    the unit sphere in 3D.
-   **SPHERE\_UNIT\_11\_ND** approximates an integral on the surface of
    the unit sphere in ND.
-   **SPHERE\_UNIT\_14\_3D** approximates an integral on the surface of
    the unit sphere in 3D.
-   **SPHERE\_UNIT\_15\_3D** approximates an integral on the surface of
    the unit sphere in 3D.
-   **SPHERE\_UNIT\_AREA\_3D** computes the surface area of the unit
    sphere in 3D.
-   **SPHERE\_UNIT\_AREA\_ND** computes the surface area of the unit
    sphere in ND.
-   **SPHERE\_UNIT\_AREA\_VALUES** returns some areas of the unit sphere
    in ND.
-   **SPHERE\_UNIT\_MONOMIAL\_ND** integrates a monomial on the surface
    of the unit sphere in ND.
-   **SPHERE\_UNIT\_VOLUME\_ND** computes the volume of a unit sphere in
    ND.
-   **SPHERE\_UNIT\_VOLUME\_VALUES** returns some volumes of the unit
    sphere in ND.
-   **SPHERE\_VOLUME\_2D** computes the volume of an implicit sphere in
    2D.
-   **SPHERE\_VOLUME\_3D** computes the volume of an implicit sphere in
    3D.
-   **SPHERE\_VOLUME\_ND** computes the volume of an implicit sphere in
    ND.
-   **SQUARE\_SUM** carries out a quadrature rule over a square.
-   **SQUARE\_UNIT\_SET** sets quadrature weights and abscissas in the
    unit square.
-   **SQUARE\_UNIT\_SIZE** sizes a quadrature rule in the unit square.
-   **SQUARE\_UNIT\_SUM** carries out a quadrature rule over the unit
    square.
-   **SUBSET\_GRAY\_NEXT** generates all subsets of a set of order N,
    one at a time.
-   **TETRA\_07** approximates an integral inside a tetrahedron in 3D.
-   **TETRA\_SUM** carries out a quadrature rule in a tetrahedron in 3D.
-   **TETRA\_TPRODUCT** approximates an integral in a tetrahedron in 3D.
-   **TETRA\_UNIT\_SET** sets quadrature weights and abscissas in the
    unit tetrahedron.
-   **TETRA\_UNIT\_SIZE** sizes quadrature weights and abscissas in the
    unit tetrahedron.
-   **TETRA\_UNIT\_SUM** carries out a quadrature rule in the unit
    tetrahedron in 3D.
-   **TETRA\_UNIT\_VOLUME** returns the volume of the unit tetrahedron.
-   **TETRA\_VOLUME** computes the volume of a tetrahedron.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TORUS\_1** approximates an integral on the surface of a torus in
    3D.
-   **TORUS\_14S** approximates an integral inside a torus in 3D.
-   **TORUS\_5S2** approximates an integral inside a torus in 3D.
-   **TORUS\_6S2** approximates an integral inside a torus in 3D.
-   **TORUS\_AREA\_3D** returns the area of a torus in 3D.
-   **TORUS\_SQUARE\_14C** approximates an integral in a "square" torus
    in 3D.
-   **TORUS\_SQUARE\_5C2** approximates an integral in a "square" torus
    in 3D.
-   **TORUS\_SQUARE\_AREA\_3D** returns the area of a square torus in
    3D.
-   **TORUS\_SQUARE\_VOLUME\_3D** returns the volume of a square torus
    in 3D.
-   **TORUS\_VOLUME\_3D** returns the volume of a torus in 3D.
-   **TRIANGLE\_RULE\_ADJUST** adjusts a unit quadrature rule to an
    arbitrary triangle.
-   **TRIANGLE\_SUB** carries out quadrature over subdivisions of a
    triangular region.
-   **TRIANGLE\_SUM** carries out a unit quadrature rule in an arbitrary
    triangle.
-   **TRIANGLE\_SUM\_ADJUSTED** carries out an adjusted quadrature rule
    in a triangle.
-   **TRIANGLE\_UNIT\_PRODUCT\_SET** sets a product rule on the unit
    triangle.
-   **TRIANGLE\_UNIT\_PRODUCT\_SIZE** sizes a product rule on the unit
    triangle.
-   **TRIANGLE\_UNIT\_SET** sets a quadrature rule in the unit triangle.
-   **TRIANGLE\_UNIT\_SIZE** returns the "size" of a unit triangle
    quadrature rule.
-   **TRIANGLE\_UNIT\_VOLUME** returns the "volume" of the unit triangle
    in 2D.
-   **TRIANGLE\_VOLUME** returns the "volume" of a triangle in 2D.
-   **TVEC\_EVEN** computes an evenly spaced set of angles between 0 and
    2\*PI.
-   **TVEC\_EVEN2** computes evenly spaced angles between 0 and 2\*PI.
-   **TVEC\_EVEN3** computes an evenly spaced set of angles between 0
    and 2\*PI.
-   **TVEC\_EVEN\_BRACKET** computes evenly spaced angles between THETA1
    and THETA2.
-   **TVEC\_EVEN\_BRACKET2** computes evenly spaced angles from THETA1
    to THETA2.
-   **TVEC\_EVEN\_BRACKET3** computes evenly spaced angles from THETA1
    to THETA2.
-   **VEC\_LEX\_NEXT** generates vectors in lex order.

You can go up one level to [the C++ source codes](../cpp_src.md).

------------------------------------------------------------------------

*Last revised on 12 July 2014.*
