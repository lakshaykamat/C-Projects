#include <stdio.h>
int main(int argc, char const *argv[])
{
    int c;
    printf("Enter Number = ");
    scanf("%d", &c);

    // For Loop
    for (int i = c; i >= 0; i--)
    {
        /*
        c = 5
        i = 5 (i >= 0)
        i = i - 1
        4 = 5 - 1

        Now,i = 4
        i = 4 (i >= 0)
        i = i - 1
        3 = 4 - 1

        Now,i = 3
        i = 3 (i >= 0)
        i = i - 1
        2 = 3 - 1
        */
        printf("%d\n", i);
    }

    // While Loop
    // int i = c;
    // while (i>=0)
    // {
    //     printf("%d\n",i);
    //     i--;
    // }
    
    // do While Loop
   //     int i=c;
   //     do
   //     {
   //         printf("%d",i);
   //         i--;
   //     } while (i>=0);
    return 0;
}
