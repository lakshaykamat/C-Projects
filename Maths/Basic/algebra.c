#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("Enter the value of a = ");
    scanf("%d", &a);
    printf("Enter the value of b = ");
    scanf("%d", &b);
    printf("Enter the value of c = ");
    scanf("%d", &c);

    int a1 = (a * a) + (b * b) + 2 * (a * b);
    int a2 = (a * a) + (b * b) - 2 * (a * b);
    int a3 = (a * a) - (b * b);
    int a4 = a1 - (2 * (a * b));
    int a5 = ((a * a) * a) + ((b * b) * b) + ((3 * a) * b) * (a + b);
    int a6 = ((a * a) * a) - ((b * b) * b) - ((3 * a) * b) * (a - b);

    printf("(a+b)^2 = %d\n", a1);
    printf("(a-b)^2 = %d\n", a2);
    printf("(a+b)(a-b) = %d\n", a3);
    printf("a^2 + b^2 = %d\n\n",a4);
    printf("(a+b)^3 = %d\n", a5);
    printf("(a-b)^3 = %d\n\n", a6);
    return 0;
}
