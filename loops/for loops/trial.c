#include<stdio.h>
int main()
{
    
int n;

printf("Number: ");
scanf("%d", &n);

int a = 0;
for(int i=2;i<=n-1; i++) {
if(n%i==0){ // i is a factor of n 
a = 1;
break; /*When a break statement is encountered  inside a loop, the loop is  
        immediately terminated and the program control resumes 
        at the next statement following the loop.*/
        
    // https://youtu.be/wYvrBXUfFfw?list=PLxgZQoSe9cg1drBnejUaDD9GEJBGQ5hMt&t=5146
}
}
if(a==0){
    
 printf("the given number is prime\n");
}
else {
    printf("the given number is composite\n"); 
}
    
    return 0;

return 0;
}

