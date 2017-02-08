#include <iostream>

using namespace std ;

string string_sum( string n1 , string n2 ) { //Yet used to solve Problem 13

	int diff = n1.length() - n2.length() ;

	if ( diff > 0 ) for ( int i = 0 ; i < diff ; i++ ) n2.insert(n2.begin(),'0') ;
	else if ( diff < 0 ) for ( int i = 0 ; i > diff ; i-- ) n1.insert(n1.begin(),'0') ;

	string tot(n1.length(), ' ') ;

	for ( int i = n1.length()-1 ; i >= 0 ; i-- ) {

		int res = ( n1[i] - '0' ) + ( n2[i] - '0' ) ;

		
		if ( res >= 10 && i == 0 ) {

			tot[i] = (res-10)+'0' ;
			tot.insert( tot.begin(), '1' ) ;

		}

		else if ( res >= 10 ) {

 			tot[i] = (res-10)+'0' ;
 			n1[i-1] = ( (n1[i-1]-'0') + 1 ) + '0' ;

		} 

		else tot[i] = (res+'0') ;
		
	}

	return tot ;

}

int main( int argc , char** argv ) {

	string s = "1" ;

	for ( int i = 0 ; i < 1000 ; i++ ) 
		s = string_sum(s,s) ;

	int sum = 0 ;

	for ( int i = 0 ; i < s.length() ; i++ ) sum += ( s[i] - '0' ) ;

	cout << s << endl ;
	cout << sum << endl ;
	
	return 0 ;
}
