#include <stdio.h>
#include <stdlib.h>

int main()
{
    int io_count = 0;
    const int max_io_count = 5;
    float io_array[max_io_count];

    for (io_count = 0; io_count < max_io_count; io_count++)
    {
        float value;
        printf("Insert an amount of money (0 to end):\n");
        printf("[%d/%d] ", io_count + 1, max_io_count);
        scanf("%f", &value);

        if (value == 0)
        {
            break;
        }
        io_array[io_count] = value;

        float sum = 0;
        for (int i = 0; i < io_count; i++)

        {
            sum += io_array[i];
            ;
            printf("%d | %9.2f $\n", i, io_array[i]);
        }
    }

    return EXIT_SUCCESS;
}