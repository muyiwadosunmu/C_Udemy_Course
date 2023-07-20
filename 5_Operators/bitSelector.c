#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned data = 0xABCD;
    unsigned N = 4;
    // unsigned M = 7;
    unsigned result = (data >> N) & 0b1111;
    printf("data ----> 0x%04X\n", data);
    printf("result --> 0x%04X\n", result);

    printf("=== struct.dev ===");
    return EXIT_SUCCESS;
}