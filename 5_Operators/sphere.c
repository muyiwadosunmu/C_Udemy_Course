#include <stdio.h>
#include <stdlib.h>

/**
 *
 * === Sphere ===
 *
 * Calculate Surface and volume of a sphere
 *
 * Goals:
 * ----Propmpt user to enter the radius
 * ----Calculate the surface area
 * ----Calculate the enclosed volume
 *----- Print the radius and the results in decimal format (2 digits of precision)
 *----- Print the radius and the results in scientific notation (2 digits of precision)
 * ----- Check the results
 * A = 4PIr
 * V = 4/3PIr^3
 */

int main()
{
    double PI = 3.14159265359;
    double r;
    printf("\n=== Sphere ===\n\n");

    printf("Enter a radius? ");
    scanf("%lf", &r);
    printf("\n");
    double surface = 4 * PI * r * r;
    double volume = 4.0 / 3 * PI * r * r * r;
    printf("Decimal\n");
    printf("radius: %.2f\n", r);
    printf("surface: %.2f\n", surface);
    printf("volume: %.2f\n", volume);
    printf("\n");
    printf("Scientific Notation\n");
    printf("radius: %.3e\n", r);
    printf("surface: %.3e\n", surface);
    printf("volume: %.3e\n", volume);

    printf("\n\n=== Struct.dev ===\n\n");

    return EXIT_SUCCESS;
}
