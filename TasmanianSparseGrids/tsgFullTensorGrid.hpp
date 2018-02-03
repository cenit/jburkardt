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

#ifndef __TASMANIAN_SPARSE_GRID_FULL_TENSOR_GRID_HPP
#define __TASMANIAN_SPARSE_GRID_FULL_TENSOR_GRID_HPP

#include "tsgEnumerate.hpp"
#include "tsgHelperFunctions.hpp"

#include "tsgBase1DRule.hpp"
#include "tsgRuleClenshawCurtis.hpp"
#include "tsgRuleChebyshev.hpp"
#include "tsgRuleGaussLegendre.hpp"
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

class FullTensorGrid : public Grid{
public:
        FullTensorGrid();
        FullTensorGrid( int dimensions, int outputs, const int order[], TypeOneDRule oned, const double *alpha_beta = 0 );
        ~FullTensorGrid();

        void reset( int dimensions, int outputs, const int order[], TypeOneDRule oned, const double *alpha_beta = 0 );
        //virtual void reset( int outputs );

        int getNumDimensions() const;
        int getNumOutputs() const;
        TypeOneDRule getOneDRule() const;
        const char *getOneDRuleDescription() const;

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

        void makeOnedRule( int level );

        int getMaxLevel() const;

private:
        OneDRule *rule1D;
        TypeOneDRule ruleType;

        RuleChebyshev *ch_rule;
        RuleClenshawCurtis *cc_rule;
        RuleGaussLegendre *gl_rule;
        RuleGaussChebyshev1 *gc1_rule;
        RuleGaussChebyshev2 *gc2_rule;
        RuleFejer *f2_rule;
        RuleGaussGegenbauer *gg_rule;
        RuleGaussJacobi *gj_rule;
        RuleGaussLaguerre *ggl_rule;
        RuleGaussHermite *gh_rule;

        int num_dimensions, num_outputs;

        int *tensor_index;

        TensorRule tensor;
        IndexSet *points;

        IndexSet *needed_points;

        IndexSet *report_tensor_order;

        double alpha, beta;
};


}

#endif
