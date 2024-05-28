#include <stdio.h>
int main ()
{

float x;
printf("Enter a decimal number:");
scanf("%f",&x);
int y = x;
float z = x - y; // float number - integer number 5.02-5 =.02 
printf("\nThe fractional part of decimal number is:  %f",z);
    return 0;
}