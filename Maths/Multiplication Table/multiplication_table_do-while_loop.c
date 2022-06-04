#include <stdio.h>
int main(int argc, char const *argv[])
{
    int table,num = 1, multiplication;
    printf("Enter multiplcation Table you want = ");
    scanf("%d", &table);

    do
    {
        multiplication = table * num;
        printf("%d * %d = %d\n", table, num, multiplication);
        num += 1;
    } while (10 >= num);

    return 0;
}
