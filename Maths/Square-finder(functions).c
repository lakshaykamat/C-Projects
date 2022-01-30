#include <stdio.h>
int squarefinder(int num){
    int square = num * num ;
    return square;
}
int main(){
    int a;
    a=squarefinder(20);
    printf("%d",a);
}