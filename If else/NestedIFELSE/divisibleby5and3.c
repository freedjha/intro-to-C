//Ques: Take positive integer input and tell if it is divisible by both 5 and 3.

#include<stdio.h>
int main()
{
    int n;

    printf("Number: ");
    scanf("%d",&n);

    if(n%5==0){

        if(n%3==0){
            printf("Number is divisible by both 5 and 3");
        }
        
    }
else{
    printf("Number is not valid\n");
}
    return 0;
}
