#include <stdio.h>
#include <stdlib.h>
#include <stdint.h> // This header gives us access to more types

typedef enum
{
    TEA,
    COFFEE,
    JUICE,
    BEER
} Menu;

int main()
{
    Menu mario = COFFEE;
    Menu andrea = BEER;
    printf("Maria Ordered: ....%d\n", mario);
    printf("Andrea Ordered: ...%d\n", andrea);

    return EXIT_SUCCESS;
}
