#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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
    int userno;
    printf("\n===Even or Odd===");
    printf("Please enter a positive number? \n");
    scanf("%d", &userno);
    if (userno < 0)
    {
        printf("Warning, %d is negative number\n", userno);
        return EXIT_FAILURE;
    }
    bool isEven = (userno % 2 == 0) ? true : false;
    if (isEven)
    {
        printf("The number %d is even", userno);
    }
    else
    {
        printf("The number %d is odd", userno);
    }
    printf("\n\n====struct.dev====\n\n");
    return EXIT_SUCCESS;
}