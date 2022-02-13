#include <stdio.h>
int function(int *ptr1, int *ptr2)
{
    *ptr1 = 20;
    *ptr2 = 10;
}
int main()
{
    // Here both actual and formal parameters refer to same memory location. Therefore, any changes made to the formal parameter will get reflected to actual parameters.
    int x = 10, y = 20;
    printf("x z= %d y = %d\n", x, y);
    function(&x, &y);
    printf("x = %d y = %d\n", x, y);
    return 0;
}