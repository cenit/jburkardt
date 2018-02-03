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

#ifndef __TASMANIAN_SPARSE_GRID_GLOBAL_GRID_HPP
#define __TASMANIAN_SPARSE_GRID_GLOBAL_GRID_HPP

#include "tsgEnumerate.hpp"
#include "tsgHelperFunctions.hpp"

#include "tsgBase1DRule.hpp"
#include "tsgRuleClenshawCurtis.hpp"
#include "tsgRuleChebyshev.hpp"
#include "tsgRuleGaussLegendre.hpp"
#include "tsgRuleChebyshevNestedTwoPoint.hpp"
#include "tsgRuleGaussChebyshev1.hpp"
#include "tsgRuleGaussChebyshev2.hpp"
#include "tsgRuleFejer.hpp"
#include "tsgRuleGaussGegenbauer.hpp"
#include "tsgRuleGaussJacobi.hpp"
#include "tsgRuleGaussLaguerre.hpp"
#include "tsgRuleGaussHermite.hpp"

#include "tsgBaseGrid.hpp"

#include "tsgTensorRule.hpp"

namespace TasGrid{

class GlobalGrid : public Grid{
public:
        GlobalGrid();
        GlobalGrid( int dimensions, int outputs, int depth, TypeDepth type, TypeOneDRule oned, const int *anisotropic_weights = 0, const double *alpha_beta = 0 );
        ~GlobalGrid();

        void reset( int dimensions, int outputs, int depth, TypeDepth type, TypeOneDRule oned, const int *anisotropic_weights = 0, const double *alpha_beta = 0 );
        //virtual void reset( int outputs );

        double getAlpha() const;
        double getBeta() const;

        int getNumDimensions() const;
        int getNumOutputs() const;
        TypeOneDRule getOneDRule() const;
        const char *getOneDRuleDescription() const;
        const int *getAnisotropic() const;

        void write( std::ofstream &ofs ) const; // write the grid to a file
        bool read( std::ifstream &ifs ); // reads the grid

        int getNumPoints() const;

        void getPoints( double* &pnts ) const;
        void getWeights( double* &weights ) const;
        void getInterpolantWeights( const double x[], double* &weights ) const;

        int getNumNeededPoints() const;
        void getNeededPoints( double* &pnts ) const;
        void loadNeededPoints( const double vals[] );
        void loadNeededPoints( const IndexSet *data );

        void evaluate( const double x[], double y[] ) const;
        void integrate( double y[] ) const;

        // refinement functions
        const IndexSet* getState() const; // returns enough information to rebuild the grid (i.e. the tensor list or the points list)
        void setState( const IndexSet* state ); // copy the tensors and/or points
        //const IndexSet* getData() const; // returns the point set associated with the values (if any)
        void getData( IndexSet* &data ); // returns a list of the set points and their values
        void getUpdateState( IndexSet* &update, double tol, TypeRefinement criteria ) const; // give the new set of points or tensors
        void setUpdate( const IndexSet *update ); // creates a grid with the data updates

protected:
        void clear();
        void clear1D();

        int getLevelNeededForBasis( int depth );
        int getLevelNeededForHyperbolic( int depth );
        int getMaxLevel( const IndexSet * set ) const; // find the largest level in the index set
        void makeOnedRule( int level );

        int computeMaxLevel() const;
        bool isSubset( const int subset[], const int superset[] ) const;

        void makeTensorList( int depth, TypeDepth type = type_level );
        void makeTensorsArray();
        void makeBalanceWeights();
        void makePoints();

        int getLevelScale() const;

private:
        OneDRule *rule1D;
        TypeOneDRule ruleType;

        RuleChebyshev *ch_rule;
        RuleClenshawCurtis *cc_rule;
        RuleGaussLegendre *gl_rule;
        RuleChebyshevN2P *tp_rule;
        RuleGaussChebyshev1 *gc1_rule;
        RuleGaussChebyshev2 *gc2_rule;
        RuleFejer *f2_rule;
        RuleGaussGegenbauer *gg_rule;
        RuleGaussJacobi *gj_rule;
        RuleGaussLaguerre *ggl_rule;
        RuleGaussHermite *gh_rule;

        int num_dimensions, num_outputs;

        int *tensor_weights;

        IndexSet *tensorList;
        TensorRule *tensorRules;
        IndexSet *points;

        IndexSet *needed_points;

        int *anisotropic;

        double alpha, beta;
};

int basisLevel( int num_dimensions, OneDRule *rule1D, const int index[], const int *anisotropic );
int hyperbolicLevel( int num_dimensions, const int index[], const int *anisotropic );
void recurseAddIndexes( const int dimension, TypeExclusion exclude, int exclude_offset, OneDRule *rule1D, int remainder, int index[], IndexSet *set, const int *anisotropic );


}
#endif
