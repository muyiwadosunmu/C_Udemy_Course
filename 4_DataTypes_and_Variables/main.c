#include <stdio.h>
#include <stdlib.h>
#include <stdint.h> // This header gives us access to more types

int main()
{
    int8_t ab = 4;
    
    printf("Hello World\n");
    unsigned int girls = 12U;
    int boys = 9;
    int a = 255;
    int b = 1;
    int c = a + b;
    int students = girls + boys;
    printf("\tSum of a and b is %d\n", c);
    printf("There are %d in the class\n", boys);
    printf("\tThere are %d in the class\n", girls);
    printf("\tThere are a total of %d students in the class", students);
    return EXIT_SUCCESS;
}
