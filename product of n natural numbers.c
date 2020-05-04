#include<stdio.h>
#include<conio.h>
void main()
{

    int a,i,b=1;
    printf("product of n natural numbers");
    printf("\n enter the value of n");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        b=b*i;

    }
    printf("product is :%d",b);
    getch();

}
