#include <stdio.h>

int main()
{
    int num1, num2, lcm, hcf;
    printf("Enter Number1 = ");
    scanf("%d",&num1);
    printf("Enter Number2 = ");
    scanf("%d",&num2);

    lcm = (num1 > num2) ? num1 : num2;
    while (1)
    {
        if (lcm % num1 == 0 && lcm % num2 == 0)
        {
            break;
        }
        lcm++;
    }

    for (int i = 1; i <= num1 && i <= num2; i++)
    {
        if ((num1 % i == 0) && (num2 % i == 0))
        {
            hcf = i;
        }
    }
    printf("LCM of %d and %d is %d\n", num1, num2, lcm);
    printf("HCF of %d and %d is %d\n", num1, num2, hcf);
    return 0;
}