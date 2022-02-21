#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int you, computer;

    srand(time(NULL));
    computer = rand() % 10;
    // printf("Random Num  = %d\n\n",computer);
    if (computer < 3.3)
    {
        computer = 'r';
    }
    else if (computer > 3.3 && computer < 6.6)
    {
        computer = 'p';
    }
    else if (computer > 6.6 && computer < 10)
    {
        computer = 's';
    }

    printf("Press 1 for Rock\n");
    printf("Press 2 for Paper\n");
    printf("Press 3 for Scissor\n\n");
    printf("Enter a Number = ");
    scanf("%d", &you);
    if (you == 1)
    {
        you = 'r';
    }
    else if (you == 2)
    {
        you = 'p';
    }
    else if (you == 3)
    {
        you = 's';
    }

    if (you == 'r' && computer == 'r')
    {
        printf("Computer choose Rock\n");
        printf("You choose Rock\n\n");
        printf("Draw");
    }
    else if (you == 'p' && computer == 'p')
    {
        printf("Computer choose Paper\n");
        printf("You choose Paper\n\n");
        printf("Draw");
    }
    else if (you == 's' && computer == 's')
    {
        printf("Computer choose Scissor\n");
        printf("You choose Scissor\n\n");
        printf("Draw");
    }
    else if (you == 'r' && computer == 'p')
    {
        printf("Computer choose Paper\n");
        printf("You choose Rock\n\n");
        printf("Computer wins");
    }
    else if (you == 'p' && computer == 'r')
    {
        printf("Computer choose Rock\n");
        printf("You choose Paper\n\n");
        printf("You wins");
    }
    else if (you == 'r' && computer == 's')
    {
        printf("Computer choose Scissor\n");
        printf("You choose Rock\n\n");
        printf("You wins");
    }
    else if (you == 's' && computer == 'r')
    {
        printf("Computer choose Rock\n");
        printf("You choose Scissor\n\n");
        printf("Computer wins");
    }

    return 0;
}