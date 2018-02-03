# include <cmath>
# include <cstdlib>
# include <iomanip>
# include <iostream>

using namespace std;

# include "halton.hpp"

int main ( );
void halton_test ( );
void halton_sequence_test ( );
void halton_inverse_test ( );
void halton_base_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for HALTON_PRB.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    19 August 2016
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "HALTON_PRB:\n";
  cout << "  C++ version\n";
  cout << "  Test the HALTON library\n";

  halton_test ( );
  halton_sequence_test ( );
  halton_inverse_test ( );
  halton_base_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "HALTON_PRB\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void halton_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    HALTON_TEST tests HALTON.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    19 August 2016
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int j;
  int m;
  double *r;

  cout << "\n";
  cout << "HALTON_TEST\n";
  cout << "  HALTON returns the I-th element of an M-dimensional\n";
  cout << "  Halton sequence.\n";
  cout << "\n";
  cout << "    I          HALTON(I)\n";

  for ( m = 1; m <= 3; m++ )
  {
    cout << "\n";
    cout << "  Use M = " << m << "\n";
    cout << "\n";
    for ( i = 0; i <= 10; i++ )
    {
      r =  halton ( i, m );
      cout << "  " << setw(3) << i;
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

void halton_base_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    HALTON_BASE_TEST tests HALTON_BASE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    19 August 2016
//
//  Author:
//
//    John Burkardt
//
{
  int b1[3] = { 2, 3, 5 };
  int b2[3] = { 3, 10, 2 };
  int i;
  int j;
  int m;
  double *r;

  cout << "\n";
  cout << "HALTON_BASE_TEST\n";
  cout << "  HALTON_BASE returns the I-th element of an M-dimensional\n";
  cout << "  Halton sequence, using user-specified bases.\n";

  m = 3;
  cout << "\n";
  cout << "  M = " << m << "\n";
  cout << "  B:";
  for ( j = 0; j < m; j++ )
  {
    cout << "  " << setw(14) << b1[j];
  }
  cout << "\n";
  cout << "\n";
  for ( i = 0; i <= 10; i++ )
  {
    r = halton_base ( i, m, b1 );
    cout << "  " << setw(3) << i;
    for ( j = 0; j < m; j++ )
    {
      cout << "  " << setw(14) << r[j];
    }
    cout << "\n";
    delete [] r;
  }

  m = 3;
  cout << "\n";
  cout << "  M = " << m << "\n";
  cout << "  B:";
  for ( j = 0; j < m; j++ )
  {
    cout << "  " << setw(14) << b2[j];
  }
  cout << "\n";
  cout << "\n";
  for ( i = 0; i <= 10; i++ )
  {
    r = halton_base ( i, m, b2 );
    cout << "  " << setw(3) << i;
    for ( j = 0; j < m; j++ )
    {
      cout << "  " << setw(14) << r[j];
    }
    cout << "\n";
    delete [] r;
  }

  return;
}
//****************************************************************************80

void halton_inverse_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    HALTON_INVERSE_TEST tests HALTON_INVERSE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    19 August 2016
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
  double *r;

  cout << "\n";
  cout << "HALTON_INVERSE_TEST\n";
  cout << "  HALTON_INVERSE inverts an element of a Halton sequence.\n";
  cout << "\n";
  cout << "    I        R=HALTON(I,3)  HALTON_INVERSE(R,3)\n";
  cout << "\n";

  m = 3;

  for ( i = 0; i <= 10; i++ )
  {
    r = halton ( i, m );
    i2 = halton_inverse ( r, m );
    cout << "  " << setw(3) << i;
    for ( j = 0; j < m; j++ )
    {
      cout << "  " << setw(14) << r[j];
    }
    cout << "  " << setw(3) << i2 << "\n";
    delete [] r;
  }

  return;
}
//****************************************************************************80

void halton_sequence_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    HALTON_SEQUENCE_TEST tests HALTON_SEQUENCE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    19 August 2016
//
//  Author:
//
//    John Burkardt
//
{
  int m;
  double *r;

  cout << "\n";
  cout << "HALTON_SEQUENCE_TEST\n";
  cout << "  HALTON_SEQUENCE returns the elements I1 through I2\n";
  cout << "  of an M-dimensional Halton sequence.\n";

  for ( m = 1; m <= 3; m++ )
  {
    cout << "\n";
    cout << "  HALTON_SEQUENCE(0,10," << m << ",R):\n";
    r = halton_sequence ( 0, 10, m );
    r8mat_print ( m, 11, r, "  R:" );
    delete [] r;
  }

  m = 3;
  cout << "\n";
  cout << "  HALTON_SEQUENCE(10,0," << m << ",R):\n";
  r = halton_sequence ( 10, 0, m );
  r8mat_print ( m, 11, r, "  R:" );
  delete [] r;

  return;
}

