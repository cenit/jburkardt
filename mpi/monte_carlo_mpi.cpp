# include <cstdlib>
# include <iostream>
# include <iomanip>
# include <cmath>
# include <ctime>
# include <mpi.h>

using namespace std;

# define DEBUG             0
# define CHUNKSIZE      1000
# define RANDOM_SEED       0
// 
//  Message tags
//
# define NEED_NUMBERS      1
# define RANDOM_NUMBERS    2

int main ( int argc, char *argv[] );
void timestamp ( );

//****************************************************************************80

int main ( int argc, char *argv[] )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for MONTE_CARLO.
//
//  Discussion:
//
//    MONTE_CARLO illustrates the use of MPI with a Monte Carlo algorithm.
//
//    Generate N random points in the unit square.  Count M, the number
//    of points that are in the quarter circle.  Then PI is approximately
//    equal to the ratio 4 * M / N.
//
//    It's important that each processor use DIFFERENT random numbers.
//    One way to ensure this is to have a single master processor
//    generate all the random numbers, and then divide them up.
//
//    (A second way, not explored here, is simply to ensure that each
//    processor uses a different seed, either chosen by a master processor,
//    or generated from the processor ID.)
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
  double calculatedPi;
  int dest;
  int done;
  double error;
  int i;
  int id;
  int in;
  int max;
  MPI_Status mesgStatus;
  int num_procs;
  int out;
  int point_max = 1000000;
  int randServer;
  int randNums[CHUNKSIZE];
  int ranks[1];
  int request;
  int temp;
  double tolerance;
  int totalin;
  int totalout;
  MPI::Group worker_group;
  MPI::Intracomm workers;
  MPI::Group world_group;
  double x;
  double y;
//
//  Initialize MPI.
//
  ierr = MPI_Init ( &argc, &argv );
//
//  Get the number of processors.
//
  ierr = MPI_Comm_size ( MPI_COMM_WORLD, &num_procs );
//
//  Get the rank of this processor.
//
  ierr = MPI_Comm_rank ( MPI_COMM_WORLD, &id );

  if ( id == 0 ) 
  {
    timestamp ( );
    cout << "\n";
    cout << "MONTE_CARLO - Master process:\n";
    cout << "  C++ version\n";
    cout << "  Estimate pi by the Monte Carlo method, using MPI.\n";
    cout << "\n";
    cout << "  Compiled on : " << __DATE__ << " at " << __TIME__ << ".\n";
    cout << "\n";
    cout << "  The number of processes is " << num_procs << ".\n";
    cout << "\n";
    cout << "  Points in the unit square will be tested\n";
    cout << "  to see if they lie in the unit quarter circle.\n";
  }
//
//  Pretend that the tolerance TOLERANCE is supplied externally
//  to the master process, which must then broadcast it to all
//  other processes.
//
  if ( id == 0 )
  {
    tolerance = 0.0001;

    cout << "\n";
    cout << "  The method will continue to improve the estimate until:\n";
    cout << "  PI is computed to within a tolerance = " << tolerance << "\n";
    cout << "  or the number of points examined reaches " << point_max << ".\n";
  }

  ierr = MPI_Bcast ( &tolerance, 1, MPI_DOUBLE_PRECISION, 0,
    MPI_COMM_WORLD );

  cout << "  Process " << id << " is active.\n";
//
//  Start by getting the group corresponding to the world communicator.
//
  ierr = MPI_Comm_group ( MPI_COMM_WORLD, &world_group );
//
//  Put SERVER on the list of processes to exclude, and create the new
//  worker group.
//
  randServer = numprocs-1;
  ranks[0] = randServer;
  ierr = MPI_Group_excl ( world_group, 1, ranks, &worker_group );
// 
//  Use the worker group to create the new worker communicator.
//
  ierr = MPI_Comm_create ( MPI_COMM_WORLD, worker_group, &workers );
//
//  Since we only needed the worker group to create the worker
//  communicator, we can free the worker group now.
//
  ierr = MPI_Group_free ( &worker_group );
//
//  Here is where the computation is carried out.
//

// 
//  I am the rand server.
//
  if ( id == randServer ) 
  {
# if RANDOM_SEED
    struct timeval time;
    gettimeofday ( &time, 0 );
// 
//  Initialize the random number generator 
//
    srandom ( (int)(time.tv_usec*1000000+time.tv_sec) );
# endif
    do
    {
      ierr = MPI_Recv ( &request, 1, MPI_INT, MPI_ANY_SOURCE, NEED_NUMBERS,
        MPI_COMM_WORLD, &mesgStatus );

      if ( request ) 
      {
        for ( i = 0; i < CHUNKSIZE; i++) 
        {
          randNums[i] = random();
        }
        ierr = MPI_Send ( randNums, CHUNKSIZE, MPI_INT, 
          mesgStatus.MPI_SOURCE, RANDOM_NUMBERS, MPI_COMM_WORLD );
      }
    } while ( 0 < request );
  }
// 
//  I am a worker process.
//
  else  
  {
    request = 1;
    done = 0;
    in = 0;
    out = 0;
    max = 2147483647;
//
//  Find the maximum integer for normalization.
//
    ierr = MPI_Send ( &request, 1, MPI_INT, randServer, NEED_NUMBERS, 
      MPI_COMM_WORLD );
// 
//  Request a string of random numbers.
//
    while ( !done ) 
    {
      request = 1;
      ierr = MPI_Recv ( randNums, CHUNKSIZE, MPI_INT, randServer,
        RANDOM_NUMBERS, MPI_COMM_WORLD, &mesgStatus );

      for ( i = 0; i < CHUNKSIZE; ) 
      {
        x = ( ( float ) randNums[i++] ) / max;
        y = ( ( float ) randNums[i++] ) / max;

        if ( x * x + y * y < 1.0E+00 ) 
        {
          in++;
        } 
        else 
        {
          out++;
        }
      }
// 
//  Total the number of points that are within the circle.
// 
      temp = in;
      ierr = MPI_Reduce ( &temp, &totalin, 1, MPI_INT, MPI_SUM, 0, workers );
// 
//  Total the number of points that are outside the circle.
//
      temp = out;
      ierr = MPI_Reduce ( &temp, &totalout, 1, MPI_INT, MPI_SUM, 0, workers );

      if ( id == 0 ) 
      {
        calculatedPi = ( 4.0E+00 * totalin ) / ( totalin + totalout );
        error = fabs ( calculatedPi - 3.141592653589793238462643E+00 );
        done = ( error < tolerance ) || point_max < ( totalin + totalout );
        cout << "pi = " << setw(24) << setprecision(16) << calculatedPi << "\n";

        if ( done )
        {
          request = 0;
        }
        else
        {
          request = 1;
        }
        ierr = MPI_Send ( &request, 1, MPI_INT, randServer, NEED_NUMBERS,
          MPI_COMM_WORLD );

        ierr = MPI_Bcast ( &done, 1, MPI_INT, 0, workers );
      } 
      else
      {
        ierr = MPI_Bcast ( &done, 1, MPI_INT, 0, workers );

        if ( !done ) 
        {
          request = 1;
          ierr = MPI_Send ( &request, 1, MPI_INT, randServer, NEED_NUMBERS,
            MPI_COMM_WORLD );
        }
      }
    }
  }

  if ( id == 0 ) 
  {
    cout << "\n";
    cout << "Number of points: " << totalin + totalout << "\n";
    cout << "Number inside:    " << totalin << "\n";
    cout << "Number outside:   " << totalout << "\n";
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
    cout << "MONTE_CARLO - Master process:\n";
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
