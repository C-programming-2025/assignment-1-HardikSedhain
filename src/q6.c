// Write a C program to calculate the area of a rectangle. Prompt the user to enter the length and width, and display the result.

#include<stdio.h>
int main()
{
    int a,b, area;
     printf("enter length and breadth:");
     scanf("%d %d",&a,&b);
     area= a*b;
     printf("the area is %d",area);
     return 0;
}