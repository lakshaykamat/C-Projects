#include <stdio.h>
int main(int argc, char const *argv[])
{
    int input;
    long long factorial = 1;
    printf("Enter number and see factorial = ");
    scanf("%d", &input);
    for (int i = 1; i <= input; i++)
    {
         factorial *= i;
    }
    printf("%llu", factorial);

    return 0;
}
