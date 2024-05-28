#include<stdio.h>

int main() {
int i = 2, j = 3, k, l;
float a, b;
k = i/j *j;
l = j / i * i;
a = i / j *j; // mathematical operation begins from left side in programming unlike BODMAS.
b = j / i* i; //BODMAS is not apllicable sometimes when adding numbers using programming language.
printf("%d\n %d\n %f\n %f", k,l,a,b); 

return 0;
}