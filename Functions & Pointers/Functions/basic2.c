#include <stdio.h>

void england(){
    printf("u r in england\n");
    return;
}

void australia(){
    printf("u r in australia\n");
    england();
     return;
}

void india(){
    printf("u r in india\n");
   australia();
     return;
}

int main()
{
   india();

    return 0;
}
