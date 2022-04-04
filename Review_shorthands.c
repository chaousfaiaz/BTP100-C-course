/* concepts
   1. shorthand expressions
      a) binary operators: +=, -=, *=, /=     
	 
      b) unary operators:  ++y; y++; --y; y--;
      c) conditional expression

      updated on 8/28/2020
 */

#include <stdio.h>

void printvalues( int i, int j, int k );  // function prototype
void printstars(); // function prototype

int main() {

	int  a=1, b=3, c=77;
	char d='A', e='z', f;

  
	/* Part 1: shorthand expressions with binary operators */
	printf( "Part 1\n" );

	printf( "d: %C, e: %c\n", d, e);

	d += 2;   // d = d + 2;
		  // add 2 to the ASCII value of 'A'
		  // 'A', 'B', 'C'

	e -= 4;   // e = e - 4;
		  // subtract 4 from the ASCII value of 'z'
		  //'v', 'w', 'x', 'y','z'

	printf( "d: %c, e: %c\n", d, e );
	printstars();

	/* Part 2: shorthand expressions with unary operators */

	++a;   // pre-increment operator; prefix ++ operator
	       // a: 1 -> 2
	       // a = a + 1;

	b++;   // post-increment operator; postfix ++ operator
	       // b: 3 -> 4
	       // b = b + 1;

	printvalues( a, b, c );
	printstars();

	c = ++a;  // prefix ++ returns the NEW VALUE of a
		      // a: 2 -> 3
		      // c: 3

	printvalues( a, b, c );
	printstars();
	
	c = b++;  // postfix ++ returns the OLD VALUE of b
		  // b: 4 -> 5
		  // c: 4

	printvalues( a, b, c );
	printstars();
  

	/* Part 3: conditional expression
	    - if-then-else
	 */

	c *= (c > 2) ? 100 : 22 ;  /* if (c>2)
					                   c *= 100;
				                  else c *= 22;
				    
				                 c: 4 -> 400
				               */
	printf( "c: %d\n", c );
	return 0;

}

void printvalues( int i, int j, int k ) {

     /* i++; */
     printf( "a: %d, b: %d, c: %d\n", i, j, k );

}

void printstars() {

     int k;

     for( k=1; k <= 10; k++ ){

	  printf( "*" );
     }

     printf( "\n" );
     //printf( "the value of k is %d\n", k );
}















