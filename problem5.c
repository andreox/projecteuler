#include <stdio.h>
#include <stdbool.h>

bool check( int n ) {

  for ( int i = 2 ; i < 20 ; i++ ) {

		if ( n % i != 0 ) return false ;

	}

	return true ;

}

int main ( int argc , char** argv ) {

	int n = 2025 ;

	while ( 1 ) {

		if ( check(n) ) {

			printf("%d :3\n",n) ;
			return 0 ;

		}

		n += 2025 ;
	}

	return 0 ;

}
