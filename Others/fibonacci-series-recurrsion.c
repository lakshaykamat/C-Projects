#include <stdio.h>
int fibo(int num){
    // 0 1 1 2 3 5 8 13
    // n0 n1
    if (num == 1 || num == 2){
        return num-1;}
    else{
        return fibo(num - 2) + fibo(num - 1); 
        //3 + 4 //1 + 3 //  0 + 2 
        //7 //4 //2
        //5
        //3       4
        //1 2   2  3
        //
    }
}
int main()
{
    int num = 5;
    fibo(num);
        printf("%d ",fibo(num));
    return 0;
}