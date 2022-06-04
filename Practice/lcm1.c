 #include <stdio.h>
 
 int main(){
    int num = 12 , num2 = 15 ,lcm;
    lcm = (num > num2) ? num : num2;

    while (1){ 
    if (lcm%num==0 && lcm%num2==0)
    {
        printf("%d",lcm);
        break;
    }
        lcm++;
    }
    
    
     return 0;
 }