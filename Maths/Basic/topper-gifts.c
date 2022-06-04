#include <stdio.h>
int main(int argc, char const *argv[])
{
    int result;
    printf("If you pass Maths & science exam (Type 1)\n");
    printf("If pass any single subject between science and maths pass (Type 2)\n");
    printf("If you not pass anything (Type 3): ");
    scanf("%d", &result);

    if (result == 1)
    {
        printf("Hurrah! I have gift for you worth 45 bucks :)");
    }
    else if (result == 2)
    {
        printf("Well done! I have gift for you worth 15 bucks :)");
    }
    else if (result == 3)
    {
        printf(":( I Don't have gift for you sorry!");
    }
    else if (result >=4)
    {
        printf("Invalid Input Read Code!  :|");
    }
    return 0;
}
