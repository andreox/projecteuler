#include <iostream>
#include <sstream>

using namespace std ;

string to_string( size_t n ) {

  stringstream ss ;

	ss << n ;

	return ss.str() ;

}

bool check_if_palindrome( size_t n ) {

	string number = to_string(n) ;

	for ( int i = 0 ; i < number.length()/2 ; i++ ) {

		if ( number[i] != number[number.length()-i-1] ) return false ;

	}

	return true ;

}

int main ( int argc , char** argv ) {

	size_t largest_palindrome = 0 ;
	size_t mul = 0 ;

	for ( int i = 999 ; i > 99 ; i-- ) {

		for ( int j = 999 ; j > 99 ; j-- ) {

			mul = i * j ;

			if ( check_if_palindrome(mul) ) {

				if ( mul >= largest_palindrome ) largest_palindrome = mul ;

			}
		}
	}

	cout << largest_palindrome << endl ;

	return 0 ;

}
