// swap two numbers between each other with the help of third variable

#include <stdio.h>
#include <math.h>

int main() {
    float a, b;
    
    printf(" A: ");
    scanf("%f", &a);

    printf("B: ");
    scanf("%f", &b);

   int swap; // swap is third variable
   swap = a;
   a = b;
   b= swap;

    printf("%f is A and %f is B",a,b);

    return 0;
}
