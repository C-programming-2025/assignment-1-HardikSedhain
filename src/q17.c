

#include<stdio.h>
int main()
{
    char alphabet;
    int result;
    printf("Enter alphabet :");
    scanf("%c",&alphabet);
    result=((alphabet>='A') && (alphabet <='Z'));
    printf("The result is %d",result);
    return 0;
}