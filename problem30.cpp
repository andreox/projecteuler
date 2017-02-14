#include <iostream>
#include <cmath>

using namespace std ;

int explode_sum( int n , int exp ) {

	int sum = 0 ;
	while ( n > 0 ) {

		sum += pow( ( n % 10 ) , exp ) ;
		n /= 10 ;

	}

	return sum ;

}

int main( int argc , char** argv ) {

	unsigned long int sum = 0 ;

	for ( int i = 2 ; i < 1000000 ; i++ ) {

		if ( explode_sum(i,5) == i ) sum += i ;

	}

	cout << sum << endl ;

	return 0 ;
}
