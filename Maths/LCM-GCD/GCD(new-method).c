#include <stdio.h>
int gcdfind(int num1, int num2)
{
    while (num1 != num2)
    {
        //let num = 12 num2 = 15
        if (num1 > num2)
        { //12 > 15 false
            return gcdfind(num1 - num2, num2); //2nd Iteration 15 - 3, 3 = 12,3
        }
        else
        {//15, 15 - 12
         //15, 3
         //Now this will go to fuction
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