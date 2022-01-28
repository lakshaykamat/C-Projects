#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int a, b;
    double pythagores, theorem;
    printf("Enter the Value of A = ");
    scanf("%d", &a);
    printf("Enter the Value of B = ");
    scanf("%d", &b);

    pythagores = (a * a) + (b * b);
    theorem = sqrt(pythagores);

    printf("Pythagores Theorem = (a^2 + b^2)^1/2 = c^2\n");
    printf(" = %.2lf", theorem);
    return 0;
}
