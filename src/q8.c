/* Write a C program to convert temperature from Celsius to Fahrenheit. Prompt the user for a
temperature in Celsius and display the equivalent temperature in Fahrenheit.
(Formula: fahrenheit = (celsius * 9 / 5) + 32) */

 #include<stdio.h>
 int main()
 {
    int a,result;
    printf("enter tenperature in celsius:");
    scanf("%d",&a);
    result=((a*9/5)+32);
     printf("The result is: %d\n",result);
    return 0;
 }