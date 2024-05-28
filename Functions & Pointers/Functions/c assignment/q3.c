/*
Create three Functions with Parameters and without Return value and call them in main function.

a. add() for adding two integer.
b. mult() for adding two integer.
*/

#include <stdio.h>

void add(int n1, int n2){
    int sum = n1+n2;
    printf("sum: %d",sum);
}
void mult(int n1,int n2){
    int multiplication = n1*n2;
    printf("\nmult: %d",multiplication);
}

int main()
{
    int a, b;
    
    printf("1st num: ");
    scanf("%d",&a);
    
    
    printf("2nd num: ");
    scanf("%d",&b);
    
    add(a, b);
    mult(a, b);
    
   

    return 0;
}

