#include <iostream>

using namespace std ;

bool is_prime( int n ) {

  for ( int i = 2 ; i < n/2 ; i++ ) {

		if ( n % i == 0 ) return false ;

	}

	return true ;

}

int main ( int argc , char** argv ) {

	int count = 6 ;
	int prime = 14 ;

	while ( count < 10001 ) {

		if ( is_prime(prime) ) cout << count++ << "- " << prime << endl ;
		prime++ ;

	}

	return 0 ;

}
