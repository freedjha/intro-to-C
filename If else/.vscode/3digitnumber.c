/*Ques: Take positive integer input and tell if it 
is a three digit number or not.*/

#include<stdio.h> 
int main() {
int n;
printf("enter a number : ");
scanf("%d",&n);
if(n>99 && n<1000)      // here && means and
{
printf("\nit is a three digit number\n");
}
 else{
printf("\nIt is not a three digit number\n");
 }
                      
    return 0;
}