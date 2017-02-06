//Not working

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std ;

string string_sum( string n1 , string n2 ) {

	if ( n1.length() > n2.length() ) n2.insert( n2.begin() , '0' ) ;
	else if ( n1.length() < n2.length() ) n1.insert( n1.begin() , '0' ) ;

	string tot(n1.length(), ' ') ;

	for ( int i = n1.length()-1 ; i >= 0 ; i-- ) {

		int res = ( n1[i] - '0' ) + ( n2[i] - '0' ) ;

		cout << res << endl ;

		if ( res >= 10 && i == 0 ) {

			tot[i] = (res-10)+'0' ;
			tot.insert( tot.begin(), '1' ) ;

		}

		else if ( res >= 10 ) {

 			tot[i] = (res-10)+'0' ;
 			n1[i-1] = ( (n1[i-1]-'0') + 1 ) + '0' ;

		} 

		else tot[i] = (res+'0') ;

		cout << tot << endl ;
	}

	return tot ;

}

int main( int argc , char** argv ) {

	ifstream input("numbers.txt") ;

	string s , tot ;
	input >> s ;
	input >> tot;
	tot = string_sum( s , tot ) ;

	for ( int i = 0 ; i < 98 ; i++ ) {

		input >> s ;
		tot = string_sum( tot , s ) ;

	}

	cout << tot << endl ;

	return 0 ;

}
