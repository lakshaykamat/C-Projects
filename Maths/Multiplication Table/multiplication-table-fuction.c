#include <stdio.h>
int Multi(int num){
    for (int i = 1; i <=num; i++)
    {
        printf("%d X %d = %d\n",num,i,num*i);
    }
    
}
int main(){
    int input;
    printf("Enter a Numb = ");
    scanf("%d",&input);
    Multi(input);
    return 0;
}