#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* 1.23456789 */
    double decimalDigits = 1.23456789;

    /* 7.801 x 10^9 */
    double worldPopulation = 7.801E9;

    /* 6.26 x 10^-34*/
    double plankConstant = 6.636E-34;

    printf("%12.1f | 1 decimal digit\n", decimalDigits);
    printf("%12.3f | 1 decimal digit\n", decimalDigits);
    printf("%12.1f | world Population, decimal, 1 digit of precision\n", worldPopulation);
    printf("%12.1e | world Population, scientific, 1 digit of precision\n", worldPopulation);
    printf("%12.3e | world Population, scientific, 1 digit of precision\n", worldPopulation);
    printf("%12.1e | plankConstant, scientific, 1 digit of precision\n", plankConstant);
    printf("%12.3E | plankConstant, scientific, 1 digit of precision\n", plankConstant);
    printf("\n\n=== Struct.dev ====\n\n");
    return EXIT_SUCCESS;
}