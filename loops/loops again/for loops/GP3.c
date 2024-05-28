// HW : Display this GP  100,50,25,.. upto 'n' terms.


#include <stdio.h>
int main()
{
  
int n;
printf("Number: ");
scanf("%d",&n);
  
  int a=100;
  for(int i=1;i<=n;i++){
      
    printf("%d ",a);
    a=a-25;
  }
  

    return 0;
}