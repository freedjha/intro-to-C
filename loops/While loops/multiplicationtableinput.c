// print multiplication table of the input number given

#include<stdio.h>
int main()
{
int n;

printf("Number: ");
scanf("%d",&n);

printf("multiplication table of the given number:\n");
 
int i=1;
while(i <= 10){
    printf("%d * %d = %d\n",n,i,i*n);
    i++;
}

    return 0;
}