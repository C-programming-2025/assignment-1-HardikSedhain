// Write a C program to swap the values of two variables using a temporary variable.

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
     printf("Before swapping: a=%d b=%d",a,b);
     c=a;
     a=b;
     b=c;
     printf("After swapping: a=%d b=%d",a,b);
     return 0;
}