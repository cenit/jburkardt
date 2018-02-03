# include <cstdlib>
# include <iostream>
# include <iomanip>
# include <ctime>
# include <mpi.h>

using namespace std;

int main ( int argc, char *argv[] );
void timestamp ( );

//****************************************************************************80

int main ( int argc, char *argv[] )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for TYPE.
//
//  Discussion:
//
//    TYPE demonstrates the use of a user-defined MPI datatype.
//
//    The datatype defined will be a structure that contains three
//    integers.
//
//    Process 0 will set up an example of this structure, and send it
//    to Proces 1, which will alter it and send it back.
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
//  Reference:
//
//    William Gropp, Ewing Lusk, Anthony Skjellum,
//    Using MPI: Portable Parallel Programming with the
//    Message-Passing Interface,
//    Second Edition,
//    MIT Press, 1999,
//    ISBN: 0262571323.
//
{
  int dest;
  int i;
  int id;
  int p;
  struct 
  {
    int x;
    int y;
    int z;
  } point;
  MPI_Datatype point_type;
  int source;
  MPI_Status status;
  int tag;
//
//  Initialize MPI.
//
  ierr = MPI_Init ( &argc, &argv );
//
//  Get the number of processes.
//
  ierr = MPI_Comm_size ( MPI_COMM_WORLD, &p );
//
//  Get the individual process ID.
//
  ierr = MPI_Comm_rank ( MPI_COMM_WORLD, &id );
//
//  Print a message.
//
  if ( id == 0 ) 
  {
    timestamp ( );
    cout << "\n";
    cout << "TYPE - Master process:\n";
    cout << "  C++ version\n";
    cout << "  An MPI example program that uses an MPI datatype.\n";
    cout << "\n";
    cout << "  Compiled on " << __DATE__ << " at " << __TIME__ << ".\n";
    cout << "\n";
    cout << "  The number of processes is " << p << "\n";
  }
  cout << "\n";
  cout << "  Process " << id << " says 'Hello, world!'\n";
//
//  Define and commit the new datatype.
//
  ierr = MPI_Type_contiguous ( 3, MPI_INT, &point_type );
  ierr = MPI_Type_commit ( &point_type );

  if ( id == 0 ) 
  {
    point.x = 1;
    point.y = 2;
    point.z = 4;
    dest = 1;
    tag = 1;

    ierr = MPI_Send ( &point, 1, point_type, dest, tag, MPI_COMM_WORLD );

    cout << "  Process " << id 
         << " sent an item of type POINT_TYPE, with value "
         << point.x << "  "
         << point.y << "  "
         << point.z << "\n";

    source = 1;
    tag = 2;
    ierr = MPI_Recv ( &point, 1, point_type, source, tag, MPI_COMM_WORLD,
      &status );

    cout << "  Process " << id 
         << " received a modified item of type POINT_TYPE, with value "
         << point.x << "  "
         << point.y << "  "
         << point.z << "\n";

  }
  else if ( id == 1 )
  {
    source = 0;
    tag = 1;

    ierr = MPI_Recv ( &point, 1, point_type, source, tag, MPI_COMM_WORLD,
      &status );

    cout << "\n";
    cout << "  Process " << id 
         << " received an item of type POINT_TYPE, with value "
         << point.x << "  "
         << point.y << "  "
         << point.z << "\n";

    i = point.x;
    point.x = point.z * 100;
    point.y = point.y * 10;
    point.z = i;
    dest = 0;
    tag = 2;

    ierr = MPI_Send ( &point, 1, point_type, dest, tag, MPI_COMM_WORLD );

    cout << "  Process " << id 
         << " sent a modified item of type POINT_TYPE, with value "
         << point.x << "  "
         << point.y << "  "
         << point.z << "\n";
  }
  else
  {
    cout << "\n";
    cout << "  Process " << id << ": MPI has nothing for me to do!\n";
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
    cout << "TYPE - Master process:\n";
    cout << "  Normal end of execution.\n";
    cout << "\n";
    timestamp ( );
  }

  return 0;
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
