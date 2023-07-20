#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    a = 0;
    b = a++ * 2 + 1;
    printf("After post increment: \n");
    printf("a: %d\n", a);
    printf("b: %d\n", b);

    a = 0;
    b = ++a * 2 + 1;
    printf("After pre increment: \n");
    printf("a: %d\n", a);
    printf("b: %d\n", b);

    printf("\n\n==== Struct.dev===\n");
    return EXIT_SUCCESS;
}