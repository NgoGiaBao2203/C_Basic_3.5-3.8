// Item_3.6_conditional_operator_actions.c
#include <stdio.h>

int main( void )
{
    int grade; // variable

    printf( "Enter integer: " ); // Prompt user
    scanf( "%d", &grade ); // Read integer

    ( grade >= 60 ) ? puts( "Passed" ) : puts( "Failed" );
}