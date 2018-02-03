#ifndef __NOISE_GRID_HPP
#define __NOISE_GRID_HPP

#include "IndexSet.hpp"
#include "RulePieceWiseLocal.hpp"

#include "math.h"

#include "stdlib.h"


class NoiseGrid{
public:
        NoiseGrid();
        ~NoiseGrid();

        void makeSparseGrid( int dimensions, int levels );
        void makeTensorGrid( int dimensions, int levels );
        
        void generateNoise();
        
        double getValue( double x[] ) const;
        
protected:
        void clear();
        
        void addChild( const int point[], int direction, IndexSet *destination ) const;

        double uniform01() const;
        double scaling( const int p[] ) const;
        
        double phii( const int point[], double x[] ) const;
        
private:
        IndexSet *points;
        double *c;
        RulePieceWiseLocal rule;
        
};



#endif
