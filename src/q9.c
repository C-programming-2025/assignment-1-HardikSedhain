

#include<stdio.h>
int main()
{
    int totaldays, weeks,days;
    printf("enter the number of days:");
    scanf("%d",&totaldays);
    weeks=totaldays/7;
    days=totaldays%7;
    printf("%d days is equvalent to %d weeks and %d days.\n ",totaldays,weeks,days);
   return 0;
}