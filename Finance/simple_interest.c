#include <stdio.h>
int main(int argc, char const *argv[])
{
    int p,r,t;
    printf("Enter Princpal amount:\n");
    scanf("%d",&p);
    printf("Enter Time (in years):\n");
    scanf("%d",&t);
    printf("Enter Rate of interset (in percentage):\n");
    scanf("%d",&r);

    int interest=((p*r)*t)/100;
    printf("Interest is:%d\n", interest);
    printf("Total Amount is:%d",p+interest);
    return 0;
}

