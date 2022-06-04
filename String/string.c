#include <stdio.h>
#include <string.h>
void printStr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    // char str[] = {'L', 'A', 'K', 'S', 'H', 'A', 'Y', '\0'};
    char str[] = {"LAKSHAY"};
    printStr(str);

    char str[10];
    printf("Enter String = ");
    gets(str);

    //************Printing String********************
    printf("Using Custom Function");
    printStr(str);

    printf("Usinf printf %s\n", str);

    printf("Usinf puts ");
    puts(str);
    printf("\n");
    //************Printing String********************
    if(strcmp(str , "LAKSHAY") == 0){
        printf("Y");
    }
    else{
        printf("N");

    }
    return 0;
}