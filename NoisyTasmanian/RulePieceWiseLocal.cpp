#ifndef __PWLOCAL_RULE_CPP
#define __PWLOCAL_RULE_CPP

#include "RulePieceWiseLocal.hpp"

#include <iostream>

RulePieceWiseLocal::RulePieceWiseLocal(){
}

RulePieceWiseLocal::~RulePieceWiseLocal(){
};


int RulePieceWiseLocal::getNumPoints( int level ) const{
        return ( pow( 2, level+1 ) + 1 );
}

double RulePieceWiseLocal::getSupport( int level ) const{
        return (level == 0) ? 1.0 : (2.0 / ( (double) (getNumPoints(level) -1) ) );
}

int RulePieceWiseLocal::getLevel( int point ) const{
        return (point <= 2) ? 0 : intlog2(point - 1);
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
double RulePieceWiseLocal::eval( int point, double x ) const{
        int level = getLevel( point );
        double cn = fabs( x - getX(point) ) / getSupport(level); // normalize the distance to the point
        return ( cn < 1.0 ) ? 1.0 - cn : 0.0;
}

void RulePieceWiseLocal::getChildren( int point, int &first, int &second ) const{
        if ( point == 0 ){ first = 3; second =  4; }else
        if ( point == 1 ){ first = 3; second = -1; }else
        if ( point == 2 ){ first = 4; second = -1; }else
                         { first = 2*point-1; second = 2*point; }
}

#endif

