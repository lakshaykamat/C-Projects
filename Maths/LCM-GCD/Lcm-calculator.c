#include <stdio.h>
int main()
{
    int input0 = 12, input1 = 15, lcm;

    lcm = (input0 > input1) ? input0 : input1;
    // 12 > 15 False so, lcm = 15

    while (1) // 1 Means always true and 0 means false
    {
        if ((lcm % input0 == 0) && (lcm % input1 == 0))
        {
            // 15 % 12 == 0  &&  15 % 15 == 0 (False)
            printf("%d", lcm);
            break;//Doesn't break
        }
        lcm++;  //lcm = 16  Now,again loop runs
    }
    return 0;
}