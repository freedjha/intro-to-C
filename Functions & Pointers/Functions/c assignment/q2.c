
/*Create one Function with Parameters and without Return value. Function 
name will be add() for adding two integer
*/


#include <stdio.h>

void add(int num1, int num2){
    int sum = num1 + num2;
    printf("Sum: %d\n", sum);
}

int main() {
    int a = 5, b = 7;

    // Calling the add function
    add(a, b);

    return 0;
}


