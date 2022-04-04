#include <stdio.h>

/* concepts
   1. data types and variables
   2. computation
      a) a sequence of executable statements
      b) arithmetic operators
      c) assignment operator
      d) scanf
      e)printf

   updated on 08/27/2020
 */


int main(void) {

   /* declarations of variables: date types, variable names */

   int number, quantity=-1234;    // variable initialization
   double price, total;

   /* a sequence of executable statements */

   number = 7; // assignment operator

   printf( "*** Welcome! ***\n*** " ); // the newline character

   printf( "We have %d apples in the store. ***\n", number );

   printf( "How many apples do you want to buy?\n" ); // a user prompt

   scanf( "%d", &quantity  ); // get user input
			      // use the memory address of a variable (&)

   printf( "What is the price of an apple? $ " ); // a user prompt
   
   scanf( "%lf", &price);

   total = quantity * price;  // arithmetic experssion with one operator

   number = number - quantity;

   printf( ">>> SUMMARY OF YOUR PURCHASE\n" );
   printf( ">>> You want to buy %d apples.\n>>> Our store has %d apples left.\n", 
	   quantity, number );

   printf( ">>> Please pay $ %.2lf.\n>>> Thank you!\n", total );
   return 0;

   /* Computer Organization Question: 
      What's going on inside the computer? */
}
