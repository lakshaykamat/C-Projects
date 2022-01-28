#include <stdio.h>
int main(int argc, char const *argv[])
{
    int table, num = 1;
    printf("Enter a Number = ");
    scanf("%d", &table);

    while (num <= 10)
    {
        printf("%d * %d = %d\n", table, num, table * num);
        num++;
    }
    return 0;
}
