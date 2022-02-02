#include <stdio.h>

int main(){
    int num=12,num1=15,lcm;
    lcm = (num1> num) ? num1:num;

    while (1)
    {
        if (lcm%num==0 && lcm%num1==0)
        {
            printf("%d",lcm);
            break;
        }
        lcm++;        
    }
    
    
    return 0;
}