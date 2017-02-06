import java.math.* ;
import java.io.* ;
import java.util.* ;

class Problem13 {

	public static void main( String[] args ) {

		try {

			FileReader fr = new FileReader("numbers.txt") ;
			BufferedReader input = new BufferedReader(fr) ;

			BigInteger b1 = new BigInteger(input.readLine());

			for ( int i = 0 ; i < 99 ; i++ ) {

				BigInteger b2 = new BigInteger(input.readLine()) ;

				b1 = b1.add(b2) ;

			}

			System.out.println(b1) ;

		}

		catch ( IOException ex ) {

			System.out.println("Error in handling i/o operations") ;
		}

	}

}
