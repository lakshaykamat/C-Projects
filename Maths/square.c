#include <stdio.h>
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int side;
    int perimeter;
    int area;
    printf("Enter side of square:");
    scanf("%d", &side);

    perimeter = 4 * side;
    area = side*side;

    printf("Perimeter of Square is = %d\n", perimeter);
    printf("Area of Square is = %d", area);
    return 0;
}
