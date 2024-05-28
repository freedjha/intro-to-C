//Ques: Take positive integer input and tell if it is a
// is a three digit number or not.

// && is and




#include <stdio.h>
int main()
{
int x;

printf("NUMBER: ");
scanf("%d",&x);

if(x>99 && x<1000) // && is used when we need to code for something where multiple coditions are applied.
{
    printf("Given input value is a three digit number");
}
else{
    printf("Given input value is not a three digit number");
}

return 0;
}



