/*Function with Return Value:

Question:
Write a C program that defines a function cube to calculate the cube of a given number. Call this function from the main function and print the result.

Code:*/

    #include <stdio.h>

// Function declaration

#include <stdio.h>

int cube (int num){
    return num * num * num;
}
int main()
{
    int a;
printf("Number: ");
scanf("%d",&a);

int result = cube(a);
printf("cube = %d", result);

    return 0;
}