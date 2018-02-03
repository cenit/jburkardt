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

#include "tsgRuleWavelet.hpp"

namespace TasGrid {

RuleWavelet::RuleWavelet(int ord, int iter_depth){
	/*
	 * Initializes the wavelet rule of the specified order.
	 * Note: Only orders 1 & 3 wavelets are currently implemented.
	 */
	iteration_depth = iter_depth;
	data = 0;
	order = 0;
	updateOrder(ord);
}

void RuleWavelet::updateOrder(int ord){
	/*
	 * Changes the order of the rule to the specified order. If order other than 1 is
	 * specified, then the approximation to the wavelets will be recalculated.
	 */
	if(order == ord) return;

	// If previous order was cubic, clean up data.
	if(order == 3 && data != 0){
		for(int i = 0; i < 4; i++){
			delete[] data[i];
		}
		delete[] data;
	}


	if (! (ord == 1 || ord == 3)){
		cout << "ERROR: Only first and third-order wavelets are implemented at this time." << endl;
		cout << "Defaulting to first-order wavelets." << endl;
		order = 1;
	}else{
		order = ord;
	}

	if(order == 3){

		int num_data_points = (1 << iteration_depth) + 1;

		data = new double*[5]; // (xs, level1 (scaling), level2, level3, level4)
		double *xs = new double[num_data_points];
		data[0] = xs;

                #pragma omp parallel for
		for(int i = 0; i < num_data_points; i++){
			xs[i] = -1. + 2*(double (i)) / (double (num_data_points - 1));
		}

		// Coefficients derived by solving linear system involving scaling function
		// integrals and moments.

		double _coeff[8+16+24] =
		{0.95958116146167449, 0.27778015867946454, -0.042754937296610125, -0.014317145809288835, // Second level
				-0.34358723961941895, 0.36254192315551625, 0.20438681551383264, 0.012027193241660438,
				// third level
				0.90985488901447964, 0.29866296454372104, -0.077377811931657145, 0.017034083534297827,
				-0.28361250628699103, 0.33723841173046543, 0.24560604387620491, -0.023811935316236606,
				0.015786802304611155, 0.23056985382971185, 0.31221657974498912, -0.03868102549989539,
				0.194797093133632, -0.099050236091189195, 0.51520570019738199, -0.073403162960780324,
				// fourth level
				0.90985443399962629, 0.29866318097339162, -0.077377917373678995, 0.017034105626588848,
				-0.28361254472311259, 0.33723844527609648, 0.24560602528531161, -0.023811931411878345,
				0.015786801751471, 0.23056986060092344, 0.31221657434994671, -0.038681024059425327,
				0.14697942814289319, -0.047340431972365773, 0.51871874565793186, -0.093244980946745618,
				-0.019628614067688826, 0.25611706552019509, 0.30090457777800012, -0.036629694186987166,
				-1./32., 9./32., 9./32., -1./32
		};

		double *coeffs[3] = {_coeff, _coeff + 8, _coeff+24};

		double *workspace = new double[4 * num_data_points];


		// Initialize scaling functions
		data[1] = new double[3*num_data_points];
		tzero(3*num_data_points, data[1]);
		double  *phi1 = data[1],
				*phi2 = data[1] + num_data_points,
				*phi3 = data[1] + 2*num_data_points,
				*phi4;

		// Point (sparse grid numbering):
		// 1     3     0     4     2
		// X --- X --- X --- X --- X
		// 0     1     2     3     4
		// Point (level 2 coarse indexing)

		// This ordering makes phi1 -> point 0, phi2 -> point 1, phi3 -> point 3
		// Points 2 & 4 can be found by reflection of phi2, phi3, respectively.
		phi1[ACCESS_COARSE(2, 2, iteration_depth)] = 1;
		phi2[ACCESS_COARSE(0, 2, iteration_depth)] = 1;
		phi3[ACCESS_COARSE(1, 2, iteration_depth)] = 1;
		cubic_cascade(phi1, 2, iteration_depth);
		cubic_cascade(phi2, 2, iteration_depth);
		cubic_cascade(phi3, 2, iteration_depth);


		// Scaling functions at current level.
		phi1 = workspace,
		phi2 = workspace + num_data_points,
		phi3 = workspace + (2 * num_data_points),
		phi4 = workspace + (3 * num_data_points);
		for(int level = 2; level <= 4; level++){
			tzero(4 * num_data_points, workspace);
			int num_saved = 2 * (level-1); // 2 'unique' functions at level 2, 4 at 3, 6 at 4.
			data[level] = new double[num_saved * num_data_points];
			tzero(num_saved * num_data_points, data[level]);

			// Initialize first four scaling functions
			phi1[ACCESS_COARSE(0, level, iteration_depth)] = 1;
			phi2[ACCESS_COARSE(1, level, iteration_depth)] = 1;
			phi3[ACCESS_COARSE(2, level, iteration_depth)] = 1;
			phi4[ACCESS_COARSE(3, level, iteration_depth)] = 1;
			cubic_cascade(phi1, level, iteration_depth);
			cubic_cascade(phi2, level, iteration_depth);
			cubic_cascade(phi3, level, iteration_depth);
			cubic_cascade(phi4, level, iteration_depth);



			for(int index = 0; index < num_saved; index++){
				// Initialize unlifted wavelet
				double *wavelet = &data[level][index*(num_data_points)];
				wavelet[ACCESS_FINE(index, level, iteration_depth)] = 1;
				cubic_cascade(wavelet, level, iteration_depth);
				double  c1 = coeffs[level-2][4*index],
						c2 = coeffs[level-2][4*index+1],
						c3 = coeffs[level-2][4*index+2],
						c4 = coeffs[level-2][4*index+3];

				if(level > 2 && index >= 2){
					// Change pointers around to avoid copying data
					double *tmp = phi1;
					phi1 = phi2;
					phi2 = phi3;
					phi3 = phi4;
					phi4 = tmp;
					// Initialize new scaling function
					tzero(num_data_points, phi4);
					phi4[ACCESS_COARSE(index+2, level, iteration_depth)] = 1;
					cubic_cascade(phi4, level, iteration_depth);

				}

                                #pragma omp parallel for
				for(int i = 0; i < num_data_points; i++){
					// Lift the wavelet
					wavelet[i] -= c1 * phi1[i] + c2 * phi2[i] + c3 * phi3[i] + c4 * phi4[i];
				}


			}


		}

		delete[] workspace;

	}
}

void RuleWavelet::cubic_cascade(double *y, int starting_level, int iteration_depth){
	/*
	 * Using the cascade algorithm (interpolating subdivision), approximates the values
	 * of the desired scaling function or wavelet at 2^(iteration_depth)+1 points.
	 * Wavelets are generated by placing a 1 in the appropriate place at a fine point
	 * on a given level while scaling functions are generated by placing a 1 in the
	 * appropriate place at a coarse point.
	 */
	for(int level = starting_level; level < iteration_depth; level++){
		int num_pts = (1 << (level));
		int prev_pts = (1 << (level)) + 1;

#define AC(I,LEVEL) ACCESS_COARSE(I,LEVEL,iteration_depth)
#define AF(I,LEVEL) ACCESS_FINE(I,LEVEL, iteration_depth)

		// Boundary predictions
		y[AF(0,level)] += (
				5 *(y[AC(0,level)] + 3*y[AC(1,level)] - y[AC(2,level)])
				+ y[AC(3,level)]
				) / 16.;

		y[AF(num_pts-1,level)] += (
						5 *(y[AC(prev_pts-1,level)] + 3*y[AC(prev_pts-2,level)] - y[AC(prev_pts-3,level)])
						+ y[AC(prev_pts-4,level)]
						) / 16.;

		// Central predictions
                #pragma omp parallel for
		for(int i = 1; i < num_pts-1; i++){
			y[AF(i,level)] += (
				9 * (y[AC(i,level)] + y[AC(i+1,level)])
					- (y[AC(i-1,level)] + y[AC(i+2,level)])
				) / 16.;
		}

#undef AC
#undef AF
	}
}

RuleWavelet::~RuleWavelet(){
	if(order == 3){
		for(int i = 0; i < 5; i++){
			delete[] data[i];
		}
		delete[] data;
	}
};

TypeOneDRule RuleWavelet::getType() const{
	return rule_wavelet;
}

int RuleWavelet::getOrder() const{
	return order;
}

int RuleWavelet::getNumPoints( int level ) const{
	/*
	 * Returns the number of points on a given level.
	 */
	if(order == 1){
		return ( 1 << (level + 1) ) + 1;
	}else if(order == 3){
		return (1 << (level + 2)) + 1;
	}
	return -1;
};

//int RuleWavelet::getBasisLevel( int level ) const{
//	return level;
//}

const char * RuleWavelet::getDescription() const{
	if (order == 1){
		return "First-Order Wavelet Basis";
	}
	if (order == 3){
		return "Third-Order Wavelet Basis";
	}
	return "Wavelet Basis";
}

int RuleWavelet::getLevel( int point ) const{
	/*
	 * Returns the level to which the given node belongs.
	 */
	if(order == 1){
		return (point <= 2) ? 0 : intlog2(point - 1);
	}else if(order == 3){
		return (point < 5) ? 0 : intlog2(point - 1) - 1;
	}
	return -1;
}
void RuleWavelet::getChildren( int point, int &first, int &second ) const{
	/*
	 * Returns the children of the given node in first and second. If the node has only a
	 * single child, then second is set to -1.
	 */
	if(order == 1){
		if ( point == 0 ){ first = 3; second =  4; }else
			if ( point == 1 ){ first = 3; second = -1; }else
				if ( point == 2 ){ first = 4; second = -1; }else
				{ first = 2*point-1; second = 2*point; }
	}else if(order == 3){
		if (point >= 5){
			first = 2*point-1; second = 2*point;
		}else{
			if(point == 0){
				first = 6;
				second = 7;
			}else if (point == 1){
				first = 5;
				second = -1;
			}else if(point == 2){
				first = 8;
				second = -1;
			}else if(point == 3){
				first = 5;
				second = 6;
			}else if(point == 4){
				first = 7;
				second = 8;
			}
		}
	}
}
int RuleWavelet::getParent( int point ) const{
	/*
	 * Returns the parent of a given node.
	 */
	if(point <= 2) return -1;
	if(order == 1){
		switch(point){
		case 3:
			return 1;
		case 4:
			return 2;
		default:
			return (point+1)/2;
		}
	}
	else if (order == 3){
		if ( point < 5 ){ return -1; }else{ return (point+1)/2; }
	}
	return -1;
}
int RuleWavelet::intlog2( int i ){
	/*
	 * Calculates the smallest power of two, k, such that 2^k <= i.
	 */
	int result = 0;
	while (i >>= 1){ result++; }
	return result;
}

double RuleWavelet::getX(int point) const {
	/*
	 * Returns the x-coordinate in the cannonical domain associated with the given wavelet.
	 */
	if (point == 0) {
		return 0.0;
	} else if (point == 1) {
		return -1.0;
	} else if (point == 2) {
		return 1.0;
	} else if (point == 3) {
		return -0.5;
	} else if (point == 4) {
		return 0.5;
	}
	int l = intlog2(point - 1);
	int subindex = (point - 1) % (1 << l);
	return -1. + ((2 * subindex + 1.) / (1 << l));
}


double RuleWavelet::getWeight( int point ) const{
	/*
	 * Returns the integral of the given wavelet.
	 */
	if (order == 1){
		return (point == 0) ? 1. : (point <= 2) ? 0.5 : 0.;
	}else if(order == 3){
		if (point > 4){
			return 0.;
		}
		switch (point){
		case 1:
		case 2:
			return 1.680555555555555691e-01;
		case 3:
		case 4:
			return 6.611111111111110938e-01;
		case 0:
			return 3.416666666666666741e-01;
		}

	}
	return 0.;

}

double RuleWavelet::eval(int point, double x) const{
	/*
	 * Evaluates a wavelet designated by point at coordinate x.
	 */
	if(x > 1. || x < -1.){
		return 0.;
	}
	if(order == 1){
		// Level 0
		if (point == 0){
			return 1. - fabs(x);
		}
		else if (point == 1){
			return x < 0. ? -x : 0.;
		}
		else if (point == 2){
			return x < 0. ? 0 : x;
		}
		// Level 1+
		return eval_linear(point, x);
	}
	else if(order == 3){
		return eval_cubic(point, x);
	}
	return 0.;
}

double RuleWavelet::eval_cubic(int point, double x) const{
	/*
	 * Evaluates a third order wavelet at a given point x.
	 */
	int num_data_points = (1 << iteration_depth) + 1;
	if (point < 5){ // Scaling functions
		if (point == 2){ // Reflect across y-axis
			point = 1;
			x = -x;
		}else if(point == 4){
			point = 3;
			x = -x;
		}
		// Point 0 -> data[1][0]
		// Point 1 -> data[1][1 * num_data_points]
		// Point 3 -> data[1][2 * num_data_points]
		double *phi = &data[1][((point+1)/2) * num_data_points];
		return interpolate(phi, x);
	}
	int l = intlog2(point - 1);

	if(l == 2){
		if (point > 6){
			// i.e. 7 or 8
			// These wavelets are reflections across the y-axis of 6 & 5, respectively
			x = -x;
			point = 13 - point;
		}
		point -= 5;
		return interpolate(&data[2][point*num_data_points],x);
	}else if(l == 3){
		if (point > 12){
			// i.e. 13, 14, 15, 16
			// These wavelets are reflections of 12, 11, 10, 9, respectively
			x = -x;
			point = 25 - point;
		}
		point -= 9;
		return interpolate(&data[3][point*num_data_points],x);
	}
	// Standard lifted wavelets.
	int subindex = (point - 1) % (1 << l);
	double scale = pow(2,l-4);
	// Left Boundary
	if (subindex < 5){
		return interpolate(&data[4][subindex*num_data_points],scale * (x + 1.) - 1.);
	}
	// Right Boundary
	if ((1 << l) - 1 - subindex < 5){
		return interpolate(&data[4][((1 << l) - subindex - 1)*num_data_points],scale * (1. - x) - 1.);
	}
	// Center
	double shift = 0.125 * (double (subindex - 5));
	return interpolate(&data[4][5*num_data_points], scale * (x + 1.) -1. - shift);

}

double RuleWavelet::eval_linear(int point, double x) const{
	/*
	 * Given a wavelet designated by point and a value x, evaluates the wavelet at x.
	 */
		// Standard Lifted Wavelets
		int l = intlog2(point - 1);
		int subindex = (point - 1) % (1 << l);
		double scale = pow(2,l-2);

		// Left Boundary
		if ( subindex == 0 ){
			return linear_boundary_wavelet( scale * (x + 1.) - 1. );
		}
		// Right Boundary
		else if ( subindex == (1 << l) - 1 ){
			return linear_boundary_wavelet( scale * (1. - x) - 1. );
		}

//		 Central Wavelet
//		else{
			double shift = 0.5 * (double (subindex - 1));
			return linear_central_wavelet(scale * (x + 1) - 1. - shift);
//		}
}

double RuleWavelet::linear_boundary_wavelet(double x) const{
	/*
	 * Evaluates the first order boundary wavelet with support on [-1, 0].
	 */
	if ( (x < -1) || (x > 0) ) { return 0.; }

	if ( (x <= -0.75) ){
		return 0.75 * (7. * x + 6.);
	}
	if ( (x <= -0.5 ) ){
		return -0.25 * (11. * x + 6.);
	}
	if ( (x <= 0. ) ){
		return 0.25 * x;
	}
	return 0.;
}

double RuleWavelet::linear_central_wavelet(double x) const {
	/*
	 * Evaluates the first order central wavelet with support on [-1, .5].
	 */
	if ( (x < -1) || (x > .5) ) { return 0.; }
	if ( (x <= -0.5) ){
		return -0.5 * (x + 1.);
	}
	if ( (x <= -0.25 ) ){
		return 4. * x + 1.75;
	}
	if ( (x <= 0. ) ){
		return -1 * (4. * x + 0.25);
	}
	if ( (x <= .5) ){
		return 0.25 * ( 2. * x - 1 );
	}
	return 0.;
}

int RuleWavelet::find_index(double x) const{
	/*
	 * Finds an interval such that x_i <= x < x_i+1 using bisection search and returns i.
	 */
	if (x > 1. || x < -1.){
		return -1;
	}
	// Bisection search
	int idx = 0;
	int num_points = (1 << iteration_depth) + 1;
	double *xs = data[0];
	int low = 0;
	int high = num_points-1;
	int test;
	while(high - low > 1){
		test = (high + low)/2;
		if (x < xs[test]){
			high = test;
		}
		else{
			low = test;
		}
	}

	return low;
}


double RuleWavelet::interpolate(const double *y, double x, int interpolation_order) const{
	/*
	 * For a given x value and dataset y, calculates the value of the interpolating
	 * polynomial of given order going through the nearby points.
	 */
	int idx = find_index(x),
		num_points = (1 << iteration_depth) + 1;

	if (idx == -1){
		// Outside of table
		return 0.;
	}

	// Neville's Algorithm
	double *ps = new double[interpolation_order + 1],
		   *xs = new double[interpolation_order + 1],
		   *xx = data[0];

	if (idx < interpolation_order/2){
		idx = interpolation_order/2;
	}else if(num_points - idx - 1 < (interpolation_order+1)/2 ){
		idx = num_points - 1 - (interpolation_order+1)/2;
	}

	int start = idx - interpolation_order / 2;
	for(int i = 0; i < interpolation_order + 1; i++){
		ps[i] = y[start + i];
		xs[i] = xx[start + i];
	}

	for(int i = 0; i <= interpolation_order; i++){
		for(int j = 0; j < interpolation_order - i; j++){
			ps[j] = ((x - xs[j+i+1]) * ps[j] + (xs[j] - x) * ps[j+1]) /(xs[j] - xs[j+i+1]);
		}
	}

	double v = ps[0];

	delete[] ps;
	delete[] xs;

	return v;


}

} /* namespace TasGrid */
