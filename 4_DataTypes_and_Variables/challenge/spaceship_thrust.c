#include <stdio.h>
#include <stdlib.h>

typedef enum
{
    THRUST_NONE = 0,
    THRUST_LOW = 5,
    THRUST_MEDIUM = 9,
    THRUST_HIGH = 12,
    THRUST_MAXIMUM = 20
} SpaceshipThrust;

int main()
{
    SpaceshipThrust none = THRUST_NONE;
    SpaceshipThrust low = THRUST_LOW;
    SpaceshipThrust medium = THRUST_MEDIUM;
    SpaceshipThrust maximum = THRUST_MAXIMUM;
    printf("\n===Spaceship Thrust===\n\n");
    printf("Set Thrust set to  %d ---> Ready to go\n", none);
    printf("Set Thrust set to %d ---> Ready to take off\n", maximum);
    printf("Set Thrust set to %d ---> Ready to go into the ionosphere\n", medium);
    printf("Set Thrust set to %d ---> Ready to go level\n", low);
    return EXIT_SUCCESS;
}