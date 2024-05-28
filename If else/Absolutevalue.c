/*The absolute value (or modulus) | x | of a real number x 
is the non-negative value of x without regard to its sign.*/

#include<stdio.h>
int main()
{

float n;

printf("Number: ");
scanf("%f",&n);

if(n<0){
    n = n*(-1);
}
printf("Absolute value: %f",n);

    return 0;
}
