/*sum and average of three integers*/
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("take any three numbers in place of a,b,c\n");
    printf("let take ");
    scanf("%d %d %d",&a,&b,&c);
    int d=a+b+c;
    printf("the sum of the numbers is %d\n",d);
    int e=(d/3);
    printf("the avarage of the numbers is %d",e);


}