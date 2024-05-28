/*In Maths, Geometric Progression (GP) is a type of sequence where each succeeding term is 
produced by multiplying each preceding term by a fixed number, which is called a common ratio. 
This progression is also known as a geometric sequence of numbers that follow a pattern.*/

/* Q: Print the GP = 100,50,25.. upto ‘n’ terms */


#include<stdio.h>
int main()
{
    float a = 100;
for(int i=1;i<=a;i++ ){

printf("%f ",a);

a=a*0.5;

}


    return 0;
}