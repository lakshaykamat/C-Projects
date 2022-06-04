#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num1, num2 = 1, f = 1;
    printf("Enter a Number = ");
    scanf("%d", &num1);

    while (num1 >= num2)
    {
        f *= num2;
        num2++;
    }
    printf("%d", f);
    return 0;
}
