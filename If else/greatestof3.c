#include <stdio.h>
int main()
{
    int x, y, z;

    printf("Enter 1st number:");
    scanf("%d", &x); // x used for 1st num.

    printf("\nEnter 2nd number:");
    scanf("%d", &y); // y used for 2nd num.

    printf("\nEnter 3rd number:");
    scanf("%d", &z); // z used for 3rd num.

    if (x > y && x > z) //
    {
        printf("\n%d is greatest\n\n", x);
    }
    else if (y > x && y > z)
    {
        printf("\n%d is greatest\n\n", y);
    }
    else if (z > x && z > y)
    {
        printf("\n%d is greatest\n\n", z);
    }
    else
    {
        printf("\nAll the three numbers have equal value.\n\n");
    }

    return 0;
}
