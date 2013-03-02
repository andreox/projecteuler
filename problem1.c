/* problem's text : http://projecteuler.net/problem=1 */

#include <stdio.h>

#define LIMIT 1000

size_t sum_multiplies() {

	size_t sum = 0 ;
	for ( int i = 3 ; i < LIMIT ; i++ ) {

		if ( i % 3 == 0 || i % 5 == 0 ) sum += i ;

	}

	return sum ;
}

int main ( int argc , char** argv ) {

	printf("%zu\n",sum_multiplies()) ;
	return 0 ;

}