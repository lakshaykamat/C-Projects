#include <stdio.h>
int oddeven(int num1){
    if(num1%2==0){
        printf("This is even");
    }
    else{
        printf("This is odd");
    }
    return num1;
}
int main(){
    int num1;
    printf("Enter a Number = \n");
    scanf("%d",&num1);
    oddeven(num1);
}