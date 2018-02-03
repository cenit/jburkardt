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

#ifndef __TASMANIAN_TASGRID_FUNCTIONS_HPP
#define __TASMANIAN_TASGRID_FUNCTIONS_HPP

#include "math.h"

class BaseFunction{
public:
        BaseFunction();
        ~BaseFunction();

        virtual int getNumInputs();
        virtual int getNumOutputs();
        virtual const char* getDescription();
        virtual void eval( const double x[], double y[] );
        virtual void getIntegral( double y[] );
};

class OneOneP0: public BaseFunction{
public:
        OneOneP0(); ~OneOneP0();

        int getNumInputs(); int getNumOutputs(); const char* getDescription(); void eval( const double x[], double y[] ); void getIntegral( double y[] );
};

class OneOneP3: public BaseFunction{
public:
        OneOneP3(); ~OneOneP3();

        int getNumInputs(); int getNumOutputs(); const char* getDescription(); void eval( const double x[], double y[] ); void getIntegral( double y[] );
};

class OneOneP4: public BaseFunction{
public:
        OneOneP4(); ~OneOneP4();

        int getNumInputs(); int getNumOutputs(); const char* getDescription(); void eval( const double x[], double y[] ); void getIntegral( double y[] );
};

class OneOneExpMX: public BaseFunction{
public:
        OneOneExpMX(); ~OneOneExpMX();

        int getNumInputs(); int getNumOutputs(); const char* getDescription(); void eval( const double x[], double y[] ); void getIntegral( double y[] );
};

class TwoOneP4: public BaseFunction{
public:
        TwoOneP4(); ~TwoOneP4();

        int getNumInputs(); int getNumOutputs(); const char* getDescription(); void eval( const double x[], double y[] ); void getIntegral( double y[] );
};

class TwoOneP5: public BaseFunction{
public:
        TwoOneP5(); ~TwoOneP5();

        int getNumInputs(); int getNumOutputs(); const char* getDescription(); void eval( const double x[], double y[] ); void getIntegral( double y[] );
};

class TwoOneExpNX2: public BaseFunction{
public:
        TwoOneExpNX2(); ~TwoOneExpNX2();

        int getNumInputs(); int getNumOutputs(); const char* getDescription(); void eval( const double x[], double y[] ); void getIntegral( double y[] );
};

class ThreeOneExpNX2: public BaseFunction{
public:
        ThreeOneExpNX2(); ~ThreeOneExpNX2();

        int getNumInputs(); int getNumOutputs(); const char* getDescription(); void eval( const double x[], double y[] ); void getIntegral( double y[] );
};

class TwoOneCos: public BaseFunction{
public:
        TwoOneCos(); ~TwoOneCos();

        int getNumInputs(); int getNumOutputs(); const char* getDescription(); void eval( const double x[], double y[] ); void getIntegral( double y[] );
};

class TwoOneSinSin: public BaseFunction{
public:
        TwoOneSinSin(); ~TwoOneSinSin();

        int getNumInputs(); int getNumOutputs(); const char* getDescription(); void eval( const double x[], double y[] ); void getIntegral( double y[] );
};

class TwoOneCosCos: public BaseFunction{
public:
        TwoOneCosCos(); ~TwoOneCosCos();

        int getNumInputs(); int getNumOutputs(); const char* getDescription(); void eval( const double x[], double y[] ); void getIntegral( double y[] );
};

class TwoOneExpm40: public BaseFunction{
public:
        TwoOneExpm40(); ~TwoOneExpm40();

        int getNumInputs(); int getNumOutputs(); const char* getDescription(); void eval( const double x[], double y[] ); void getIntegral( double y[] );
};

class FiveOneExpSum: public BaseFunction{
public:
        FiveOneExpSum(); ~FiveOneExpSum();

        int getNumInputs(); int getNumOutputs(); const char* getDescription(); void eval( const double x[], double y[] ); void getIntegral( double y[] );
};

class ThreeOneUnitBall: public BaseFunction{
public:
        ThreeOneUnitBall(); ~ThreeOneUnitBall();

        int getNumInputs(); int getNumOutputs(); const char* getDescription(); void eval( const double x[], double y[] ); void getIntegral( double y[] );
};

// Function to test special integration rules, i.e. integrals against weight functions
class TwoOneConstGC1: public BaseFunction{
public:
        TwoOneConstGC1(); ~TwoOneConstGC1();

        int getNumInputs(); int getNumOutputs(); const char* getDescription(); void eval( const double x[], double y[] ); void getIntegral( double y[] );
};
class TwoOneConstGC2: public BaseFunction{
public:
        TwoOneConstGC2(); ~TwoOneConstGC2();

        int getNumInputs(); int getNumOutputs(); const char* getDescription(); void eval( const double x[], double y[] ); void getIntegral( double y[] );
};
class TwoOneConstGG: public BaseFunction{
public:
        TwoOneConstGG(); ~TwoOneConstGG();

        int getNumInputs(); int getNumOutputs(); const char* getDescription(); void eval( const double x[], double y[] ); void getIntegral( double y[] );
};
class TwoOneConstGJ: public BaseFunction{
public:
        TwoOneConstGJ(); ~TwoOneConstGJ();

        int getNumInputs(); int getNumOutputs(); const char* getDescription(); void eval( const double x[], double y[] ); void getIntegral( double y[] );
};
class TwoOneConstGGL: public BaseFunction{
public:
        TwoOneConstGGL(); ~TwoOneConstGGL();

        int getNumInputs(); int getNumOutputs(); const char* getDescription(); void eval( const double x[], double y[] ); void getIntegral( double y[] );
};
class TwoOneConstGH: public BaseFunction{
public:
        TwoOneConstGH(); ~TwoOneConstGH();

        int getNumInputs(); int getNumOutputs(); const char* getDescription(); void eval( const double x[], double y[] ); void getIntegral( double y[] );
};


#endif

