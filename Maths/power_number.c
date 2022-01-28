#include <stdio.h>
int main() {

    /*
    Enter a Number and Power 
    */
    int input,pow,sum= 1;;
    scanf("%d",&input);
    scanf("%d",&pow);
    
    for(int i = 1 ;i<=pow;i++){
        sum = sum * input;
    }
    printf("%d to the power %d is = %d",input,pow,sum);
    return 0;
}
