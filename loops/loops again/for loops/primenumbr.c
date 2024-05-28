#include <stdio.h>

int main() {
    int n;
    printf("num: ");
    scanf("%d", &n);

    int a = 0; // Initialize 'a' to 0

    for (int i = 2; i <= n - 1; i++) {
        if (n % i == 0) {
            a = 1;
            break;
        }
    }

    if (a == 0) {
        printf("prime number\n");
    } else {
        printf("composite number\n");
    }

    return 0;
}