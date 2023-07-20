#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    char c = 'A';
    printf("char c: %d\n", c);
    /** To print out characters stored in C*/
    printf("char c: %c\n", c);

    c = 66;
    printf("char c: %c\n", c);

    // Acquire user input;
    printf("Input a character: ");
    c = getchar();
    printf("You entered: %c\n", c);

    c = getchar();
    printf("You entered: %c\n", c);

    c = getchar();
    printf("You entered: %c\n", c);

    printf("\n\n===Code By struct.dev===\n\n");
    return EXIT_SUCCESS;
}
