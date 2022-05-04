/*tto swap any two numbers given*/
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("take any two numbers\n let ");
    scanf("%d %d",&a,&b);
    c=a,a=b,b=c;
    printf("on swaping the numbers ...\n we get\t");
    printf("%d %d",a,c);

}