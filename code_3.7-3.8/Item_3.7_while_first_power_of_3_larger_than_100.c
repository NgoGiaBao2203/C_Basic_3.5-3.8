// Item_3.7_while_first_power_of_3_larger_than_100.c
#include <stdio.h>

int main( void )
{
    int product = 3; // variable

    while ( product <= 100 ) {
        product = 3 * product;
    }

    printf( "Result: %d\n", product ); // The result is displayed.
}