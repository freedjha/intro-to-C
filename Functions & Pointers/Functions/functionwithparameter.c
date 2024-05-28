// Function with Parameters:

/*Question:
Define a function sum that takes two integer parameters and returns their sum. Call this function from the main function with sample values.
Code:*/\

// Function declaration

#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main() {
    int result = sum(5, 3);
    printf("Sum: %d\n", result);
    return 0;
}
