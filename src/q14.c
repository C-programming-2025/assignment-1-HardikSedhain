// Create an expression that swaps the values of two variables x and y without using a temporary variable.

#include<stdio.h>
int main()
{
    int a=4,b=6;
     printf("Before swapping: a=%d b=%d",a,b);
     a=a+b;
     b=a-b;
     a=a-b;
     printf("After swapping: a=%d b=%d",a,b);
     return 0;
}