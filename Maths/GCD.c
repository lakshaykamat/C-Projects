#include <stdio.h>
int gcdfind(int num1, int num2)
{
    while (num1 != num2)
    {
        if (num1 > num2)
        {
            return gcdfind(num1 - num2, num2);
        }
        else
        {
            return gcdfind(num2, num2 - num1);
        }
    }
}
int main()
{
    int num1, num2,res;
    printf("Enter the number = ");
    scanf("%d", &num1);
    printf("Enter the number = ");
    scanf("%d", &num2);
    res = gcdfind(num1,num2);
    printf("The HCF of %d and %d is %d",num1,num2,res);

    return 0;
}