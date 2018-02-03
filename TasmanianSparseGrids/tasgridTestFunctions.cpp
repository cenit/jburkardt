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

#ifndef __TASMANIAN_TASGRID_FUNCTIONS_CPP
#define __TASMANIAN_TASGRID_FUNCTIONS_CPP

#include "tasgridTestFunctions.hpp"

BaseFunction::BaseFunction(){};
BaseFunction::~BaseFunction(){};
int BaseFunction::getNumInputs(){};
int BaseFunction::getNumOutputs(){};
const char* BaseFunction::getDescription(){};
void BaseFunction::eval( const double x[], double y[] ){};
void BaseFunction::getIntegral( double y[] ){};

OneOneP0::OneOneP0(){}; OneOneP0::~OneOneP0(){}; int OneOneP0::getNumInputs(){ return 1; }; int OneOneP0::getNumOutputs(){ return 1; };
const char* OneOneP0::getDescription(){ return "f(x) = 1"; };
void OneOneP0::eval( const double x[], double y[] ){ y[0] = 1.0; }; void OneOneP0::getIntegral( double y[] ){ y[0] = 2.0; };

OneOneP3::OneOneP3(){}; OneOneP3::~OneOneP3(){}; int OneOneP3::getNumInputs(){ return 1; }; int OneOneP3::getNumOutputs(){ return 1; };
const char* OneOneP3::getDescription(){ return "f(x) = x^3 + 2 x^2 + x + 3"; };
void OneOneP3::eval( const double x[], double y[] ){ y[0] = x[0]*x[0]*x[0] + 2.0*x[0]*x[0] + x[0] + 3.0; }; void OneOneP3::getIntegral( double y[] ){ y[0] = 22.0/3.0; };

OneOneP4::OneOneP4(){}; OneOneP4::~OneOneP4(){}; int OneOneP4::getNumInputs(){ return 1; }; int OneOneP4::getNumOutputs(){ return 1; };
const char* OneOneP4::getDescription(){ return "f(x) = 0.5 x^4 + x^3 + 2 x^2 + x + 3"; };
void OneOneP4::eval( const double x[], double y[] ){ y[0] = 0.5*x[0]*x[0]*x[0]*x[0] + x[0]*x[0]*x[0] + 2.0*x[0]*x[0] + x[0] + 3.0; }; void OneOneP4::getIntegral( double y[] ){ y[0] = 226.0/30.0; };

OneOneExpMX::OneOneExpMX(){}; OneOneExpMX::~OneOneExpMX(){}; int OneOneExpMX::getNumInputs(){ return 1; }; int OneOneExpMX::getNumOutputs(){ return 1; };
const char* OneOneExpMX::getDescription(){ return "f(x) = exp(-x^2)"; };
void OneOneExpMX::eval( const double x[], double y[] ){ y[0] = exp( - x[0] * x[0] ); }; void OneOneExpMX::getIntegral( double y[] ){ y[0] = 1.493648265624854; };

TwoOneP4::TwoOneP4(){}; TwoOneP4::~TwoOneP4(){}; int TwoOneP4::getNumInputs(){ return 2; }; int TwoOneP4::getNumOutputs(){ return 1; };
const char* TwoOneP4::getDescription(){ return "f(x,y) = x^4 + x^3 y + x^2 y^2 + x^1 y^3 + y^4"; };
void TwoOneP4::eval( const double x[], double y[] ){ y[0] = x[0]*x[0]*x[0]*x[0] + x[0]*x[0]*x[0]*x[1] + x[0]*x[0]*x[1]*x[1] + x[0]*x[1]*x[1]*x[1] + x[1]*x[1]*x[1]*x[1]; }; void TwoOneP4::getIntegral( double y[] ){ y[0] = 92.0/45.0; };

TwoOneP5::TwoOneP5(){}; TwoOneP5::~TwoOneP5(){}; int TwoOneP5::getNumInputs(){ return 2; }; int TwoOneP5::getNumOutputs(){ return 1; };
const char* TwoOneP5::getDescription(){ return "f(x,y) = x^5 + x^4 y + x^3 y^2 + x^2 y^3 + x y^4 + y^5"; };
void TwoOneP5::eval( const double x[], double y[] ){ y[0] = x[0]*x[0]*x[0]*x[0]*x[0] + x[0]*x[0]*x[0]*x[0]*x[1] + x[0]*x[0]*x[0]*x[1]*x[1] + x[0]*x[0]*x[1]*x[1]*x[1] + x[0]*x[1]*x[1]*x[1]*x[1] + x[1]*x[1]*x[1]*x[1]*x[1]; }; void TwoOneP5::getIntegral( double y[] ){ y[0] = 0.0; };

