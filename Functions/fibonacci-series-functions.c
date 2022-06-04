#include <stdio.h>
int fibo(int num)//Formal Parameter
{
    int n0 = 0, n1 = 1, a;
    /*fibo 0 1 1 2 3 5 8...*/
    for (int i = 3; i <= num; i++)
    {
        a = n0 + n1; // 0 + 1 = 1 // 1 + 1 = 2
        n0 = n1;     // n0 = 1 // 1  = 1 
        n1 = a;      // 1 = 1
       printf("%d ", a);
        return a;
    }
}
int main()
{
    int num;//Actucal Parameter
    printf("Enter the Num = ");
    scanf("%d",&num);
    int b = fibo(num);
    return 0;
}