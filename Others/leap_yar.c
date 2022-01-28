#include <stdio.h>

int main()
{
    int year;
    printf("Enter year = ");
    scanf("%d", &year);

    if (year <= 1581)
    {
        printf("Sorry you choose %d This year is not greter than 1582 - The first year of Georgian Calender",year);
    }
    else if (year % 400 == 0)
    {
        printf("%dis Leap year", year);
    }
    else if (year % 100 == 0)
    {
        printf("%d is Leap year", year);
    }
    else if (year % 4 == 0)
    {
        printf("%d is leap year", year);
    }
    else
    {
        printf("No, %d is not a Leap year", year);
    }

    return 0;
}