#include <stdio.h>
int main()
{
    int num, num2, hcf;
    printf("Enter number1 = ");
    scanf("%d", &num);
    printf("Enter number2 = ");
    scanf("%d", &num2);

        //let num = 12 & num2 = 15
    for (int i = 1; i <= num && i <= num2; i++)
    { //1<=12 && 1<=15 True
        if ((num % i == 0) && (num2 % i == 0))
        { //12%1==0 && 15%1==0  False
         //Now again loop runs i++
            hcf = i;
        }
    }
    printf("HCF of %d and %d is %d\n",num,num2,hcf);

    return 0;
}