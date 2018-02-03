# include <cstdlib>
# include <cstdio>
# include <iostream>
# include <fstream>
# include <string>
# include <iomanip>
# include <string.h>
# include <ctime>

using namespace std;

# include "NoiseGrid.hpp"

int main ( int argc, const char ** argv );
void make1DTest();
void make2DTest();
void timestamp ( );
void writeMatrix( int rows, int cols, double x[], const char *filename );

//****************************************************************************80

int main ( int argc, const char ** argv )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for NoisyTasmanian.
//
//  Modified:
//
//    07 January 2014
//
//  Author:
//
//    Miro Stoyanov
//
{
  timestamp ( );
  cout << "\n";
  cout << "NoisyTasmanian:\n";
  cout << "  C++ version\n";
  cout << "  Generate 1D and 2D noise using a sparse grid.\n";

  make1DTest ( );
  make2DTest ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "NoiseDemo:\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );
        
  return 0;
}
//****************************************************************************80

void make1DTest ( )

//****************************************************************************80
//
//  Purpose:
//
//    Make1DTest tests the 1D noise generator.
//
//  Modified:
//
//    07 January 2014
//
//  Author:
//
//    Miro Stoyanov
//
{
  const int M = 100;
  const int N = 1001;

  int dim = 1;
  NoiseGrid grid;
  int level = 12;
  double *res = new double[N * M];
  double *x = new double[N];
        
  cout << "\n";
  cout << "make1DTest:\n";
  cout << "  One Dimensional Test\n";
  cout << "  The grid uses " << N << " points in [-1,+1]\n";
  cout << "  The program generates " << M << " noise realizations.\n";
//
//  Determine N equally spaced X values between -1 and +1 inclusive.
//
  for ( int i = 0; i < N; i++ )
  {
    x[i] = ( ( double ) ( N - 1 - i ) * ( -1.0 )
           + ( double ) (         i ) * ( +1.0 ) )
           / ( double ) ( N - 1 );
  }
//
//  Initialize the random number generator using the current time.
//
  srand ( time ( 0 ) );
//
//  Define grid to be a sparse grid on [-1,+1].
//  
  grid.makeSparseGrid ( dim, level );
//
//  Do M realizations of noise on the grid.
//
  for ( int i = 0; i < M; i++ )
  {
    grid.generateNoise ( );
//
//  The table RES(I,J) stores the noisy value in realization I at node J.
//
    for ( int j = 0; j < N; j++ )
    {
      res[i*N + j] = grid.getValue ( &(x[j]) );
    }
  }
//
//  Write the table to a file.
//
  cout << "\n";
  cout << "  Writing grid noise realizations to file \"result_1d.txt\".\n";

  writeMatrix ( M, N, res, "result_1d.txt" );

  return;
}
//****************************************************************************80

void make2DTest ( )

//****************************************************************************80
//
//  Purpose:
//
//    Make2DTest tests the 2D noise generator.
//
//  Modified:
//
//    05 January 2014
//
//  Author:
//
//    Miro Stoyanov
//
{
  const int N = 101;
  const int M = 20;

  int dim = 2;
  NoiseGrid grid;
  int level = 6;
  double *res = new double[ N*N ];
  double *x = new double[N];

  cout << "\n";
  cout << "make2DTest:\n";
  cout << "  Two Dimensional Test\n";
  cout << "  The spatial grid uses " << N << " by " << N 
       << " points in [-1,+1]x[-1,+1].\n";
  cout << "  The program generates a table of " << M 
       << " noise realizations and averages them.\n";
//
//  Determine N equally spaced X values between -1 and +1 inclusive.
//
  for ( int i = 0; i < N; i++ )
  {
    x[i] = ( ( double ) ( N - 1 - i ) * ( -1.0 )
           + ( double ) (         i ) * ( +1.0 ) )
           / ( double ) ( N - 1 );
  }
//
//  Zero out the NxN table.
//
  for ( int i=0; i<N*N; i++ )
  {
    res[i] = 0.0; 
  }
//
//  Initialize the random number generator using the current time.
//   
  srand ( time ( 0 ) );
//
//  Define grid to be a 2D tensor grid on [-1,+1]x[-1,+1].
//
  grid.makeTensorGrid ( dim, level );
//
//  Set the coordinates of a reference point in the grid.
//
  const int nomi = 40;
  const int nomj = 40;
//
//  Carry out M realizations of noise.
//     
  for ( int k=0; k<M; k++ )
  {
    cout << k << endl;
//
//  Let grid define a noise function on the tensor grid.
//
    grid.generateNoise ( );
//
//  Set V as the noise function evaluated at the reference point.
//                
    double p[2];
    p[0] = x[nomi];
    p[1] = x[nomj];
                
    double v = grid.getValue ( p );
//
//  Evaluate the noise function at each grid point, scale it by
//  the reference value V, and add it to the table.
//   
    for ( int i=0; i<N; i++ )
    {
      p[0] = x[i];
      for ( int j=0; j<N; j++ )
      {
        p[1] = x[j];
        res[ i * N + j ] += v* grid.getValue ( p );
      }
    }
  }
//
//  Average the table value over the M realizations.
//      
  for ( int i=0; i<N*N; i++ )
  { 
    res[i] = res[i] / ( double ) M; 
  }
//
//  Write the table to a file.
//
  cout << "\n";
  cout << "  Writing grid noise realizations to file \"result_2d.txt\".\n";

  writeMatrix ( N, N, res, "result_2d.txt" );
  
  return;      
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
//****************************************************************************80

void writeMatrix ( int rows, int cols, double x[], const char *filename )

//****************************************************************************80
//
//  Purpose:
//
//    writeMatrix writes a matrix to a text file.
//
//  Discussion:
//
//    An MxN matrix is stored as a vector of rows.
//
//    Thus, the 2x4 matrix Am
//
//      11 12 13 14
//      21 22 23 24
//
//    is stored as an 8 vector Av
//
//      11 12 13 14 21 22 23 24
//
//    and entry Am(I,J) is found in Av(I*4+J), assuming that I and J 
//    are zero based indices.
//
//  Modified:
//
//    07 January 2014
//
//  Author:
//
//    Miro Stoyanov
//
//  Parameters:
//
//    Input, int ROWS, the number of rows in the matrix.
//
//    Input, int COLS, the  number of columns in the matrix.
//
//    Input, double X[ROWS*COLS], the matrix.
//
//    Input, const char *FILENAME, the name of the file to be created.
//
{
  std::ofstream ofs;

  ofs.open ( filename );
//
//  Turn off this write statement, so that the file is more easily
//  processed by MATLAB.
//
  if ( false )
  {
    ofs << rows << " " << cols << endl;
  }

  ofs.precision(6);

  for ( int i=0; i<rows; i++ )
  {
    for ( int j=0; j<cols; j++ )
    {
      ofs << "  " << setw(14) << std::scientific << x[i*cols + j];
    }
    ofs << endl;
  }

  ofs.close();

  return;
}

