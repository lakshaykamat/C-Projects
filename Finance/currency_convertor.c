#include <stdio.h>
int main(int argc, char const *argv[])
{
    double rupees;
    printf("Enter Rupees:\n");
    scanf("%lf", &rupees);

    printf("Indian Currency in other states\n");
    printf("USD:%.lf\n", rupees*0.013);
    printf("Pakistan:%.lf\n", rupees*2.37);
    printf("United Arab Emirates Dirham:%.lf\n", rupees*0.049);
    printf("Euro:%.lf\n", rupees*0.012);
    return 0;
}