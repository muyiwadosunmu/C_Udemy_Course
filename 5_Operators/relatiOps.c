#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Enter operand A (int) ");
    scanf("%d", &a);
    printf("Enter operand B (int) ");
    scanf("%d", &b);

    printf("A == B --> %d\n", a == b);
    printf("A != B --> %d\n", a != b);
    printf("A > B --> %d\n", a > b);
    printf("A < B --> %d\n", a < b);
    printf("A >= B --> %d\n", a >= b);
    printf("A <= B --> %d\n", a <= b);

    printf("\n\n==== Struct.dev===\n");
    return EXIT_SUCCESS;
}