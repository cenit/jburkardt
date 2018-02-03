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

#include "tsgSparseMatrices.hpp"

namespace TasSparse {

double inner_product(const double *x, const double *y, int length){
	/*
	 * Computes the inner product of x and y, vectors of dimension "length".
	 */
	double ip = 0.;

	#pragma omp parallel for schedule(static) reduction(+:ip)
	for(int i=0; i < length; i++){
		ip += x[i] * y[i];
	}

	return ip;
}

void axpby(double alpha, double* __restrict x,
		double beta, const double* __restrict y, int length){
	/*
	 * Calculates x <- alpha*x + beta*y where x,y are vectors of dimension "length".
	 */
	#pragma omp parallel for
	for(int i = 0; i < length; i++){
		x[i] = alpha * x[i] + beta * y[i];
	}
}

double norm(const double *x, const int length, const double type){
	/*
	 * Computes the type-norm of x. Use type == 0. to denote inf-norm.
	 */
	double norm = 0.;

	if(type == 1.){
		// 1 Norm
                #pragma omp parallel for reduction(+:norm)
		for(int i = 0; i < length; i++){
			norm += fabs(x[i]);
		}
	}
	else if(type == 0.){
		// Inf-norm
		// Nasty work-around for no reduction max/min clause in openmp for c++.
		double lp;
		#pragma omp paralel private(lp)
		{
			lp = 0.;
			#pragma omp for
			for(int i = 0; i < length; i++){
				double tmp = fabs(x[i]);
				if(tmp > lp){
					lp = tmp;
				}
			}
			#pragma omp critical
			{
				if(lp > norm){
					norm = lp;
				}
			}
		}
	}else{
		// General p-norm
		#pragma omp parallel for reduction(+:norm)
		for(int i = 0; i < length; i++){
			norm += pow(x[i], type);
		}
		norm = pow(norm, 1. / type);
	}

	return norm;
}

/* BEGIN TsgSparseCOO */

TsgSparseCOO::TsgSparseCOO() : m(0), n(0), sorted(unsorted), nnz(0){}

TsgSparseCOO::TsgSparseCOO(int m, int n) : sorted(unsorted) {
	this->m = m;
	this->n = n;
	nnz = 0;
}

//#ifdef _TSG_INTERNAL_TESTS
//TsgSparseCOO::TsgSparseCOO(const char *filename){
//	std::ifstream file(filename, std::ifstream::in);
//	file >> m;
//	file >> n;
//	file >> nnz;
//
//	sorted = unsorted;
//
//	// Read in the triplets
//	for(int i = 0; i < nnz; i++){
//		COO_Triplet trip;
//		file >> trip.i;
//		file >> trip.j;
//		file >> trip.v;
//		values.push_back(trip);
//	}
//
//	// ifstream automatically closed when destroyed
//}
//#endif

TsgSparseCOO::~TsgSparseCOO() {
	clear();
}

void TsgSparseCOO::combine(TsgSparseCOO &mat){
	values.splice(values.end(), mat.values);
	nnz += mat.nnz;
	mat.clear();
}

void TsgSparseCOO::clear(){
	sorted = unsorted;
	values.clear();
	nnz = 0;
}

bool TsgSparseCOO::csrComp(const COO_Triplet a, const COO_Triplet b){
	return (a.i < b.i) || (a.i == b.i && a.j < b.j);
}

bool TsgSparseCOO::cscComp(const COO_Triplet a, const COO_Triplet b){
	return (a.j < b.j) || (a.j == b.j && a.i < b.i);
}

void TsgSparseCOO::addPoint(unsigned int i, unsigned int j, double v){
	/*
	 * Adds the given point to the sparse matrix. Note: assumes the entry is inside the
	 * bounds defined in the constructor (i.e. i < m, j < n). If this assumption is
	 * violated, conversion routines will result in undefined behavior (likely segfault).
	 */
	sorted = unsorted;
	COO_Triplet t;
	t.i = i;
	t.j = j;
	t.v = v;
	nnz++;
	values.push_back(t);
}

void TsgSparseCOO::sort(TsgSparseSorting type){
	/* Already sorted or no sort specified*/
	if (sorted == type || type == unsorted) return;

	values.sort((type == csc_sort) ? cscComp : csrComp);
	sorted = type;
}


void TsgSparseCOO::coalesce(){
	/* Assumes any equivalent entries are adjacent e.g. sorted list */

//	If only list would pass references rather than copies.
//	/* Combines equivalent elements */
//	values.unique(coalesce_helper);
//
//	/* Removes elements below DROP_TOL */
//	values.remove_if(near_zero);


	std::list<COO_Triplet>::iterator it = values.begin();
	it++;
	std::list<COO_Triplet>::iterator old_elem = values.begin();

	while(it != values.end()){
		/* Coalesce duplicate elements */
		if (*old_elem == *it){
			old_elem->v += it->v;
			it = values.erase(it); /* Removes the list element and advances the iter */
			nnz--;
		} else{
			/* Drop elements below DROP_TOL */
			if (fabs(old_elem->v) < DROP_TOL){
				old_elem = values.erase(old_elem);
				nnz--;
			}else{
				old_elem++;
			}
			it++;
		}
	}

}

/* END TsgSparseCOO */

/* BEGIN TsgSparseCSR */

TsgSparseCSR::TsgSparseCSR() : col_ind(0), row_ptr(0), val(0), delete_on_destruction(false){
}

TsgSparseCSR::TsgSparseCSR(TsgSparseCOO &M){
	/*
	 * Constructs a sparse matrix in CSR (compressed sparse row / compressed row storage)
	 * format given a sparse matrix in COO (coordinate) format.
	 */

	M.sort(csr_sort);
	M.coalesce();

	int length = M.nnz;
	m = M.m;
	n = M.n;
	nnz = length;
	val = new double[length];
	col_ind = new int[length];
	row_ptr = new int[m+1];

	int current_row = -1;


	std::list<COO_Triplet>::const_iterator it = M.values.begin();
	for(int i = 0; i < length; i++, it++){
		COO_Triplet current = *it;
		while (current.i != current_row){
			/* Either denote the end of the row or add empty rows until we've caught up */
			current_row++;
			row_ptr[current_row] = i;
		}
		col_ind[i] = current.j;
		val[i] = current.v;
	}
	row_ptr[current_row+1] = length;
	delete_on_destruction = true;
}

TsgSparseCSR::TsgSparseCSR(int *col, int *row, double *v,
		int m, int n, int nnz, bool copy /*= false*/){
	/*
	 * Creates a CSR matrix given the column indices, row pointers, and values. If copy is
	 * true, then new memory will be allocated and the data copied. Otherwise, only the
	 * appropriate pointers are set. NOTE: If copy is false, user is responsible for
	 * ensuring that row, col, and v are not freed while this matrix is still in use.
	 */
	if(copy){
		val = new double[nnz];
		tcopy(nnz, v, val);

		col_ind = new int[nnz];
		tcopy(nnz, col, col_ind);

		row_ptr = new int[m+1];
		tcopy(m+1, row, row_ptr);

		delete_on_destruction = true;

	}else{
		col_ind = col;
		row_ptr = row;
		val = v;
		delete_on_destruction = false;
	}
	this->m = m;
	this->n = n;
	this->nnz = nnz;
}

TsgSparseCSR::~TsgSparseCSR(){
	clear();
}

void TsgSparseCSR::clear(){
	if(delete_on_destruction){
		delete[] val;
		delete[] col_ind;
		delete[] row_ptr;
	}
	val = 0;
	col_ind = 0;
	row_ptr = 0;
	m = 0; n = 0; nnz = 0; delete_on_destruction = false;
}

void TsgSparseCSR::write(std::ofstream &ofs) const{
	ofs << "m: " << m << endl;
	ofs << "n: " << n << endl;
	ofs << "nnz: " << nnz << endl;
	ofs << "initialized: ";
	if(val != 0 && col_ind != 0 && row_ptr != 0){
		ofs << "yes" << endl;

		ofs << "val:" << endl;
		TasGrid::twrite(nnz, val, ofs);

		ofs << "col_ind:" << endl;
		TasGrid::twrite(nnz, col_ind, ofs);

		ofs << "row_ptr:" << endl;
		TasGrid::twrite(m+1, row_ptr, ofs);
	}
	else{
		ofs << "no" << endl;
	}
}

bool TsgSparseCSR::read(std::ifstream &ifs){
	clear();
	std::string T;

	ifs >> T; if ( !(T.compare( "m:" ) == 0) ){
		cout << "ERROR: Wrong File Format! code CSR 1" << endl;
		ifs.close();
		clear();
		return false;
	}
	ifs >> m;

	ifs >> T; if ( !(T.compare( "n:" ) == 0) ){
		cout << "ERROR: Wrong File Format! code CSR 2" << endl;
		ifs.close();
		clear();
		return false;
	}
	ifs >> n;

	ifs >> T; if ( !(T.compare( "nnz:" ) == 0) ){
		cout << "ERROR: Wrong File Format! code CSR 3" << endl;
		ifs.close();
		clear();
		return false;
	}
	ifs >> nnz;

	ifs >> T; if ( !(T.compare( "initialized:" ) == 0) ){
		cout << "ERROR: Wrong File Format! code CSR 4" << endl;
		ifs.close();
		clear();
		return false;
	}
	ifs >> T;
	if ( T.compare("yes") == 0 ){

		ifs >> T; if ( !(T.compare( "val:" ) == 0) ){
			cout << "ERROR: Wrong File Format! code CSR 5" << endl;
			ifs.close();
			clear();
			return false;
		}
		double *val = new double[nnz];
		TasGrid::tread(nnz, val, ifs);

		ifs >> T; if ( !(T.compare( "col_ind:" ) == 0) ){
			cout << "ERROR: Wrong File Format! code CSR 6" << endl;
			delete[] val;
			ifs.close();
			clear();
			return false;
		}
		int *col_ind = new int[nnz];
		TasGrid::tread(nnz, col_ind, ifs);

		ifs >> T; if ( !(T.compare( "row_ptr:" ) == 0) ){
			cout << "ERROR: Wrong File Format! code CSR 7" << endl;
			delete[] val;
			delete[] col_ind;
			ifs.close();
			clear();
			return false;
		}
		int *row_ptr = new int[m+1];
		TasGrid::tread(m+1, row_ptr, ifs);

		this->val = val;
		this->col_ind = col_ind;
		this->row_ptr = row_ptr;
		delete_on_destruction = true;
	}else{
		clear();
	}
	return true;

}

void TsgSparseCSR::matvec(const double* __restrict x, double* __restrict y,
		bool transpose /*= false */) const{
	/*
	 * Performs y = A * x or y = A^T * x if tranpose is true.
	 * User is responsible for ensuring appropriate bounds for x and y.
	 * Additionally, x and y must refer to distinct, non-overlapping memory locations.
	 */
	if(transpose){
		/* A in CSR format = A^T in CSC format */
		TsgSparseMatrix *mat = this->transpose();
		mat->matvec(x,y);
		delete mat;
	}else{
		/*
		 * Parallelize the loop over each row. Use guided scheduling since each row will
		 * take a different amount of time to complete.
		 */

		#pragma omp parallel for schedule(guided)
		for(int i = 0; i < m; i++){

			int num_elem = row_ptr[i+1] - row_ptr[i];
			int row_start = row_ptr[i];
			for(int j = 0; j < num_elem; j++){
				y[i] += val[row_start+j] * x[col_ind[row_start + j]];
			}
		}
	}
}

TsgSparseMatrix* TsgSparseCSR::transpose(bool copy /* = false */) const{
	return new TsgSparseCSC(col_ind, row_ptr, val, n, m, nnz, copy);
}


/* END TsgSparseCSR */


/* BEGIN TsgSparseCSC */

TsgSparseCSC::TsgSparseCSC() : row_ind(0), col_ptr(0), val(0), delete_on_destruction(false){
}

TsgSparseCSC::TsgSparseCSC(TsgSparseCOO &M){
	/*
	 * Constructs a sparse matrix in CSC (compressed sparse column /
	 * compressed column storage) format given a sparse matrix in COO (coordinate) format.
	 */
	M.sort(csc_sort);
	M.coalesce();
	int length = M.nnz;
	m = M.m;
	n = M.n;
	nnz = length;
	val = new double[length];
	row_ind = new int[length];
	col_ptr = new int[M.n + 1];
	int current_col = -1;

	std::list<COO_Triplet>::const_iterator it = M.values.begin();
	for(int i = 0; i < length; i++, it++){
		COO_Triplet current = *it;
		while (current.j != current_col){
			/* Either denote the end of the row or add empty rows until we've caught up */
			current_col++;
			col_ptr[current_col] = i;
		}
		row_ind[i] = current.i;
		val[i] = current.v;
	}
	col_ptr[current_col+1] = length;
	delete_on_destruction = true;
}

TsgSparseCSC::TsgSparseCSC(int *row, int *col, double *v,
		int m, int n, int nnz, bool copy /* = false */){
	/*
	 * Creates a CSC matrix given the column indices, row pointers, and values. If copy is
	 * true, then new memory will be allocated and the data copied. Otherwise, only the
	 * appropriate pointers are set. NOTE: If copy is false, user is responsible for
	 * ensuring that row, col, and v are not freed while this matrix is still in use.
	 */
	if(copy){
		val = new double[nnz];
		tcopy(nnz, v, val);

		row_ind = new int[nnz];
		tcopy(nnz, row, row_ind);

		col_ptr = new int[n+1];
		tcopy(n+1, col, col_ptr);

		delete_on_destruction = true;
	}
	else{
		col_ptr = col;
		row_ind = row;
		val = v;
		delete_on_destruction = false;
	}
	this->m = m;
	this->n = n;
	this->nnz = nnz;
}

TsgSparseCSC::~TsgSparseCSC(){
	clear();
}

void TsgSparseCSC::clear(){
	if(delete_on_destruction){
		delete[] val;
		delete[] row_ind;
		delete[] col_ptr;
	}
	val = 0;
	row_ind = 0;
	col_ptr = 0;
	m = 0; n = 0; nnz = 0; delete_on_destruction = false;
}

void TsgSparseCSC::write(std::ofstream &ofs) const{
	ofs << "m: " << m << endl;
	ofs << "n: " << n << endl;
	ofs << "nnz: " << nnz << endl;
	ofs << "initialized: ";
	if(val != 0 && row_ind != 0 && col_ptr != 0){
		ofs << "yes" << endl;

		ofs << "val:" << endl;
		TasGrid::twrite(nnz, val, ofs);

		ofs << "row_ind:" << endl;
		TasGrid::twrite(nnz, row_ind, ofs);

		ofs << "col_ptr:" << endl;
		TasGrid::twrite(n+1, col_ptr, ofs);
	}
	else{
		ofs << "no" << endl;
	}
}

bool TsgSparseCSC::read(std::ifstream &ifs){
	clear();
	std::string T;

	ifs >> T; if ( !(T.compare( "m:" ) == 0) ){
		cout << "ERROR: Wrong File Format! code CSC 1" << endl;
		ifs.close();
		clear();
		return false;
	}
	ifs >> m;

	ifs >> T; if ( !(T.compare( "n:" ) == 0) ){
		cout << "ERROR: Wrong File Format! code CSC 2" << endl;
		ifs.close();
		clear();
		return false;
	}
	ifs >> n;

	ifs >> T; if ( !(T.compare( "nnz:" ) == 0) ){
		cout << "ERROR: Wrong File Format! code CSC 3" << endl;
		ifs.close();
		clear();
		return false;
	}
	ifs >> nnz;

	ifs >> T; if ( !(T.compare( "initialized:" ) == 0) ){
		cout << "ERROR: Wrong File Format! code CSC 4" << endl;
		ifs.close();
		clear();
		return false;
	}
	ifs >> T;
	if ( T.compare("yes") == 0 ){

		ifs >> T; if ( !(T.compare( "val:" ) == 0) ){
			cout << "ERROR: Wrong File Format! code CSC 5" << endl;
			ifs.close();
			clear();
			return false;
		}
		double *val = new double[nnz];
		TasGrid::tread(nnz, val, ifs);

		ifs >> T; if ( !(T.compare( "row_ind:" ) == 0) ){
			cout << "ERROR: Wrong File Format! code CSC 6" << endl;
			delete[] val;
			ifs.close();
			clear();
			return false;
		}
		int *row_ind = new int[nnz];
		TasGrid::tread(nnz, row_ind, ifs);

		ifs >> T; if ( !(T.compare( "col_ptr:" ) == 0) ){
			cout << "ERROR: Wrong File Format! code CSC 7" << endl;
			delete[] val;
			delete[] row_ind;
			ifs.close();
			clear();
			return false;
		}
		int *col_ptr = new int[n+1];
		TasGrid::tread(n+1, col_ptr, ifs);

		this->val = val;
		this->row_ind = row_ind;
		this->col_ptr = col_ptr;
		delete_on_destruction = true;
	}else{
		clear();
	}
	return true;

}

void TsgSparseCSC::matvec(const double* __restrict x, double* __restrict y,
		bool transpose /* = false */) const{
	/*
	 * Performs y = A * x or y = A^T * x if tranpose is true.
	 * User is responsible for ensuring appropriate bounds for x and y.
	 * Additionally, x and y must refer to distinct, non-overlapping memory locations.
	 */
	if(transpose){
		/* A in CSC format = A^T in CSR format */
		TsgSparseMatrix *mat = this->transpose();
		mat->matvec(x,y);
		delete mat;
	}else{
		/*
		 * Parallelize the loop over each col. Use guided scheduling since each col will
		 * take a different amount of time to complete. Second parameter specifies the
		 * minimum chunk size. Note: This is likely slower than the equivalent CSR
		 * multiply since y[i] updates must be protected.
		 */
		#pragma omp parallel for schedule(guided)
		for(int j = 0; j < n; j++){
			int num_elem = col_ptr[j+1] - col_ptr[j];
			int col_start = col_ptr[j];
			for(int i = 0; i < num_elem; i++){
				/*
				 * Below atomic directive protects the memory accesses in y. The behavior
				 * is implementation (compiler) specific. At worst, it is a critical block
				 * around the operation. However, the atomic directive often enjoys better
				 * performance by being less restrictive in locking and can use hardware
				 * instructions for atomic operations if available.
				 */
				#pragma omp atomic
				y[row_ind[col_start+i]] += val[col_start + i] * x[j];
			}
		}
	}
}

TsgSparseMatrix* TsgSparseCSC::transpose(bool copy /*= false */) const{
	return new TsgSparseCSR(row_ind, col_ptr, val, n, m, nnz, copy);
}

/* END TsgSparseCSC */

/* BEGIN TsgSparseMatrix */

TsgCgStatus TsgSparseMatrix::cg(const double* __restrict b, double* __restrict x,
		const int max_iter, const double tol) const{
	/*
	 * Attempts to solve A * x = b using the conjugate gradient method.
	 * Iterates up to max_iter times or until norm(b - Ax)/norm(b) < tol. Initial guess
	 * for x should be stored in x when passed in. Note that A must be a symmetric,
	 * positive definite matrix in order to guarantee convergence.
	 */

	int size = m;

	double norm_b = norm(b, size, 2.);
	if(norm_b == 0.){
		/* RHS is all zeros, so x = all zeros is a valid solution */
		tzero(size, x);
		return converged;
	}

	// Reduced 4 individual news to a single new
	double *workspace = new double[4*size];
	tzero(4*size, workspace);

	// Relevant portions of the workspace
	double *residual = workspace;
	double *conjugate = (workspace + size);
	double *residual_old = (workspace + 2 * size);
	double *tmp_array = (workspace + 3 * size);

	// Initialize residual with Ax to calculate r = b - Ax.
	matvec(x, residual);

	axpby(-1., residual, 1., b, size);

	tcopy(size, residual, conjugate);


	for(int i = 0; i < max_iter; i++){
		tzero(size, tmp_array);
		tcopy(size, residual, residual_old);
		// tmp_array = A*conjugate
		matvec(conjugate, tmp_array);

		double alpha = inner_product(residual, residual, size) /
				inner_product(conjugate, tmp_array, size);

		// x_k+1 = x_k + alpha * conjugate_k
		axpby(1., x, alpha, conjugate, size);
		// res_k+1 = res_k - alpha * A*conjugate_k
		axpby(1., residual, -alpha, tmp_array, size);
		if( norm(residual, size, 2.) / norm_b < tol){
			delete[] workspace;
			return converged;
		}

		double beta = inner_product(residual, residual, size) /
						inner_product(residual_old, residual_old, size);

		// conjugate_k+1 = residual_k+1 + beta*conjugate_k
		axpby(beta, conjugate, 1., residual, size);

	}

	delete[] workspace;

	return max_iter_reached;


}

TsgCgStatus TsgSparseMatrix::cga(const double* __restrict b, double* __restrict x,
		const int max_iter, const double tol) const{
	/*
	 * Attempts to solve (A^T * A) * x = A^T * b using the conjugate gradient method.
	 * Iterates up to max_iter times or until norm(b - Ax)/norm(b) < tol. Initial guess
	 * for x should be stored in x when passed in. This version will work for arbitrary
	 * square A with full rank. However, this approximately squares the
	 * condition number and so should be used with caution.
	 */
#define APPLY_AT_A(AT,X,Y,TMP,SIZE) tzero(SIZE, TMP);\
								 matvec(X,TMP);\
								 AT->matvec(TMP, Y);
	int size = m;
	double norm_b = norm(b, size, 2.);
	if(norm_b == 0.){
		/* RHS is all zeros, so x = all zeros is a valid solution */
		tzero(size, x);
		return converged;
	}
	TsgSparseMatrix* A_trans = transpose();

	// Reduced 6 individual news to a single new
	double *workspace = new double[6*size];
	tzero(6*size, workspace);

	// Relevant portions of the workspace
	double *residual = workspace;
	double *conjugate = workspace + size;
	double *residual_old = workspace + 2 * size;
	double *scaled_conjugate = workspace + 3 * size;
	double *B = (workspace + 4 * size);
	double *tmp_array = workspace + 5 * size;

	// B = A^T * b
	A_trans->matvec(b, B);

	// Initialize residual with (A^T*A) * x to calculate r = B - (A^T * A) * x.
	APPLY_AT_A(A_trans, x, residual, tmp_array, size);


	axpby(-1., residual, 1., B, size);

	tcopy(size, residual, conjugate);


	for(int i = 0; i < max_iter; i++){
		tzero(size, scaled_conjugate);
		tcopy(size, residual, residual_old);
		// tmp_array = A*conjugate
		APPLY_AT_A(A_trans, conjugate, scaled_conjugate, tmp_array, size);

		double alpha = inner_product(residual, residual, size) /
				inner_product(conjugate, scaled_conjugate, size);

		// x_k+1 = x_k + alpha * conjugate_k
		axpby(1., x, alpha, conjugate, size);
		// res_k+1 = res_k - alpha * (A^T*A)*conjugate_k
		axpby(1., residual, -alpha, scaled_conjugate, size);
		if(norm(residual, size, 2.) / norm_b < tol){
			delete[] workspace;
			delete A_trans;
			return converged;
		}

		double beta = inner_product(residual, residual, size) /
						inner_product(residual_old, residual_old, size);

		// conjugate_k+1 = residual_k+1 + beta*conjugate_k
		axpby(beta, conjugate, 1., residual, size);

	}

	delete[] workspace;
	delete A_trans;
	return max_iter_reached;
#undef APPLY_AT_A

}

TsgSparseMatrix* TsgSparseMatrix::read_generic( std::ifstream &ifs ){

	std::string T;
	TsgSparseType type;
	int m, n, nnz;
	ifs >> T; if ( !(T.compare( "m:" ) == 0) ){
		cout << "ERROR: Wrong File Format! code SP 1" << endl;
		ifs.close();
		return 0;
	}
	ifs >> m;

	ifs >> T; if ( !(T.compare( "n:" ) == 0) ){
		cout << "ERROR: Wrong File Format! code SP 2" << endl;
		ifs.close();
		return 0;
	}
	ifs >> n;

	ifs >> T; if ( !(T.compare( "nnz:" ) == 0) ){
		cout << "ERROR: Wrong File Format! code SP 3" << endl;
		ifs.close();
		return 0;
	}
	ifs >> nnz;

	ifs >> T; if ( !(T.compare( "initialized:" ) == 0) ){
		cout << "ERROR: Wrong File Format! code SP 4" << endl;
		ifs.close();
		return 0;
	}
	ifs >> T;
	if ( T.compare("yes") == 0 ){

		ifs >> T; if ( !(T.compare( "val:" ) == 0) ){
			cout << "ERROR: Wrong File Format! code SP 5" << endl;
			ifs.close();
			return 0;
		}
		double *val = new double[nnz];
		TasGrid::tread(nnz, val, ifs);

		ifs >> T; if ( (T.compare( "col_ind:" ) == 0) ){
			type = csr;
		}else if( (T.compare( "row_ind:" ) == 0) ){
			type = csc;
		}else{
			cout << "ERROR: Wrong File Format! code SP 6" << endl;
			delete[] val;
			ifs.close();
			return 0;
		}
		int *ind = new int[nnz];
		TasGrid::tread(nnz, ind, ifs);

		std::string ptr_string;
		if(type == csc){
			ptr_string = "col_ptr:";
		}else{
			ptr_string = "row_ptr:";
		}

		ifs >> T; if ( !(T.compare( ptr_string ) == 0) ){
			cout << "ERROR: Wrong File Format! code SP 7" << endl;
			delete[] val;
			delete[] ind;
			ifs.close();
			return 0;
		}
		int sz = (type == csc) ? n+1 : m+1;
		int *ptr = new int[sz];
		TasGrid::tread(sz, ptr, ifs);

		if(type == csc){
			return new TsgSparseCSC(ind, ptr, val, m, n, nnz);
		}else{
			return new TsgSparseCSR(ind, ptr, val, m, n, nnz);
		}


	}
}

/* END TsgSparseMatrix */

} /* namespace TasGrid */
