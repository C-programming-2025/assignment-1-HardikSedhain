
#include<stdio.h>
int main()
{
    int x,y,z,temp1,temp2,temp3;
    printf("enter three numbers:");
    scanf("%d %d %d",&x,&y,&z);
     temp1=x;
     temp2=y;
     temp3=z;
     x=temp2;
     y=temp3;
     z=temp1;
     printf("After swapping: x=%d y=%d z=%d\n",x,y,z );
     return 0;
}