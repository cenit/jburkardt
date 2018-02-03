#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <string.h>


using namespace std;

#include "NoiseGrid.hpp"


void writeMatrix( int rows, int cols, double x[], const char *filename );

void make1DTest();
void make2DTest();

int main( int argc, const char ** argv ){

        //cout << " Phruuuuphrrr " << endl; // this is the sound that the tasmanian devil makes
        
        //make1DTest();
        make2DTest();
        
        return 0;
}

void make2DTest(){
        //
        // Two dimensional tests
        //
        int dim = 2; // do 1-D for now
        int level = 6; // should be enough ~2K points
        
        const int N = 101;
        const int M = 500;
        
        double *x = new double[N];
        double dx = 2.0 / ( (double) (N-1) );
        for( int i=0; i<N; i++ ){
                x[i] = -1.0 + ( (double) i ) * dx;
                //cout << x[i] << endl;
        }
        
        double *res = new double[ N*N ]; for( int i=0; i<N*N; i++ ){ res[i] = 0.0; }
        
        
        srand( time(0) );
        
        NoiseGrid grid;
        //grid.makeSparseGrid( dim, level );
        grid.makeTensorGrid( dim, level );
        
        const int nomi = 40;
        const int nomj = 40;
        
        for( int k=0; k<M; k++ ){
                cout << k << endl;
                grid.generateNoise();
                
                double p[2];
                p[0] = x[nomi]; p[1] = x[nomj];
                
                double v = grid.getValue( p );
                
                for( int i=0; i<N; i++ ){
                        p[0] = x[i];
                        for( int j=0; j<N; j++ ){
                                p[1] = x[j];
                                res[ i * N + j ] += v* grid.getValue( p );
                        }
                }
        }
        
        for( int i=0; i<N*N; i++ ){ res[i] /= (double) M; }
        
        writeMatrix( N, N, res, "result" );
        
}

void make1DTest(){
        //
        // One dimensional tests
        //
        cout << "One Dimensional Test" << endl;
        
        int dim = 1; // do 1-D for now
        int level = 12; // should be enough ~2K points
        
        const int N = 1001; // number of sample points
        const int M = 10000; // number of Monte Carlo samples
        
        double *res = new double[N * M];
        double *x = new double[N];
        
        double dx = 2.0 / ( (double) (N-1) );
        
        for( int i=0; i<N; i++ ){
                x[i] = -1.0 + ( (double) i ) * dx;
                //cout << x[i] << endl;
        }
        
        srand( time(0) );
        
        NoiseGrid grid;
        
        grid.makeSparseGrid( dim, level );
        //return 0;
        
        for( int i=0; i<M; i++ ){
                //cout << "realization: " << i << endl;
                grid.generateNoise();
                for( int j=0; j<N; j++ ){
                        res[i*N + j] = grid.getValue( &(x[j]) );
                }
        }
        
        //cout << "writing" << endl;
        writeMatrix( M, N, res, "result" );
}

void writeMatrix( int rows, int cols, double x[], const char *filename ){
        std::ofstream ofs;
        ofs.open( filename );
        ofs << rows << " " << cols << endl;
        ofs.precision(17);
        for( int i=0; i<rows; i++ ){
                for( int j=0; j<cols; j++ ){
                        ofs << setw(25) << std::scientific << x[i*cols + j] << " ";
                }
                ofs << endl;
        }
        ofs.close();
}
