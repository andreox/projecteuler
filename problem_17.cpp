#include <iostream>
#include <vector>
#include <string>

using namespace std ;

int main( int argc , char** argv ) {

	vector<string> unit(11) ;
	vector<string> dec(10) ;
	vector<string> excep(2) ;

	excep[0] = "eleven" ;
	excep[1] = "twelve" ;
	excep[2] = "thirteen";

	unit[1] = "one" ;
	unit[2] = "two" ;
	unit[3] = "three" ;
	unit[4] = "four" ;
	unit[5] = "five" ;
	unit[6] = "six" ;
	unit[7] = "seven" ;
	unit[8] = "eight" ;
	unit[9] = "nine" ;
	unit[10] = "ten" ;

	dec[2] = "twenty" ;
	dec[3] = "thirty" ;
	dec[4] = "forty" ;
	dec[5] = "fifty" ;
	dec[6] = "sixty" ;
	dec[7] = "seventy" ;
	dec[8] = "eighty" ;
	dec[9] = "ninety" ;

	unsigned long int sum = 0 ; // 11 12 13

	for ( int i = 1 ; i <= 10 ; i++ ) sum += unit[i].length() ; //1 to 10
	cout << sum << endl ;

	sum += excep[0].length() + excep[1].length() + excep[2].length() ;
	for( int i = 4 ; i <= 9 ; i++ ) sum += ( unit[i].length() + 4 ) ; // 14 to 19 ; 4 = "teen" 
	sum -= 2 ; //eighteen

	cout << sum << endl ;
	for( int i = 2 ; i <= 9 ; i++ ) sum += dec[i].length() ; //20 to 90

	for ( int i = 2 ; i <= 9 ; i++ ) {

		for ( int j = 1 ; j <= 9 ; j++ )
			sum += ( dec[i].length() + unit[j].length() ) ; //21 to 99

	}

	cout << sum << endl ;

	string s = "hundred" ;
	const int hund_len = s.length() ;
	const int aNd = 3 ;

	for ( int k = 1 ; k <= 9 ; k++ ) { 

		sum += ( unit[k].length() + hund_len ) ;

		//101 to 110... 201 to 210 ... 301 to 310 and so on
		for ( int i = 1 ; i <= 10 ; i++ ) sum += ( unit[k].length() + hund_len + unit[i].length() + aNd) ;

		for ( int i = 4 ; i <= 9 ; i++ ) sum += ( unit[k].length() + hund_len + unit[i].length() + 4 + aNd) ;
		sum -= 2 ; //eighteen

		//114 to 119... 214 to 219... 314 to 319 and so on

		for ( int i =  2 ; i <= 9 ; i++ ) sum += ( unit[k].length() + hund_len + dec[i].length() + aNd) ;
		// 120 130 140... 220 230 240... and so on

		for ( int j = 0 ; j <= 2 ; j++ ) sum += ( unit[k].length() + hund_len + excep[j].length() + aNd) ;
		// 111 112 113... 211 212 213... and so on

		for ( int i = 2 ; i <= 9 ; i++ ) {

			for ( int j = 1 ; j <= 9 ; j++ ) sum += ( unit[k].length() + hund_len + dec[i].length() + unit[j].length() + aNd ) ;

		}

		// 121 to 199... 221 to 299 ... 921 to 999

	}


	s = "one thousand" ;
	sum += s.length() ;

	cout << sum << endl ;

	return 0 ;
}
