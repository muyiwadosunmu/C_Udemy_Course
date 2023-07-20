#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello World\n");
    int girls = 12;
    int boys = 9;

    int students = girls + boys;
    printf("There are %d in the class\n", boys);
    printf("\tThere are %d in the class\n", girls);
    printf("\tThere are a total of %d students in the class", students);
    return EXIT_SUCCESS;
}
