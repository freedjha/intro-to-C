#include <stdio.h>

int main()
{
    float r;  // Change r to float to match the %f format specifier
    printf("Radius of sphere: ");
    scanf("%f", &r);  // Use %f to read a float
    float vol = 4.0 / 3.0 * 3.14 * r * r * r;  // Use float arithmetic
    printf("Volume of sphere: %f\n", vol);  // Use %f to print a float
    
    return 0;
}
