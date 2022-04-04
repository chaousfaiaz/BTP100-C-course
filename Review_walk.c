#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Log{
   int   cityID;
   float temperature[3];
};

int main(){

    struct Log samples[3] = { {1111, {10.5, 25.5, 5.5}}, 
	                          {4444, {-2.5, 7.5, - 9.5}},
 					          {7777, { 30.5, 45.5, 22.5}} 
					        };
					 
	int k, j;
	
	for (k=0; k<3; k++){
	     printf( "[%d] %d\n", k, samples[k].cityID );
		 printf( "temperatures: ");
		 
		 for (j=0; j<3; j++)
		      printf( "%5.2lf ", samples[k].temperature[j] );
			  
	     printf("\n");	 
	}
		 
    return 0;
}