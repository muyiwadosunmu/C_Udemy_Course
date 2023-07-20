#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * By default enum value starts with 1
 */
enum months
{
    JAN = 1,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
};

int main()
{
    enum months myFavouriteMonth = JUL;
    enum months myWorstMonth = NOV;

    printf("Andrea's  favourite month is %d\n", myFavouriteMonth);
    printf("Andrea's  worst month is %d\n", myWorstMonth);

    printf("\n\n===Code By struct.dev===\n\n");
    return EXIT_SUCCESS;
}