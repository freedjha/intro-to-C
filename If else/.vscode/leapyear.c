/* Q: Any year is input through the keyboard. Write 
a program to determine whether the year is a leap 
year or not. (Considering leap year occurs after 
every 4 years) */


#include<stdio.h>
int main()
{
    int x;
    printf("Enter a year to check if it's a leap year:");
    scanf("%d",&x);

    if (x%4==0)  // (==) here means =
    {
        printf("\nyes,its a leap year.");
    }
    else {
        printf("\nNo,it's not a leap year");
    }

    return 0;
}
