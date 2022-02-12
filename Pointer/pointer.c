#include <stdio.h>

int main()
{
    int a = 76;
    int *ptra = &a;//Stores Address of a = 76
    int *ptr2 = NULL;
    printf("The address of pointer to a = %p\n", &ptra);//Gives Address of Pointer P (& means Address)

    printf("The address of a = %p\n", &a); //Gives Address of A (%p is for Pointer hexa decimal value,%x is also for hexa decimal but it allows to prints in lower case character, %d is prints in number)
    printf("The address of a = %p\n", ptra);//Gives Address of A

    printf("The address of some garbage = %p\n", ptr2);//No address

    printf("The value of a is %d\n", *ptra); //Gives value of a that is 76
    printf("The value of a is %d\n", a); //Gives value of a that is 76

//******************************************************Next*********************************************************
//     char a = '3'; //char stores 1 byte

//     char* ptra = &a; //stores address of a

//     printf("Prints Address of A %d\n\n", ptra); //prints address of a

//     ptra--; //Decrement of address of A ex- 45893 - 1 = 45892 (1 is size of char data types)

//     printf("Decrement address by 2 from A %d\n\n", ptra); //prints address after dcrementing
//     printf("Subtract 2 from address of A %d\n\n", ptra-2); //Decrementing 2 from address


//     int arr[] = {311,52,3,4,5,6,67};//integer Array of 6 (Starts from 0)
//     int* arrayptr = arr;//Pointer to above array

//     printf("Value of arr[3] = %d\n\n", arr[3]);//prints value at position 3 of array


//     printf("The address of arr[0] %d \n", &arr[0]); //Gives address of array[0](311)
//     printf("The address of arr[0] = %d\n\n", arr);//&arr[0]== arr;

//     printf("The address of arr[1] = %d\n", &arr[1]);//Prints address of Array 52
//     printf("The address of arr[0] + 1 (arr[1]) = %d \n\n", arr + 1);//Both are Same

//     printf("The address of arr[2] = %d\n", &arr[2]);//Prints address of array 3
//     printf("The address of arr[0] + 2 (arr[2]) = %d\n\n", arr + 2);//Both are Same

//     // arr--; // this line will throw an error because array is constant 
//    // arrayptr--; //This is acceptable

//     printf("The Value of arr[0] = %d \n", arr[0]);//Prints 311
//     printf("The Value of arr[0] = %d \n", *&arr[0]); //Prints 311
//     printf("The Value of arr[0] = %d \n\n", *arr);//Prints 311

//     printf("The Value of arr[1] = %d \n", arr[1]);//Prints 52
//     printf("The Value of arr[1] = %d \n", *&arr[1]);//Prints 52
//     printf("The Value of arr[1] = %d \n", *(arr + 1));//Prints 52
    return 0;
}