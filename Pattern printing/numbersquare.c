#include <stdio.h>

int main() {
    int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);  // Corrected line

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%d", j);
        }
        printf("\n");  // Add a new line after each row
    }

    return 0;
}

