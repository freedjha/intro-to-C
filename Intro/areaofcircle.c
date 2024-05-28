/*#include <stdio.h>

int main()
{
    float radius = 5;
    float pi = 3.14;

    
    float area = pi*radius*radius;

    printf("area of circle is %f",area);

    return 0;
} */

#include <stdio.h>
int main()
{
    float radius; 
    float pi = 3.14;

    printf("Radius of circle: ");
    scanf("%f",&radius);
    
    float area = pi*radius*radius; // area of circle A = πr2
 
    printf("Area of circle: %f",area);

    return 0;
}