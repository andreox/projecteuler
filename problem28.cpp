#include <iostream>
#include <vector>

using namespace std ;

int main( int argc , char** argv ) {

	int matrix[5][5] ;

	int start = 5*5 ;

	cout << start << endl ;
	int limit_x , limit_y ;
	limit_x = limit_y = 0 ;

	while ( limit_x <= 2 && limit_y <= 2 ) {

		int row = limit_x ;
		int col = 4 - limit_y ;

		for ( ; col >= row  ; col-- ) { cout << row << " " << col << endl ; matrix[row][col] = start-- ; }
		col += 1 ;
		cout << endl ;
		for ( ; row <= ( 4 - limit_y ) ; row++ ) { cout << row << " " << col << endl ; matrix[row][col] = start-- ; }
		row -= 1 ;
			cout << endl ;
		for ( ; col <= row ; col++ ) { cout << row << " " << col << endl ; matrix[row][col] = start-- ; }
			cout << endl ;
		//for ( ; row >= limit_x+1 ; row-- ) { cout << row << " " << col << endl ; matrix[row][col] = start-- ; }
			cout << endl ;
		limit_x += 1 ;
		limit_y += 1 ;

	}

	for ( int i = 0 ; i < 5 ; i++ ) {

		for ( int j = 0 ; j < 5 ; j++ ) cout << matrix[i][j] << " " ;

		cout << endl ;

	}

	return 0 ;

}
