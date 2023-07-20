#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    int result = a + b;
    return result;
}

/**
 *  iF value > 0 => accumulate value in accumulator => return 0
 * else => do nothing => return -1(FAIL)
 */

int accumulate(int *const accumulator, int value) // address is constant int his case
{
    if (value > 0)
    {
        *accumulator += value;
        return EXIT_SUCCESS;
    }
    else
    {
        return -1;
    }
}

void accumulateWrapper(int *const accumulator, int value)
{
    if (accumulate(accumulator, value))
    {
        printf("Warning! value = %d\n", value);
    }
}

void printStudent(int students)
{
    students--;
    printf("Students = %d\n", students);
}

int main()
{
    printf("\n=== Functions and Pointers ===\n");
    int girls = 12, boys = 9;
    int students = sum(girls, boys);
    printStudent(students);

    int class_1 = 28, class_2 = 19, class_3 = -1;
    int accumulator = 0;

    accumulateWrapper(&accumulator, class_1);
    accumulateWrapper(&accumulator, class_2);
    accumulateWrapper(&accumulator, class_3);

    printf("Accumulator = %d\n", accumulator);

    printf("\n\n== Struct.dev ===\n\n");
    return EXIT_SUCCESS;
}