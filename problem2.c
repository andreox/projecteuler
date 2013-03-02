/* problem's text : http://projecteuler.net/problem=2 */

#include <stdio.h>

size_t sum = 0 ;

size_t even_fibonacci( size_t one , size_t two ) {

	if ( two % 2 == 0 ) sum += two ;
	if ( two >= 4000000 ) return sum ;

	even_fibonacci( two , two+one ) ;

}

int main( int argc , char** argv ) {

	printf("%zu\n",even_fibonacci(1,1)) ;

	return 0 ;

}