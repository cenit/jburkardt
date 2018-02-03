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

#ifndef __TASMANIAN_SPARSE_GRID_GLOBAL_GRID_CPP
#define __TASMANIAN_SPARSE_GRID_GLOBAL_GRID_CPP

#include "tsgGlobalGrid.hpp"


namespace TasGrid{

GlobalGrid::GlobalGrid() : rule1D(0), ruleType(rule_base), num_dimensions(0), num_outputs(0), tensorList(0), tensorRules(0), points(0), needed_points(0), tensor_weights(0),
        anisotropic(0), alpha(0.0), beta(0.0),
        ch_rule(0), cc_rule(0), gl_rule(0), tp_rule(0), gc1_rule(0), gc2_rule(0), f2_rule(0), gg_rule(0), gj_rule(0), ggl_rule(0), gh_rule(0)
{
};

GlobalGrid::GlobalGrid( int dimensions, int outputs, int depth, TypeDepth type, TypeOneDRule oned, const int *anisotropic_weights, const double *alpha_beta ) :
        rule1D(0), ruleType(rule_base), num_dimensions(0), num_outputs(0),
        anisotropic(0), alpha(0.0), beta(0.0),
        tensorList(0), tensorRules(0), points(0), needed_points(0), tensor_weights(0),
        ch_rule(0), cc_rule(0), gl_rule(0), tp_rule(0), gc1_rule(0), gc2_rule(0), f2_rule(0), gg_rule(0), gj_rule(0), ggl_rule(0), gh_rule(0)
{
        reset( dimensions, outputs, depth, type, oned, anisotropic_weights, alpha_beta );
}

GlobalGrid::~GlobalGrid(){
        clear();
};

void GlobalGrid::clear1D(){
        if ( ch_rule != 0 ){ delete ch_rule; ch_rule = 0; }
        if ( cc_rule != 0 ){ delete cc_rule; cc_rule = 0; }
        if ( gl_rule != 0 ){ delete gl_rule; gl_rule = 0; }
        if ( tp_rule != 0 ){ delete tp_rule; tp_rule = 0; }
        if ( gc1_rule != 0 ){ delete gc1_rule; gc1_rule = 0; }
        if ( gc2_rule != 0 ){ delete gc2_rule; gc2_rule = 0; }
        if ( f2_rule != 0 ){ delete f2_rule; f2_rule = 0; }
        if ( gg_rule != 0 ){ delete gg_rule; gg_rule = 0; }
        if ( gj_rule != 0 ){ delete gj_rule; gj_rule = 0; }
        if ( ggl_rule != 0 ){ delete ggl_rule; ggl_rule = 0; }
        if ( gh_rule != 0 ){ delete gh_rule; gh_rule = 0; }
        rule1D = 0;
}

void GlobalGrid::clear(){
        clear1D();

        ruleType = rule_base;
        num_dimensions = 0; num_outputs = 0;
        if ( tensorList != 0 ){ delete tensorList; }; tensorList = 0;
        if ( points != 0 ){ delete points; }; points = 0;
        if ( tensorRules != 0 ){ delete[] tensorRules; }; tensorRules = 0;
        if ( tensor_weights != 0 ){ delete[] tensor_weights; }; tensor_weights = 0;

        if ( needed_points != 0){ delete needed_points; }; needed_points = 0;

        if ( anisotropic != 0 ){ delete[] anisotropic; }; anisotropic = 0;
}

double GlobalGrid::getAlpha() const{ return alpha; }
double GlobalGrid::getBeta() const{ return beta; }

void GlobalGrid::reset( int dimensions, int outputs, int depth, TypeDepth type, TypeOneDRule oned, const int *anisotropic_weights, const double *alpha_beta ){
        clear();
        ruleType = oned;

        num_dimensions = dimensions;
        num_outputs = outputs;

        if ( (oned == rule_gaussgegenbauer) || (oned == rule_gausslaguerre) || (oned == rule_gausshermite) ){
                alpha = alpha_beta[0];
        }
        if ( (oned == rule_gaussjacobi) ){
                alpha = alpha_beta[0];
                beta  = alpha_beta[1];
        }

        if ( anisotropic_weights != 0 ){
                anisotropic = new int[num_dimensions+1];
                tcopy( num_dimensions, anisotropic_weights, anisotropic );
                anisotropic[num_dimensions] = tsum( num_dimensions, anisotropic_weights );
        }

        if ( type == type_level ){
                makeOnedRule( depth );
        }else if ( type == type_basis ){
                makeOnedRule( 3 );
                makeOnedRule( getLevelNeededForBasis( depth ) );
        }else{
                makeOnedRule( getLevelNeededForHyperbolic( depth ) );
        }

        makeTensorList( depth, type );

        makeTensorsArray();

        makeBalanceWeights();

        makePoints();
}

int GlobalGrid::getNumDimensions() const{ return num_dimensions; }
int GlobalGrid::getNumOutputs() const{ return num_outputs; }
TypeOneDRule GlobalGrid::getOneDRule() const{ return ruleType; }
const char *GlobalGrid::getOneDRuleDescription() const{ rule1D->getDescription(); }
const int *GlobalGrid::getAnisotropic() const{ return anisotropic; }

void GlobalGrid::write( std::ofstream &ofs ) const{ // write the grid to a file
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
        if ( ruleType == rule_fejer2 ){ ofs << "lagrange-fejer2"; }else
        if ( ruleType == rule_gaussgegenbauer ){ ofs << "lagrange-gauss-gegenbauer"; }else
        if ( ruleType == rule_chebyshevN2P ){ ofs << "lagrange-chebyshev-nested-twopoint"; }else
        if ( ruleType == rule_gaussgegenbauer ){ ofs << "lagrange-gauss-gegenbauer"; }else
        if ( ruleType == rule_gaussjacobi ){ ofs << "lagrange-gauss-jacobi"; }else
        if ( ruleType == rule_gausslaguerre ){ ofs << "lagrange-gauss-laguerre"; }else
        if ( ruleType == rule_gausshermite ){ ofs << "lagrange-gauss-hermite"; }else
        if ( ruleType == rule_base ){ ofs << "empty-rule"; }
        ofs << endl;
        ofs << "Anisotropic: ";
        if ( anisotropic != 0 ){
                ofs << "yes" << endl;
                twrite( num_dimensions+1, anisotropic, ofs );
        }else{
                ofs << "no" << endl;
        }
        ofs << "Tensors: ";
        if ( tensorList != 0 ){
                ofs << "yes" << endl;
                tensorList->write( ofs );
        }else{
                ofs << "no" << endl;
        }
        ofs << "TensorWeights: ";
        if ( tensor_weights != 0 ){
                ofs << "yes" << endl;
                twrite( tensorList->getNumIndexes(), tensor_weights, ofs );
        }else{
                ofs << "no" << endl;
        }
        ofs << "Points: ";
        if ( tensor_weights != 0 ){
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
bool GlobalGrid::read( std::ifstream &ifs ){ // reads the grid
        clear();
        std::string T;
        ifs >> T;
        if ( !(T.compare( "num_dimensions:" ) == 0) ){ cerr << "ERROR: Wrong File Format! code GG 1" << endl; ifs.close(); clear(); return false; }
        ifs >> num_dimensions;
        ifs >> T; if ( !(T.compare( "num_outputs:" ) == 0) ){ cerr << "ERROR: Wrong File Format! code GG 2" << endl; ifs.close(); clear(); return false; }
        ifs >> num_outputs;
        ifs >> T; if ( !(T.compare( "alpha:" ) == 0) ){ cerr << "ERROR: Wrong File Format! code GG 3" << endl; ifs.close(); clear(); return false; }
        tread( 1, &alpha, ifs );
        ifs >> T; if ( !(T.compare( "beta:" ) == 0) ){ cerr << "ERROR: Wrong File Format! code GG 4" << endl; ifs.close(); clear(); return false; }
        tread( 1, &beta, ifs );
        ifs >> T; if ( !(T.compare( "ruleType:" ) == 0) ){ cerr << "ERROR: Wrong File Format! code GG 6" << endl; ifs.close(); clear(); return false; }
        ifs >> T;
        if ( T.compare("lagrange-chebyshev") == 0 ){       ruleType = rule_chebyshev; }else
        if ( T.compare("lagrange-clenshaw-curtis") == 0 ){ ruleType = rule_clenshawcurtis; }else
        if ( T.compare("lagrange-chebyshev-nested-twopoint") == 0 ){ ruleType = rule_chebyshevN2P; }else
        if ( T.compare("lagrange-gauss-legendre") == 0 ){  ruleType = rule_gausslegendre; }else
        if ( T.compare("lagrange-gauss-chebyshev1") == 0 ){  ruleType = rule_gausschebyshev1; }else
        if ( T.compare("lagrange-gauss-chebyshev2") == 0 ){  ruleType = rule_gausschebyshev2; }else
        if ( T.compare("lagrange-fejer2") == 0 ){  ruleType = rule_fejer2; }else
        if ( T.compare("lagrange-gauss-gegenbauer") == 0 ){  ruleType = rule_gaussgegenbauer; }else
        if ( T.compare("lagrange-gauss-jacobi") == 0 ){  ruleType = rule_gaussjacobi; }else
        if ( T.compare("lagrange-gauss-laguerre") == 0 ){  ruleType = rule_gausslaguerre; }else
        if ( T.compare("lagrange-gauss-hermite") == 0 ){  ruleType = rule_gausshermite; }else{
                cerr << "ERROR: Wrong File Format! code GG 7" << endl; ifs.close(); clear(); return false;
        }
        ifs >> T; if ( !(T.compare( "Anisotropic:" ) == 0) ){ cerr << "ERROR: Wrong File Format! code GG 8" << endl; ifs.close(); clear(); return false; }
        ifs >> T;
        if ( T.compare("yes") == 0 ){
                anisotropic = new int[num_dimensions+1];
                tread( num_dimensions+1, anisotropic, ifs );
                //tensorList = new IndexSet( num_dimensions, 0, num_outputs ); tensorList->read( ifs );
        }
        ifs >> T; if ( !(T.compare( "Tensors:" ) == 0) ){ cerr << "ERROR: Wrong File Format! code GG 9" << endl; ifs.close(); clear(); return false; }
        ifs >> T;
        if ( T.compare("yes") == 0 ){
                tensorList = new IndexSet( num_dimensions, 0, num_outputs ); tensorList->read( ifs );
        }
        ifs >> T; if ( !(T.compare( "TensorWeights:" ) == 0) ){ cerr << "ERROR: Wrong File Format! code GG 10" << endl; ifs.close(); clear(); return false; }
        ifs >> T;
        if ( T.compare("yes") == 0 ){
                tensor_weights = new int[tensorList->getNumIndexes()]; tread( tensorList->getNumIndexes(), tensor_weights, ifs );
        }
        ifs >> T; if ( !(T.compare( "Points:" ) == 0) ){ cerr << "ERROR: Wrong File Format! code GG 11" << endl; ifs.close(); clear(); return false; }
        ifs >> T;
        if ( T.compare("yes") == 0 ){
                points = new IndexSet( num_dimensions, 0, num_outputs ); points->read( ifs );
        }
        ifs >> T; if ( !(T.compare( "NeededPoints:" ) == 0) ){ cerr << "ERROR: Wrong File Format! code GG 12" << endl; ifs.close(); clear(); return false; }
        ifs >> T;
        if ( T.compare( "yes" ) == 0 ){
                needed_points = new IndexSet( num_dimensions, 0, num_outputs );
                needed_points->read( ifs );
        }else{
                needed_points = 0;
        }

        makeOnedRule( computeMaxLevel() + 1 );
        makeTensorsArray();
        if ( num_outputs > 0 ){
                for( int t=0; t<tensorList->getNumIndexes(); t++ ){
                        if ( tensor_weights[t] != 0 ){
                                tensorRules[t].referenceValues( points );
                        }
                }
        }

        return true;
}


int GlobalGrid::getNumPoints() const{ return ( points == 0 ) ? 0 : points->getNumIndexes(); }

void GlobalGrid::getPoints( double* &pnts ) const{
        if ( pnts != 0 ){ delete[] pnts; }
        pnts = new double[ num_dimensions * points->getNumIndexes() ];
        for( int i=0; i<points->getNumIndexes(); i++ ){
                const int *point = points->getIndexList(i);
                for( int j=0; j<num_dimensions; j++ ){
                        pnts[ i*num_dimensions + j ] = rule1D->getX( point[j] );
                }
        }
}
void GlobalGrid::getWeights( double* &weights ) const{
        int num_points = points->getNumIndexes();
        if ( weights != 0 ){ delete[] weights; };
        weights = new double[num_points];
        tzero( num_points, weights );

        // for each tensor, add the weights
        for( int t=0; t<tensorList->getNumIndexes(); t++ ){
                if ( tensor_weights[t] != 0 ){
                        double *w = 0;
                        tensorRules[t].getWeights( w );
                        #pragma omp parallel for
                        for( int i=0; i<tensorRules[t].getNumPoints(); i++ ){
                                weights[ points->getSlot( tensorRules[t].getPoint(i) ) ] += ((double) tensor_weights[t]) * w[i];
                        }
                        delete[] w;
                }
        }
}
void GlobalGrid::getInterpolantWeights( const double x[], double* &weights ) const{
        int num_points = points->getNumIndexes();
        if ( weights != 0 ){ delete[] weights; };
        weights = new double[num_points];
        tzero( num_points, weights );

        // for each tensor, add the weights
        for( int t=0; t<tensorList->getNumIndexes(); t++ ){
                if ( tensor_weights[t] != 0 ){
                        double *w = 0;
                        tensorRules[t].getInterpolantWeights( x, w );
                        #pragma omp parallel for
                        for( int i=0; i<tensorRules[t].getNumPoints(); i++ ){
                                weights[ points->getSlot( tensorRules[t].getPoint(i) ) ] += ((double) tensor_weights[t]) * w[i];
                        }
                        delete[] w;
                }
        };
}

int GlobalGrid::getNumNeededPoints() const{ return (needed_points==0) ? 0 : needed_points->getNumIndexes(); }

void GlobalGrid::getNeededPoints( double* &pnts ) const{
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
void GlobalGrid::loadNeededPoints( const double vals[] ){
        for( int i=0; i<needed_points->getNumIndexes(); i++ ){
                points->setValue( points->getSlot( needed_points->getIndexList(i) ), &(vals[num_outputs * i]) );
        }
        delete needed_points; needed_points = 0;
}
void GlobalGrid::loadNeededPoints( const IndexSet *data ){
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

void GlobalGrid::evaluate( const double x[], double y[] ) const{
        tzero(num_outputs, y);
        if ( points->getNumIndexes() > points->getNumValues() ){ // if number of points is more
                double *tensor_y = new double[num_outputs];
                for( int t=0; t<tensorList->getNumIndexes(); t++ ){
                        if ( tensor_weights[t] != 0 ){
                                tensorRules[t].eval( x, tensor_y );
                                #pragma omp parallel for
                                for( int j=0; j<num_outputs; j++ ){
                                        y[j] += ((double) tensor_weights[t] ) * tensor_y[j];
                                }
                        }
                }
                delete[] tensor_y;
        }else{
                int num_points = points->getNumIndexes();
                double *weights = 0;
                getInterpolantWeights( x, weights );
                #pragma omp parallel for
                for( int j=0; j<num_outputs; j++ ){
                        for( int i=0; i<num_points; i++ ){
                                const double *val = points->getValueList(i);
                                y[j] += weights[i] * val[j];
                        }
                }
                delete[] weights;
        }
}

void GlobalGrid::integrate( double y[] ) const{
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
const IndexSet* GlobalGrid::getState() const{ return tensorList; };
void GlobalGrid::setState( const IndexSet* state ){
        TypeOneDRule oldRuleType = ruleType;
        int outputs = num_outputs;
        clear();
        ruleType = oldRuleType;
        num_outputs = outputs;

        makeOnedRule( getMaxLevel(state) );

        num_dimensions = state->getNumDimensions();

        tensorList = new IndexSet( num_dimensions );
        tensorList->copy( state );

        makeTensorsArray();
        makeBalanceWeights();
        makePoints();
};
void GlobalGrid::getData( IndexSet* &data ){
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

void GlobalGrid::getUpdateState( IndexSet* &update, double tol, TypeRefinement criteria )const{
        if ( update != 0 ){ delete update; };
        update = new IndexSet( num_dimensions );

        // do a full refinement for now
        for( int i=0; i<tensorList->getNumIndexes(); i++ ){
                const int *parent = tensorList->getIndexList(i);
                int kid[num_dimensions];
                tcopy( num_dimensions, parent, kid );
                for( int j=0; j<num_dimensions; j++ ){
                        kid[j]++;
                        if ( tensorList->getSlot(kid) == -1 ){
                                update->add( kid );
                        }
                        kid[j]--;
                }
        }
};
void GlobalGrid::setUpdate( const IndexSet *update ){
        tensorList->add( update );

        makeOnedRule( getMaxLevel(tensorList) );

        makeTensorsArray();
        makeBalanceWeights();
        makePoints();
};

int GlobalGrid::getLevelNeededForBasis( int depth ){
        int *index = new int[num_dimensions];
        tzero( num_dimensions, index );
        int l = 1, min;
        while( basisLevel( num_dimensions, rule1D, index, 0 ) <= depth ){
                min = 0;
                for( int i=1; i<num_dimensions; i++ ){
                        min = ( index[min] < index[i] ) ? min : i;
                };
                index[min]++;
                l++;
                if ( l > rule1D->getMaxLevel() ){
                        makeOnedRule( l );
                };
        };
        delete[] index;
        return ( l < 1 ) ? 1 : l-1;
};
int GlobalGrid::getLevelNeededForHyperbolic( int depth ){
        if ( anisotropic == 0 ){
                return depth;
        }else{
                return ceilf( pow( (double) depth,  ( ( (double) getLevelScale() ) / ( (double) anisotropic[num_dimensions] ) ) ) );
        }
}

int GlobalGrid::getMaxLevel( const IndexSet * set ) const{
        int max = 0;
        for( int i=0; i<set->getNumIndexes(); i++ ){
                const int *p = set->getIndexList(i);
                for( int j=0; j<set->getNumDimensions(); j++ ){
                        max = ( max > p[j] ) ? max : p[j];
                }
        }
        return max+1;
}

void GlobalGrid::makeOnedRule( int level ){
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
        }else if ( ruleType == rule_chebyshevN2P ){
                tp_rule = new RuleChebyshevN2P( level );
                rule1D = tp_rule;
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
        }
}

int GlobalGrid::computeMaxLevel() const{
        int max_level = 0;
        for( int i=0; i<tensorList->getNumIndexes(); i++ ){
                int sum = tsum( num_dimensions, tensorList->getIndexList(i) );
                max_level = ( sum > max_level ) ? sum : max_level;
        }
        return max_level;
}

bool GlobalGrid::isSubset( const int subset[], const int superset[] )const {
        for( int i=0; i<num_dimensions; i++ ){
                if ( subset[i] > superset[i] ) return false;
        }
        return true;
}

void GlobalGrid::makeTensorList( int depth, TypeDepth type ){
        if ( tensorList != 0 ){ delete tensorList; }
        tensorList = new IndexSet( num_dimensions );

        int *index = new int[num_dimensions]; tzero( num_dimensions, index );
        int max_search_depth = 0;
        TypeExclusion exclude = type_exclude_none;

        int min_a = getLevelScale();
        int exclude_offset = 0;

        if ( type == type_level ){
                max_search_depth = depth;
                exclude = type_exclude_none;
                exclude_offset = min_a*(depth-1);
        }else if ( type == type_basis ){
                max_search_depth = getLevelNeededForBasis( depth );
                exclude = type_exclude_basis;
                exclude_offset = min_a*depth;
        }else{
                max_search_depth = getLevelNeededForHyperbolic( depth );
                exclude = type_exclude_hyper;
                exclude_offset = max_search_depth;
        }

        for( int l=0; l<max_search_depth; l++ ){
                recurseAddIndexes( 0, exclude, exclude_offset, rule1D, l, index, tensorList, anisotropic );
        };

        delete[] index;
}

void GlobalGrid::makeTensorsArray(){
        if ( tensorRules != 0 ){ delete[] tensorRules; };
        tensorRules = new TensorRule[ tensorList->getNumIndexes() ];
        for( int i=0; i<tensorList->getNumIndexes(); i++ ){
                tensorRules[i].rebuild( num_dimensions, tensorList->getIndexList(i), rule1D );
        }
}

void GlobalGrid::makeBalanceWeights(){
        int num_tensors = tensorList->getNumIndexes();
        if ( tensor_weights != 0 ){ delete[] tensor_weights; }
        tensor_weights = new int[ num_tensors ]; tzero( num_tensors, tensor_weights );
        int max_level = computeMaxLevel();
        for( int l = max_level; l>=0; l-- ){
                for( int i=0; i<num_tensors; i++ ){
                        const int *iList = tensorList->getIndexList(i);
                        if ( tsum( num_dimensions, iList ) == l ){ // set the current level
                                tensor_weights[i] = 1 - tensor_weights[i];
                                for( int j=0; j<num_tensors; j++ ){
                                        if ( (i!=j) && (isSubset(tensorList->getIndexList(j), iList)) ){
                                                tensor_weights[j] += tensor_weights[i];
                                        }
                                }
                        }
                }
        }
}

void GlobalGrid::makePoints(){
        if ( points != 0 ){ delete points; }
        points = new IndexSet( num_dimensions, 0, num_outputs );
        for( int t=0; t<tensorList->getNumIndexes(); t++ ){
                if ( tensor_weights[t] != 0 ){
                        points->add( tensorRules[t].getPoints() );
                }
        }
        if ( needed_points != 0 ){ delete needed_points; }; needed_points = 0;

        if ( num_outputs > 0 ){
                needed_points = new IndexSet( num_dimensions, 0, num_outputs );
                needed_points->add( points );
                // relink to tensors
                for( int t=0; t<tensorList->getNumIndexes(); t++ ){
                        if ( tensor_weights[t] != 0 ){
                                tensorRules[t].referenceValues( points );
                        }
                }
        }
}

int GlobalGrid::getLevelScale() const{
        if ( anisotropic == 0 ){ return 1; }
        int scale = anisotropic[0];

        for( int i=1; i<num_dimensions; i++ ){
                scale = ( scale < anisotropic[i] ) ? scale : anisotropic[i];
        }
        return scale;
}

int hyperbolicLevel( int num_dimensions, const int index[], const int *anisotropic ){
        if ( anisotropic == 0 ){
                int level = 1;
                for( int i=0; i<num_dimensions; i++ ){
                        level *= index[i] + 1;
                }
                return level;
        }else{
                // there is no way to avoid the use of doubles here and hence the potential instability due to rounding
                double level = 1.0;
                for( int i=0; i<num_dimensions; i++ ){
                        level *= pow( (double) (index[i] + 1), (( (double) anisotropic[i] ) / ( (double) anisotropic[num_dimensions] )) );
                }
                return ceilf( level );
        }
}

int basisLevel( int num_dimensions, OneDRule *rule1D, const int index[], const int *anisotropic ){
        int basis = 0;
        if ( anisotropic == 0 ){
                for( int i=0; i<num_dimensions; i++ ){
                        basis += rule1D->getBasisLevel( index[i] );
                };
        }else{
                for( int i=0; i<num_dimensions; i++ ){
                        basis += rule1D->getBasisLevel( index[i] ) * anisotropic[i];
                };
        }
        return basis;
};

void recurseAddIndexes( const int dimension, TypeExclusion exclude, int exclude_offset, OneDRule *rule1D, int remainder, int index[], IndexSet *set, const int *anisotropic ){
        if ( dimension == set->getNumDimensions()-1 ){
                index[dimension] = remainder;
                if ( (exclude == type_exclude_none) ){
                        int basis = 0;
                        if ( anisotropic != 0 ){
                                for( int i=0; i<set->getNumDimensions(); i++ ){
                                        basis += index[i] * anisotropic[i];
                                };
                        }
                        if ( basis <= exclude_offset ){
                                set->add(index);
                        }
                }else if ( (exclude == type_exclude_basis) && (basisLevel(set->getNumDimensions(),rule1D,index,anisotropic) <= exclude_offset) ){
                        set->add(index);
                }else if ( (exclude == type_exclude_hyper) && (hyperbolicLevel(set->getNumDimensions(),index,anisotropic) <= exclude_offset) ){
                        set->add(index);
                }
        }else{
                for( int i = 0; i <= remainder; i++ ){
                        index[dimension] = i;
                        recurseAddIndexes( dimension + 1, exclude, exclude_offset, rule1D, remainder-i, index, set, anisotropic );
                }
        }
}

}

#endif
