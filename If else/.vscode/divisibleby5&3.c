/*Ques: Take positive integer input and tell if it 
is divisible by 5 and 3.*/

#include<stdio.h> 
int main() 
{
int n;
printf("enter a number : ");
scanf("%d",&n);

if(n%5==0 && n%3==0)      // here (&&) is a operatot means and. (==) is also a operator means =.
{
printf("\n This number is divisible by both 5 and 3 at the same time\n\n");
}
 else{
printf("\nThis number is not divisible by both 5 and 3 at the same time\n\n");
 }
                      
    return 0;
}
