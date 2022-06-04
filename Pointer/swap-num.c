#include <stdio.h>
void swap(int *ptr1, int *ptr2)
{
    int temp;
    temp = *ptr1; //let ptr1 = 11 ,So temp = 11
    *ptr1 = *ptr2; //let ptr2 = 22 ,So *ptr1 = 22 
    *ptr2 = temp; // temp = 11 So , *ptr2 = 11
}
int main()
{
    int num1, num2;
    printf("Enter Num1 = ");
    scanf("%d", &num1);
    printf("Enter Num2 = ");
    scanf("%d", &num2);
    printf("Before Swaping\n");
    printf("Num1 = %d Num2 = %d\n\n",num1,num2);
    swap(&num1, &num2);
    printf("After Swaping\n");
    printf("Num1 = %d Num2 = %d\n\n",num1,num2);
    return 0;
}