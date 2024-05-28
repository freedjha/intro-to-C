#include <stdio.h>

int
main ()
{
int n;
printf ("Enter a number of rows: ");
scanf ("%d", &n);

for(int i = 1; i<=n;i++){ // this line is for no. of rows
    
    for(int j = 1; j<=i;j++){ // this line is for no. of columns
        
        printf("*");
    }
printf("\n");
}
  return 0;
}