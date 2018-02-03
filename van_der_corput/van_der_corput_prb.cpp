# include <cmath>
# include <cstdlib>
# include <iomanip>
# include <iostream>

using namespace std;

# include "van_der_corput.hpp"

int main ( );
void vdc_test ( );
void vdc_inverse_test ( );
void vdc_sequence_test ( );
void vdc_base_test ( );

//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    VAN_DER_CORPUT_TEST tests the VAN_DER_CORPUT library.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    10 August 2016
//
//  Author:
//
//    John Burkardt
//
{
  timestamp ( );
  cout << "\n";
  cout << "VAN_DER_CORPUT_TEST\n";
  cout << "  C++ version\n";
  cout << "  Test the VAN_DER_CORPUT library.\n";

  vdc_test ( );
  vdc_inverse_test ( );
  vdc_sequence_test ( );
  vdc_base_test ( );
//
//  Terminate.
//
  cout << "\n";
  cout << "VAN_DER_CORPUT_TEST\n";
  cout << "  Normal end of execution.\n";
  cout << "\n";
  timestamp ( );

  return 0;
}
//****************************************************************************80

void vdc_base_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    VDC_BASE_TEST tests VDC_BASE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    10 August 2016
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  double r2;
  double r3;
  double r5;

  cout << "\n";
  cout << "VDC_BASE_TEST\n";
  cout << "  VDC_BASE returns the I-th element of a van der Corput\n";
  cout << "  sequence in base B.\n";
  cout << "\n";
  cout << "    I          VDC_BASE(I,2)   VDC_BASE(I,3)   VDC_BASE(I,5)\n";
  cout << "\n";

  for ( i = -10; i <= 10; i++ )
  {
    r2 = vdc_base ( i, 2 );
    r3 = vdc_base ( i, 3 );
    r5 = vdc_base ( i, 5 );
    cout << "  " << setw(3) << i
         << "        " << setw(14) << r2
         << "  " << setw(14) << r3
         << "  " << setw(14) << r5 << "\n";
  }

  return;
}
//****************************************************************************80

void vdc_inverse_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    VDC_INVERSE_TEST tests VDC_INVERSE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    10 August 2016
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  int i2;
  double r;

  cout << "\n";
  cout << "VDC_INVERSE_TEST\n";
  cout << "  VDC_INVERSE inverts an element of a van der Corput sequence.\n";
  cout << "\n";
  cout << "    I        R=VDC(I)  VDC_INVERSE(R)\n";
  cout << "\n";

  for ( i = -10; i <= 10; i++ )
  {
    r = vdc ( i );
    i2 = vdc_inverse ( r );
    cout << "  " << setw(3) << i
         << "  " << setw(14) << r
         << "  " << setw(3) << i2 << "\n";
  }

  return;
}
//****************************************************************************80

void vdc_sequence_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    VDC_SEQUENCE_TEST tests VDC_SEQUENCE.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    10 August 2016
//
//  Author:
//
//    John Burkardt
//
{
  int i1;
  int i2;
  int n;
  double *r;

  cout << "\n";
  cout << "VDC_SEQUENCE_TEST\n";
  cout << "  VDC_SEQUENCE returns elements I1 through I2 of\n";
  cout << "  a van der Corput sequence.\n";

  i1 = 7;
  i2 = 7;
  n = abs ( i2 - i1 ) + 1;
  r = vdc_sequence ( i1, i2 );
  cout << "\n";
  r8vec_transpose_print ( n, r, "  R=VDC_SEQUENCE(  7,  7):" );
  delete [] r;

  i1 = 0;
  i2 = 8;
  n = abs ( i2 - i1 ) + 1;
  r = vdc_sequence ( i1, i2 );
  cout << "\n";
  r8vec_transpose_print ( n, r, "  R=VDC_SEQUENCE(  0,  8):" );
  delete [] r;

  i1 = 8;
  i2 = 0;
  n = abs ( i2 - i1 ) + 1;
  r = vdc_sequence ( i1, i2 );
  cout << "\n";
  r8vec_transpose_print ( n, r, "  R=VDC_SEQUENCE(  8,  0):" );
  delete [] r;

  i1 = -3;
  i2 = +5;
  n = abs ( i2 - i1 ) + 1;
  r = vdc_sequence ( i1, i2 );
  cout << "\n";
  r8vec_transpose_print ( n, r, "  R=VDC_SEQUENCE( -3,  5):" );
  delete [] r;

  i1 = 100;
  i2 = 105;
  n = abs ( i2 - i1 ) + 1;
  r = vdc_sequence ( i1, i2 );
  cout << "\n";
  r8vec_transpose_print ( n, r, "  R=VDC_SEQUENCE(100,105):" );
  delete [] r;

  return;
}
//****************************************************************************80

void vdc_test ( )

//****************************************************************************80
//
//  Purpose:
//
//    VDC_TEST tests VDC.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    10 August 2016
//
//  Author:
//
//    John Burkardt
//
{
  int i;
  double r;

  cout << "\n";
  cout << "VDC_TEST\n";
  cout << "  VDC returns the I-th element of a van der Corput sequence.\n";
  cout << "\n";
  cout << "    I          VDC(I)\n";
  cout << "\n";

  for ( i = -10; i <= 10; i++  )
  {
    r = vdc ( i );
    cout << "  " << setw(3) << i
         << "  " << setw(14) << r << "\n";
  }

  return;
}
