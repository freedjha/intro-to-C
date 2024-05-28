#include <stdio.h>
#include <math.h>

int main ()
{
float a;
printf("\nnumber: ");
scanf("%f",&a);

float b;
printf("exponent: ");
scanf("%f",&b);

float power= pow(a,b); // pow is an inbulit library function in c

  printf ("%f to the power %f = %f\n", a,b,power);

  return 0;
}

