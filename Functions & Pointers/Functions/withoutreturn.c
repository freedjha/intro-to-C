#include<stdio.h>

int min(int x, int y){
if(x<y) 
printf ("%d is minimum",x);
else printf("%d is minimum",y);
}
int main(){
int a;
printf("Enter 1st number: ");
scanf("%d",&a);

int b;
printf("Enter 2nd number: ");
scanf("%d",&b);

int m = min(a,b);
return 0;
}