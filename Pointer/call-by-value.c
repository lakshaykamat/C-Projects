#include <stdio.h>
int function(int x, int y)
{ // Formal Parameter
    x = 20;
    y = 10;
}
int main()
{
    int x = 10, y = 20; // Actual parameter
    printf("x = %d y = %d\n", x, y);
    int z = function(x, y);
    printf("x = %d y = %d", z);
    // Here values of Actual parameter were copied to formal parameter these two different parameter store values in different location
    return 0;
}