#include <stdio.h>
int main(int argc, char const *argv[])
{
    int c;
    printf("Enter Number = ");
    scanf("%d",&c);

    // For Loop
    for (int i = c; i >= 0; i--)
    {
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
