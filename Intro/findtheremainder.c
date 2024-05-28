#include <stdio.h>

int main() {
    int a, b;
    
    printf("Enter Dividend: ");
    scanf("%d", &a);
    
    printf("Enter Divisor: ");
    scanf("%d", &b);
    
    // int q = a / b;
    
    int r = a % b; // Calculate the remainder using the modulus operator %
    
    printf("The remainder when %d is divided by %d is %d\n", a, b, r);
    
    return 0;
}
