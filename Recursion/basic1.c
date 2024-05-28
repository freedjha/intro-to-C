/*
Recursion is a programming concept where a function calls itself in its own definition.
In C language, a recursive function is a function that solves a problem by solving smaller instances of the same problem
.*/ 


#include <stdio.h>
void  greet(int n){
    if(n ==0) return;
    printf("\nGM\n ");
    greet(n-1);
} 
int main(){
    
greet (4);
return 0;
}