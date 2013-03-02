/* problem's text : projecteuler.net/problem=3 */

#include <iostream>
#include <vector>
#include <cmath>

#define N 600851475143

using namespace std ;

vector<int> primes ;

bool check_if_prime( size_t n ) {

	for ( int i = 2 ; i < n/2 ; i++ ) { 

		if ( n % i == 0 ) return false ;

	}

	return true ;

}

size_t largest_factor( size_t n ) {

	for ( int i = sqrt(n) ; i > 2 ; i-- ) {

		if ( check_if_prime(i) && n % i == 0 ) primes.push_back(i) ;

	}

	return primes.front() ;

}

int main ( int argc , char** argv ) {

	cout << largest_factor( N ) << endl ;

	return 0 ;

}
