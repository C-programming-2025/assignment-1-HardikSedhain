// Write a C program to swap the values of two variables using a temporary variable.

#include<stdio.h>
int main()
{
    int a=4,b=6,c;
     printf("Before swapping: a=%d b=%d",a,b);
     c=a;
     a=b;
     b=c;
     printf("After swapping: a=%d b=%d",a,b);
     return 0;
}