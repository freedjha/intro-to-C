/* Q: If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program to 
determine the youngest of the three.*/

#include<stdio.h>

int main() {
    int Ram, shyam, ajay;

    printf("Ram's age: ");
    scanf("%d", &Ram);

    printf("\nShyam's age: ");
    scanf("%d", &shyam);

    printf("\nAjay's age: ");
    scanf("%d", &ajay);

    if (Ram < shyam && Ram < ajay) {
        printf("\nRam is the youngest of them");
    }
    else if (Ram > shyam && shyam < ajay) {
        printf("\nShyam is the youngest of them.");
    }
    else if (Ram > ajay && shyam > ajay) {
        printf("\nAjay is the youngest of them");
    }
    else if (Ram == shyam && shyam == ajay) {
        printf("\nAll 3 are of the same age.\n");
    }
    else {
        printf("Entered age is not valid.");
    }

    return 0;
}