#include <iostream>
#include <cmath>
#include <list>

#define LIMIT 10000

using namespace std ;

unsigned long sum_of_divisors( int n ) {

  unsigned long sum_of_divisors = 0 ;

	for ( int i = 1 ; i <= sqrt(n) ; i++ ) {

		if ( n % i == 0 ) { sum_of_divisors += i ; sum_of_divisors += n/i ; }

	}

	return sum_of_divisors-n ;

}

int main ( int argc , char** argv ) {

	unsigned long d , d1 ,  sum_of_amicables=0 ;
	list<int> amicables ;
	for ( int a = 1 ; a < LIMIT ; a++  ) {

		d = sum_of_divisors(a) ;

		for ( int b = a+1 ; b < LIMIT ; b++ ) {

			d1 = sum_of_divisors(b) ;

			if ( d == b && d1 == a && a != b ) { cout << a << " " << b << endl ; amicables.push_back(d) ; amicables.push_back(d1) ; break ; }

		}

	}

	for( list<int>::iterator it = amicables.begin() ; it != amicables.end() ; it++ ) {

		sum_of_amicables += *it ;

	}

	cout << sum_of_amicables << endl ;

	return 0 ;

}
