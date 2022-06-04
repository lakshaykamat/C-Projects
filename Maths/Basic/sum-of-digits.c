#include <stdio.h>

int sumfinder(int number)//number = 25
{
    return (number % 10) + (number / 10);
    //(25 % 10) + (25 / 10)
    //    5     +    2 
   //  = 7
}
int main()
{
    int number;//let number = 25
    printf("Enter the number = ");
    scanf("%d", &number);
    int a = sumfinder(number); //a = 7
    printf("The sum %d is %d",number,a);//25,7
    return 0;
}
