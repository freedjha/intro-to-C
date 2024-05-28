// print to n to 1

#include <stdio.h>

void number (int n){
    
    if(n == 0) return;
    printf("%d ",n);
    number(n-1);
}
int main(){
    number(3);
    return 0;
}