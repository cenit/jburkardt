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

#ifndef __TASMANIAN_SPARSE_GRID_HELPER_CPP
#define __TASMANIAN_SPARSE_GRID_HELPER_CPP

#include "tsgHelperFunctions.hpp"

namespace TasGrid{

void tzero( int size, int list[] ){ for( int i=0; i<size; i++ ) list[i] = 0; }
void tzero( int size, double list[] ){ for( int i=0; i<size; i++ ) list[i] = 0; }

void tcopy( int size, const int source[], int destination[]  ){
        for( int i=0; i<size; i++ ){ destination[i] = source[i]; }
}
void tcopy( int size, const double source[], double destination[]  ){
        for( int i=0; i<size; i++ ){ destination[i] = source[i]; }
}

void twrite( int size, const int list[], std::ofstream &ofs ){
        for( int i=0; i<size; i++ ){ ofs << list[i] << " "; }
        ofs << endl;
}
void twrite( int size, const double list[], std::ofstream &ofs ){
        ofs << std::scientific; ofs.precision( 17 );
        for( int i=0; i<size; i++ ){ ofs << list[i] << " "; }
        ofs << endl;
}

int tsum( int size, const int index[] ){
        int sum = 0;
        for( int i=0; i<size; i++ ){ sum += index[i]; }
        return sum;
}

void tread( int size, int list[], std::ifstream &ifs ){
        for( int i=0; i<size; i++ ){ ifs >> list[i]; }
}
void tread( int size, double list[], std::ifstream &ifs ){
        for( int i=0; i<size; i++ ){ ifs >> list[i]; }
}

TypeIndexRelation compareIndexes( int num_entries, const int a[], const int b[] ){
        for( int i=0; i<num_entries; i++ ){
                if ( a[i] < b[i] ) return type_abeforeb;
                if ( a[i] > b[i] ) return type_bbeforea;
        };
        return type_asameb;
}

void decompose( int n, double d[], double e[], double z[] ){
        const double tol = NUM_TOL;
        if ( n == 1 ){ z[0] = z[0]*z[0]; return; }

        for( int l=0; l<n-1; l++ ){
                int m = l;
                while( (m < n-1) && (fabs(e[m]) > tol) ) m++;

                while ( m != l ){
                        double p = d[l];
                        double g = ( d[l+1] - p ) / ( 2.0 * e[l] );
                        double r = sqrt( g*g + 1.0 );

                        g = d[m] - p + e[l] / ( g + ( (g>=0) ? 1.0 : -1.0 ) * r ); // sign function here is unstable

                        double s = 1.0;
                        double c = 1.0;
                        p = 0.0;

                        for( int i=m-1; i>=l; i-- ){
                                double f = s * e[i];
                                double b = c * e[i];

                                if ( fabs( f ) >= fabs( g ) ){
                                        c = g / f;
                                        r = sqrt( c*c + 1.0 );
                                        e[i+1] = f*r;
                                        s = 1.0 / r;
                                        c *= s;
                                }else{
                                        s = f / g;
                                        r =  sqrt( s*s + 1.0 );
                                        e[i+1] = g * r;
                                        c = 1.0 / r;
                                        s *= c;
                                }

                                g = d[i+1] - p;
                                r = ( d[i] - g ) * s + 2.0 * c * b;
                                p = s * r;
                                d[i+1] = g + p;
                                g = c * r - b;
                                f = z[i+1];
                                z[i+1] = s * z[i] + c * f;
                                z[i] = c * z[i] - s * f;
                        }

                        d[l] = d[l] - p;
                        e[l] = g;
                        e[m] = 0.0;

                        m = l;
                        while( (m < n-1) && (fabs(e[m]) > tol) ) m++;
                }
        }

        for( int i=1; i<n; i++ ){
                for( int j=0; j<n-1; j++ ){
                        if ( d[j] > d[j+1] ){
                                double p = d[j];
                                d[j] = d[j+1];
                                d[j+1] = p;
                                p = z[j];
                                z[j] = z[j+1];
                                z[j+1] = p;
                        }
                }
        }
        for( int i=0; i<n; i++ ){
               z[i] = z[i]*z[i];
        }
}


}

#endif
