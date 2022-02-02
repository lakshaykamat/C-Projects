#include <stdio.h>

int main(){
    int n=129,n1=789,hcf;
    hcf=2;
    while(1){
        if(n%hcf==0 && n1%hcf==0){
            printf("%d",hcf);
            break;
        }
        hcf++;
    }
    return 0;
}