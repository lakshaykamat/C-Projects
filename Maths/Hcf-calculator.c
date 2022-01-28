#include <stdio.h>
int main() {
    int num,num2,hcf,u;
    label:printf("Enter number1 = ");
    scanf("%d %d",&num,&num2);
    
    for(int i=1;i<=num && i<= num2 ;i++){
        if( (num%i==0) && (num2%i==0) ){
            hcf=i;
        }
    }
        printf("Answer is %d\n",hcf);
        printf("O to retry 1 to exit = ");
        scanf("%d",&u);
    if(u==1){
        goto label;
        
    }

    return 0;
}