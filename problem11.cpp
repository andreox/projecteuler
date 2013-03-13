#include <iostream>
#include <cstdlib>
#include <fstream>

#define N 20

using namespace std ;

int field[N][N] ;

int main( int argc , char** argv ) {

  ifstream input("input.txt") ;
	size_t max_product = 0 , product = 0 ;

	for ( int i = 0 ; i < N ; i++ ) { //Initialize Matrix

		for ( int j = 0 ; j < N ; j++ ) {

			input >> field[i][j] ;

		}
	}

	for ( int i = 4 ; i < 16 ; i++ ) {

		for ( int j = 4 ; j < 16 ; j++ ) {

			product = field[i][j] * field[i+1][j+1] * field[i+2][j+2] * field[i+3][j+3] ;
			if ( max_product < product ) max_product = product ;
			product = field[i][j] * field[i-1][j-1] * field[i-2][j-2] * field[i-3][j-3] ;
			if ( max_product < product ) max_product = product ;
			product = field[i][j] * field[i+1][j] * field[i+2][j] * field[i+3][j] ;
			if ( max_product < product ) max_product = product ;
			product = field[i][j] * field[i-1][j] * field[i-2][j] * field[i-3][j] ;
			if ( max_product < product ) max_product = product ;
			product = field[i][j] * field[i][j+1] * field[i][j+2] * field[i][j+3] ;
			if ( max_product < product ) max_product = product ;
			product = field[i][j] * field[i][j-1] * field[i][j-2] * field[i][j-3] ;
			if ( max_product < product ) max_product = product ;
			product = field[i][j] * field[i+1][j-1] * field [i+2][j-2] * field[i+3][j-3] ;
			if ( max_product < product ) max_product = product ;
			product = field[i][j] * field[i-1][j+1] * field[i-2][j+2] * field[i-3][j+3] ;
			if ( max_product < product ) max_product = product ;

		}

	}

	cout << max_product << endl ;

	return 0 ;
}
