#include <stdio.h>
#include <math.h>
int main()
{

    /*
    Enter a Number and Power
    */
    int input, powe, sum = 1;
    printf("Enter num = ");
    scanf("%d", &input);
    printf("Enter power = ");
    scanf("%d", &powe);

    printf("%d to the power %d is = %.0lf", input, powe, pow(input, powe));
    //Math.h function added  of power NOTE pow function data type is double %.0lf


    //Alternate Type Method
    // for (int i = 1; i <= pow; i++)
    // {
    //     sum = sum * input;
    //     
    // }
    // printf("%d to the power %d is = %d", input, pow, sum);
    return 0;
}
