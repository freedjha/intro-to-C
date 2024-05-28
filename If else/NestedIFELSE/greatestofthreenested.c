// Ques: Take 3 positive integers input and print the greatest of them.

#include<stdio.h>
int main()
{
    
int a, b, c;

printf("Number 1: ");
scanf("%d",&a);

printf("Number 2: ");
scanf("%d",&b);

printf("Number 3: ");
scanf("%d",&c);


if(a>b){
    if(a>c){
        printf("%d is greatest",a);
    }
    else{
        printf("%d is gratest",c);
    }
}
else{
    printf("%d is greatest",b);
}

    return 0;
}