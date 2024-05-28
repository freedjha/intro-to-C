// HW: If the ages of Ram, Shyam and Ajay are input 
// through the keyboard, write a program to 
// determine the youngest of the three.

#include<stdio.h>
int main(int argc, char const *argv[])
{
int ram,shyam,ajay;

printf("Enter Ram's age:");
scanf("%d",&ram);

printf("\nEnter shyam's age:");
scanf("%d",&shyam);

printf("\nEnter Ajay's age:");
scanf("%d",&ajay);

if(ram<shyam){
    if(ram<ajay)
    printf("\nRam is youngest.");
    else printf("\nAjay is youngest.");
}
else{
    if(shyam<ajay)
    printf("shyam is youngest.");

    else printf("Ajay is youngest.");
}


    return 0;
}
