#include <stdio.h>
int main(int argc, char const *argv[])
{
    //Enter a Number and see patterns

    //Recommended: input less than 10 beacuse some pattern has limitations


    int input, row, col,ch = 64;
    scanf("%d", &input);

    for (int row = 0 ; row < input;row++)
    {
        for (int col = 0 ; col < input;col++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    printf("\n\n");

    //Pattern 215
    for (int row = 1; row <= input; row++)
    {
        for (int col = 1; col <= input; col++)
        {
            // printf("* ");
            if (col > row)
            {
                printf("* ");
            }
            else
            {
                printf("%d ",row);
            }
        }
        printf("\n");
    }
    printf("\n\n");

    //Pattern 216
    for (int row = 1; row <= input; row++)
    {
        for (int col = 1; col <= input; col++)
        {
            // printf("* ");
            if (row < col)
            {
                printf(" * ");
            }
            else
            {
                printf(" %d ",col);
            }
        }
        printf("\n");
    }
    printf("\n\n");

    for (int row = input; row >= 1; row--)
    {
        for (int col = 1; col <= input; col++)
        {
            if ((row < col))
            {
                printf(" * ");
            }
            else
            {
                printf(" %d ",row);
            }
        }
        printf("\n");
    }
    printf("\n\n");

    for (int row = input; row >= 1; row--)
    {
        for (int col = 1; col <= input; col++)
        {
            if ((row < col))
            {
                printf(" * ");
            }
            else
            {
                printf(" %d ",col);
            }
        }
        printf("\n");
    }
    printf("\n\n");

    //Pattern 34
    for (row = 1; row <= input; row++)
    {
        for (col = 1; col <= row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n\n");

    //Pattern 70
    for (int row = 1; row <= input; row++)
    {
        for (int col = input; col >= row; col--)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n\n");

    //Pattern 170
    for (row = 1; row <= input; row++)
    {
        for (col = 1; col <= row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int row = 1; row <= input; row++)
    {
        for (int col = input - 1; col >= row; col--)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n\n");


    //Pattern 95
    for (int row = 0; row < input; row++)
    {
        for (int col = 0; col < input; col++)
        {
            if ((col + row) < (input - 1))
            {
                printf("  ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    printf("\n\n");

    //Pattern 117
    for (int row = 0; row < input; row++)
    {
        for (int col = 0; col < input; col++)
        {
            if (col >= row)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n\n");


    //Pattern 180
    for (int row = 0; row < input; row++)
    {
        for (int col = 0; col < input; col++)
        {
            if ((col + row) < (input - 1))
            {
                printf("  ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    for (int row = 0; row < input; row++)
    {
        for (int col = 0; col < input; col++)
        {
            if (col >= row)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n\n");


    for (int row = 1; row <= input; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%d ", col);
        }
        printf("\n");
    }
    printf("\n\n");


    for (int row = 1; row <= input; row++)
    {
        for (int col = input; col >= row; col--)
        {
            printf("%d ", col);
        }
        printf("\n");
    }

    printf("\n\n");

    //Pattern 128
    for (int row = 0; row < input; row++)
    {
        for (int col = 0; col < input; col++)
        {
            if ((col + row) < (input - 1))
            {
                printf(" ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    printf("\n\n");

    //Pattern 133
    for (int row = 0; row < input; row++)
    {
        for (int col = 0; col < input; col++)
        {
            if (col >= row)
            {
                printf("* ");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n\n");


    for (int row = 0; row < input; row++)
    {
        for (int col = 0; col < input; col++)
        {
            if ((col + row) < (input - 1))
            {
                printf(" ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    for (int row = 0; row < input; row++)
    {
        for (int col = 0; col < input; col++)
        {
            if (col >= row)
            {
                printf("* ");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n\n");

    for (int row = 1; row <= input; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%c ", (ch + col));
        }
        printf("\n");
    }
    for (int row = input - 1; row >= 1; row--)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%c ", (ch + col));
        }
        printf("\n");
    }
    printf("\n\n");


    for (int row = 1; row <= input; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%c ", (ch + row));
        }
        printf("\n");
    }
    for (int row = input - 1; row >= 1; row--)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%c ", (ch + row));
        }
        printf("\n");
    }
    printf("\n\n");

    ch = 65;
    for (int row = 1; row <= input; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%c ", ch++);
        }
        printf("\n");
    }
        for (int row = input - 1; row >=1; row--)
        {
            for (int col = 1; col <= row; col++)
            {
                printf("%c ", ch++);
            }
            printf("\n");
        }
    printf("\n\n");


        ch = 01;
        for (int row = 1; row <= input; row++)
        {
            for (int col = 1; col <= row; col++)
            {
                printf("%2d ", ch++);
            }
            printf("\n");
        }
        for (int row = input - 1; row >=1; row--)
        {
            for (int col = 1; col <= row; col++)
            {
                printf("%02d ", ch++);
            }
            printf("\n");
        }

    return 0;
}
