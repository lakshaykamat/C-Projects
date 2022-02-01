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
       
        /*
        let input = 3
        i = 1
        let pow = 2 (1<=2) yes
        i++ 
        3 = 1 * 3

        Now,Sum = 3
        i = 2 (2<=2) yes 
        9 = 3 * 3
        
        */
    return 0;
}
