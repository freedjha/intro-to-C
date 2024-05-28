//print multiplication table of a given input number.


#include<stdio.h>
int main()
{

int n;
printf("Enter a number: ");
scanf("%d",&n);

printf("Multiplication table of %d:\n ",n);

for(int i=1;i<=10;i=i+1){

    printf("%d*%d = %d\n",n,i,n*i);
}
    return 0;
}
