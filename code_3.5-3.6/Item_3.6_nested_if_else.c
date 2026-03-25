// Item_3.6_nested_if_else.c
#include <stdio.h>

int main( void )
{
    int grade; // variable

    printf( "Enter integer: " ); // Prompt user
    scanf( "%d", &grade ); // Read integer

    if ( grade >= 90 ) {
        puts( "A" );
    } // end if
    else {
        if ( grade >= 80 ) {
            puts( "B" );
        } // end if
        else {
            if ( grade >= 70 ) {
                puts( "C" );
            } // end if
            else {
                if ( grade >= 60 ) {
                    puts( "D" );
                } // end if
                else {
                    puts( "F" );
                } // end else
            } // end else
        } // end else
    } // end else
}