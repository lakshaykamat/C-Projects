#include <stdio.h>
int main(int argc, char const *argv[])
{
    double kg, cm, bmi, m;
    printf("If you don't Know in kg then 1lbs = 0.45kg: \n");
    printf("If you don't Know in cm then 1cm = 0.01m: \n");

    printf("Enter you kg in Kilogram(kg): ");
    scanf("%lf", &kg);

    printf("Enter you Height in Centimetere: ");
    scanf("%lf", &cm);
    printf("\n\n");

    m = cm / 100;
    bmi = (kg / (m * m));
    printf("Your Body Mass Index (BMI) is %.1lf\n", bmi);

    if (bmi <= 18.5)
    {
        printf("Hey! You are Underweight\n");
        printf("Eat more and Don't Masterbate 😋\n");

        double needweight = 18.5 * (m * m);
        printf("You Need Minimum %.2lf kg weight ", needweight);
    }
    else if ((bmi >= 18.5) && (bmi <= 24.9))
    {
        printf("All Good! You are Normal You can do whatever you want 😎\n");
    }
    else if ((bmi >= 25.0) && (bmi <= 29.9))
    {
        printf("Hey! Look at you you are overweight nigga\n");
        printf("Join a Gym now if not no one will marry you 🤨\n");
        double needweight = 24  * (m * m);
        double lose = kg - needweight;
        printf("You Need lose %.2lfkg weight\n", lose);
        printf("Your body weight requriement %.2lfkg weight\n", needweight);
    }
    else if ((bmi >= 30.0))
    {
        printf("Hey! Why you are here... Look yourself\n");
        printf("Do Some Hardwork in Life purse a gym 😟	 \n\n");
        double needweight = 24  * (m * m);
        double lose = kg - needweight;
        printf("You Need lose %.2lfkg weight ", lose);
        printf("Your body weight requriement %.2lfkg weight ", needweight);
    }
    return 0;
}
