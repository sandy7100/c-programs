#include<stdio.h>
#include<conio.h>

void main()
{

    int a,b,c,d,x,y;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf(" enter the value of b :");
    scanf("%d",&b);
    printf("enter the vale of c:");
    scanf("%d",&c);
    d=(b*b-4*a*c);
    if(d<0)
        printf(" imaginary roots .");
    else if(d>0)
       {

        printf("real roots");
        x=(-b+sqrt(d))/(2*a);

        y=(-b-sqrt(d))/(2*a);
    printf("  %d",x);
    printf(" %d",y);
       }
    else if(d=0)
       {

        printf("equal roots ");
    x=-b/(2*a);
    printf("%d",x);
       }
    getch();

}
