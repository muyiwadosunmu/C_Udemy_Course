#include <stdio.h>
#include <stdlib.h>

typedef enum
{
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
} DaysOfTheWeek;

int main()
{
    printf("\n===Days of The Week\n\n");

    printf("Monday / Sunday ==> %d / %d\n", MONDAY, SUNDAY);
    DaysOfTheWeek day;

    printf("Enter a number from 1 to 7: ");
    scanf("%u", &day);
    switch (day)
    {
    case MONDAY:
        printf("Day %d is Monday\n", day);
        break;
    case TUESDAY:
        printf("Day %d is Tuesday\n", day);
        break;
    case WEDNESDAY:
        printf("Day %d is Wednesday\n", day);
        break;
    case THURSDAY:
        printf("Day %d is Thursday\n", day);
        break;
    case FRIDAY:
        printf("Day %d is Friday\n", day);
        break;
    case SATURDAY:
        printf("Day %d is Saturday\n", day);
        break;
    case SUNDAY:
        printf("Day %d is Sunday\n", day);
        break;
    default:
        printf("Day has unknown value\n");
        break;
    }

    printf("\n\n===struct.dev===\n");
}
