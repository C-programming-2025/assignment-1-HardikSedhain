
 #include<stdio.h>
 int main()
 {
    int a,result=0;
    printf("enter a number:");
    scanf("%d",&a);
    result=(++a*3) - 10;
     printf("The result is: %d\n",result);
    return 0;
 }