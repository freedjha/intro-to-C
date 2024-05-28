/*Ques: Given the length and breadth of a rectangle, 
write a program to find whether the area of the 
rectangle is greater than its perimeter.*/ 
// Area of rectangle= l*b , perimeter = 2(l+b)

#include <stdio.h>
int main(int argc, char const *argv[])
{
int length,breadth,area,perimeter;
printf("Enter the length of rectangle:");
scanf("%d",&length);

printf("\nEnter the breadth of rectangle:");
scanf("%d",&breadth);

area= length*breadth;
perimeter= 2*(length+breadth);

/* 3 conditions 
1st= area > perimeter
2nd= area < perimeter
3rd= area = perimeter */

if (area>perimeter){
    printf("\nArea of rectangle is greater than its perimeter.\n");
}
else if (area<perimeter){
    printf("\nPerimeter of rectangle is greater than its area.\n");

}
else{
    printf("\nArea = Perimeter.\n \n");
}


    return 0;
}
 