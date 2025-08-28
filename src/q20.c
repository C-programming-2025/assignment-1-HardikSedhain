

#include<stdio.h>
int main()
{
    int a,result;
    printf("enter a number:");
    scanf("%d",&a);
    result=(a%5==0) || (a%3==0);
    printf("the condition is %d",result);
    return 0;
}