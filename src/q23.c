

#include<stdio.h>
int main()
{
    int num,result;
    printf("enter a number:");
    scanf("%d",&num);
    result=((num>0) && (num & (num-1))==0);
    printf("The condition is %d ",result);
    return 0;
}