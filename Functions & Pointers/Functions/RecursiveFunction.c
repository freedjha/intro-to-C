/*Question:
Implement a recursive function factorial to calculate the factorial of a given positive integer. Call this function from the main function.

Code:*/

#include <stdio.h>

// Function declaration
int factorial(int n);

int main() {
    int number = 5;
    int result = factorial(number);
    printf("Factorial of %d: %d\n", number, result);
    return 0;
}

// Function definition
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
