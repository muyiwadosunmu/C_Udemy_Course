#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * By default enum value starts with 1
 */
enum menu
{
    TEA,    // 0
    COFFEE, // 1
    JUICE,  // 2
    BEER,   // 3
};

int main()
{
    enum menu mario = COFFEE;
    enum menu andrea = BEER;

    printf("Maria Ordered: ....%d\n", mario);
    printf("Andrea Ordered: ...%d\n", andrea);

    printf("\n\n===Code By struct.dev===\n\n");
    return EXIT_SUCCESS;
}