#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>

int main()
{
    int variable = 0;
    printf("%lu\n", sizeof(variable));
    printf("%ld\n", sizeof(int));
    printf("%lu\n", sizeof(long int));
    printf("%ld\n", sizeof(long long int));
    printf("%lu\n", sizeof(__u_char));
    printf("%lu\n", sizeof(int8_t));
    printf("%lu\n", sizeof(int16_t));
    printf("%lu\n", sizeof(int32_t));
    printf("%lu\n", sizeof(int64_t));
    printf("%lu\n", sizeof(123LL && 456LL));

    printf("\n\n===Struct.dev===\n\n");
    return EXIT_SUCCESS;
}