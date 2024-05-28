/* The modulo operator in C is denoted by the percent sign %. 
 It is used to perform the modulo operation, also known as the remainder operation. */


/* If the numbers are float or double the the modulus operators doesn't work*/

#include<stdio.h>
int main()
{
     int divisor , dividend;
    
    printf("Dividend: ");
    scanf("%d", &dividend);
    
    printf("Divisor: ");
    scanf("%d", &divisor);
    
// Calculate the remainder using the modulus operator
  int remainder = dividend % divisor;
    
    printf("Remainder when %d is divided by %d = %d\n", dividend, divisor, remainder);
    
    return 0;
}