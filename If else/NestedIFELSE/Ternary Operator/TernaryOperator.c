/*Ternary Operator can be used only in a type of code where there is 
only one if and only one else statement required to be written.*/

// for example: in a odd-even number type of question.

#include<stdio.h>
int main(int argc, char const *argv[])
{
int n;
printf("Enter a number: ");
scanf("%d",&n);

n%2==0 ? printf("Even number") : printf("odd number"); // learn this syntax for using ternary operator.



    return 0;
}
