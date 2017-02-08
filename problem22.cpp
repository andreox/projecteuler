#include <iostream>
#include <set>
#include <fstream>
#include <vector>
#include <string>

using namespace std ;

int main( int argc , char** argv ) {

	ifstream input("names.txt") ;
	string s ;
	input >> s ;

	int counter = 0 ;
	vector<string> strings(5999) ;
	set<string> order ;
	int j = 0 ;

	for ( int i = 0 ; i < s.length() ; i++ ) {

		if ( s[i] == '"' && counter % 2 == 0) {

			counter++ ;
			i++ ;
			while ( s[i] != '"' ) {

				strings[j].push_back(s[i]) ;
				i++ ;

			}
			order.insert(strings[j]) ;
			counter++ ;
			j++ ;

		}
	} 
	
	int i = 1 ;
	unsigned long int sum = 0 ;

	for ( set<string>::iterator it = order.begin() ; it != order.end() ; it++ ) {

		string s = *it ;
		int alph_value = 0 ;

		for ( int i = 0 ; i < s.length() ; i++ ) {

			int k = s[i]-64 ;
			alph_value += k ;

		}

		sum += ( alph_value * i ) ;
		i++ ;
	}

	cout << sum << endl ;

	return 0 ;

}
