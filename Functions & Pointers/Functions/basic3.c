/*
#include<stdio.h>

int add(int x, int y) {
    return x + y;
}

int main() {
    int a, b;
    printf("1st num: "); scanf("%d", &a);
    printf("2nd num: "); scanf("%d", &b);
    
    printf("sum = %d", add(a, b));
    return 0;
}
*/



#include <stdio.h>

int add (int x, int y) // add is a function.
{
  return x + y;
}

int main ()
{
  int a;
  printf ("1st num: ");
  scanf ("%d", &a);

  int b;
  printf ("2nd num: ");
  scanf ("%d", &b);

  int sum = add (a, b);
  printf ("the sum of 2 nums is %d", sum);

  return 0;
}
