# include <cstdlib>
# include <ctime>
# include <iomanip>
# include <iostream>
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
//    MAIN is the main program for BONES.
//
//  Discussion:
//
//    BONES is a simple demonstration of the use of MPI by a C++ program.
//
//    This program should be run on at least two processes.
//    Any processes beyond the first two will not be given any work.
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
  int count;
  float data[100];
  int dest;
  int i;
  int id;
  int p;
  MPI_Status status;
  int tag;
  float value[200];
//
//  Initialize MPI.
//
  ierr = MPI_Init ( &argc, &argv );
//
//  Determine this process's rank.
//
  ierr = MPI_Comm_rank ( MPI_COMM_WORLD, &rank );
//
//  Determine the number of available processes.
//
  ierr = MPI_Comm_size ( MPI_COMM_WORLD, &num_procs );
//
//  Have Process 0 say hello.
//
  if ( id == 0 )
  {
    timestamp ( );
    cout << "\n";
    cout << "BONES:\n";
    cout << "  C++ version\n";
    cout << "  An MPI example program.\n";
    cout << "  The number of processes available is " << p << "\n";
  }
//
//  Process 0 expects up to 200 real values, from any source.
//
  if ( id == 0 ) 
  {
    tag = 55;
    ierr = MPI_Recv ( value, 200, MPI_FLOAT, MPI_ANY_SOURCE, tag, 
      MPI_COMM_WORLD, &status );

    ierr = MPI_Get_count ( &status, MPI_FLOAT, &count );

    cout << "P:" << id << " Got " << count << " elements.\n";

    cout << "P:" << id << " value[5] = " << value[5] << "\n";
  }
//
//  Process 1 sends 100 real values to process 0.
//
  else if ( id == 1 )
  {
    cout << "\n";
    cout << "P:" << id << " - setting up data to send to process 0.\n";

    for ( i = 0; i < 100; i++ ) 
    {
      data[i] = i;
    }

    dest = 0;
    tag = 55;
    ierr = MPI_Send ( data, 100, MPI_FLOAT, dest, tag, MPI_COMM_WORLD );
  }
//
//  Any other process is idle.
//
  else
  {
    cout << "\n";
    cout << "P:" << id << " - MPI has no work for me!\n";
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
    cout << "BONES:\n";
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