TwoOneExpNX2::TwoOneExpNX2(){}; TwoOneExpNX2::~TwoOneExpNX2(){}; int TwoOneExpNX2::getNumInputs(){ return 2; }; int TwoOneExpNX2::getNumOutputs(){ return 1; };
const char* TwoOneExpNX2::getDescription(){ return "f(x,y) = exp( -x^2 - y^2 )"; };
void TwoOneExpNX2::eval( const double x[], double y[] ){ y[0] = exp( -x[0]*x[0] - x[1]*x[1] ); }; void TwoOneExpNX2::getIntegral( double y[] ){ y[0] = 2.230985141404134; };

ThreeOneExpNX2::ThreeOneExpNX2(){}; ThreeOneExpNX2::~ThreeOneExpNX2(){}; int ThreeOneExpNX2::getNumInputs(){ return 3; }; int ThreeOneExpNX2::getNumOutputs(){ return 1; };
const char* ThreeOneExpNX2::getDescription(){ return "f(x,y,z) = exp( -x^2 - y^2 - z^2 )"; };
void ThreeOneExpNX2::eval( const double x[], double y[] ){ y[0] = exp( -x[0]*x[0] - x[1]*x[1] - x[2]*x[2] ); }; void ThreeOneExpNX2::getIntegral( double y[] ){ y[0] = 3.332307087; };

TwoOneCos::TwoOneCos(){}; TwoOneCos::~TwoOneCos(){}; int TwoOneCos::getNumInputs(){ return 2; }; int TwoOneCos::getNumOutputs(){ return 1; };
const char* TwoOneCos::getDescription(){ return "f(x,y) = cos( -x^2 - y^2 + xy )"; };
void TwoOneCos::eval( const double x[], double y[] ){ y[0] = cos( -x[0]*x[0] - x[1]*x[1] + x[0]*x[1] ); }; void TwoOneCos::getIntegral( double y[] ){ y[0] = 2.8137178748032379; };

TwoOneSinSin::TwoOneSinSin(){}; TwoOneSinSin::~TwoOneSinSin(){}; int TwoOneSinSin::getNumInputs(){ return 2; }; int TwoOneSinSin::getNumOutputs(){ return 1; };
const char* TwoOneSinSin::getDescription(){ return "f(x,y) = sin( pi * x ) sin( pi * y )"; };
void TwoOneSinSin::eval( const double x[], double y[] ){ y[0] = sin( M_PI * x[0] ) * sin( M_PI * x[1] ); }; void TwoOneSinSin::getIntegral( double y[] ){ y[0] = 0.0; };

TwoOneCosCos::TwoOneCosCos(){}; TwoOneCosCos::~TwoOneCosCos(){}; int TwoOneCosCos::getNumInputs(){ return 2; }; int TwoOneCosCos::getNumOutputs(){ return 1; };
const char* TwoOneCosCos::getDescription(){ return "f(x,y) = cos( pi/2 * x ) cos( pi/2 * y )"; };
void TwoOneCosCos::eval( const double x[], double y[] ){ y[0] = cos( 0.5 * M_PI * x[0] ) * cos( 0.5 * M_PI * x[1] ); }; void TwoOneCosCos::getIntegral( double y[] ){ y[0] = 16.0 / ( M_PI * M_PI ); };

TwoOneExpm40::TwoOneExpm40(){}; TwoOneExpm40::~TwoOneExpm40(){}; int TwoOneExpm40::getNumInputs(){ return 2; }; int TwoOneExpm40::getNumOutputs(){ return 1; };
const char* TwoOneExpm40::getDescription(){ return "f(x,y) = 1.0 / ( 1.0 + exp( -40.0 * ( sqrt( x^2 + y^2 ) - 0.4 ) ) )"; };
void TwoOneExpm40::eval( const double x[], double y[] ){ y[0] = 1.0 / ( 1.0 + exp( -40.0 * ( sqrt( x[0]*x[0] + x[1]*x[1] ) - 0.4 ) ) ); }; void TwoOneExpm40::getIntegral( double y[] ){ y[0] = 0.0; };

FiveOneExpSum::FiveOneExpSum(){}; FiveOneExpSum::~FiveOneExpSum(){}; int FiveOneExpSum::getNumInputs(){ return 5; }; int FiveOneExpSum::getNumOutputs(){ return 1; };
const char* FiveOneExpSum::getDescription(){ return "f(y_i) = 1 + exp( -2 - 0.4 * sum( y_i ) )"; };
void FiveOneExpSum::eval( const double x[], double y[] ){ y[0] = 1.0 + exp(-2.0 -0.4 * ( x[0]+x[1]+x[2]+x[3]+x[4] ) ); }; void FiveOneExpSum::getIntegral( double y[] ){ y[0] = 32.0 + exp(-2.0) * pow( (1.0/0.4) * (exp(0.4) - exp(-0.4)), 5.0); };

