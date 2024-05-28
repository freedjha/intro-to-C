#include <stdio.h>
#include <math.h>

int
main ()
{
  float a;
  printf ("num: ");
  scanf ("%f", &a);

float root = sqrt(a); // sqrt means sqareroot is an inbulit library function

  printf ("square root = %f", root);

  return 0;
}
