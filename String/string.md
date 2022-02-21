# String in C Language

A string in C (also known as C string) is an array of characters, followed by a NULL character. To represent a string, a set of characters are enclosed within double quotes (").

### Types Declaring String

1. `char str[8] = {'L','A','K','S','H','A','Y','\0'};`_"\0"_ is Compulsary because without this complier don't identifies the string ends and, gives an garbabe value Here 8 means 7 character and 1 "\0" so **DON'T FORGET TO ADD THIS**

2. `char str[] = {"LAKSHAY"};`This is also a String in this complier automatically adds "\0" this means strings end.

### Getting Input

`gets(str);`Taking Input of Sring

`scanf("%c",&str);`_DON'T DO THIS YOU CAN'T TAKE WHITESPACES AS INPUT_

### Printing String
Two Method of printing string

- Using Printf
 ```C
    printf("Usinf printf %s\n",str);
  ```
- Using Puts
 ```C
    puts(str);
  ```
Both will give same output
