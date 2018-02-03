//  hb_file.hpp
//
//  Purpose:
//
//    HB_FILE.hpp contains definitions for the variables that make up an HBSMC file.
//
//  Discussion:
//
//    In particular, the routine HB_FILE_READ does not return information
//    through its argument list, but instead, stores a copy of all the
//    HBSMC data in this module.  In this way, a data structure of any
//    size can be read, and shared with the user calling routine.
//
//    A routine that wants to access this information must include the
//    statement "use hb_file_module".  To load data into the module,
//    call HB_FILE_READ.  
//
//  Modified:
//
//    13 April 2004
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    Iain Duff, Roger Grimes, John Lewis,
//    User's Guide for the Harwell-Boeing Sparse Matrix Collection,
//    October 1992.
//
//  Parameters:
//
//    Local, char *TITLE, a 72 character title for the matrix.
//
//    Local, char *KEY, an 8 character identifier for the matrix.
//
//    Local, int TOTCRD, the total number of lines of data.
//
//    Local, int PTRCRD, the number of input lines for pointers.
//
//    Local, int INDCRD, the number of input lines for row indices.
//
//    Local, int VALCRD, the number of input lines for numerical values.
//
//    Local, int RHSCRD, the number of input lines for right hand sides.
//
//    Local, char *MXTYPE, the 3 character matrix type.
//    First character is R for Real, C for complex, P for pattern only.
//    Second character is S for symmetric, U for unsymmetric, H for
//      Hermitian, Z for skew symmetric, R for rectangular.
//    Third character is A for assembled and E for unassembled
//      finite element matrices.
//
//    Local, int NROW, the number of rows or variables.
//
//    Local, int NCOL, the number of columns or elements.
//
//    Local, int NNZERO.  In the case of assembled sparse matrices,
//    this is the number of nonzeroes.  In the case of unassembled finite
//    element matrices, in which the right hand side vectors are also
//    stored as unassembled finite element vectors, this is the total
//    number of entries in a single unassembled right hand side vector.
//
//    Local, int NELTVL, the number of finite element matrix entries,
//    set to 0 in the case of assembled matrices.
//
//    Local, char *PTRFMT, the 16 character format for reading pointers.
//
//    Local, char *INDFMT, the 16 character format for reading indices.
//
//    Local, char *VALFMT, the 20 character format for reading values.
//
//    Local, char *RHSFMT, the 20 character format for reading values
//    of the right hand side.
//
//    Local, char *RHSTYP, the 3 character right hand side type.
//    First character is F for full storage or M for same as matrix.
//    Second character is G if starting "guess" vectors are supplied.
//    Third character is X if exact solution vectors are supplied.
//    Ignored if NRHS = 0.
//
//    Local, int NRHS, the number of right hand sides.
//
//    Local, int NRHSIX, the number of row indices (set to 0
//    in the case of unassembled matrices.)  Ignored if NRHS = 0.
//
//    Local, int COLPTR[NCOL+1], COLPTR[I-1] points to the location of
//    the first entry of column I in the sparse matrix structure.
//
//    If MXTYPE[2] == 'A':
//
//      Local, int ROWIND[NNZERO], the row index of each item.
//
//      Local, float VALUES[NNZERO], the nonzero values of the matrix.
//
//    If MXTYPE[2] == 'E':
//
//      Local, int ROWIND[NELTVL], the row index of each item.
//
//      Local, float VALUES[NELTVL], the nonzero values of the matrix.
//
//    If RHSTYP[0] == 'F':
//
//      Local, float RHSVAL[NROW*NRHS], contains NRHS dense right hand
//      side vectors.
//
//      Local, int RHSPTR[], is not used.
//
//      Local, int RHSIND[], is not used.
//
//      Local, float RHSVEC[], is not used.
//
//    If RHSTYP[0] = 'M' and MXTYPE[2] = 'A':
//
//      Local, float RHSVAL[], is not used.
//
//      Local, int RHSPTR[NRHS+1], RHSPTR(I) points to the location of
//      the first entry of right hand side I in the sparse right hand
//      side vector.
//
//      Local, int RHSIND[NRHSIX], indicates, for each entry of
//      RHSVEC, the corresponding row index.
//
//      Local, float RHSVEC[NRHSIX], contains the value of the right hand
//      side entries.
//
//    If RHSTYP[0] = 'M' and MXTYPE[2] = 'E':
//
//      Local, float RHSVAL[NNZERO*NRHS], contains NRHS unassembled
//      finite element vector right hand sides.
//
//      Local, int RHSPTR[], is not used.
//
//      Local, int RHSIND[], is not used.
//
//      Local, float RHSVEC[], is not used.
//
//    Local, float GUESS[NROW*NRHS], the starting guess vectors.
//
//    Local, float EXACT[NROW*NRHS], the exact solution vectors.
//
  int *colptr;
  float *exact;
  float *guess;
  int indcrd;
  char *indfmt;
  char *key;
  char *mxtype;
  int ncol;
  int neltvl;
  int nnzero;
  int nrhs;
  int nrhsix;
  int nrow;
  int ptrcrd;
  char *ptrfmt;
  int rhscrd;
  ch *rhsfmt;
  int *rhsind;
  int *rhsptr;
  char *rhstyp;
  float *rhsval;
  float *rhsvec;
  int rowind;
  char *title;
  int totcrd;
  int valcrd;
  char *valfmt;
  float *values;
