#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){

    char firstName[12+1];   // no blank spaces allowed
	char fullName[30+1];    // blank spaces allowed
	int k;
	
	for(k=1; k<=2; k++){
	   printf( "Please enter a first name(no blank spaces)>" );
	   scanf("%12s", firstName);
	
	   // Where is the newline character? Is the buffer empty?
	   
	   printf( "first name:\n%s\n", firstName );
	}
	
	printf( "!!!\n" );
	
	 // getchar(); // WHY?  Is the buffer empty?
	
	for(k=1; k<=2; k++){
	   printf( "Please enter a full name(with blank spaces)>" );
	   scanf("%30[^\n]", fullName);
	   
	   // Where is the newline character? Is the buffer empty?
	   
	    // getchar(); // Is the buffer empty?
	   
	   printf( "full name:\n%s\n", fullName );
    }
	
	return 0;
}