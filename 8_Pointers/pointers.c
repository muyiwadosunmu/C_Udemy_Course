#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    printf("\n=== pointers ===\n");

    char a = 'A';
    char *ptr = &a;

    printf("1 | %c, %c, %u\n", a, *ptr, (uint32_t)ptr);

    char b = 'B';
    ptr = &b;
    printf("2 | %c, %c, %u\n", b, *ptr, (uint32_t)ptr);

    *ptr = 'C';
    printf("3 | %c, %c, %u\n", b, *ptr, (uint32_t)ptr);

    (*ptr)++;
    printf("4 | %c, %c, %u\n", b, *ptr, (uint32_t)ptr);

    unsigned x = 'A';
    ptr = (char *)&x;
    printf("5 | %u, %c, %u\n", x, *ptr, (uint32_t)&x);

    unsigned y = 'B';
    ptr = (char *)&y;
    printf("6 | %u, %c, %u\n", y, *ptr, (uint32_t)&y);

    *ptr = 'C';
    printf("7 | %c, %c, %u\n", y, *ptr, (uint32_t)&y);

    (*ptr)++;
    printf("8 | %c, %c, %u\n", y, *ptr, (uint32_t)&y);

    x = 0xABCD1234;
    ptr = (char *)&x;
    printf("9 | %X, %X, %c\n", x, *ptr, *ptr);

    unsigned *uint_ptr = (unsigned *)ptr;
    *uint_ptr = 'C';
    printf("10 | %u, %x, %x, %c\n", x, x, *ptr, *ptr);

    printf("\n\n=== Struct.dev===\n\n");

    return EXIT_SUCCESS;
}