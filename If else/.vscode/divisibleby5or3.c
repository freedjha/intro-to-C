/* Ques : Take positive integer input and tell if it 
is divisible by 5 or 3.*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int number;
    printf("Enter a number:");
    scanf("%d",&number);

    if(number%3==0 || number%5==0) // Here || is a operator stands for or.
    {
        printf("\nThis number is divisible by either 3 0r 5.\n\n");
    }
    else{
        printf("\nThis number is not divisible by by 3 and 5.\n\n");
    }


    return 0;
}
