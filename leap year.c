#include<stdio.h>
#include<conio.h>
void main()
{

    int a;
    printf("enter the year:");
    scanf("%d",&a);
    if(a%400==0)
       {

        printf("%d is a leap year",a);
       }
    else if(a%4==0)
        {
            printf("%d is a leap year",a);
        }
    else if(a%100==0)
        {
            printf("%d not a leap year",a);
        }
        else
            printf("not a leap year");
    getch();

}
