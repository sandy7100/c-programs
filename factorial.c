#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i,b=1;
    printf("enter the number:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        b=b*i;
    }
    printf("factorial is %d",b);
    getch();


}
