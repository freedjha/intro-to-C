/*Ques: Take 3 numbers input and tell if they 
can be the sides of a triangle.*/

// condition: so to form sides of a triangle its necessary that the sum of any two sides is greater than its 3rd side.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int side1, side2, side3;
    printf("Length of 1st side: ");
    scanf("%d", &side1);
    printf("Length of 2nd side: ");
    scanf("%d", &side2);
    printf("Length of 3rd side: ");
    scanf("%d", &side3);

    if ((side1 + side2) > side3 && (side2 + side3) > side1 && (side3 + side1) > side2) {
        printf("This is a valid triangle.\n");
    } else {
        printf("Not a valid triangle.\n");
    }

    return 0;
}
