#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef enum
{
    ON,
    OFF
} LedState;

/**
 * === Even Odd ===
 *
 * Goals:
 * ---prompt user to enter a positive integer number
 * if number is negative print a warning and exit
 * check if number is even or odd and store the result
 * print hether the number is even or odd
 *
 */

int main()
{
    LedState led = OFF;
    switch (led)
    {
    case ON:
        printf("Led is On\n");
        break;
    case OFF:
        printf("Led is Off");
    default:
        break;
    }
    printf("\n\n====struct.dev====\n\n");
    return EXIT_SUCCESS; 
}