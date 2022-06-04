#include <stdio.h>
int main(int argc, char const *argv[])
{
    float pi = 22/7.0f; 
    int radius;
    printf("Enter Radius = ");
    scanf("%d", &radius);

    double area = pi * (radius * radius);
    double perimeter = (2*pi)*radius;
    
    printf("Area of Circle = %.3lf\n", area);
    printf("Perimeter of Circle is = %.3lf", perimeter);
    return 0;
}
