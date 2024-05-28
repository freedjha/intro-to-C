/* Q: Any year is input through the keyboard. Write program to determine whether the year is a leap
year or not. (Considering leap year occurs after every 4 years). */

#include<stdio.h>
int main()
{
   int year;

printf("\nYEAR: ");
scanf("%d",&year);

if(year % 4 ==0)
{
    printf("Leap year");  
}
else{
    printf("Not a leap year");
}


    return 0;
}
