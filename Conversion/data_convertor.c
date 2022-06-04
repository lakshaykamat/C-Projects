#include <stdio.h>
int main(int argc, char const *argv[])
{
    int mb;
    long long int bit;
    int kb;
    double gb;
    long double tb;

    printf("Enter data in (mb):\n");
    scanf("%d", &mb);

    bit = (long long int)mb * 1048576;
    kb = mb * 1024;
    gb = mb * 0.0009765625;

    printf("In %d ", mb);
    printf("mb ");
    printf("Total bit is: %lld\n",bit);

    printf("In %d ", mb);
    printf("mb ");
    printf("Total Kilobytes is: %d\n",kb);

    printf("In %d ", mb);
    printf("mb ");
    printf("Total Gigabytes is: %.2lf\n",gb);

    return 0;
}
