#include <stdio.h>
#include <stdlib.h>

/**
 * === Minimum Power of 2 ===
 * Goals:
 *      - Acquire user input as int
 *      - If input is positive
 *      > print the smallest power of 2 greater than or equal to the number
 *      - If input is negative:
 *      > do nothing
 *      Repeat until user enter -1
 */

int main()
{
    printf("\n\n=== Minimum Power of 2 ===\n\n");
    int userInput, result;
    do
    {
        printf("Enter a number (-1 to exit): ");
        scanf("%d", &userInput);
        if (userInput > 0)
        {
            result = 1;
            while (result < userInput)
            {
                result *= 2; // same as : result <==1;
            }
            printf("Minimum power of 2 greater than %d: %d\n", userInput, result);
        }

    } while (userInput != -1);

    printf("\n\n=== struct.dev ===\n\n");

    return EXIT_SUCCESS;
}