//*******************************************
//   Copyright (C) 2014 by Ignace Bogaert   *
//*******************************************

// The main features of this software are:
// - Speed: due to the simple formulas and the O(1) complexity computation of individual Gauss-Legendre 
//   quadrature nodes and weights. This makes it compatible with parallel computing paradigms.
// - Accuracy: the error on the nodes and weights is within a few ulps (see the paper for details).

// Disclaimer:
// THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESSED OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED 
// WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE REGENTS OR 
// CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, 
// BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
// HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR 
// OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

# include <iostream>
# include <cmath>
# include <ctime>

# include "fastgl.hpp"

int main ( int argc, char **argv );
void timestamp ( );

//****************************************************************************80

int main ( int argc, char **argv ) 
{
//****************************************************************************80
//
//  Purpose:
//
//    MAIN is the main program for FASTGL_PRB.
//
//  Licensing:
//
//    This code is distributed under the BSD license. 
//
//  Modified:
//
//    22 December 2015
//
//  Author:
//
//    Ignace Bogaert
//
//  Reference:
//
//    Ignace Bogaert,
//    Iteration-free computation of Gauss-Legendre quadrature nodes and weights,
//    SIAM Journal on Scientific Computing,
//    Volume 36, Number 3, 2014, pages A1008-1026.
//
  timestamp ( );
  std::cout << "\n";
  std::cout << "FASTGL_PRB\n";
  std::cout << "  C++ version.\n";
  std::cout << "  Test the FASTGL library.\n";
//
// Some information on the origin of this code.
//
  std::cout << "\n";
  std::cout << "This program shows usage examples for the Gauss-Legendre quadrature rules, computed with fastgl::GLPair(l, k)" << std::endl;
  std::cout << "\t--> l is the number of nodes in the rule, k is the index of the node that will be computed." << std::endl << std::endl;
  std::cout << "The computation of the nodes and weights is based on the following paper:" << std::endl;
  std::cout << "\tIgnace Bogaert, 'Iteration-Free Computation of Gauss-Legendre Quadrature Nodes and Weights'," << std::endl;
  std::cout << "\tto appear in the SIAM Journal of Scientific Computing." << std::endl << std::endl;
  std::cout << "The main features of this software are:" << std::endl;
  std::cout << "\t- Speed: due to the simple formulas and the O(1) complexity computation of individual" << std::endl;
  std::cout << "\t  Gauss-Legendre quadrature nodes and weights. This also makes it perfectly compatible" << std::endl;
  std::cout << "\t  with parallel computing paradigms such as multithreading and MPI." << std::endl;
  std::cout << "\t- Accuracy: the error on the nodes and weights is within a few ulps (see the paper for details)." << std::endl;
//
//  Test the numerical integration of exp(x) over the range [-1,1]
//  for varying number of Gauss-Legendre quadrature nodes l.
//
  std::cout << "\n";
  std::cout << "First test-case: int(exp(x), x = -1..1):" << std::endl;
  std::cout << "\n";
  std::cout.precision ( 16 );

  for(int l = 5 ; l <= 9 ; ++l)
  {
    double Res = 0.0;
    for ( int k = 1 ; k <= l ; ++k )
    {
      fastgl::QuadPair p = fastgl::GLPair ( l, k );
      Res += p.weight * exp ( p.x() );
    }
    std::cout << "Gauss-Legendre " << l << "-node result = " << Res << std::endl;
  }
  std::cout << "Exact result                 = " << exp(1.0)-exp(-1.0) << std::endl;
//	
//  Test the numerical integration of cos(1000 x) over the range [-1,1]
//  for varying number of Gauss-Legendre quadrature nodes l.
//  The fact that only twelve digits of accuracy are obtained is due to the 
//  condition number of the summation.
//
  std::cout << "\n";
  std::cout << "Second test-case: int(cos(1000x), x = -1..1):" << std::endl;
  std::cout << "\n";
  for ( int l = 500 ; l <= 600 ; l += 20 )
  {
    double Res = 0.0;
    for(int k = 1 ; k <= l ; ++k)
    {
      fastgl::QuadPair p = fastgl::GLPair ( l, k );
      Res += p.weight * cos ( 1000.0 * p.x() );
    }
    std::cout << "Gauss-Legendre " << l << "-node result = " << Res << std::endl;
  }
  std::cout << "Exact result                   = " << 0.002 * sin ( 1000.0 ) << std::endl;
//	
//  Test the numerical integration of ln(x) over the range [0,1]
//  Normally, one would not use Gauss-Legendre quadrature for this,
//  but for the sake of having an example with l > 100, this is included.
//
  std::cout << "\n";
  std::cout << "Third test-case: int(ln(x), x = 0..1):" << std::endl;
  std::cout << "\n";
  int l = 1;
  for ( int p = 0 ; p <= 6 ; ++p )
  {
    double Res = 0.0;
    for ( int k = 1 ; k <= l ; ++k )
    {
      fastgl::QuadPair p = fastgl::GLPair ( l, k );
      Res += 0.5 * p.weight * std::log ( 0.5 * ( p.x() + 1.0 ) );
    }
    std::cout << "Gauss-Legendre " << l << "-node result = " << Res << std::endl;
    l *= 10;
  }
  std::cout << "Exact result                       = " << -1.0 << std::endl;
//
//  Terminate.
//
  std::cout << "\n";
  std::cout << "FASTGL_PRB:\n";
  std::cout << "  Normal end of execution.\n";
  std::cout << "\n";
  timestamp ( );
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
