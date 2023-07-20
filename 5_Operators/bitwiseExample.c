#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/**
 *
 * type uint8_t
 * A = 12 ---> 0000 1100
 * B = 5 ----> 0000 0101
 *
 * A & B ----> 0000 0100 = 4
 * A | B ----> 0000 1101 = 13
 * A ^ B ----> 0000 1001 = 9
 * A << 1 ---> 0001 1000 = 24
 * A >> 1 ---> 0000 0110 = 6
 */
int main()
{

    uint8_t a = 12;
    uint8_t b = 5;

    printf("A = %u\n", a);
    printf("B = %u\n", b);

    printf("A & B = %u\n", a & b);
    printf("A | B = %u\n", a | b);
    printf("A ^ B = %u\n", a ^ b);
    printf("A << B = %u\n", a << 1);
    printf("A >> B = %u\n", a >> 1);

    return EXIT_SUCCESS;
}