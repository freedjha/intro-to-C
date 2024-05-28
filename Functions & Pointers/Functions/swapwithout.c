// swap two numbers between each other without the help of third variable

#include <stdio.h>
#include <math.h>

int main() {
    float a, b;
    
    printf(" A: ");
    scanf("%f", &a);

    printf("B: ");
    scanf("%f", &b);

   a = a+b;
   b = a-b;
   a = a-b;

    printf("%f is A and %f is B",a,b);

    return 0;
}
