// Given two variables x and y, write an expression that calculates the average of their values.

#include<stdio.h>
int main()
{
    int a,b, average;
     printf("enter two numbers:");
     scanf("%d %d",&a,&b);
     average= (a+b)/2;
     printf("the average is %d",average);
     return 0;
}