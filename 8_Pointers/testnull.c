#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n=== Null Pointers ===\n");
    int *ptr = NULL;
    if (ptr != NULL)
    {
        printf(" 1 | Pointed value: %d\n", *ptr);
    }

    printf("\n== Struct.dev===\n\n");
    return EXIT_SUCCESS;
}