#include <stdio.h>
int main(int argc, char const *argv[])
{

    int sci, maths, eng, eco, music;
    double result;
    printf("Enter your Marks in Maths = ");
    scanf("%d", &maths);

    printf("Enter your Marks in Science = ");
    scanf("%d", &sci);
    printf("Enter your Marks in English = ");
    scanf("%d", &eng);

    printf("Enter your Marks in Economics = ");
    scanf("%d", &eco);

    printf("Enter your Marks in Music = ");
    scanf("%d", &music);

    result = (((sci + maths + eng + eco + music) / 500.0) * 100);

    printf("Total Marks out of 500 is = %d\n\n", sci + maths + eng + eco + music);
    printf("Your marks = %.1lf%%\n\n", result);

    if (result >= 80.0)
    {
        printf("You are a Great Student. I hope you achieve you dreams in life 😉");
    }
    else if ( (result<80.0) && (result >= 60.0))
    {
        printf("You are Average Student in School. But NOT in Life Marks doesn't matter in life 😊");
    }
    else if (result<60.0)
    {
        printf("Don't Be Sad Eminem also failed at School But Won In Life you are the Next One.🤑");
    }
    
    
    
    return 0;
}
