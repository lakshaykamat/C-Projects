#include <stdio.h>
int main(int argc, char const *argv[])
{
    int celcius;
    double fahrenheit;
    int kelvin;
    printf("Enter Temperatue in Celcius:\n");
    scanf("%d", &celcius);

    fahrenheit = (double)(celcius*9/5.0)+32.0;
    kelvin = celcius + 273;

    printf("%d",celcius);
    printf(" Celcius = %.1lf",fahrenheit);
    printf(" Fahrenheit\n");

    printf("%d",celcius);
    printf(" Celcius = %d",kelvin);
    printf(" kelvin");
    return 0;
}
