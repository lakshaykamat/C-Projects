#include <stdio.h>
int main(int argc, char const *argv[])
{
    int days, hours, min, sec;
    long long int milisec;
    float week, year, month, decade, century;

    printf("Enter days:\n");
    scanf("%d", &days);

    milisec = (long long int)days * 86400000;
    sec = days * 8640000;
    min = days * 1440;
    hours = 24 * days;
    week = days / 7.0f;
    month = days / 30.417f;
    year = days / 365.0f;
    decade = days / 3650.0f;
    century = days / 36500.0f;

    printf("In %d", days);
    printf(" Days ");
    printf("Total  Millisecond is: %lld", milisec);
    printf("ms\n");

    printf("In %d", days);
    printf(" Days ");
    printf("Total  Seconds is: %ld", sec);
    printf("s\n");

    printf("In %d", days);
    printf(" Days ");
    printf("Total Minutes is: %d", min);
    printf("m\n");

    printf("In %d", days);
    printf(" Days ");
    printf("Total  Hours is: %d", hours);
    printf("h\n");

    printf("In %d", days);
    printf(" Days ");
    printf("Total  Week is: %.1f", week);
    printf("wk\n");

    printf("In %d", days);
    printf(" Days ");
    printf("Total  Month is: %.2f", month);
    printf("m\n");

    printf("In %d", days);
    printf(" Days ");
    printf("Total  Year is: %.3f", year);
    printf("y\n");

    printf("In %d", days);
    printf(" Days ");
    printf("Total  Decade is: %.4f", decade);
    printf("\n");

    printf("In %d", days);
    printf(" Days ");
    printf("Total  Century is: %.5f", century);

    return 0;
}
