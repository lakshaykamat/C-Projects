#include <stdio.h>
#include <math.h>
int squarefinder(int num){// 2
    int square = num * num ;//2 * 2
    return square;//4
}
int main(){
    int num;//let num = 2
    printf("Enter Num = ");
    scanf("%d",&num);
    //Maths Library Function
    int b = squarefinder(num);//b = 4
    printf("Square of %d = %d",num,b);//2,4
}