# include <cmath>
# include <cstdlib>
# include <ctime>
# include <iomanip>
# include <iostream>

using namespace std;

# include "hammersley.hpp"

int main ( );
void hammersley_test ( );
void hammersley_inverse_test ( );
void hammersley_sequence_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for HAMMERSLEY_PRB.
//
//  Discussion:
//
//    HAMMERSLEY_PRB tests the HAMMERSLEY library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    20 August 2016
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "HAMMERSLEY_PRB:\n";
  cout << "  C++ version\n";
  cout << "  Test the HAMMERSLEY library.\n";

  hammersley_test ( );
  hammersley_inverse_test ( );
  hammersley_sequence_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "HAMMERSLEY_PRB:\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void hammersley_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    HAMMERSLEY_TEST tests HAMMERSLEY.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    20 August 2016
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int j;
  int m;
  int n;
  double *r;

  cout << "\n";
  cout << "HAMMERSLEY_TEST\n";
  cout << "  HAMMERSLEY returns the I-th element of an M-dimensional\n";
  cout << "  Hammersley sequence.\n";
  cout << "\n";
  cout << "    I          HAMMERSLEY(I)\n";

  n = 16;

  for ( m = 1; m <= 3; m++ )
  {
    cout << "\n";
    cout << "  Use M = " << m << "\n";
    cout << "      N = " << n << "\n";
    cout << "\n";
    for ( i = 0; i <= 10; i++ )
    {
      cout << "  " << setw(3) << i;
      r = hammersley ( i, m, n );
      for ( j = 0; j < m; j++ )
      {
        cout << "  " << setw(14) << r[j];
      }
      cout << "\n";
      delete [] r;
    }
  }

  return;
}
//****************************************************************************80

void hammersley_inverse_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    HAMMERSLEY_INVERSE_TEST tests HAMMERSLEY_INVERSE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    20 August 2016
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int i2;
  int j;
  int m;
  int n;
  double *r;

  cout << "\n";
  cout << "HAMMERSLEY_INVERSE_TEST\n";
  cout << "  HAMMERSLEY_INVERSE inverts an element of a Hammersley sequence.\n";
  cout << "\n";
  cout << "    I        R=HAMMERSLEY(I,3)  HAMMERSLEY_INVERSE(R,3)\n";
  cout << "\n";

  m = 3;
  n = 16;

  for ( i = 0; i <= 10; i++ )
  {
    cout << "  " << setw(3) << i;
    r = hammersley ( i, m, n );
    for ( j = 0; j < m; j++ )
    {
      cout << "  " << setw(14) << r[j];
    }
    i2 = hammersley_inverse ( r, m, n );
    cout << "  " << setw(3) << i2 << "\n";
    delete [] r;
  }

  return;
}
//****************************************************************************80

void hammersley_sequence_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    HAMMERSLEY_SEQUENCE_TEST tests HAMMERSLEY_SEQUENCE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    20 August 2016
//
//  Author:
//
//    John Burkardt
//
{
  int m;
  int n;
  double *r;

  cout << "\n";
  cout << "HAMMERSLEY_SEQUENCE_TEST\n";
  cout << "  HAMMERSLEY_SEQUENCE returns the elements I1 through I2\n";
  cout << "  of an M-dimensional Hammersley sequence.\n";

  n = 16;

  for ( m = 1; m <= 3; m++ )
  {
    cout << "\n";
    cout << "  HAMMERSLEY_SEQUENCE(0,10," << m << ",N,R):\n";
    r = hammersley_sequence ( 0, 10, m, n );
    r8mat_print ( m, 11, r, "  R:" );
    delete [] r;
  }

  m = 3;
  n = 16;
  cout << "\n";
  cout << "  HAMMERSLEY_SEQUENCE(10,0," << m << ",N,R):";
  r = hammersley_sequence ( 10, 0, m, n );
  r8mat_print ( m, 11, r, "  R:" );
  delete [] r;

  return;
}

