#include <stdio.h>

int main()
{
    int marks[4];//array starts from 0 ex-[0,1,2,3,4]

    printf("Enter Your Marks (Out of 100)\n\n");

    //subject 1 starts from here
    sub1:
    printf("Subject1 = ");
    scanf("%d",&marks[0]);//Store value of array at 0
    while (1){
    if (marks[0] <= 100 && marks[0] >= 0 ){
        break;
    }
        else{
            printf("Marks  in greater than 100! Or Marks is less than 0\n");
        }
        goto sub1;
        break;
    }


    //Subject 2 Starts from here
    sub2:
    printf("Subject 2= ");
    scanf("%d",&marks[1]);
    while (1){
    if (marks[1] <= 100){
        break;
    }
        else{
            printf("Your marks in Greater than 100!\n");
        }
        goto sub2;
        break;
    }


    //Subject 3 starts from here
    sub3:
    printf("Subject 3= ");
    scanf("%d",&marks[2]);
    while (1){
    if (marks[2] <= 100){
        break;
    }
        else{
            printf("Your marks in Greater than 100!\n");
        }
        goto sub3;
        break;
    }

    //Subject 4 starts form here
    sub4:
    printf("Subject 4= ");
    scanf("%d",&marks[3]);
    while (1){
    if (marks[3] <= 100){
        break;
    }
        else{
            printf("Your marks in Greater than 100!\n");
        }
        goto sub4;
        break;
    }


    //Subject 5 starts from here
    sub5:
    printf("Subject 5= ");
    scanf("%d",&marks[4]);
    printf("\n\n");
    while (1){
    if (marks[4] <= 100){
        break;
    }
        else{
            printf("Your marks in Greater than 100!\n\n");
        }
        goto sub5;
        break;
    }
printf("**************Results***************\n\n");
    printf("Subject 1 = %d\n",marks[0]);//Printing value of array of 0
    printf("Subject 2 = %d\n",marks[1]);
    printf("Subject 3 = %d\n",marks[2]);
    printf("Subject 4= %d\n",marks[3]);
    printf("Subject 5 = %d\n",marks[4]);

    printf("Your Total marks is = %d\n",marks[0]+marks[1]+marks[2]+marks[3]+marks[4]);//Sum of array
    printf("Percentage is %d\n",((marks[0]+marks[1]+marks[2]+marks[3]+marks[4])*100)/500);//percentage in array
    return 0;
}