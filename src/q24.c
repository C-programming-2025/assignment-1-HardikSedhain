

#include<stdio.h>
#include<math.h>
int main()
{
    int num,sqroot,result,check;
    printf("enter a number:");
    scanf("%d",&num);
    sqroot=sqrt(num);
    result=pow(sqroot,2);
    check=result==num;
        printf("The condition is %d.\n",check);
    return 0;
}