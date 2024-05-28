#include<stdio.h>
int main()
{
   int n;
   
   printf("NUMBER: ");
   scanf("%d",&n);

    if((n%3==0 || n%5==0) && n%15!=0)  // || stands for or
    {
    printf("Number is divisible by 3 or  5 but not by 15");
    }
    else{
        printf("Entered number is not valid");
    }

    return 0;
}

