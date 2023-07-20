#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    unsigned students = 25U;
    unsigned long long worldPopulation = 7801235945ULL;
    printf("%12u | Student in the class\n", students);
    printf("%12llu | World population now\n", worldPopulation);

    uint8_t count = UINT8_MAX;

    printf("%12u | Count of something\n", count);

    uint8_t count1 = UINT8_MAX;
    uint16_t count2 = UINT16_MAX;

    printf("UINT8_MAX is %12d\n", count1);
    printf("UINT16_MAX is %12d\n", count2);

    count = count + 1;
    printf("%12u | Count of something +1 (Overflow)\n", count);

    printf("%12d | INT32_MIN\n", INT32_MIN);
    printf("%12d | INT32_MAX\n", INT32_MAX);
    printf("%12d | UINT32_MIN\n", UINT32_MAX);

    printf("\n\n== Code By struct.dev");
    return EXIT_SUCCESS;
}
