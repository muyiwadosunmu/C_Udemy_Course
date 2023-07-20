#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * Before C99
 */
// int main() {
//     int a = 1; //true
//     int b = 0; //false

/**
 * After C99
 */
// bool a = true;  // value: 1
// bool b = false; // value:0
// }

int main()
{
    bool a = true;
    bool b = false;
    printf("a (true): %d\n", a);
    printf("b (false): %d\n", b);

    printf("\n\n===Code By struct.dev===\n\n");
    return EXIT_SUCCESS;
}