#include <stdio.h>
#include <math.h>

int main(void)
{
    double ans0, ans1, ans2, ans3, input;
    printf("Enter Value = ");
    scanf("%lf", &input);

    ans0 = sin(input);
    ans1 = cos(input);
    ans2 = tan(input);
    ans3 = log(input);

    printf("Sin(%.2lf) = %lf\n", input, ans0);
    printf("Cos(%.2lf) = %lf\n", input, ans1);
    printf("Tan(%.2lf) = %lf\n", input, ans2);
    printf("Cot(%.2lf) = %lf\n", input, 1 / ans2);
    printf("Sec(%lf) = %lf", input, 1 / ans1);
    printf("Cosec(%lf) = %lf", input, 1 / ans0);
    printf("Log(%lf) = %lf", input, ans3);
    return 0;
}