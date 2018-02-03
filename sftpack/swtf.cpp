void swtf ( int n, double a[] )
{
  double *b;
  double h0 = ( 1.0 + sqrt ( 3.0 ) ) / sqrt ( 32.0 );
  double h1 = ( 3.0 + sqrt ( 3.0 ) ) / sqrt ( 32.0 );
  double h2 = ( 3.0 - sqrt ( 3.0 ) ) / sqrt ( 32.0 );
  double h3 = ( 1.0 - sqrt ( 3.0 ) ) / sqrt ( 32.0 );
  int i;
  int j;
  int nhalf;

  if ( 4 <= n )
  {
    nhalf = n / 2;
    b = new double[n];
    i = 0;
    for ( j = 0; j < n - 3; j = j + 2 )
    {
      b[i]       = h0 * a[j] + h1 * a[j+1] + h2 * a[j+2] + h3 * a[j+3];
      b[i+nhalf] = h3 * a[j] - h2 * a[j+1] + h1 * a[j+2] - h0 * a[j+3];
      i++;
    }
    b[i]       = h0 * a[n-2] + h1 * a[n-1] + h2 * a[0] + h3 * a[1];
    b[i+nhalf] = h3 * a[n-2] - h2 * a[n-1] + h1 * a[0] - h0 * a[1];
    for ( i = 0; i < n; i++ )
    {
      a[i] = b[i];
    }
    delete [] b;
  }
  return
}
void swtb ( int n, double a[] )
{
  double *b;
  double h0 = ( 1.0 + sqrt ( 3.0 ) ) / sqrt ( 32.0 );
  double h1 = ( 3.0 + sqrt ( 3.0 ) ) / sqrt ( 32.0 );
  double h2 = ( 3.0 - sqrt ( 3.0 ) ) / sqrt ( 32.0 );
  double h3 = ( 1.0 - sqrt ( 3.0 ) ) / sqrt ( 32.0 );
  int i;
  int j;
  int nhalf;

  if ( 4 <= n )
  {
    nhalf = n / 2;
    b = new double[n];

    b[0] = h0 * a[n-2] + h1 * a[n-1] + h2 * a[0] + h3 * a[1];
    b[1] = h3 * a[n-2] - h2 * a[n-1] + h1 * a[0] - h0 * a[1];

    j = 2;
    for ( i = 0; i < half - 1; i++ )
    {
      j++;
      b[j] = h3 * a[i] - h2 * a[i+nhalf] + h1 * a[i+1] - h0 * a[i+nhalf+1];
      j++;
      b[j] = h0 * a[i] + h1 * a[i+nhalf] + h2 * a[i+1] + h3 * a[i+nhalf+1];
    }

    for ( i = 0; i < n; i++ )
    {
      a[i] = b[i];
    }
  }
  return
}