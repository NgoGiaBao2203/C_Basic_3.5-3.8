#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool flag = true;
    do {
        int product = 0;
        int counter = 0;
        char character = 'n';

        printf("\nPlease enter a starting number: ");
        scanf("%d", &product);

        // The math loop
        while (product <= 100 && product > 0) {
            product *= 3;
            counter++;
            printf("Result[%d]: %d\n", counter, product);
        }

        printf("Loop counter: %d\n", counter);

        printf("\nDo you want to continue (y/n): ");
        // Note the space before %c - this skips the leftover newline/whitespace
        scanf(" %c", &character);

        if (character == 'n' || character == 'N') {
            flag = false; // Stop the loop
        } else {
            flag = true;  // Continue the loop
        }
    } while (flag);

    return 0;
}