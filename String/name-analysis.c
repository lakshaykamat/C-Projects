#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char string1[50];
    int i = 0;
    printf("Enter your Name = ");
    gets(string1);
   
    printf("Length of %s is %d\n\n",string1,strlen(string1));
     printf("ASCII Value of  %s \n",string1);
    while (string1[i]!='\0')
    {
        printf("%d ",string1[i]);
        i++;
    }
    printf("\n\n");
    printf("Reverse of Your Name is %s\n",strrev(string1));
    
    
    return 0;
}