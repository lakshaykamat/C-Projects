#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguess = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    // printf("The number is = %d", number);

    do
    {
        printf("Guess the numb er between 1 to 100 = ");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower number please!\n");
        }
        else if (guess < number)
        {
            printf("Higher number please\n");
        }
        else
        {
            printf("You wins in %d attempts.\n",nguess);
        }
        nguess++;
    } while (guess != number);

    return 0;
}