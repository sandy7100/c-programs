#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i,b=0;
    printf("sum of first even natural number");
    printf(" \n enter the value of n :");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
     {


    b=b+(2*i);
     }
     printf("sum is %d",b);
     getch();
}
