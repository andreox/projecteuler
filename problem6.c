#include <stdio.h>
#include <math.h>

#define SQUARE(n) n*n

int sum_range_2numbers( int a , int b ) {

	int sum = 0 ;

	for ( int i = a ; i <= b ; i++ ) {

		sum += i ;

	}

	return sum ;

}



int main ( int argc , char** argv ) {

	int sum_of_squares = 0 ;

	for ( int i = 1 ; i <= 100 ; i++ ) {

		sum_of_squares += SQUARE(i) ;

	}

	printf("%d\n",SQUARE(sum_range_2numbers(1,100)) - sum_of_squares ) ;

	return 0 ;


}
