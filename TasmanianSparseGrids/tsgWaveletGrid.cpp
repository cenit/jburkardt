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

#include "tsgWaveletGrid.hpp"

namespace TasGrid {

WaveletGrid::WaveletGrid() : num_dimensions(0), num_outputs(0), points(0),
		needed_points(0), solver_tol(1e-12), order(0),
		interpolation_matrix(0), coefficients(0){}

WaveletGrid::WaveletGrid( int dimensions, int outputs, int depth, int order) : num_dimensions(0),
		num_outputs(0), points(0), needed_points(0), solver_tol(1e-12),
		order(0), interpolation_matrix(0), coefficients(0){
//	if(order != 1){ cout << "ERROR: Only Linear (Order = 1) Wavelets supported at this time. Defaulting to linear" << endl; }
	reset(dimensions, outputs, depth, order);
}

WaveletGrid::~WaveletGrid() {
	clear();
}

void WaveletGrid::reset( int dimensions, int outputs, int depth, int ord){
	clear();
	num_dimensions = dimensions;  num_outputs = outputs;
	order = ord;
	rule1D.updateOrder(order);

	points = new IndexSet( num_dimensions, 1, num_outputs );
	int root[num_dimensions];
	int num_level_zero = rule1D.getNumPoints(0);
	if(num_level_zero > 1){

		int num_pts = 1;
		for(int i = 0; i < num_dimensions; i++){
			num_pts *= num_level_zero;
		}

		for(int i = 0; i < num_pts; i++){
			int tmp = i;
			for(int j = 0; j < num_dimensions; j++){
				root[j] = tmp % num_level_zero;
				tmp /= num_level_zero;
			}
			points->add(root);
		}

	}


	for( int l=0; l<depth; l++ ){
		needed_points = new IndexSet( num_dimensions, 0, num_outputs );
		for( int i=0; i<points->getNumIndexes(); i++ ){
			const int *point = points->getIndexList(i);
			for( int j=0; j<num_dimensions; j++ ){
				addChild( point, j, needed_points, points );
			}
		}
		points->add(needed_points);
		delete needed_points; needed_points = 0;
	}

	if ( num_outputs > 0 ){
		needed_points = new IndexSet( num_dimensions, 0, num_outputs );
		needed_points->add( points );
	}

	buildInterpolationMatrix();

}

int WaveletGrid::getOrder() const{
	return rule1D.getOrder();
}

void WaveletGrid::updateOrder(int new_order){
	if(new_order == order) { return;}

	order = new_order;
	rule1D.updateOrder(new_order);
	if(points != 0 && points->getNumIndexes() > 0){
		buildInterpolationMatrix();
		if(needed_points != 0 && needed_points->getNumIndexes() == 0){
			recomputeCoefficients();
		}
	}

}

void WaveletGrid::write( std::ofstream &ofs ) const{ // write the grid to a file
	ofs << "num_dimensions: " << num_dimensions << endl;
	ofs << "num_outputs: " << num_outputs << endl;
	ofs << "order: " << order << endl;
	ofs << "Points: ";
	if ( points != 0 ){
		ofs << "yes" << endl;
		points->write( ofs );
	}else{
		ofs << "no" << endl;
	}
	ofs << "Needed_Points: ";
	if ( needed_points != 0 ){
		ofs << "yes"  << endl;
		needed_points->write(ofs);
	}else{
		ofs << "no" << endl;
	}
	ofs << "Surplusses: ";
	if ( coefficients != 0 ){
		ofs << "yes" << endl;
		twrite( points->getNumIndexes() * num_outputs, coefficients, ofs );
	}else{
		ofs << "no" << endl;
	}

	ofs << "Interpolation_Matrix: ";
	if (interpolation_matrix != 0){
		ofs << "yes" << endl;
		interpolation_matrix->write(ofs);
	}else{
		ofs << "no" << endl;
	}
}

bool WaveletGrid::read( std::ifstream &ifs ){ // reads the grid
	clear();
	std::string T;
	ifs >> T; if ( !(T.compare( "num_dimensions:" ) == 0) ){
		cerr << "ERROR: Wrong File Format! code WG 1" << endl;
		ifs.close();
		clear();
		return false;
	}
	ifs >> num_dimensions;

	ifs >> T; if ( !(T.compare( "num_outputs:" ) == 0) ){
		cerr << "ERROR: Wrong File Format! code WG 2" << endl;
		ifs.close();
		clear();
		return false;
	}
	ifs >> num_outputs;

	ifs >> T; if ( !(T.compare( "order:" ) == 0) ){
		cerr << "ERROR: Wrong File Format! code WG 3" << endl;
		ifs.close();
		clear();
		return false;
	}
	ifs >> order;
	rule1D.updateOrder(order);

	ifs >> T; if ( !(T.compare( "Points:" ) == 0) ){
		cerr << "ERROR: Wrong File Format! code WG 4" << endl;
		ifs.close();
		clear();
		return false;
	}
	ifs >> T;
	if ( T.compare("yes") == 0 ){
		points = new IndexSet(1);
		points->read( ifs );
	}

	ifs >> T; if ( !(T.compare( "Needed_Points:" ) == 0) ){
		cerr << "ERROR: Wrong File Format! code WG 5" << endl;
		ifs.close();
		clear();
		return false;
	}
	ifs >> T;
	if ( T.compare("yes") == 0 ){
		needed_points = new IndexSet(1);
		needed_points->read( ifs );
	}

	ifs >> T; if ( !(T.compare( "Surplusses:" ) == 0) ){
		cerr << "ERROR: Wrong File Format! code WG 6" << endl;
		ifs.close();
		clear();
		return false;
	}
	ifs >> T;
	if ( T.compare("yes") == 0 ){
			coefficients = new double[points->getNumIndexes() * num_outputs];
			tread( points->getNumIndexes() * num_outputs, coefficients, ifs );
	}

	ifs >> T; if ( !(T.compare( "Interpolation_Matrix:" ) == 0) ){
		cerr << "ERROR: Wrong File Format! code WG 7" << endl;
		ifs.close();
		clear();
		return false;
	}
	ifs >> T;
	if ( T.compare("yes") == 0 ){
		interpolation_matrix = TasSparse::TsgSparseMatrix::read_generic(ifs);
		if(interpolation_matrix == 0){
			cerr << "ERROR: Wrong File Format! code WG 8" << endl;
			ifs.close();
			clear();
			return false;
		}
	}
	return true;
}

int WaveletGrid::getNumDimensions() const{ return num_dimensions; }
int WaveletGrid::getNumOutputs() const{ return num_outputs; };
TypeOneDRule WaveletGrid::getOneDRule() const{ return rule1D.getType(); };
const char *WaveletGrid::getOneDRuleDescription() const{ return rule1D.getDescription(); };
int WaveletGrid::getNumPoints() const{ return (points == 0) ? 0 : points->getNumIndexes(); };

void WaveletGrid::getPoints( double* &pnts ) const{
	if ( pnts != 0 ){ delete[] pnts; }
	pnts = new double[ num_dimensions * points->getNumIndexes() ];
	for( int i=0; i < points->getNumIndexes(); i++ ){
		const int *point = points->getIndexList(i);
		for( int j=0; j<num_dimensions; j++ ){
			pnts[ i*num_dimensions + j ] = rule1D.getX( point[j] );
		}
	}
}

void WaveletGrid::getWeights( double* &weights ) const{
	int num_points = points->getNumIndexes();
	if ( weights != 0 ){ delete[] weights; }
	weights = new double[num_points];
	#pragma omp parallel for
	for( int i=0; i<num_points; i++ ){
		weights[i] = evalIntegral( points->getIndexList(i) );
	}

	solveTransposed(weights);
}

void WaveletGrid::getInterpolantWeights( const double x[], double* &weights ) const{
	int num_points = points->getNumIndexes();
	if ( weights != 0 ){ delete[] weights; }
	weights = new double[num_points];
	#pragma omp parallel for
	for( int i=0; i<num_points; i++ ){
			weights[i] = evalBasis( points->getIndexList(i), x );
	}

	solveTransposed(weights);
}

int WaveletGrid::getNumNeededPoints() const{ return (needed_points == 0) ? 0 : needed_points->getNumIndexes(); }

void WaveletGrid::getNeededPoints( double* &pnts ) const{
	if ( pnts != 0 ){ delete[] pnts; }
	pnts = new double[ num_dimensions * needed_points->getNumIndexes() ];
	for( int i=0; i<needed_points->getNumIndexes(); i++ ){
			const int *point = needed_points->getIndexList(i);
			for( int j=0; j<num_dimensions; j++ ){
					pnts[ i*num_dimensions + j ] = rule1D.getX( point[j] );
			}
	}
}

void WaveletGrid::loadNeededPoints( const double vals[] ){
	for( int i=0; i<needed_points->getNumIndexes(); i++ ){
		points->setValue( points->getSlot( needed_points->getIndexList(i) ), &(vals[num_outputs * i]) );
	}
	delete needed_points; needed_points = 0;
	buildInterpolationMatrix();
	recomputeCoefficients();
}

void WaveletGrid::loadNeededPoints( const IndexSet *data ){
	if ( needed_points == 0 ){ return; }
	IndexSet *old_needed = needed_points;
	//if ( needed_points != 0 ){ delete needed_points; }
	needed_points = new IndexSet( num_dimensions, num_outputs );
	for( int i=0; i<old_needed->getNumIndexes(); i++ ){
			const int *np = old_needed->getIndexList(i);
			int dataSlot = data->getSlot( np );
			if ( dataSlot == -1 ){
					needed_points->add( np ); // point was needed and is not in the data
			}else{
					points->setValue( points->getSlot(np), data->getValueList(dataSlot) ); // set the data
			}
	}
	delete old_needed;
	if ( needed_points->getNumIndexes() == 0 ){
			delete needed_points; needed_points = 0;
			buildInterpolationMatrix();
			recomputeCoefficients();
	}
}

void WaveletGrid::evaluate( const double x[], double y[] ) const{
	int num_points = points->getNumIndexes();
	double *basis_values = new double[num_points];
	#pragma omp parallel for
	for( int i=0; i<num_points; i++ ){
			basis_values[i] = evalBasis( points->getIndexList(i), x );
	}
	for( int j=0; j<num_outputs; j++ ){
			double sum = 0.0;
			#pragma omp parallel for reduction( + : sum )
			for( int i=0; i<num_points; i++ ){
					sum += basis_values[i] * coefficients[i*num_outputs + j];
			}
			y[j] = sum;
	}
	delete[] basis_values;
}
void WaveletGrid::integrate( double y[] ) const{
	int num_points = points->getNumIndexes();
	double *basis_integrals = new double[num_points];
	#pragma omp parallel for
	for( int i=0; i<num_points; i++ ){
			basis_integrals[i] = evalIntegral( points->getIndexList(i) );
	}
	for( int j=0; j<num_outputs; j++ ){
			double sum = 0.0;

			#pragma omp parallel for reduction( + : sum )
			for( int i=0; i<num_points; i++ ){
					sum += basis_integrals[i] * coefficients[i*num_outputs + j];
			}
			y[j] = sum;
	}
	delete[] basis_integrals;
}

// refinement functions
const IndexSet* WaveletGrid::getState() const{
	return points;
}

void WaveletGrid::setState( const IndexSet* state ){
	clear();

	num_dimensions = state->getNumDimensions();
	num_outputs = state->getNumValues();

	points = new IndexSet( num_dimensions, 0, num_outputs );
	points->add( state );

	if ( num_outputs > 0 ){
			needed_points = new IndexSet( num_dimensions, 0, num_outputs );
			needed_points->add( points );
	}

}
void WaveletGrid::getData( IndexSet* &data ){
	if ( data != 0 ){ delete data; };
	data = new IndexSet( num_dimensions, 0, num_outputs );

	if ( num_outputs == 0 ){ return; } // nothing to load

	if ( needed_points == 0 ){
			data->add( points );
	}else{
			for( int i=0; i<points->getNumIndexes(); i++ ){
					const int *p = points->getIndexList(i);
					if ( needed_points->getSlot(p) == -1 ){
							data->add( p, points->getValueList(i) );
							//data->setValue( data->getSlot(p),  );
					}
			}
	}
}
void WaveletGrid::getUpdateState( IndexSet* &update, double tol, TypeRefinement criteria ) const{
	// implement classical refinement first
	if ( update != 0 ){ delete update; };
	update = new IndexSet( num_dimensions, 0, num_outputs );

	int *map = 0;
	buildUpdateMap( map, tol, criteria );

	bool parents = (criteria == refine_fds) || (criteria == refine_parents_first);

	int num_points = points->getNumIndexes();

	for( int i=0; i<num_points; i++ ){
			for( int j=0; j<num_dimensions; j++ ){
					//cout << i << "  " << map[i*num_dimensions + j] << endl;
					if ( map[i*num_dimensions+j] == 1 ){ // if this dimension needs to be refined
							if ( !(parents && addParent( points->getIndexList(i), j, update, points )) ){
									addChild( points->getIndexList(i), j, update, points );
							}
					}
			}
	}

	delete[] map;
}
void WaveletGrid::setUpdate( const IndexSet *update ){
	if ( coefficients != 0 ){ delete[] coefficients; coefficients = 0; }
	if ( interpolation_matrix != 0){ delete interpolation_matrix; interpolation_matrix = 0;}
	if ( needed_points != 0 ){ delete needed_points; needed_points = 0; }

	points->add( update ); //cout << "values " << points->getNumValues() << endl;

	if ( num_outputs > 0 ){
		needed_points = new IndexSet( num_dimensions, 0, num_outputs );
		needed_points->add( points );
	}
}

void WaveletGrid::clear(){
	if ( points != 0 ){ delete points; } points = 0;
	if ( needed_points != 0 ){ delete needed_points; } needed_points = 0;
	if (interpolation_matrix != 0){ delete interpolation_matrix; } interpolation_matrix = 0;
	num_dimensions = 0; num_outputs = 0;

}

void WaveletGrid::addChild( const int point[], int direction, IndexSet *destination, IndexSet *exclude )const{
	/*
	 * Adds the child of the specified point, if not excluded, to destination.
	 */
	//cout << " Adding Child " << endl;
	int first, second;
	rule1D.getChildren( point[direction], first, second );
	int kid[num_dimensions];
	tcopy( num_dimensions, point, kid );
	kid[direction] = first;
	if ( (exclude == 0 ) || (exclude->getSlot(kid) == -1 ) ){
		destination->add( kid );
	}
	if ( second != -1 ){
		kid[direction] = second;
		if ( (exclude == 0 ) || (exclude->getSlot( kid ) == -1 ) ){
			destination->add( kid );
		}
	}
	//cout << " Added Child " << endl;
}

bool WaveletGrid::addParent( const int point[], int direction, IndexSet *destination, IndexSet *exclude ) const{
	/*
	 * Adds the parent of the specified point, if not excluded, to destination.
	 */
	int parent = rule1D.getParent( point[direction] );
	if ( parent == -1 ) return false;
	int dad[num_dimensions];
	tcopy( num_dimensions, point, dad );
	dad[direction] = parent;
	if ( (exclude == 0 ) || (exclude->getSlot(dad) == -1 ) ){
		destination->add( dad );
		return true;
	}
	return false;
}

double WaveletGrid::evalIntegral( const int p[] ) const{
	/*
	 * For a given node p, evaluate the integral of the associated wavelet.
	 */
	double v = 1.;
	for(int i = 0; i < num_dimensions; i++){
		v *= rule1D.getWeight(p[i]);
	}
	return v;
}

void WaveletGrid::buildInterpolationMatrix(){
	/*
	 * Using the IndexSet points, constructs the interpolation matrix needed for methods
	 * such as recomputeCoefficients, solveTransposed, etc.
	 */
	if(interpolation_matrix != 0) { delete interpolation_matrix; }

	int num_points = points->getNumIndexes();

	TasSparse::TsgSparseCOO coo_mat(num_points, num_points);

//#ifdef _TSG_OMP_ENABLE
#ifdef _OPENMP
	int num_threads = omp_get_max_threads();
	TasSparse::TsgSparseCOO *coos = new TasSparse::TsgSparseCOO[num_threads];
	#pragma omp parallel
#endif
	{
		double *xs = new double[num_dimensions];

#ifdef _OPENMP
		int thread_id = omp_get_thread_num();
		#pragma omp for
#endif
		for(int i = 0; i < num_points; i++){ /* Loop over points */
			const int *point = points->getIndexList(i);

			for(int k = 0; k < num_dimensions; k++){ /* Fill in x values of point */
				xs[k] = rule1D.getX(point[k]);
			}

			for(int j = 0; j < num_points; j++){ /* Loop over wavelets */
				const int *wavelet = points->getIndexList(j);
				double v = 1.;

				for(int k = 0; k < num_dimensions; k++){ /* Loop over dimensions */
					v *= rule1D.eval(wavelet[k], xs[k]);
				} /* End for dimensions */

				if(v != 0.){
				/*
				 * Testing for equal to zero is safe since v*0 is the only way
				 * for this to happen.
				 */
#ifdef _OPENMP
					coos[thread_id].addPoint(i, j, v);
#else
					coo_mat.addPoint(i,j,v);
#endif
				}


			} /* End for wavelets */

		} /* End for points */

		delete[] xs;

#ifdef _OPENMP
		#pragma omp master
		{ /* Master thread combines the sub-thread work */

			for(int i = 0; i < num_threads; i++){
				coo_mat.combine(coos[i]);
			}
			delete[] coos;
		} /* End master section */

#endif
	} /* End parallel section */
	interpolation_matrix = new TasSparse::TsgSparseCSR(coo_mat);

}

void WaveletGrid::recomputeCoefficients(){
	/*
	 * Recalculates the coefficients to interpolate the values in points.
	 * Make sure buildInterpolationMatrix has been called since the list was updated.
	 */
	if(interpolation_matrix == 0){ buildInterpolationMatrix(); }
	//cout << " Computing Surpluses " << endl;
	int num_points = points->getNumIndexes();
	if ( coefficients != 0 ){ delete[] coefficients; }
	coefficients = new double[num_points * num_outputs];

	double *workspace = new double[2*num_points];
	double *b = workspace;
	double *x = workspace + num_points;

	for(int output = 0; output < num_outputs; output++){
		// Copy relevant portion
		tzero(2*num_points, workspace);

		// Populate RHS
		for(int i = 0; i < num_points; i++){
			b[i] = points->getValueList(i)[output];
		}

		// Solve system
		interpolation_matrix->cga(b, x, num_points, solver_tol);

		// Populate surplus
		for(int i = 0; i < num_points; i++){
			coefficients[num_outputs * i + output] = x[i];
		}
	}

	delete[] workspace;
}

void WaveletGrid::solveTransposed(double w[]) const{
	/*
	 * Solves the system A^T * w = y. Used to calculate interpolation and integration
	 * weights. RHS values should be passed in through w. At exit, w will contain the
	 * required weights.
	 */
	TasSparse::TsgSparseMatrix *mat = interpolation_matrix->transpose();

	int num_points = points->getNumIndexes();

	double *y = new double[num_points];

	tcopy(num_points, w, y);

	// Zero out the initial guess
	tzero(num_points, w);

	TasSparse::TsgCgStatus stat = mat->cga(y, w, num_points, solver_tol);
	if(stat == TasSparse::max_iter_reached){
		cerr << "ERROR - solveTransposed: CG did not converge!" << endl;
	}

	delete mat;
	delete[] y;

}

double WaveletGrid::evalBasis( const int p[], const double x[] ) const{
	/*
	 * Evaluates the wavelet basis given at point p at the coordinates given by x.
	 */
	double v = 1.;
	for(int i = 0; i < num_dimensions; i++){
		v *= rule1D.eval(p[i], x[i]);
	}
	return v;
}

bool WaveletGrid::has_children(const int point[], IndexSet *set) const{
	/*
	 * Returns true if the given set has all the children of the specified point, false
	 * otherwise.
	 */
	int *child = new int[num_dimensions];
	int first, second;
	for(int i = 0; i < num_dimensions; i++){
		tcopy(num_dimensions, point, child);
		rule1D.getChildren(child[i], first, second);
		if(first > 0){
			child[i] = first;
			if (set->getSlot(child) == -1){
				delete[] child;
				return false;
			}
		}
		if(second > 0){
			child[i] = second;
			if (set->getSlot(child) == -1){
				delete[] child;
				return false;
			}
		}
	}
	delete[] child;
	return true;

}

void WaveletGrid::buildUpdateMap( int* &map, double tol, TypeRefinement criteria ) const{
	/*
	 * For a given tolerance and refinement criteria, determines if a point at map[i]
	 * should be refined.
	 */
	if ( map != 0 ){ delete[] map; }
	int num_points = points->getNumIndexes();
	map = new int[ num_dimensions * num_points ];

	if ( coefficients == 0 ){ for( int i=0; i<num_dimensions * num_points; i++ ){ map[i] = 1; }; return; }
	tzero( num_dimensions * num_points, map );

	double *norm = 0;
        computeOutputNormalization( norm );

	if ( criteria != refine_classic ){
		cout << "WARNING: Refinements other than classical not yet implemented. Defaulting to classical." << endl;
		criteria = refine_classic;
	}

	if ( (criteria == refine_classic)  ){

//		double *rel_scale = new double[num_outputs];
//		tzero(num_outputs, rel_scale);
//		for(int i = 0; i < num_points; i++){
//			const double *vals = points->getValueList(i);
//			for(int j = 0; j < num_outputs; j++){
//				double tmp = fabs(vals[j]);
//				if(tmp > rel_scale[j]){
//					rel_scale[j] = tmp;
//				}
//			}
//		}

//      // Tests only lowest-level points
//
//		int num_points = points->getNumIndexes();
//		IndexSet current_points(num_dimensions);
//		IndexSet test_points(num_dimensions);
//
//		double *prediction = new double[num_outputs];
//		double *x = new double[num_dimensions];
//		std::vector<int> index;
//
//		int level = 0;
//		for (int i = 0; i < num_points; i++){
//			int l = 0;
//			const int *pt = points->getIndexList(i);
//			for(int j = 0; j < num_dimensions; j++){
//				l += rule1D.getLevel(pt[j]);
//			}
//			if (l > level){
//				level = l;
//			}
//		}
//
////		for(int level = 1; current_points.getNumIndexes() != num_points; level++){
//			int num_test = 0;
//			index.clear();
//			current_points.resetIndexSet(num_dimensions, num_points, num_outputs);
//			test_points.resetIndexSet(num_dimensions, num_points, num_outputs);
//			for(int i = 0; i < num_points; i++){
//				const int *point = points->getIndexList(i);
//				int point_level = 0;
//				for (int j = 0; j < num_dimensions; j++){
//					point_level += rule1D.getLevel(point[j]);
//				}
//				if(point_level < level){
//					current_points.add(point, points->getValueList(i));
//				}else if (point_level == level){
//					if(!has_children(point, points)){
//						test_points.add(point, points->getValueList(i));
//						index.push_back(i);
//						num_test++;
//					}
//					else{
//						current_points.add(point, points->getValueList(i));
//					}
//				}
//			}
//#pragma omp parallel
//			{
//				WaveletGrid test_grid;
//				test_grid.updateOrder(order);
//#pragma omp for
//				for(int i = 0; i < num_test; i++){
//					test_grid.clear();
//					IndexSet current(num_dimensions);
//					current.copy(&current_points);
//					for(int j = 0; j < num_test; j++){
//						if(j != i){
//							current.add(test_points.getIndexList(j), test_points.getValueList(j));
//						}
//					}
//					test_grid.setState(&current);
//					test_grid.loadNeededPoints(&current);
//					const int *point = test_points.getIndexList(i);
//					const double *val = test_points.getValueList(i);
//
//					for(int j = 0; j < num_dimensions; j++){
//						x[j] = rule1D.getX(point[j]);
//					}
//
//					test_grid.evaluate(x, prediction);
//					bool refine = false;
//					for(int j = 0; !refine && j < num_outputs; j++){
//						refine = fabs(prediction[j] - val[j]) > tol;
//					}
//					if (refine){
//						int idx = index[i];
//						for(int k = 0; k < num_dimensions; k++){
//							map[idx*num_dimensions + k] = 1;
//						}
//					}
//
//				}
//			}
//
////		}
//
//		delete[] prediction;
//		delete[] x;
//	}
		// Tests all leaf nodes
//		int num_pts = points->getNumIndexes();
//
//		IndexSet leaf = IndexSet(num_dimensions, num_pts, num_outputs),
//				 full = IndexSet(num_dimensions, num_pts, num_outputs);
//
//		std::vector<int> index;
//		index.clear();
//
//		for(int i = 0; i < num_pts; i++){
//			const int *point = points->getIndexList(i);
//			if(!has_children(point, points)){
//				leaf.add(point, points->getValueList(i));
//				index.push_back(i);
//			}else{
//				full.add(point, points->getValueList(i));
//			}
//
//		}
//		int num_test = leaf.getNumIndexes();
//
////#ifdef _TSG_OMP_ENABLE
////#pragma omp parallel
////#endif
//		{
//			WaveletGrid test_grid;
//			test_grid.updateOrder(order);
//			double *prediction = new double[num_outputs];
//			double *x = new double[num_dimensions];
//
////#ifdef _TSG_OMP_ENABLE
////#pragma omp for
////#endif
//
//			for(int i = 0; i < num_test; i++){
//				test_grid.clear();
//				IndexSet test_points(num_dimensions);
//				test_points.copy(&full);
//				for(int j = 0; j < num_test; j++){
//					if (j != i){
//						test_points.add(leaf.getIndexList(j), leaf.getValueList(j));
//					}
//				}
//				test_grid.setState(&test_points);
//				test_grid.loadNeededPoints(&test_points);
//
//				const int *pt = points->getIndexList(index[i]);
//				for(int j = 0; j < num_dimensions; j++){
//					x[j] = rule1D.getX(pt[j]);
//				}
//
//				const double *true_val = points->getValueList(index[i]);
//
//				test_grid.evaluate(x, prediction);
//				bool refine = false;
//				for(int j = 0; !refine && j < num_outputs; j++){
//					refine = fabs(prediction[j] - true_val[j]) / rel_scale[j] > tol;
//				}
//
//				if (refine){
//					for(int j = 0; j < num_dimensions; j++){
//						map[index[i]*num_dimensions + j] = 1;
//					}
//				}
//			}
//
//			delete[] prediction;
//			delete[] x;
//
//		}
//		delete[] rel_scale;
//	}

//	if ( (criteria == refine_classic) ){
		// classic refinement
#pragma omp parallel for
		for( int i=0; i<num_points; i++ ){
			bool refine = false;
			for( int j=0; !refine && j<num_outputs; j++ ){
//				refine = fabs( coefficients[i*num_outputs + j] ) /rel_scale[j] > tol ;
				refine = fabs( coefficients[i*num_outputs + j] ) / norm[j] > tol ;
			}
			if ( refine ){
				for( int j=0; j<num_dimensions; j++ ){ map[i*num_dimensions + j] = 1; }
			}
		}
	}
	delete[] norm;
}

bool WaveletGrid::sameLine(const int a[], const int b[], int direction) const{
	for( int i=0; i<num_dimensions; i++ ){
		if ( (i != direction) && (a[i] != b[i]) ) return false;
	}
	return true;
}

void WaveletGrid::computeOutputNormalization( double* &norm ) const{
        if ( norm != 0 ){ delete[] norm; }
        norm = new double[num_outputs];
        tzero( num_outputs, norm );
        for( int i=0; i<points->getNumIndexes(); i++ ){
                const double *vals = points->getValueList( i );
                for( int j=0; j<num_outputs; j++ ){
                        norm[j] = ( norm[j] > fabs( vals[j] ) ) ? norm[j] : fabs( vals[j] );
                }
        }
        for( int j=0; j<num_outputs; j++ ){
                norm[j] = ( norm[j] < RELATIVE_ABSOLUTE_TRESHOLD ) ? 1.0 : norm[j];
        }
}


} /* namespace TasGrid */
