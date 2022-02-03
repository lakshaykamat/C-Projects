#include <stdio.h>

int main(){
    int input,fibo,n0 = 0,n1 = 1;
    printf("Enter a Number = ");
    scanf("%d",&input);
    
    // fibonacci series 0 1 1 2 3 5 8....
    //                n0 n1
    printf("%d\n%d\n",n0,n1);
    for (int i = 3; i <=input; i++)
    {
        fibo = n0 + n1;//0 + 1 = 1
        n0 = n1; //0 = 1 , n0 = 1
        n1 = fibo;//1 = 1, n1 = 1
        printf("%d\n",fibo); // prints 1

    }
    
    return 0;
}