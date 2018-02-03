/*
 * Code Author: Miroslav Stoyanov, Mar 2013
 *
 * Copyright (C) 2013  Miroslav Stoyanov
 *
 * This file is part of
 * Toolkit for Adaprive Stochastic Modeling And Non-Intrusive Approximation
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

#ifndef __TASMANIAN_SPARSE_GRID_FULL_TENSOR_GRID_CPP
#define __TASMANIAN_SPARSE_GRID_FULL_TENSOR_GRID_CPP

#include"tsgFullTensorGrid.hpp"

namespace TasGrid{

FullTensorGrid::FullTensorGrid() : rule1D(0), ruleType(rule_base), num_dimensions(0), num_outputs(0),  points(0), needed_points(0), tensor_index(0), report_tensor_order(0), alpha(0), beta(0),
        ch_rule(0), cc_rule(0), gl_rule(0), gc1_rule(0), gc2_rule(0), f2_rule(0), gg_rule(0), gj_rule(0), gh_rule(0)
{
}

FullTensorGrid::FullTensorGrid( int dimensions, int outputs, const int order[], TypeOneDRule oned, const double *alpha_beta ) : rule1D(0), ruleType(rule_base), num_dimensions(0), num_outputs(0),
        points(0), needed_points(0), tensor_index(0), report_tensor_order(0), alpha(0), beta(0),
        ch_rule(0), cc_rule(0), gl_rule(0), gc1_rule(0), gc2_rule(0), f2_rule(0), gg_rule(0), gj_rule(0), gh_rule(0)
{
        reset( dimensions, outputs, order, oned, alpha_beta );
}

FullTensorGrid::~FullTensorGrid(){
        clear();
}

void FullTensorGrid::clear(){
        clear1D();

        ruleType = rule_base;
        num_dimensions = 0; num_outputs = 0;
        if ( points != 0 ){ delete points; }; points = 0;
        if ( tensor_index != 0 ){ delete[] tensor_index; }; tensor_index = 0;

        if ( needed_points != 0){ delete needed_points; }; needed_points = 0;

        if ( report_tensor_order != 0 ){ delete report_tensor_order; }; report_tensor_order = 0;
}

void FullTensorGrid::clear1D(){
        if ( ch_rule != 0 ){ delete ch_rule; ch_rule = 0; }
        if ( cc_rule != 0 ){ delete cc_rule; cc_rule = 0; }
        if ( gl_rule != 0 ){ delete gl_rule; gl_rule = 0; }
        if ( gc1_rule != 0 ){ delete gc1_rule; gc1_rule = 0; }
        if ( gc2_rule != 0 ){ delete gc2_rule; gc2_rule = 0; }
        if ( f2_rule != 0 ){ delete f2_rule; f2_rule = 0; }
        if ( gg_rule != 0 ){ delete gg_rule; gg_rule = 0; }
        if ( gj_rule != 0 ){ delete gj_rule; gj_rule = 0; }
        if ( ggl_rule != 0 ){ delete ggl_rule; ggl_rule = 0; }
        if ( gh_rule != 0 ){ delete gh_rule; gh_rule = 0; }
        rule1D = 0;
}

void FullTensorGrid::makeOnedRule( int level ){
        clear1D();
        if ( ruleType == rule_chebyshev ){
                ch_rule = new RuleChebyshev( level );
                rule1D = ch_rule;
        }else if ( ruleType == rule_clenshawcurtis ){
                cc_rule = new RuleClenshawCurtis( level );
                rule1D = cc_rule;
        }else if ( ruleType == rule_gausslegendre ){
                gl_rule = new RuleGaussLegendre( level );
                rule1D = gl_rule;
        }else if ( ruleType == rule_gausschebyshev1 ){
                gc1_rule = new RuleGaussChebyshev1( level );
                rule1D = gc1_rule;
        }else if ( ruleType == rule_gausschebyshev2 ){
                gc2_rule = new RuleGaussChebyshev2( level );
                rule1D = gc2_rule;
        }else if ( ruleType == rule_fejer2 ){
                f2_rule = new RuleFejer( level );
                rule1D = f2_rule;
        }else if ( ruleType == rule_gaussgegenbauer ){
                gg_rule = new RuleGaussGegenbauer( level, alpha );
                rule1D = gg_rule;
        }else if ( ruleType == rule_gaussjacobi ){
                gj_rule = new RuleGaussJacobi( level, alpha, beta );
                rule1D = gj_rule;
        }else if ( ruleType == rule_gausslaguerre ){
                ggl_rule = new RuleGaussLaguerre( level, alpha );
                rule1D = ggl_rule;
        }else if ( ruleType == rule_gausshermite ){
                gh_rule = new RuleGaussHermite( level, alpha );
                rule1D = gh_rule;
        }else{
                cout << "WARNING: unknown rule type, defaulting to Clenshaw-Curtis" << endl;
                cc_rule = new RuleClenshawCurtis( level );
                rule1D = cc_rule;
        };
}

void FullTensorGrid::reset( int dimensions, int outputs, const int order[], TypeOneDRule oned, const double *alpha_beta ){
        clear();
        ruleType = oned;

        num_dimensions = dimensions;
        num_outputs = outputs;

        if ( (oned == rule_gaussgegenbauer) || (oned == rule_gausslaguerre) || (oned == rule_gausshermite) ){
                alpha = alpha_beta[0];
        }
        if ( oned == rule_gaussjacobi ){
                alpha = alpha_beta[0];
                beta  = alpha_beta[1];
        }

        tensor_index = new int[num_dimensions];
        tcopy( num_dimensions, order, tensor_index );

        makeOnedRule( getMaxLevel() + 1 );

        tensor.rebuild( num_dimensions, tensor_index, rule1D );

        report_tensor_order = new IndexSet( num_dimensions, 1 );
        report_tensor_order->add( tensor_index );

        points = new IndexSet( num_dimensions, tensor.getNumPoints(), num_outputs );
        points -> add( tensor.getPoints() );

        if ( needed_points != 0 ){ delete needed_points; }; needed_points = 0;

        if ( num_outputs > 0 ){
                needed_points = new IndexSet( num_dimensions, 0, num_outputs );
                needed_points->add( points );
                // relink to tensors
                tensor.referenceValues( points );
        }
}

int FullTensorGrid::getMaxLevel() const{
        if ( (num_dimensions == 0) || (tensor_index == 0) ){ return 0; }
        int max = tensor_index[0];
        for( int i=1; i<num_dimensions; i++ ){
                max = ( max < tensor_index[i] ) ? tensor_index[i] : max;
        }
        return max;
}

int FullTensorGrid::getNumDimensions() const{ return num_dimensions; }
int FullTensorGrid::getNumOutputs() const{ return num_outputs; }
TypeOneDRule FullTensorGrid::getOneDRule() const{ return ruleType; }
const char *FullTensorGrid::getOneDRuleDescription() const{ rule1D->getDescription(); }

void FullTensorGrid::write( std::ofstream &ofs ) const{ // write the grid to a file
        ofs << "num_dimensions: " << num_dimensions << endl;
        ofs << "num_outputs: " << num_outputs << endl;
        ofs << "alpha: "; twrite( 1, &alpha, ofs );
        ofs << "beta: "; twrite( 1, &beta, ofs );
        ofs << "ruleType: ";
        if ( ruleType == rule_chebyshev ){ ofs << "lagrange-chebyshev"; }else
        if ( ruleType == rule_clenshawcurtis ){ ofs << "lagrange-clenshaw-curtis"; }else
        if ( ruleType == rule_gausslegendre ){ ofs << "lagrange-gauss-legendre"; }else
        if ( ruleType == rule_gausschebyshev1 ){ ofs << "lagrange-gauss-chebyshev1"; }else
        if ( ruleType == rule_gausschebyshev2 ){ ofs << "lagrange-gauss-chebyshev2"; }else
        if ( ruleType == rule_fejer2 ){ ofs << "lagrange-fejer-2"; }else
        if ( ruleType == rule_gaussgegenbauer ){ ofs << "lagrange-gauss-gegenbauer"; }else
        if ( ruleType == rule_gaussjacobi ){ ofs << "lagrange-gauss-jacobi"; }else
        if ( ruleType == rule_gausslaguerre ){ ofs << "lagrange-gauss-laguerre"; }else
        if ( ruleType == rule_gausshermite ){ ofs << "lagrange-gauss-hermite"; }else
        if ( ruleType == rule_base ){ ofs << "empty-rule"; }
        ofs << endl;
        if ( num_dimensions > 0 ){
                ofs << "Order: "; twrite( num_dimensions, tensor_index, ofs );
        }
        ofs << "Points: ";
        if ( points != 0 ){
                ofs << "yes" << endl;
                points->write( ofs );
        }else{
                ofs << "no" << endl;
        }
        ofs << "NeededPoints: ";
        if ( needed_points == 0 ){
                ofs << "no" << endl;
        }else{
                ofs << "yes" << endl;
                needed_points->write( ofs );
        }
}

bool FullTensorGrid::read( std::ifstream &ifs ){ // reads the grid
        clear();
        std::string T;
        ifs >> T; if ( !(T.compare( "num_dimensions:" ) == 0) ){ cerr << "ERROR: Wrong File Format! code FT 1" << endl; ifs.close(); clear(); return false; }
        ifs >> num_dimensions;
        ifs >> T; if ( !(T.compare( "num_outputs:" ) == 0) ){ cerr << "ERROR: Wrong File Format! code FT 2" << endl; ifs.close(); clear(); return false; }
        ifs >> num_outputs;
        ifs >> T; if ( !(T.compare( "alpha:" ) == 0) ){ cerr << "ERROR: Wrong File Format! code GG 3" << endl; ifs.close(); clear(); return false; }
        tread( 1, &alpha, ifs );
        ifs >> T; if ( !(T.compare( "beta:" ) == 0) ){ cerr << "ERROR: Wrong File Format! code GG 4" << endl; ifs.close(); clear(); return false; }
        tread( 1, &beta, ifs );
        ifs >> T; if ( !(T.compare( "ruleType:" ) == 0) ){ cerr << "ERROR: Wrong File Format! code FT 6" << endl; ifs.close(); clear(); return false; }
        ifs >> T;
        if ( T.compare("lagrange-chebyshev") == 0 ){       ruleType = rule_chebyshev; }else
        if ( T.compare("lagrange-clenshaw-curtis") == 0 ){ ruleType = rule_clenshawcurtis; }else
        if ( T.compare("lagrange-gauss-legendre") == 0 ){  ruleType = rule_gausslegendre; }else
        if ( T.compare("lagrange-gauss-chebyshev1") == 0 ){  ruleType = rule_gausschebyshev1; }else
        if ( T.compare("lagrange-gauss-chebyshev2") == 0 ){  ruleType = rule_gausschebyshev2; }else
        if ( T.compare("lagrange-fejer-2") == 0 ){  ruleType = rule_fejer2; }else
        if ( T.compare("lagrange-gauss-gegenbauer") == 0 ){  ruleType = rule_gaussgegenbauer; }else
        if ( T.compare("lagrange-gauss-jacobi") == 0 ){  ruleType = rule_gaussjacobi; }else
        if ( T.compare("lagrange-gauss-laguerre") == 0 ){  ruleType = rule_gausslaguerre; }else
        if ( T.compare("lagrange-gauss-hermite") == 0 ){  ruleType = rule_gausshermite; }else{
                cerr << "ERROR: Wrong File Format! code FT 7" << endl; ifs.close(); clear(); return false;
        }
        if ( num_dimensions > 0 ){
                ifs >> T; if ( !(T.compare( "Order:" ) == 0) ){ cerr << "ERROR: Wrong File Format! code FT 8" << endl; ifs.close(); clear(); return false; }
                tensor_index = new int[num_dimensions];
                tread( num_dimensions, tensor_index, ifs );
        }

        ifs >> T; if ( !(T.compare( "Points:" ) == 0) ){ cerr << "ERROR: Wrong File Format! code FT 10" << endl; ifs.close(); clear(); return false; }
        ifs >> T;
        if ( T.compare("yes") == 0 ){
                points = new IndexSet( num_dimensions, 0, num_outputs ); points->read( ifs );
        }
        ifs >> T; if ( !(T.compare( "NeededPoints:" ) == 0) ){ cerr << "ERROR: Wrong File Format! code FT 11" << endl; ifs.close(); clear(); return false; }
        ifs >> T;
        if ( T.compare( "yes" ) == 0 ){
                needed_points = new IndexSet( num_dimensions, 0, num_outputs );
                needed_points->read( ifs );
        }else{
                needed_points = 0;
        }

        makeOnedRule( getMaxLevel() + 1 );
        tensor.rebuild( num_dimensions, tensor_index, rule1D );

        report_tensor_order = new IndexSet( num_dimensions, 1 );
        report_tensor_order->add( tensor_index );

        if ( num_outputs > 0 ){
                // relink to tensors
                tensor.referenceValues( points );
        }
}

int FullTensorGrid::getNumPoints() const{ return ( points == 0 ) ? 0 : points->getNumIndexes(); }

void FullTensorGrid::getPoints( double* &pnts ) const{
        if ( pnts != 0 ){ delete[] pnts; }
        pnts = new double[ num_dimensions * points->getNumIndexes() ];
        for( int i=0; i<points->getNumIndexes(); i++ ){
                const int *point = points->getIndexList(i);
                for( int j=0; j<num_dimensions; j++ ){
                        pnts[ i*num_dimensions + j ] = rule1D->getX( point[j] );
                }
        }
}

void FullTensorGrid::getWeights( double* &weights ) const{
        tensor.getWeights( weights );
}
void FullTensorGrid::getInterpolantWeights( const double x[], double* &weights ) const{
        tensor.getInterpolantWeights( x, weights );
}

int FullTensorGrid::getNumNeededPoints() const{ return (needed_points==0) ? 0 : needed_points->getNumIndexes(); }

void FullTensorGrid::getNeededPoints( double* &pnts ) const{
        int num_points = getNumNeededPoints();
        if ( pnts != 0 ){ delete[] pnts; } pnts = 0;
        if ( num_points == 0 ) return;
        pnts = new double[ num_dimensions * num_points ];
        for( int i=0; i<num_points; i++ ){
                const int *point = needed_points->getIndexList(i);
                for( int j=0; j<num_dimensions; j++ ){
                        pnts[ i*num_dimensions + j ] = rule1D->getX( point[j] );
                }
        }
}
void FullTensorGrid::loadNeededPoints( const double vals[] ){
        for( int i=0; i<needed_points->getNumIndexes(); i++ ){
                points->setValue( points->getSlot( needed_points->getIndexList(i) ), &(vals[num_outputs * i]) );
        }
        delete needed_points; needed_points = 0;
}
void FullTensorGrid::loadNeededPoints( const IndexSet *data ){
        if ( needed_points == 0 ){ return; }

        IndexSet *old_needed = needed_points;
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
        if ( needed_points->getNumIndexes() == 0 ){ delete needed_points; needed_points = 0; }
        delete old_needed;
}

void FullTensorGrid::evaluate( const double x[], double y[] ) const{
        tensor.eval( x, y );
}


void FullTensorGrid::integrate( double y[] ) const{
        double *weights = 0;
        getWeights(weights);

        tzero(num_outputs, y);

        if ( points->getNumIndexes() > points->getNumValues() ){
                for( int j=0; j<num_outputs; j++ ){
                        double sum = 0.0;
                        #pragma omp parallel for reduction( + : sum )
                        for( int i=0; i<points->getNumIndexes(); i++ ){
                                const double *val = points->getValueList(i);
                                sum += weights[i] * val[j];
                        }
                        y[j] = sum;
                }
        }else{
                for( int i=0; i<points->getNumIndexes(); i++ ){
                        const double *val = points->getValueList(i);
                        #pragma omp parallel for
                        for( int j=0; j<num_outputs; j++ ){
                                y[j] += weights[i] * val[j];
                        }
                }
        }
        delete[] weights;
}

// refinement functions
const IndexSet* FullTensorGrid::getState() const{ // returns enough information to rebuild the grid (i.e. the tensor list or the points list)
        return report_tensor_order;
}
void FullTensorGrid::setState( const IndexSet* state ){ // copy the tensors and/or points
        TypeOneDRule oldRuleType = ruleType;
        int outputs = num_outputs;
        clear();
        ruleType = oldRuleType;
        num_outputs = outputs;

        num_dimensions = state->getNumDimensions();

        const int *indx = state->getIndexList( 0 );
        tensor_index = new int[num_dimensions];
        tcopy( num_dimensions, indx, tensor_index );

        makeOnedRule( getMaxLevel() + 1 );

        tensor.rebuild( num_dimensions, tensor_index, rule1D );

        report_tensor_order = new IndexSet( num_dimensions, 1 );
        report_tensor_order->add( tensor_index );

        points = new IndexSet( num_dimensions, tensor.getNumPoints(), num_outputs );
        points -> add( tensor.getPoints() );

        if ( needed_points != 0 ){ delete needed_points; }; needed_points = 0;

        if ( num_outputs > 0 ){
                needed_points = new IndexSet( num_dimensions, 0, num_outputs );
                needed_points->add( points );
                // relink to tensors
                tensor.referenceValues( points );
        }
}
void FullTensorGrid::getData( IndexSet* &data ){ // returns a list of the set points and their values
        if ( data != 0 ){ delete data; };
        data = new IndexSet( num_dimensions, 0, num_outputs );

        if ( num_outputs == 0 ){ return; } // nothing to load

        if ( needed_points == 0 ){
                data->add( points );
        }else{
                for( int i=0; i<points->getNumIndexes(); i++ ){
                        const int *p = points->getIndexList(i);
                        if ( needed_points->getSlot(p) == -1 ){
                                //data->add( p );
                                data->add( p, points->getValueList(i) );
                        }
                }
        }
}
void FullTensorGrid::getUpdateState( IndexSet* &update, double tol, TypeRefinement criteria ) const{ // give the new set of points or tensors
        if ( update != 0 ){ delete update; };
        update = new IndexSet( num_dimensions, 1 );

        int indx[num_dimensions];
        tcopy( num_dimensions, tensor_index, indx );

        for( int i=0; i<num_dimensions; i++ ){ indx[i]++; }

        update->add( indx );
}
void FullTensorGrid::setUpdate( const IndexSet *update ){ // creates a grid with the data updates
        setState( update );
}


}

#endif

