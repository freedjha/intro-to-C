 #include <stdio.h>

int
main ()
{
int n;
printf ("Enter a number of rows: ");
scanf ("%d", &n);

int m;
printf ("Enter a number of columns: ");
scanf ("%d", &m);

for(int i = 1; i<=n;i++){ // this line is for no. of rows
    
    for(int j = 1; j<=m;j++){ // this line is for no. of columns
        
        printf("*");
    }
printf("\n");
}
  return 0;
}