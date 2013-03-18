#include <iostream>
#include <list>
#include <cmath>

using namespace std ;

int main ( int argc , char** argv ) {

  list<double> numbers ;

	for ( double a = 2 ; a <= 100 ; a++ ) {

		for ( double b = 2 ; b <= 100 ; b++ ) {

			numbers.push_back(pow(a,b)) ;

		}

	}

	numbers.sort() ;
	numbers.unique() ;

	cout << numbers.size() << endl ;

	return 0 ;

}
