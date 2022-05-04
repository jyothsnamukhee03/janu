#include<stdio.h>
void main()
{
    /*designing a mini calaculator*/
    int a;
    int b;
    printf("enter a number \n a =");
    scanf("%d",&a);
    printf("\nenter another number \n b =");
    scanf("%d",&b);
    printf("\n\nLET US FIND SOME VALUES\n");
    /*adding both numbers*/
    printf("addition \n a+b = %d\n\n",a+b);
    /*subtracting both numbers*/
    printf("substraction \n a-b = %d\n\n",a-b);
    /*multiplying both*/
    printf("multiplication \n a*b = %d\n\n",a*b);
    /*on dividing both*/
    printf("division (b = other than 0) \n a/b = %d\n\n",a/b);
    /*modula values*/
    printf("modula \n a mod b = %d\n\n",a%b);
    printf("thank you....");


}