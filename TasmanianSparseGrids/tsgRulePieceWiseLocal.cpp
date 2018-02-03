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

#ifndef __TASMANIAN_SPARSE_GRID_PWLOCAL_RULE_CPP
#define __TASMANIAN_SPARSE_GRID_PWLOCAL_RULE_CPP

#include "tsgRulePieceWiseLocal.hpp"

#include <iostream>

namespace TasGrid{

RulePieceWiseLocal::RulePieceWiseLocal( int max_order ) : order(max_order), gl_w(0), gl_x(0), gl_n(0) {
        firstFewParents[0] = -1;
        firstFewParents[1] = 0;  firstFewParents[2] = 0;
        firstFewParents[3] = 1;  firstFewParents[4] = 2;

        gl_n = PW_QUAD_POINTS;
        RuleGaussLegendre gl( 1 );
        gl.buildOneLevel( gl_n-1, gl_w, gl_x );
}

RulePieceWiseLocal::~RulePieceWiseLocal(){
        if ( gl_x != 0 ){ delete[] gl_x; gl_x = 0; }
        if ( gl_w != 0 ){ delete[] gl_w; gl_w = 0; }
};

int RulePieceWiseLocal::getMaxOrder() const{
        return order;
}
void RulePieceWiseLocal::setMaxOrder( int max_order ){
        order = max_order;
}

TypeOneDRule RulePieceWiseLocal::getType() const{
        return rule_pwpolynomial;
}

const char * RulePieceWiseLocal::getDescription() const{
        switch (order){
                case -1: return "Piece-Wise Polynomials of Highest Degeree";
                case  0: return "Piece-Wise Constant Local basis";
                case  1: return "Piece-Wise Linear Local basis";
                case  2: return "Piece-Wise Quadratic Local basis";
                case  3: return "Piece-Wise Cubic Local basis";
                case  4: return "Piece-Wise Quartic Local basis";
                case  5: return "Piece-Wise Quintic Local basis";
                case  6: return "Piece-Wise Hexic Local basis";
                case  7: return "Piece-Wise Septic Local basis";
                case  8: return "Piece-Wise Octic Local basis";
                case  9: return "Piece-Wise Nonic Local basis";
                case 10: return "Piece-Wise Decic Local basis";
                default:
                        return "Piece-Wise Local basis";
        }
}

int RulePieceWiseLocal::getNumPoints( int level ) const{
        return (level == 0 ) ? 1 : ( pow( 2, level ) + 1 );
}

int RulePieceWiseLocal::getBasisLevel( int level ) const{
        return level;
}

double RulePieceWiseLocal::getSupport( int level ) const{
        return (level == 0) ? 1.0 : (2.0 / ( (double) (getNumPoints(level) -1) ) );
}

int RulePieceWiseLocal::getLevel( int point ) const{
        return (point == 0) ? 0 : (point == 1) ? 1 : intlog2(point - 1) + 1;
}
void RulePieceWiseLocal::getChildren( int point, int &first, int &second ) const{
        if ( point == 0 ){ first = 1; second =  2; }else
        if ( point == 1 ){ first = 3; second = -1; }else
        if ( point == 2 ){ first = 4; second = -1; }else
                         { first = 2*point-1; second = 2*point; }
}
void RulePieceWiseLocal::getParents( int point, int &first, int &second ) const{
        second = -1;
        if ( point < 5 ){ first = firstFewParents[point]; }else{ first = (point+1)/2; }
}
int RulePieceWiseLocal::intlog2( int i ) const{
        int result = 0;
        while (i >>= 1){ result++; }
        return result;
}


double RulePieceWiseLocal::getX( int point ) const{
        if ( point == 0 ){ return 0.0; }else
        if ( point == 1 ){ return -1.0; }else
        if ( point == 2 ){ return 1.0; }
        int l = getLevel(point);
        return -1.0 + getSupport( l ) + ( point - getNumPoints( l-1 ) ) * getSupport( l-1  );
}
double RulePieceWiseLocal::getWeight( int level, int point ) const{
        if ( (order > 0) && (order < 4) ){
                if ( (level == 0 ) ){ return 2.0; }else
                if ( (level == 1 ) ){ return (order == 1) ? 0.5 : 1.0/3.0; };
                return ( (order == 1) ? 1.0 : 4.0/3.0 ) * getSupport( level );
        }
        if ( order == 0 ){
                if ( level == 0 ){ return 2.0; }else{ return getSupport(level); };
        }

        // need to integrate the corresponding basis funciton ... not very optimal
        if ( level == 0 ) return 2.0;
        if ( level == 1 ) return 1.0/3.0;


        double sum = 0.0;

        // make sure we have a big enough rule
        if ( level + 1 > 2*gl_n - 1 ){ // order of a function is level + 1, Gauss-Legendre rule is accurate up to 2*gl_n-1
                RuleGaussLegendre gl( 1 );
                int n = ( level + 1 > order ) ? level + 1 : order; // this is the maximum order that we would need
                n = n/2 + 1; // this is the number of points that we would need
                double *gl_w_extended = 0, *gl_x_extended = 0;
                gl.buildOneLevel( n-1, gl_w_extended, gl_x_extended ); // buildOneLevel uses level as input and that correspoinds to points level+1

                for( int i=0; i<n; i++ ){
                        sum += gl_w_extended[i] * evalPWPowerNormalized( level, point, gl_x_extended[i] );
                }
                delete[] gl_w_extended;
                delete[] gl_x_extended;
        }else{
                for( int i=0; i<gl_n; i++ ){
                        sum += gl_w[i] * evalPWPowerNormalized( level, point, gl_x[i] );
                }
        }
        return sum * getSupport( level );
};
double RulePieceWiseLocal::eval( int level, int point, double x ) const{
        switch( order ){
                case 0: return evalPWConstant( level, point, x );
                case 1: return evalPWLinear( level, point, x );
                case 2: return evalPWQuadratic( level, point, x );
                case 3: return evalPWCubic( level, point, x );
                default:
                        return evalPWPower( level, point, x );
        }
}

double RulePieceWiseLocal::evalPWConstant( int level, int point, double x ) const{
        return ( (point==0) || (fabs( x - getX(point) ) / getSupport(level) <1.0) ) ? 1.0 : 0.0;
}

double RulePieceWiseLocal::evalPWLinear( int level, int point, double x ) const{
        if ( point == 0 ){ return 1.0; }
        double cn = fabs( x - getX(point) ) / getSupport(level); // normalize the distance to the point
        if ( cn < 1.0 ){
                return 1.0 - cn;
        }
        return 0.0;
}
double RulePieceWiseLocal::evalPWQuadratic( int level, int point, double x ) const{
        if ( point == 0 ){ return 1.0; }
        if ( point == 1 ){ return 0.5 * x * ( x - 1.0 ); }
        if ( point == 2 ){ return 0.5 * x * ( x + 1.0 ); }
        double cn = fabs( x - getX(point) ) / getSupport(level); // normalize the distance to the point
        if ( cn < 1.0 ){
                return -( cn - 1.0 ) * ( cn + 1.0 );
        }
        return 0.0;
}

double RulePieceWiseLocal::evalPWCubic( int level, int point, double x ) const{
        if ( point == 0 ){ return 1.0; }
        if ( point == 1 ){ return 0.5 * x * ( x - 1.0 ); }
        if ( point == 2 ){ return 0.5 * x * ( x + 1.0 ); }
        double cn = ( x - getX(point) ) / getSupport(level); // normalize the distance to the point
        if ( fabs( cn ) > 1.0 ){ return 0.0; }
        return ( point % 2 == 0 ) ? -( cn - 1.0 ) * ( cn + 1.0 ) * ( cn + 3.0 ) / 3.0 : ( cn - 1.0 ) * ( cn + 1.0 ) * ( cn - 3.0 ) / 3.0;
}

double RulePieceWiseLocal::evalPWPower( int level, int point, double x ) const{
        if ( point == 0 ){ return 1.0; }
        if ( point == 1 ){ return 0.5 * x * ( x - 1.0 ); }
        if ( point == 2 ){ return 0.5 * x * ( x + 1.0 ); }
        return evalPWPowerNormalized( level, point, ( x - getX(point) ) / getSupport(level) );
}
double RulePieceWiseLocal::evalPWPowerNormalized( int level, int point, double x ) const{
        if ( fabs( x ) > 1.0 ){ return 0.0; }
        int z, mod = 1;
        double value = ( 1.0 - x )*( 1.0 + x ), offset = 1.0;
        int imax = ( order < 0 ) ? level -1 : ( ( order-1 < level ) ? order -2 : level - 1 );
        for( int j=0; j < imax; j++ ){
                mod *= 2;
                offset = 2.0 * offset + 1.0;
                z = (point-1) % mod;
                if ( z < mod / 2 ){
                        value *= ( x - offset + 2.0 * ( (double) z) ) / ( - offset + 2.0 * ( (double) z) );
                }else{
                        value *= ( x + offset - 2.0 * ((double) ( mod - 1 - z )) ) / ( offset - 2.0 * ((double) ( mod - 1 - z )) );
                }
        }
        return value;
}

}

#endif

