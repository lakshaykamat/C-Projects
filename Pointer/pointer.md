# Pointer in C
---
Pointer Stores Address of another variable.Unlike other variables that hold values of a certain type, pointer holds the address of a variable.
**Syntax**
```C
int a = 6;
int *ptra = &a;//Stores Address of A
```
![Image](https://beginnersbook.com/wp-content/uploads/2014/01/C_Pointers.jpg)
---
#### Printing Value of Pointer to another variable
```C
printf("%d\n",*ptra);//Gives 6
```
**Output**
```C
6
```
---
#### Printing Address of A
```C
printf("%d",ptra);//Gives address in Numbers
printf("%d",&a);//Gives address in Numbers
printf("%p",&a);//Gives address in Hexadecimal
printf("%x",&a);//Gives address in Hexadecimal short lowercase charcaters
```
**Output**
```C
247815468
247815468
0x7ffe0ec55d2c
ec55d2c
```
> **Note** You will probably get a different address when you run the above code.
---
#### Decrementing & Incrementing Address

`int` stores 4 byte So, if we do `ptra--;` this do's `(247815468-4) = 247815464`

Same as, `char` data type stores 1 byte and we `ptra++;` The address will increment by 1(adds 1)

---
### Pointer Array
Let's Create Pointer to array
```C
int arr[] = {4,2,3,1,9,6,5};
int *arrayptr = &arr;
```
![Array Pointer](https://cdn.programiz.com/sites/tutorial2program/files/array-pointers.jpg)
Printing Values
```C
printf("The Value of arr[2] = %d\n", &arr[2]);//prints 3
printf("The Value of arr[0] = %d\n", &arr);//prints 4
printf("The Value of arr[1] = %d\n\n", arr + 1);//arr[0] increment to arr[1] 

printf("The Value of arr[0] = %d\n", *arr);//Prints 4
printf("The Value of arr[0] = %d\n\n", *&arr[0]); //Prints 4

printf("The Value of arr[1] = %d\n", *&arr[1]);//Prints 2
printf("The Value of arr[1] = %d\n", *(arr + 1));//Prints 2
```
**Output**
```C
The Value of arr[2] = 1
The Value of arr[0] = 2
The Value of arr[1] = 3

The Value of arr[0] = 4
The Value of arr[0] = 4

The Value of arr[1] = 2
The Value of arr[1] = 2
```
If we decrement array `arr--;` This will Through error because array is constant value we can't change directly

So, We do `arrayptr--;` This is accpetable by complier