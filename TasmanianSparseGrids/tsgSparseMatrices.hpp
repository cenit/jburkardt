/*
 * Code Author: Drayton Munster, Jul 2013
 *
 * Copyright (C) 2013  Drayton Munster
 *
 * This file is part of
 * Toolkit for Adaptive Stochastic Modeling And Non-Intrusive Approximation
 *              a.k.a. TASMANIAN
 *
 * TASMANIAN is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * TASMANIAN is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with TASMANIAN.  If not, see <http://www.gnu.org/licenses/>
 *
 */

#ifndef TSGSPARSEMATRICES_HPP_
#define TSGSPARSEMATRICES_HPP_

#include "tsgHelperFunctions.hpp"
#include <list>
#include <vector>

using TasGrid::twrite;
using TasGrid::tread;
using TasGrid::tzero;
using TasGrid::tcopy;

namespace TasSparse {

enum TsgSparseSorting{
	unsorted,
	csc_sort,
	csr_sort
};

enum TsgSparseType{
	coo,
	csc,
	csr,
	none
};

enum TsgCgStatus{
	converged,
	max_iter_reached
};

// (I,J,V) triplet used to represent a sparse matrix entry where A[i,j] += v.
typedef struct COO_Triplet {
	unsigned int i;
	unsigned int j;
	double v;
	inline bool operator==(COO_Triplet &other) const{
		return (i == other.i) && (j == other.j);
	}
} COO_Triplet;

// Sparse matrix represented by above triplets.
class TsgSparseCOO {
public:
	TsgSparseCOO();
	TsgSparseCOO(int m, int n);
//#ifdef _TSG_INTERNAL_TESTS
//	TsgSparseCOO(const char *filename);
//#endif
	~TsgSparseCOO();

	const static double DROP_TOL = 1e-14;

	void addPoint(unsigned int i, unsigned int j, double v);
	void clear();
	int getNumRows();
	int getNumCols();
	void combine(TsgSparseCOO &m);
	friend class TsgSparseCSC;
	friend class TsgSparseCSR;

//#ifndef _TSG_INTERNAL_TESTS
protected:
//#endif
	std::list<COO_Triplet> values;
	static bool csrComp(COO_Triplet a, COO_Triplet b);
	static bool cscComp(COO_Triplet a, COO_Triplet b);
	void sort(TsgSparseSorting type);
	void coalesce();
	int m, n, nnz;
private:
	TsgSparseSorting sorted;

}; // End TsgSparseCOO

// Base class used to implement sparse matrices capable of matrix-vector (and thus CG-like)
// methods.
class TsgSparseMatrix{
public:
	virtual void matvec(const double* __restrict x, double* __restrict y, bool transpose = false) const = 0;
	virtual ~TsgSparseMatrix(){};
	virtual TsgSparseMatrix* transpose(bool copy = false) const = 0;
	virtual void write( std::ofstream &ofs ) const = 0;
	virtual bool read( std::ifstream &ifs ) = 0;
	int getNumRows(){return m;};
	int getNumCols(){return n;};
	int getNumNonzero(){return nnz;};
	static TsgSparseMatrix* read_generic( std::ifstream &ifs );
	TsgCgStatus cg(const double* __restrict b, double* __restrict x,
			const int max_iter, const double tol = 1e-6) const;
	TsgCgStatus cga(const double* __restrict b, double* __restrict x,
				const int max_iter, const double tol = 1e-6) const;

protected:
	int m;
	int n;
	int nnz;
};

// Child class of SparseMatrix where column information has been compressed to save space.
// For a MxN sparse matrix with nnz entries, uses 2*nnz + n + 1 memory locations.
class TsgSparseCSC : public TsgSparseMatrix{
public:
	TsgSparseCSC();
	TsgSparseCSC(TsgSparseCOO &M);
	TsgSparseMatrix* transpose(bool copy = false) const;
	~TsgSparseCSC();
	void write(std::ofstream &ofs) const;
	bool read(std::ifstream &ifs);
	friend class TsgSparseCSR;
	void matvec(const double* __restrict x, double* __restrict y, bool transpose = false) const;
	void clear();
	TsgSparseCSC(int *row_ind, int *col_ptr, double *val,
			int m, int n, int nnz, bool copy = false);

protected:


	int *row_ind;
	int *col_ptr;
	double *val;
	bool delete_on_destruction;
};

// Child class of SparseMatrix where row information has been compressed to save space.
// For a MxN sparse matrix with nnz entries, uses 2*nnz + m + 1 memory locations.
class TsgSparseCSR : public TsgSparseMatrix{
public:
	TsgSparseCSR();
	TsgSparseCSR(TsgSparseCOO &M);
	~TsgSparseCSR();
	TsgSparseMatrix* transpose(bool copy = false) const;
	void write(std::ofstream &ofs) const;
	bool read(std::ifstream &ifs);
	friend class TsgSparseCSC;
	void matvec(const double* __restrict x, double* __restrict y, bool transpose = false) const;
	void clear();

	TsgSparseCSR(int *col_ind, int *row_ptr, double *val,
			int m, int n, int nnz, bool copy = false);


protected:

	int *col_ind;
	int *row_ptr;
	double *val;
	bool delete_on_destruction;
};


// Helper linear algebra routines
double inner_product(const double *x, const double *y, int length );
void axpby(double alpha, double* __restrict x,
		double beta, const double* __restrict y, int length);
double norm(const double *x, const int length, const double type);

} /* namespace TasSparse */
#endif /* TSGSPARSEMATRICES_HPP_ */
