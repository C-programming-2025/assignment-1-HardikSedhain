
#include<stdio.h>
int main()
{
    int x,y,z,temp1,temp2;
    printf("enter three numbers:");
    scanf("%d %d %d",&x,&y,&z);
     temp1=x;
     temp2=y;
     x=z;
     y=temp1;
     z=temp2;
     printf("After swapping: x=%d y=%d z=%d\n",x,y,z );
     return 0;
}