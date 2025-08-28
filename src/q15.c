

#include<stdio.h>
int main()
{
    int a, result;
     printf("enter a number:");
     scanf("%d",&a);
     result=(a>=0) && ((a/2)*2==a);
     printf("the condition is %d",result);
     return 0;
}