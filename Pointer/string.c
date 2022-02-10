#include <stdio.h>
void printStr(char str[]){
    int i = 0;
    while (str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
        printf("\n");
    
}
int main(){
    // char str[]={'L','A','K','S','H','A','Y','\0'};//String \0 is compulsury because without this gives an garbabe value
    // char str[]={"LAKSHAY"}; //This is also a String in this complier automatically adds \0 this means strings end
    // printStr(str);


    char str[10];//Declarng String 10 means 9 character string 1 is \0
    printf("Enter String = ");
    gets(str);//Taking Input of Sring
    // scanf("%c",&str);//Don't Do this YOU CAN'T TAKE WHITESPACES AS INPUT

//************Printing String********************
    printf("Using Custom Function");
    printStr(str);

    printf("Usinf printf %s\n",str);

    printf("Usinf puts ");
    puts(str);
    printf("\n");
//************Printing String********************
    return 0;
}