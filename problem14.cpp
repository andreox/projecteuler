#include <iostream>

using namespace std ;

int counter = 0 ;

unsigned long collatz_terms( unsigned long n ) {

  if ( n == 1 ) return counter+1 ; 

	if ( n % 2 == 0 ) {
		counter++;
		n = n/2 ;
		collatz_terms(n) ;
	}

	else {

		counter++ ;
		n = (n*3)+1 ;
		collatz_terms(n) ;

	}

	return counter ;

}

int main ( int argc , char** argv ) {

	unsigned long max_count = 0 , count = 0 ;

	for(unsigned long n = 13 ; n < 1000000 ; n++ ) {

		count = collatz_terms(n) ;
		cout << count << endl ;
		cout << n << endl ;
		if ( count > max_count ) max_count = count ;
		counter = 0 ;

	}

	cout << max_count << endl ;

	return 0 ;
}
