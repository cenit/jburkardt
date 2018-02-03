# include <cstdlib>
# include <ctime>
# include <iomanip>
# include <iostream>
# include <mpi.h>

int main ( int argc, char *argv[] );
int search ( int a, int b, int c, int id, int p );
int f ( int i );
void timestamp ( );

//****************************************************************************80

int main ( int argc, char *argv[] )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for SEARCH_MPI.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    16 June 2016
//
//  Author:
//
//    John Burkardt
//
{
  int a;
  int b;
  int c;
  int fj;
  int i4_huge = 2147483647;
  int id;
  int j;
  int p;
  double wtime;
//
//  Initialize MPI.
//
  MPI_Init ( &argc, &argv );
//
//  Get this processor's ID.
//
  MPI_Comm_rank ( MPI_COMM_WORLD, &id );
//
//  Get the number of processors.
//
  MPI_Comm_size ( MPI_COMM_WORLD, &p );

  a = 1;
  b = i4_huge;
  c = 45;

  if ( id == 0 )
  {
    timestamp ( );
    cout << "\n";
    cout << "SEARCH_MPI:\n";
    cout << "  C++/MPI version\n";
    cout << "  Search the integers from A to B\n";
    cout << "  for a value J such that F(J) = C.\n";
    cout << "\n";
    cout << "  A           = " << a << "\n";
    cout << "  B           = " << b << "\n";
    cout << "  C           = " << c << "\n";
  }

  wtime = MPI_Wtime ( );

  j = search ( a, b, c, id, p );

  wtime = MPI_Wtime ( ) - wtime;

  if ( j != -1 )
  {
    cout << "\n";
    cout << "  Process " << id << " found     J = " << j << "\n";
    cout << "  Verify F(J) = " << f ( j ) << "\n";
  }

  if ( id == 0 )
  {
    cout << "  Elapsed wallclock time is " << wtime << "\n";
  }
//
//  Terminate MPI.
//
  MPI_Finalize ( );
//
//  Terminate.
//
  if ( id == 0 )
  {
    cout << "\n";
    cout << "SEARCH_MPI:\n";
    cout << "  Normal end of execution.\n";
    cout << "\n";
    timestamp ( );
  }

  return 0;
}
//****************************************************************************80

int search ( int a, int b, int c, int id, int p )

//****************************************************************************80
//
//  Purpose:
//
//    SEARCH searches integers in [A,B] for a J so that F(J) = C.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    02 November 2012
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int A, B, the search range.
//
//    Input, int C, the desired function value.
//
//    Input, int ID, the process ID.
//
//    Input, int P, the number of processes.
//
//    Output, int SEARCH, the computed solution, or -1
//    if no solution was found.
//
{
  int fi;
  int i;
  int j;

  j = -1;
//
//  i = i + p can take us "over top" so that i becomes negative!
//  So we have to be more careful here!
//
  for ( i = a + id; 0 < i && i <= b; i = i + p )
  {
    fi = f ( i );

    if ( fi == c )
    {
      j = i;
      break;
    }
  }

  return j;
}
//****************************************************************************80

int f ( int i )

//*****************************************************************************80
//
//  Purpose:
//
//    F is the function we are analyzing.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    22 October 2012
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int I, the argument.
//
//    Input, int F, the value.
//
{
  int i4_huge = 2147483647;
  int j;
  int k;
  int value;

  value = i;

  for ( j = 1; j <= 5; j++ )
  {
    k = value / 127773;

    value = 16807 * ( value - k * 127773 ) - k * 2836;

    if ( value <= 0 )
    {
      value = value + i4_huge;
    }
  }

  return value;
}
//****************************************************************************80

void timestamp ( )

//****************************************************************************80
//
//  Purpose:
//
//    TIMESTAMP prints the current YMDHMS date as a time stamp.
//
//  Example:
//
//    31 May 2001 09:45:54 AM
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license. 
//
//  Modified:
//
//    08 July 2009
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    None
//
{
# define TIME_SIZE 40

  static char time_buffer[TIME_SIZE];
  const struct std::tm *tm_ptr;
  size_t len;
  std::time_t now;

  now = std::time ( NULL );
  tm_ptr = std::localtime ( &now );

  len = std::strftime ( time_buffer, TIME_SIZE, "%d %B %Y %I:%M:%S %p", tm_ptr );

  std::cout << time_buffer << "\n";

  return;
# undef TIME_SIZE
}

