#include <stdio.h>
int main()
{
    int num, num2, lcm, hcf;
    printf("Enter Num1 = ");
    scanf("%d", &num);
    printf("Enter Num2 = ");
    scanf("%d", &num2);

    lcm = (num > num2) ? num : num2;

    while (1)
    {
        if ((lcm % num == 0) && (lcm % num2 == 0))
        {
            break;
        }
        lcm++;
    }

    for (int i = 1; i <= num && i <= num2; i++)
    {
        if ((num % i == 0) && (num2 % i == 0))
        {
            hcf = i;
        }
    }

    printf("The LCM of %d and %d is %d\n",num,num2, lcm);
    printf("The HCF of %d and %d is %d\n",num,num2, hcf);

    return 0;
}