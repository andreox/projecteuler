#include <iostream>

using namespace std ;

#define SQUARE(n) n*n

int main ( int argc , char** argv ) {

  for ( int a = 3 ; a < 500 ; a++ ) {

		for ( int b = a+1 ; b < 500 ; b++ ) {

			for ( int c = b+1 ; c < 500 ; c++ ) {

				if ( (SQUARE(a) + SQUARE(b)) == SQUARE(c) && a+b+c == 1000 ) {

					cout << a*b*c << endl ;
					return 0 ;

				}
			}
		}
	}

	cout << "Nada :(" << endl  ;

	return 0  ;
}
