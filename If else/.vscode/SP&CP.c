/*Ques: If cost price and selling price of an item is 
input through the keyboard, write a program to 
determine whether the seller has made profit or 
incurred loss. Also determine how much profit he 
made or loss he incurred.*/

// chat gpt used in this question for better understanding.

#include<stdio.h>
int main(int argc, char const *argv[])
{
int sellingprice,costprice,profitorloss;

printf("Enter the selling price:");
scanf("%d",&sellingprice);

printf("\nEnter cost price:");
scanf("%d",&costprice);

profitorloss= sellingprice-costprice;

if (profitorloss>0)
{
    printf("\nseller has made a profit of %d:",profitorloss);
}
else if ( profitorloss<0)
{
    printf("\nseller has made a loss of %d:",-profitorloss); // - sign used for printing loss with + sign.
}
else
{
    printf("\nBreakeven %d:",profitorloss);
}

return 0;
}