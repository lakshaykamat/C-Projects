#include <stdio.h>
 int main(int argc, char const *argv[])
 {
     int a,b,c,d,e,f,g;
     printf("Enter your first number:\n");
     scanf("%d",&a);
     printf("Enter your second number:\n");
     scanf("%d",&b);

    printf("Sum is :%d\n",a+b);
    printf("Multiplication is :%d\n",a*b);
    printf("Divide is :%d\n",a/b);
    printf("Remainder is :%d\n",a%b);
    printf("Subtract is :%d\n",a-b);
    return 0;
}