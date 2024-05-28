#include<stdio.h> 
int main() {
// what is typecasting 

/*Type Casting is basically a process in C in which we 
change a variable belonging to one data type to another one*/

for(int i=65;i<=90; i++) { 
 char ch = (char)i; 
printf("%c -> ",ch); 
printf("%d\n", i);
    }
    return 0;
}