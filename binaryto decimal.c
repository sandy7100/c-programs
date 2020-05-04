#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c=0,d=1;
	printf("enter the binary number :");
	scanf("%d",&a);
	while(a>0)
	{
		b=a%10;
		
		a=a/10;
		c=c+b*d;
		d=2*d;
		
	}
	printf("decimal number :%d",c);
	getch();
}
