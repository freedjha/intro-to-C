/*Create one Function with Parameters and with Return value. Function name will be add() for adding
two integer and call them in main function*/

#include <stdio.h>

int add(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int a, b, result;

    // Get input from the user
    printf("Enter the first integer: ");
    scanf("%d", &a);

    printf("Enter the second integer: ");
    scanf("%d", &b);

    // Call the add function
    result = add(a, b);

    // Display the result
    printf("The sum of %d and %d is: %d\n", a, b, result);

    return 0;
}

