
#include<stdio.h>
void main()
{
    int a;
    float b,c;
    c=b-a-0.5;
    scanf("%d",&a);
    scanf("%f",&b);
    if(a%5==0)
    {
        if(a>0)
        printf("your bank balance is %f",c);
        else
        printf("ERROR \nyou just have %f",b);
    }
    else
    printf("ERROR \nits not acceptable");
    printf("\nyour net bank balance is %f",b);
    return 0
}