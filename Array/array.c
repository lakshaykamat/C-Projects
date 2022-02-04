#include <stdio.h>

int main()
{
    int marks[4];//array starts from 0 ex-[0,1,2,3,4]
    printf("Enter your Marks in Sub 1 = ");
    scanf("%d",&marks[0]);//Store value of array at 0
    printf("Enter your Marks in Sub 2 = ");
    scanf("%d",&marks[1]);
    printf("Enter your Marks in Sub 3 = ");
    scanf("%d",&marks[2]);
    printf("Enter your Marks in sub 4 = ");
    scanf("%d",&marks[3]);
    printf("Enter your Marks in Sub 5 = ");
    scanf("%d",&marks[4]);

    printf("Your marks in Sub 1 = %d\n",marks[0]);//Printing value of array of 0
    printf("Your marks Sub 2 = %d\n",marks[1]);
    printf("Your marks Sub 3 = %d\n",marks[2]);
    printf("Your marks Sub 4= %d\n",marks[3]);
    printf("Your marks Sub 5 = %d\n",marks[4]);

    printf("Your Total marks is = %d\n",marks[0]+marks[1]+marks[2]+marks[3]+marks[4]);//Sum of array
    printf("Percentage is %d\n",((marks[0]+marks[1]+marks[2]+marks[3]+marks[4])*100)/500);//percentage in array
    return 0;
}