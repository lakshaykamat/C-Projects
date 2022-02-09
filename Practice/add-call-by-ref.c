#include <stdio.h>
int function(int *ptr1, int *ptr2){
    int x = *ptr1 + *ptr2;
    int y = *ptr1 - *ptr2;
    printf("a = %d b = %d",x,y);
}
int main()
{
    int a = 4, b = 3;
    function(&a,&b);
    return 0;
}