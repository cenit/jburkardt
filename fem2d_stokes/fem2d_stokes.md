FEM2D\_STOKES\
Steady Incompressible Stokes Equations in 2D\
Finite Element Solution\
Banded Storage {#fem2d_stokes-steady-incompressible-stokes-equations-in-2d-finite-element-solution-banded-storage align="center"}
=============================================

------------------------------------------------------------------------

**FEM2D\_STOKES** is a C++ program which applies the finite element
method to solve a form of the steady incompressible Stokes's equations
over an arbitrary triangulated region in 2D.

The geometry is entirely external to the program. The user specifies one
file of nodal coordinates, and one file that describes the triangles in
terms of six node coordinates.

The program makes a default assumption that all boundary velocities
correspond to Dirichlet boundary conditions, and that one pressure is
specified (for uniqueness of the pressure system). The user can adjust
these boundary conditions (and even specify Dirichlet constraints on any
variable at any node) by setting the appropriate data in certain user
routines.

*At the moment, Neumann conditions, if specified, must have a zero right
hand side. The machinery to integrate a nonzero Neumann condition has
not been set up yet.*

The linear system is created, stored, and solved using a form of the
LINPACK/LAPACK "general band" storage and versions of LINPACK's DGBFA
and DGBSL factorization and solution routines.

Computational Region {#computational-region align="center"}
--------------------

The computational region is initially unknown by the program. The user
specifies it by preparing a file containing the coordinates of the
nodes, and a file containing the indices of nodes that make up triangles
that form a triangulation of the region. For the following ridiculously
small example:

           10-11-12
            |\    |\
            | \   | \
            6  7  8  9
            |   \ |   \
            |    \|    \
            1--2--3--4--5
          

the node file could be:

             0.0 0.0
             1.0 0.0
             2.0 0.0
             3.0 0.0
             0.0 1.0
             1.0 1.0
             2.0 1.0
             3.0 1.0
             0.0 2.0
             1.0 2.0
             2.0 2.0
          

and the triangle file would be

             1  3  10  2  7  6
            12 10  3  11  7  8
             3  5 12   4  9  8
          

The Stokes Equations {#the-stokes-equations align="center"}
--------------------

The state variables are a velocity vector (U,V)(X,Y) and a scalar
pressure P(X,Y). The state variables are constrained by the momentum and
continuity equations, which apply inside the region:

            - nu * ( Uxx + Uyy ) + dP/dx = U_RHS(x,y)
            - nu * ( Vxx + Vyy ) + dP/dy = V_RHS(x,y)
                           dU/dx + dV/dy = P_RHS(x,y)
          

where, typically, the right hand side functions are zero. However, the
user is free to assign nonzero values to these functions through a user
routine.

Boundary Conditions {#boundary-conditions align="center"}
-------------------

At every point on the boundary of the region, the program assumes that
both components of the velocity are specified.

            U(node) = U_BC(node)
            V(node) = V_BC(node)
          

This is known as a "Dirichlet boundary condition". The right hand side
of the boundary condition is left unspecified until the user routine is
called. If a wall is intended, then the appropriate condition has U\_BC
and V\_BC zero. An inlet might have a particular flow profile function
used to assign nonzero values.

At one point in the region, the program assumes that the value of the
pressure is specified.

            P(node) = P_BC(node)
          

Such a condition must be supplied; otherwise the pressure cannot be
uniquely determined, since it is essentially a potential function, and
so is unique only "up to a constant". Note that the program allows the
user to specify pressure conditions anyway, and these can be of
Dirichlet or Neumann type. In general, however, this is not a physically
or mathematically or computationally good thing to do!

The user routine **boundary\_type** can be used to modify the type of
the boundary conditions associated with a degree of freedom at a
boundary node - or even to add constraints to variables associated with
nodes in the interior.

One choice that the user can make is to reset certain boundary
conditions to be of Neumann type:

            dU/dn(node) = U_BC(node)
            dV/dn(node) = V_BC(node)
          

The right hand side of the boundary condition is left unspecified until
the user routine is called. As mentioned earlier, the program cannot
currently handle Neumann conditions with nonzero right hand side. (A
nonzero value is simply ignored, but won't actually cause the program to
fail.)

Computational Procedure {#computational-procedure align="center"}
-----------------------

We use linear finite elements for the pressure function, and to generate
these, we only need the nodes that are the vertices of the triangles.
(We will call these vertices "pressure nodes.") Because quadratic basis
functions are to be used for the velocity, however, each triangle will
also have three extra midside nodes available for that.

We now assume that the unknown velocity component functions U(x,y) and
V(x,y) can be represented as linear combinations of the quadratic basis
functions associated with each node, and that the scalar pressure P(x,y)
can be represented as a linear combination of the linear basis functions
associated with each pressure node.

For every node, we can determine a quadratic velocity basis function
PSI(I)(x,y). For every pressure node I, we can determine a linear basis
function PHI(I)(x,y). If we assume that our solutions are linear
combinations of these basis functions, then we need to solve for the
coefficients.

To do so, we apply the Galerkin-Petrov method. For each pressure node,
and its corresponding basis function PHI(I), we generate a copy of the
continuity equation, multiplied by that basis function, and integrated
over the region:

> Integral ( Ux(x,y) + Vy(x,y) ) \* PHI(I)(x,y) dx dy = Integral (
> P\_RHS(x,y) \* PHI(I)(x,y) dx dy )

Similarly, for each node and its corresponding velocity basis function
PSI(I), we generate two copies of the momentum equation, one for each
component. We multiply by PSI(I), integrate over the region, and use
integration by parts to lower the order of differentiation. This gives
us:

> > Integral nu \* ( Ux(x,y) \* PSIx(I)(x,y) + Uy(x,y) \* PSIy(I)(x,y) )
> > + Px(x,y) \* PSI(I)(x,y) dx dy = Integral ( U\_RHS(x,y) \*
> > PSI(I)(x,y) dx dy )\
> > Integral nu \* ( Vx(x,y) \* PSIx(I)(x,y) + Vy(x,y) \* PSIy(I)(x,y) )
> > + Py(x,y) \* PSI(I)(x,y) dx dy = Integral ( V\_RHS(x,y) \*
> > PSI(I)(x,y) dx dy )

After adjusting for the boundary conditions, the set of all such
equations yields a linear system for the coefficients of the finite
element representation of the solution.

User Input Routines {#user-input-routines align="center"}
-------------------

The program requires the user to supply the following routines:

The default boundary condition types are passed to the user, along with
other information. The user modifies any data as necessary, and returns
it. This is done by a user-supplied routine of the form

> **void boundary\_type ( int node\_num, double node\_xy\[\], bool
> node\_boundary\[\], int node\_type\[\], double node\_u\_condition\[\],
> node\_v\_condition\[\], node\_p\_condition\[\] )**

The right hand sides of any Dirichlet boundary conditions are determined
by a user-supplied routine of the form

> **void dirichlet\_condition ( int node\_num, double node\_xy\[\],
> double u\_bc\[\], double v\_bc\[\], double p\_bc\[\] )**

The right hand sides of any Neumann boundary conditions are determined
by a user-supplied routine of the form

> **void neumann\_condition ( int node\_num, double node\_xy\[\], double
> u\_bc\[\], double v\_bc\[\], double p\_bc\[\] )**

The right hand sides (or "source terms") of the state equations are
determined by a user-supplied routine of the form

> **void rhs ( int node\_num, double node\_xy\[\], double u\_rhs\[\],
> double v\_rhs\[\], double p\_rhs\[\] )**

Program Output {#program-output align="center"}
--------------

The program writes out various node, triangle, pressure and velocity
data files that can be used to create plots of the geometry and the
solution.

Graphics files created include:

-   **nodes6.eps**, an image of the nodes;
-   **triangles6.eps**, an image of the elements;

Data files created include:

-   **nodes3.txt**, the nodes associated with pressure;
-   **triangles3.txt**, the linear triangles associated with pressure;
-   **pressure3.txt**, the pressure at the pressure nodes;
-   **velocity6.txt**, the velocity at the velocity nodes.

### Usage: {#usage align="center"}

To run the program, the user must first write a file, called, perhaps,
*myprog.C*, containing routines defining certain data, compile this file
with **fem2d\_stokes.C**, and create an executable. It would be sensible
to rename the executable to **fem2d\_stokes**.

> g++ fem2d\_stokes.C *myprog.C*\
> mv a.out fem2d\_stokes

Once the executable is created, it can be run as follows:

> fem2d\_stokes *nodes.txt* *triangles.txt*

where

-   *nodes.txt* contains the coordinates of nodes;
-   *triangles.txt* lists the indices of nodes that form elements.

### Licensing: {#licensing align="center"}

The computer code and data files described and made available on this
web page are distributed under [the GNU LGPL
license.](../../txt/gnu_lgpl.txt)

### Languages: {#languages align="center"}

**FEM2D\_STOKES** is available in [a C++
version](../../cpp_src/fem2d_stokes/fem2d_stokes.html) and [a FORTRAN90
version](../../f_src/fem2d_stokes/fem2d_stokes.html) and [a MATLAB
version](../../m_src/fem2d_stokes/fem2d_stokes.html).

### Related Data and Programs: {#related-data-and-programs align="center"}

[FEM2D\_STOKES\_CAVITY](../../cpp_src/fem2d_stokes_cavity/fem2d_stokes_cavity.html),
a C++ library which contains the user-supplied routines necessary to run
**fem2d\_stokes** on the "cavity" problem.

[FEM2D\_STOKES\_CHANNEL](../../cpp_src/fem2d_stokes_channel/fem2d_stokes_channel.html).
a C++ library which contains the user-supplied routines necessary to run
**fem2d\_stokes** on the "channel" problem.

[FEM2D\_STOKES\_INOUT](../../cpp_src/fem2d_stokes_inout/fem2d_stokes_inout.html).
a C++ library which contains the user-supplied routines necessary to run
**fem2d\_stokes** on the "inout" problem.

### Reference: {#reference align="center"}

1.  Max Gunzburger,\
    Finite Element Methods for Viscous Incompressible Flows,\
    A Guide to Theory, Practice, and Algorithms,\
    Academic Press, 1989,\
    ISBN: 0-12-307350-2,\
    LC: TA357.G86.
2.  Hans Rudolf Schwarz,\
    Finite Element Methods,\
    Academic Press, 1988,\
    ISBN: 0126330107,\
    LC: TA347.F5.S3313.
3.  Gilbert Strang, George Fix,\
    An Analysis of the Finite Element Method,\
    Cambridge, 1973,\
    ISBN: 096140888X,\
    LC: TA335.S77.
4.  Olgierd Zienkiewicz,\
    The Finite Element Method,\
    Sixth Edition,\
    Butterworth-Heinemann, 2005,\
    ISBN: 0750663200,\
    LC: TA640.2.Z54

### Source code: {#source-code align="center"}

-   [fem2d\_stokes.cpp](fem2d_stokes.cpp), the source code;

### List of Routines: {#list-of-routines align="center"}

-   **MAIN** is the main routine of FEM2D\_STOKES.
-   **ASSEMBLE\_STOKES** assembles the system for the Stokes equations.
-   **BANDWIDTH** determines the bandwidth of the coefficient matrix.
-   **BASIS\_MN\_T3:** all bases at N points for a T3 element.
-   **BASIS\_MN\_T6:** all bases at N points for a T6 element.
-   **CH\_CAP** capitalizes a single character.
-   **CH\_EQI** is true if two characters are equal, disregarding case.
-   **CH\_TO\_DIGIT** returns the integer value of a base 10 digit.
-   **DGB\_FA** performs a LINPACK-style PLU factorization of a DGB
    matrix.
-   **DGB\_PRINT\_SOME** prints some of a DGB matrix.
-   **DGB\_SL** solves a system factored by DGB\_FA.
-   **DIRICHLET\_APPLY** accounts for Dirichlet boundary conditions.
-   **DTABLE\_DATA\_READ** reads the data from a real TABLE file.
-   **DTABLE\_HEADER\_READ** reads the header from a real TABLE file.
-   **FILE\_COLUMN\_COUNT** counts the number of columns in the first
    line of a file.
-   **FILE\_NAME\_SPECIFICATION** determines the names of the input
    files.
-   **FILE\_ROW\_COUNT** counts the number of row records in a file.
-   **I4\_HUGE** returns a "huge" integer value, usually the largest
    legal signed int.
-   **I4\_MAX** returns the maximum of two integers.
-   **I4\_MIN** returns the smaller of two integers.
-   **I4COL\_COMPARE** compares columns I and J of an I4COL.
-   **I4COL\_SORT\_A** ascending sorts the columns of an I4COL.
-   **I4COL\_SWAP** swaps two columns of an I4COL.
-   **I4MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an I4MAT,
    transposed.
-   **ITABLE\_DATA\_READ** reads data from an integer TABLE file.
-   **ITABLE\_HEADER\_READ** reads the header from an integer TABLE
    file.
-   **LVEC\_PRINT** prints a logical vector.
-   **NEUMANN\_APPLY** accounts for Neumann boundary conditions.
-   **NODES3\_WRITE** writes the pressure nodes to a file.
-   **POINTS\_PLOT** plots a pointset.
-   **PRESSURE3\_WRITE** writes the pressures to a file.
-   **QUAD\_RULE** sets the quadrature rule for assembly.
-   **R8\_HUGE** returns a "huge" R8.
-   **R8\_NINT** returns the nearest integer to an R8.
-   **R8MAT\_TRANSPOSE\_PRINT\_SOME** prints some of an R8MAT,
    transposed.
-   **R8VEC\_PRINT\_SOME** prints "some" of an R8VEC.
-   **REFERENCE\_TO\_PHYSICAL\_T6** maps T6 reference points to physical
    points.
-   **S\_LEN\_TRIM** returns the length of a string to the last
    nonblank.
-   **S\_TO\_I4** reads an integer value from a string.
-   **S\_TO\_I4VEC** reads an integer vector from a string.
-   **S\_TO\_R8** reads an R8 from a string.
-   **S\_TO\_R8VEC** reads an R8VEC from a string.
-   **S\_WORD\_COUNT** counts the number of "words" in a string.
-   **SORT\_HEAP\_EXTERNAL** externally sorts a list of items into
    ascending order.
-   **TIMESTAMP** prints the current YMDHMS date as a time stamp.
-   **TRIANGLE\_AREA\_2D** computes the area of a triangle in 2D.
-   **TRIANGLES3\_WRITE** writes the pressure triangles to a file.
-   **TRIANGULATION\_ORDER6\_BOUNDARY\_NODE** indicates nodes on the
    boundary.
-   **TRIANGULATION\_ORDER6\_PLOT** plots a 6-node triangulation of a
    set of nodes.
-   **VELOCITY6\_WRITE** writes the velocities to a file.

You can go up one level to [the C++ source codes](../cpp_src.html).

------------------------------------------------------------------------

*Last revised on 09 January 2011.*
