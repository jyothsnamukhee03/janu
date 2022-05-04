
/*to print the digit at ones place of a given number*/
#include<stdio.h>
void main()
{
    int a;
    int b = 10;
    printf("just type an integer that you want \n");
    printf("let it be a = ");
    scanf("%d",&a);
    /*scanf function lo backslash functions pettakoodadhu*/
    printf("\nthe last digit of the number is ");
    printf("%d",a%b);
}
