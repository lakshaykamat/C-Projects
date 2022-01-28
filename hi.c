#include <stdio.h>

int main(){
    int input=5;
    for (int row = 1; row<=input; row++){
        for (int col = 1; col <=input; col++){
            if ( (row > col))
            {
                printf("  ");
            }
            else{
                printf("* ");
            }
        }
        printf("\n");
    }
    
    return 0;
}