// Item_3.5_the_if.c
// The if selection statement
#include <stdio.h>

int main( void )
{
	int grade; // variable
	
	printf( "Enter integer: " ); // Prompt user
	scanf( "%d", &grade ); // Read integer
	
	if ( grade >= 60 ) {
		puts( "Passed" );
	} // end if
}