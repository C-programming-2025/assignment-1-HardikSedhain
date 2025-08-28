

 #include<stdio.h>
 int main()
 {
    int a,b,c,result;
    printf("enter a,b,c");
    scanf("%d %d %d",&a,&b,&c);
    result=(a==b && b!=c);
    printf("The condition is %d ",result);
   return 0;
 }