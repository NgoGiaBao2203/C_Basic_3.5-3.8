// Fig_3.6_the_if_else.c
#include <stdio.h>

int main ( void)
{
	int grade; // variable
	
	printf( "Enter integer: " ); // Prompt user
	scanf( "%d", &grade ); // Read integer
	
	if ( grade >= 60 ) {
		puts( "Passed" );
	} // end if
	else {
		puts( "Failed" );
	} // end else
}