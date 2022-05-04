#include<stdio.h>
void main()
{
    int a;
    float b,c;
    printf("Enter the Net Amount:\n");
    scanf("%f",&b);
    printf("Enter the amount you want!!\n");
    scanf("%d",&a);

    if(a % 5==0)
    {
        if(b>0) {
        c=b-(float)a- 0.5;
        printf("your bank balance is %f",c);
        
        }else{
        printf("ERROR \nyou just have %f",b);
        }    
    }
    else{
    printf("ERROR \nits not acceptable");
    printf("\nyour net bank balance is %f",b);
    }
}
