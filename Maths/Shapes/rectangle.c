#include <stdio.h>
int main(int argc, char const *argv[])
{
    int width, height, length, perimeter;
    printf("Enter Width:\n");
    scanf("%d", &width);
    
    printf("Enter height:\n");
    scanf("%d", &height);

    printf("Enter length:\n");
    scanf("%d", &length);

    printf("Rectangle is Area is = %d\n", width * height);
    printf("Perimeter of Rectangle is = %d", 2 * (length + width));
    return 0;
}