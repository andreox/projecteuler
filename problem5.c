#include <stdio.h>
#include <stdbool.h>

bool div( int n ) {

	for ( int i = 11 ; i < 20 ; i++ ) {

		if ( n % i != 0 ) return false ;

	}

	return true ;

}

int main ( int argc , char** argv ) {

	int n = 2520 ;

	while ( 1 ) {

		if ( div(n) ) { printf("%d\n",n) ; return 0 ; }

		n += 2520 ;

	}

	return 0 ;
}
