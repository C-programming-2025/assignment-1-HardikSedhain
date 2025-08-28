// Write a C expression that calculates the square root of the sum of two numbers, rounded to the nearest integer.

#include<stdio.h>
#include<math.h>
int main()
{
    double num1,num2,sum, sqroot;
    long int rounded;
    printf("enter two numbers:");
    scanf("%lf %lf",&num1,&num2);
    sum=num1+num2;
    sqroot=sqrt(sum);
    rounded=round(sqroot);
    printf("The square root of the sum is %.4lf\n",sqroot);
    printf("Rounded to thge nearest integer is %ld\n",rounded);
    return 0;
}