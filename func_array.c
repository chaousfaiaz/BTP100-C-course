     
 #define _CRT_SECURE_NO_WARNINGS
 #include <stdio.h>
 #define  MAX 5

 /* an array parameter: a pointer!
   
    updated on 3/01/2020
  */

 int increase( int data[], int delta ); // data: an array parameter

 void show( int list[] );       // list: an array parameter

 void fill_array( int num[] );  // num: an array parameter

 int main(void) {

     int scores[MAX] = { 100, 89, 75, 64, 55 }; 

     int k, sum=0;

     show(scores);  // passing by address!

     sum = increase( scores, 100 );  // passing by address: an array name
	                                 // passing by value: 100

     show(scores);  // passing by address: an array name
  
     printf( "sum = %d\n", sum );
    
     /* Part 2 */

     fill_array( scores ); // passing by address: an array name

     show( scores );

     return 0;
 }

/* input and output parameter: data (an array parameter/a pointer) 
   input parameter: delta */
int increase( int data [], int delta  ) {

    int k, t=0;

    for(k=0; k<MAX; k++ ){

	    data[k] += delta; // Is 100 added to the array data?
	
	    t += data[k];
    }
    //data[0] = -2222; /* side effect! */ 

    return t;
}

/* input and output parameter: list (an array parameter/a pointer) */
void show( int list [] ) { 

   int j;

   for(j=0; j < MAX; j++) {
       printf( "%d ", list[j] );
   }

   printf( "\n" );
}


/* input and output parameter: num */
void fill_array( int num[] ) {

   int k;

   for(k=0; k < MAX; k++){
       printf( "Enter an integer: " );
       scanf( "%d", &num[k] );
   }
}



/* input and output parameter: z */
float average( int z[] ){

   float total=0;
   int k;

   for(k=0; k < MAX; k++)
       total += z[k];

   return total/MAX;
}























