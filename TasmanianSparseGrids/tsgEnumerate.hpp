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

#ifndef __TASMANIAN_SPARSE_GRID_ENUMERATE_HPP
#define __TASMANIAN_SPARSE_GRID_ENUMERATE_HPP

namespace TasGrid{

enum TypeIndexRelation{
        type_abeforeb, type_bbeforea, type_asameb
};

enum TypeOneDRule{
        rule_base,
        rule_clenshawcurtis,
        rule_chebyshev,
        rule_gausslegendre,
        rule_gausschebyshev1,
        rule_gausschebyshev2,
        rule_chebyshevN2P,
        rule_fejer2,
        rule_gaussgegenbauer,
        rule_gaussjacobi,
        rule_gausslaguerre,
        rule_gausshermite,
        // Piece-Wise rules
        rule_pwpolynomial,
        rule_pwpolynomial0, // assumes zero boundary
        // Wavelet rules
        rule_wavelet,
        // Tensor rule
        rule_fulltensor // FOR INTERNAL USE ONLY
};

enum TypeDepth{
        type_level, type_basis, type_hyperbolic
};

enum TypeExclusion{
        type_exclude_none, type_exclude_basis, type_exclude_hyper
};

enum TypeRefinement{
        refine_classic, refine_parents_first, refine_direction_selective, refine_fds /* FDS = parents_first + direction_selective */
};


};

#endif
