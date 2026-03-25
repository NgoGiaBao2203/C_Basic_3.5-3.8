// Item_3.6_compound_else.c
#include <stdio.h>

int main( void )
{
    int grade; // variable

    printf( "Enter integer: " ); // Prompt user
    scanf( "%d", &grade ); // Read integer

    if ( grade >= 60 ) {
        puts( "Passed." );
    } // end if
    else {
        puts( "Failed." );
        puts( "You must take this course again." );
    } // end else
}