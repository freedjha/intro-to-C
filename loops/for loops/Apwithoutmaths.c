#include<stdio.h>
int main()
{
int n; // this varibales that defines number of times a loop will run.

printf("Number: ");
scanf("%d",&n);

// 4 7 10 13 16 upto n number of times

int a; // we are going to use extra variable.
for(int i=1;i<=n;i++){

   printf("%d ",a);
   a=a+3; 
}

    return 0;
}