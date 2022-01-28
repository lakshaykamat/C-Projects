#include <stdio.h>
int main(int argc, char const *argv[])
{
    double num1,num2;
    char op;
    printf("Enter Two Number and Opeartion = ");
    scanf("%lf%c%lf",&num1,&op,&num2);

    switch (op)
    {
    case '+':
        printf("The Answer is = %.1lf",num1+num2);
        break;
    case '/':
        printf("The Answer is = %.1lf",num1/num2);
        break;
    case '*':
        printf("The Answer is = %.1lf",num1*num2);
        break;
    case '-':
        printf("The Answer is = %.1lf",num1-num2);
        break;
 
    default:
    printf("Bro/Sis Please Read my above comment");
        break;
    }
    return 0;
}
