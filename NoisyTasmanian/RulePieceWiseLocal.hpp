#ifndef __PWLOCAL_RULE_HPP
#define __PWLOCAL_RULE_HPP

//#include "IndexSet.hpp"

#include "math.h"


class RulePieceWiseLocal{
public:
        RulePieceWiseLocal();
        ~RulePieceWiseLocal();

        int getNumPoints( int level ) const; // get the number of points associated with level (also the index of the first point on the level+1)

        double getX( int point ) const; // returns the x-value of a point

        double eval( int point, double x ) const; // returns the value of point at location x (there is assumed 1-1 corresponcence between points and functions)

        int getLevel( int point ) const; // returns the hierarchical level of a point

        double getSupport( int level ) const; // this is actually half of the support (i.e. only one sided)

        void getChildren( int point, int &first, int &second ) const;

protected:
        int intlog2( int i ) const; // returns the log base 2 of an integer

private:

};


#endif
