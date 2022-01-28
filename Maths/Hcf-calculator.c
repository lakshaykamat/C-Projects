#include <stdio.h>
int main()
{
    int num, num2, hcf;
    printf("Enter number1 = ");
    scanf("%d", &num);
    printf("Enter number2 = ");
    scanf("%d", &num2);

    for (int i = 1; i <= num && i <= num2; i++)
    {
        if ((num % i == 0) && (num2 % i == 0))
        {
            hcf = i;
        }
    }
    printf("HCF of %d and %d is %d\n",num,num2,hcf);

    return 0;
}