#include <stdio.h>

int main()
{
    printf("Lets learn about pointers\n");
    int a = 76;
    int *ptra = &a;
    int *ptr2 = NULL;
    printf("The address of pointer to a is %p\n", &ptra);//Address of Pointer P

    printf("The address of a is %p\n", &a); //Address of A  
    printf("The address of a is %p\n", ptra);//Adress of A

    printf("The address of some garbage is %p\n", ptr2);

    printf("The value of a is %d\n", *ptra);
    printf("The value of a is %d\n", a);
    return 0;
}