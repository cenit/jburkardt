/*
  AUTHOR: Reinhard Resch <r.resch@secop.com>
  Copyright (C) 2016(-2016) all rights reserved.

  Licensing:

  This code is distributed under the GNU LGPL license. 
*/

#include <exception>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <ctime>

using namespace std;

#include <octave/oct.h>
#include <dSparse.h>

#include "hb_io.hpp"

DEFUN_DLD(hb_file_read, args, nargout, "[A] = hb_file_read(filename)\n")
{
    octave_value_list retval;
	
    int nargin = args.length();

    if ( nargin != 1 )
    {
        print_usage();
        return retval;
    }

    if (!args(0).is_string())
    {
        error("filename must be a string");
        return retval;
    }

    const string filename(args(0).string_value());
    ifstream input(filename.c_str());

    if (!input.good())
    {
        error("failed to open file %s", filename.c_str());
        return retval;
    }
    
    int *colptr = NULL;
    double *exact = NULL;
    double *guess = NULL;
    int indcrd;
    char *indfmt = NULL;
    char *key = NULL;
    char *mxtype = NULL;
    int ncol;
    int neltvl;
    int nnzero;
    int nrhs;
    int nrhsix;
    int nrow;
    int ptrcrd;
    char *ptrfmt = NULL;
    int rhscrd;
    char *rhsfmt = NULL;
    int *rhsind = NULL;
    int *rhsptr = NULL;
    char *rhstyp = NULL;
    double *rhsval = NULL;
    double *rhsvec = NULL;
    int *rowind = NULL;
    char *title = NULL;
    int totcrd;
    int valcrd;
    char *valfmt = NULL;
    double *values = NULL;

    try
    {
        hb_io::hb_file_read ( input, &title, &key, &totcrd, &ptrcrd, &indcrd, 
                              &valcrd, &rhscrd, &mxtype, &nrow, &ncol, &nnzero, &neltvl, 
                              &ptrfmt, &indfmt, &valfmt, &rhsfmt, &rhstyp, &nrhs, &nrhsix, 
                              &colptr, &rowind, &values, &rhsval, &rhsptr, &rhsind, &rhsvec, 
                              &guess, &exact );

        SparseMatrix A(nrow, ncol, nnzero);

        for (octave_idx_type j = 1; j <= ncol; ++j)
        {
            for (octave_idx_type i = colptr[j - 1]; i <= colptr[j] - 1; ++i)
            {
                A(rowind[i - 1] - 1, j - 1) = values[i - 1];
            }
        }

        retval.append(A);
    }
    catch (const exception& err)
    {    
        error("exception in hb_file_read: %s", err.what());
    }

    input.close ( );

    if ( colptr )
    {
        delete [] colptr;
    }
    if ( exact )
    {
        delete [] exact;
    }
    if ( guess )
    {
        delete [] guess;
    }
    if ( rhsind )
    {
        delete [] rhsind;
    }
    if ( rhsptr )
    {
        delete [] rhsptr;
    }
    if ( rhsval )
    {
        delete [] rhsval;
    }
    if ( rhsvec )
    {
        delete [] rhsvec;
    }
    if ( rowind )
    {
        delete [] rowind;
    }
    if ( values )
    {
        delete [] values;
    }
    
    return retval;
}
