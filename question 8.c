/*converstion of temparature from fahrenheit (F) to celsius (c)*/
#include<stdio.h>
void main()
{
    int a;
    printf("enter a temperature in fahrenhiet that you want to convert\n");
    scanf("%d",&a);
    float b,c,d;
    b=5.0/9;
    c=a-32;
    d=b*c;
    printf(" F\n\nthe celsius scale is %f"d);
}