ThreeOneUnitBall::ThreeOneUnitBall(){}; ThreeOneUnitBall::~ThreeOneUnitBall(){}; int ThreeOneUnitBall::getNumInputs(){ return 3; }; int ThreeOneUnitBall::getNumOutputs(){ return 1; };
const char* ThreeOneUnitBall::getDescription(){ return "f(y_i) = 1 if |x| < 1, 0 otherwise"; };
void ThreeOneUnitBall::eval( const double x[], double y[] ){ if ( ( x[0]*x[0]+x[1]*x[1]+x[2]*x[2] ) <= 1.0 ){ y[0] = 1.0; }else{ y[0] = 0.0; } }; void ThreeOneUnitBall::getIntegral( double y[] ){ y[0] = (4.0/3.0) * M_PI; };

TwoOneConstGC1::TwoOneConstGC1(){}; TwoOneConstGC1::~TwoOneConstGC1(){}; int TwoOneConstGC1::getNumInputs(){ return 2; }; int TwoOneConstGC1::getNumOutputs(){ return 1; };
const char* TwoOneConstGC1::getDescription(){ return "f(x,y) = exp( x+y ), integrated against 1.0 / ( sqrt( 1 - x*x ) * sqrt( 1 - y*y ) )"; };
void TwoOneConstGC1::eval( const double x[], double y[] ){ y[0] = exp(x[0]+x[1]); }; void TwoOneConstGC1::getIntegral( double y[] ){ y[0] = 15.820213988678377; }

TwoOneConstGC2::TwoOneConstGC2(){}; TwoOneConstGC2::~TwoOneConstGC2(){}; int TwoOneConstGC2::getNumInputs(){ return 2; }; int TwoOneConstGC2::getNumOutputs(){ return 1; };
const char* TwoOneConstGC2::getDescription(){ return "f(x,y) = exp( x+y ), integrated against ( sqrt( 1 - x*x ) * sqrt( 1 - y*y ) )"; };
void TwoOneConstGC2::eval( const double x[], double y[] ){ y[0] = exp(x[0] + x[1]); }; void TwoOneConstGC2::getIntegral( double y[] ){ y[0] = 3.152399146392550; }

TwoOneConstGG::TwoOneConstGG(){}; TwoOneConstGG::~TwoOneConstGG(){}; int TwoOneConstGG::getNumInputs(){ return 2; }; int TwoOneConstGG::getNumOutputs(){ return 1; };
const char* TwoOneConstGG::getDescription(){ return "f(x,y) = exp( x+y ), integrated against ( 1 - x*x )^0.3 * ( 1 - y*y )^0.3"; };
void TwoOneConstGG::eval( const double x[], double y[] ){ y[0] = exp(x[0] + x[1]); }; void TwoOneConstGG::getIntegral( double y[] ){ y[0] = 1.955951775017494*1.955951775017494; }

TwoOneConstGJ::TwoOneConstGJ(){}; TwoOneConstGJ::~TwoOneConstGJ(){}; int TwoOneConstGJ::getNumInputs(){ return 2; }; int TwoOneConstGJ::getNumOutputs(){ return 1; };
const char* TwoOneConstGJ::getDescription(){ return "f(x,y) = exp( x+y ), integrated against ( 1 - x )^0.3 * ( 1 - x )^0.7 * ( 1 - y )^0.3 * ( 1 - y )^0.7"; };
void TwoOneConstGJ::eval( const double x[], double y[] ){ y[0] = exp(x[0] + x[1]); }; void TwoOneConstGJ::getIntegral( double y[] ){ y[0] = 2.093562254087821*2.093562254087821; }

TwoOneConstGGL::TwoOneConstGGL(){}; TwoOneConstGGL::~TwoOneConstGGL(){}; int TwoOneConstGGL::getNumInputs(){ return 2; }; int TwoOneConstGGL::getNumOutputs(){ return 1; };
const char* TwoOneConstGGL::getDescription(){ return "f(x,y) = exp( -x-y ), integrated against ( x )^0.3 * exp( -x ) * ( y )^0.3 * exp( -y )"; };
void TwoOneConstGGL::eval( const double x[], double y[] ){ y[0] = exp( -x[0]-x[1] ); }; void TwoOneConstGGL::getIntegral( double y[] ){ y[0] = 0.364486361867136*0.364486361867136; }

TwoOneConstGH::TwoOneConstGH(){}; TwoOneConstGH::~TwoOneConstGH(){}; int TwoOneConstGH::getNumInputs(){ return 2; }; int TwoOneConstGH::getNumOutputs(){ return 1; };
const char* TwoOneConstGH::getDescription(){ return "f(x,y) = exp( -x-y ), integrated against |x|^0.3 * exp( -x^2 ) * |y|^0.3 * exp( -y^2 )"; };
void TwoOneConstGH::eval( const double x[], double y[] ){ y[0] = exp( -x[0]-x[1] ); }; void TwoOneConstGH::getIntegral( double y[] ){ y[0] = 1.902578389458335*1.902578389458335; }


#endif

