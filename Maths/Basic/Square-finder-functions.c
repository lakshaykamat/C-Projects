#include <stdio.h>
#include <math.h>
int squarefinder(int num){
    int square = num * num ;
    return square;
}
int main(){
    int num;
    printf("Enter Num = ");
    scanf("%d",&num);
    //Maths Library Function
    int b = squarefinder(num);
    printf("Square of %d = %d",num,b);
}