#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num1, num2 = 1;
    double factorial = 1;
    printf("Enter A Numbber = ");
    scanf("%d",&num1);
    do
    {
        /* factorial = factorial * num2
        case1 1=1*1
        case2 1=1*2
        case3 2=2*3*/
        factorial *= num2;
        num2++;
    } while (num2 <=num1);
    printf("The Factorial of %d is = %.0lf",num1 ,factorial);
    
    return 0;
}

