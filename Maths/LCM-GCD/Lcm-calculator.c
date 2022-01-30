#include <stdio.h>
int main() {
    int input0=12,input1=15,lcm;
    lcm = (input0>input1) ? input0 : input1;
while(1){    
    if( (lcm % input0==0) && (lcm % input1==0)){
        printf("%d",lcm);
        break;
    }
    lcm++;
}
    return 0;
}