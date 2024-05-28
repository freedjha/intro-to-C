#include <stdio.h>
int main(int argc, char const *argv[])
{
int n;
printf("Enter a number:");
scanf("%d",&n);

if(n%2==0) // % is modulus
{
printf("\nIt's a even number.\n");
}
else
{
printf("\nThis is odd number.\n");
}


    return 0;
}