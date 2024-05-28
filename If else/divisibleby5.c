#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    printf("Enter a number to check its divisibility by 5:");
    scanf("%d",&x);

    if(x%5==0) // == means =
    {
        printf("\nThis number is divisible by5.\n");
    }
    else
    {
        printf("\nThis number is not divisible by 5.\n");
      printf("\n");
    }

    return 0;
}