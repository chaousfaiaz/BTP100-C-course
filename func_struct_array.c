 /* use of functions 
    a) modify a structure
	    - passing by address
		- formal parameter: a pointer to a structure
	b) modify an array of C structures as objects
		- formal parameter: an array parameter that points to an array of structures
    c) modify a structure in an array

    updated on 3/08/2021
 */

 #define _CRT_SECURE_NO_WARNINGS
 #include <stdio.h>
 #include <string.h>
 
 // struct type
 struct Student {
     int no;
     char grades[14];
 };

 void modify( struct Student* ptr );             // parameter: a pointer to a structure
 void show( struct Student [], int );            // parameter: an array parameter
 void populate_array( struct Student[], int* );  // parameters: an array parameter, a pointer

 int main(void) {
     int num=0;   

     // an array of 4 structures as objects
     struct Student students[4] = { 
				   {10001, "CAC"},
				   {10002, "CBB"},
				   {10003, "AAA"},
				   {10004, "BBB"}
				  };

     struct Student another;
     
	 /* Part 1 */
	 another.no = 10004;
	 strcpy(another.grades, "DDD"); // a C string

	 printf("1.1...another: no = %d, grades=%s\n", another.no, another.grades);

	 modify(&another); // passing by address: the address of a structure

	 printf("1.2...another: no = %d, grades=%s\n",
		    another.no, another.grades);

     /* Part 2 */
     show( students, 4 );             // passing by address, passing by value

     /* Part 3 */
     printf( "\n3...populate an array of structures with some data\n" );
     
     populate_array( students, &num );  // passing by address, passing by address
	                                    // What is the value of num when the function is called?

     show( students, num );             // What is the value of num *after* the function is called?

     /* Part 4 */
     printf( "\n4...modify the structure at index 0!\n" );

     modify( &students[0] );  // passing the address of a structure at index 0!

     show( students, num );
     return 0;
 }

 /* ptr: a pointer to a structure */
 void modify( struct Student* ptr ){
      (*ptr).no = 7777;
      strcpy( ptr->grades, "A+A+A+" );  // (*ptr).grades
 }

 /* list: an array parameter (i.e. a pointer to an array!) */
 void show( struct Student list[], int q ){
      int j;

      for(j=0; j<q; j++)
	      printf( "...student number:%d, grades:%s\n",
		          list[j].no, list[j].grades );

 }

 /* z: an array parameter */
 void populate_array( struct Student z[], int* size ){
      int k;

      *size = 3;
      for(k=0; k < *size; k++){
	      z[k].no = 9000 + k;
	      strcpy( z[k].grades, "ABC" );
      }
 }




			      
