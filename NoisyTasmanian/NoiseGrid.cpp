#ifndef __NOISE_GRID_CPP
#define __NOISE_GRID_CPP

#include "NoiseGrid.hpp"

using std::cout;
using std::endl;

NoiseGrid::NoiseGrid() : points(0), c(0){};
NoiseGrid::~NoiseGrid(){ clear(); };

void NoiseGrid::clear(){
        if ( c != 0 ){ delete[] c; c = 0; }
        if ( points != 0 ){ delete points; points = 0; }
};

void NoiseGrid::makeSparseGrid( int dimensions, int levels ){
        clear();
        
        int num_p = 1;
        int num_zero = rule.getNumPoints(0);
        for( int i=0; i<dimensions; i++ ){
                num_p *= num_zero;
        }
        
        points = new IndexSet( dimensions, num_p );
        
        int root[dimensions];

        for( int i=0; i<num_p; i++ ){
                int tmp = i;
                for( int j=0; j<dimensions; j++ ){
                        root[j] = tmp % num_zero;
                        tmp /= num_zero;
                }
                points->add(root);
        }
        
        for( int l=1; l<levels; l++ ){
                IndexSet *new_points = new IndexSet( dimensions, 0 );
                for( int i=0; i<points->getNumIndexes(); i++ ){
                        const int *point = points->getIndexList(i);
                        for( int j=0; j<dimensions; j++ ){
                                addChild( point, j, new_points );
                        }
                }
                points->add(new_points);
                delete new_points; new_points = 0;
        }
        
        //for( int i=0; i<points->getNumIndexes(); i++ ){
        //        const int *p = points->getIndexList(i);
        //        cout << p[0] << endl;
        //}
        
        c = new double[points->getNumIndexes()];
}

void NoiseGrid::makeTensorGrid( int dimensions, int levels ){
        clear();
        
        int num_p = 1;
        int num_zero = rule.getNumPoints(levels);
        for( int i=0; i<dimensions; i++ ){
                num_p *= num_zero;
        }
        
        points = new IndexSet( dimensions, num_p );
        
        int root[dimensions];

        for( int i=0; i<num_p; i++ ){
                int tmp = i;
                for( int j=0; j<dimensions; j++ ){
                        root[j] = tmp % num_zero;
                        tmp /= num_zero;
                }
                points->add(root);
        }
        
        c = new double[points->getNumIndexes()];
}

void NoiseGrid::addChild( const int point[], int direction, IndexSet *destination )const{
        int dimensions = destination->getNumDimensions();// cout << "dims: " << dimensions << endl;
        int first, second;
        rule.getChildren( point[direction], first, second );
        int kid[dimensions];
        tcopy( dimensions, point, kid );
        kid[direction] = first; //cout << " adding: " << first << endl;
        if ( first != -1 ) destination->add( kid );
        kid[direction] = second; //cout << " adding s: " << second << endl;
        if ( second != -1 ) destination->add( kid );
}

double NoiseGrid::uniform01() const{
	return ( ( (double) rand() ) / ( (double) RAND_MAX ) );
}

void NoiseGrid::generateNoise(){
        int num_points = points->getNumIndexes();
        for( int i=0; i<num_points; i+=2 ){ // load the random vectors
                double u = uniform01();
		double v = uniform01();
		c[i] = sqrt( - 2.0 * log( u ) ) * sin( 2 * M_PI * v );
		if ( i+1 < num_points ){
                        c[i+1] = sqrt( - 2.0 * log( u ) ) * cos( 2 * M_PI * v );
                }
        }
        for( int i=0; i<num_points; i++ ){
                c[i] *= scaling( points->getIndexList(i) );
                //const int *p = points->getIndexList(i);
                //cout << rule.getX( p[0] ) << endl;
        }
}

double NoiseGrid::phii( const int point[], double x[] ) const{
        double result = 1.0;
        for( int j=0; j<points->getNumDimensions(); j++ ){
                result *= rule.eval( point[j], x[j] );
        }
        return result;
}

double NoiseGrid::getValue( double x[] ) const{
        double result = 0.0;
        #pragma omp parallel for reduction( + : result )
        for( int i=0; i<points->getNumIndexes(); i++ ){
                result += c[i] * phii( points->getIndexList(i), x );
        }
        return result;
}


double NoiseGrid::scaling( const int p[] ) const{
        return 1.0;
        //return ( (double) pow( 2, rule.getLevel(p[0]) ) );
        //return 1.0 / ( (double) pow( 2, rule.getLevel(p[0]) ) );
        //return 1.0 / ( (double) pow( 2, rule.getLevel(p[0]) ) );
        
        //const double alpha = 1.0;
        //return ( (double) pow( 2, ( 1.0 - alpha ) * rule.getLevel(p[0]) ) );
        
        // old code
        //int total = 0;
        //for( int i=0; i<points->getNumDimensions(); i++ ){
        //        int frequency = pow( 2, rule.getLevel(p[i]) );
        //        total +=  frequency * frequency;
        //}
        //return 1.0 / ( (double) total*total );
}

#endif
