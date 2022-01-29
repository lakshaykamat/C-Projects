#include <stdio.h>
int function(int num1){
    int fact = 1;
    for (int i=1;i<=num1;i++) {
        fact = fact * i;
        /*
        fact = 1 * 1 = 1 
        fact = 1 * 2 = 2
        fact = 2 * 3 = 6
        fact = 6 * 4 = 24
        fact = 24 * 5 = 120
        */
    }
    printf("%d",fact);
    return fact;
}
int main(){
    function(5);

}