// Fig_3.6_conditional_operator.c
#include <stdio.h>

int main( void )
{
    int grade; // variable

    printf( "Enter integer: " ); // Prompt user
    scanf( "%d", &grade ); // Read integer

    puts( grade >= 60 ? "Passed" : "Failed" );
}