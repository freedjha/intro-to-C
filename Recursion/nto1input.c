// print to n to 1


#include <stdio.h>
void number (int n){
    
    if(n == 0) return;
    printf("%d ",n);
    number(n-1);
}
int main(){
    
    int a;
    printf("NUmber: ");
    scanf("%d",&a);
    
    number(a);
    
    return 0;
}