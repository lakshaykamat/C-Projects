#include <stdio.h>
#include <string.h>

int main(){
    // strcat() --> Adds Two or more String
    // strlen() --> Shows Length of String
    // strrev() --> Reverse the string
    // strcpy() --> Copy one string to another string
    // strcmp() --> Compare the String
    // Or many more...
    char string1[] = "Lakshay"; 
    char string2[] = "Kamat"; 
    printf("The Length of Stirng String1 is %d\n",strlen(string1));
    printf("The Length of Stirng String2 is %d\n\n",strlen(string2));

    // printf("Reverse of String1 is %s\n",strrev(string1));
    // printf("Reverse of String2 is %s\n\n",strrev(string2));
    printf("Adds String 1 & String2 is %s\n",strcat(string1 ,string2));
    printf("Adds String 1 & String2 is %d\n",strcmp(string1 ,string2));

    return 0;
}
