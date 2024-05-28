// print AP 4 7 10 13 ... upto n terms.

#include <stdio.h>
int main()
{
 int n;
 printf("Number of times: ");
 scanf("%d",&n);
 
 int a = 4;
 for(int i=1;i<=n;i++){
    printf("%d\n ",a); 
     a = a+3;
 }
    return 0;
}
