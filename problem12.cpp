#include <iostream>
#include <vector>
#include <cmath>

using namespace std ;

int count_div( int n ) {

	int counter = 2 ;

	for ( int i = 2 ; i <= sqrt(n) ; i++ ) if ( n % i == 0 ) counter += 2 ;

	return counter ;

}

int main( int argc ,char** argv ) {

	int inc = 1 ;
	int sum = 0 ;

	while ( count_div( sum ) < 500 ) {

		sum += inc ;
		inc++ ;

	}

	cout << sum << endl ;

	return 0 ;

}
