#include <stdio.h>

int sumfinder(int number)
{
    return (number % 10) + (number / 10);
}
int main()
{
    int number;
    printf("Enter the number = ");
    scanf("%d", &number);
    int a = sumfinder(number);
    printf("The sum %d is %d",number,a);
    return 0;
}
