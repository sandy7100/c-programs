#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,x,y;
	printf("roots of the quadratic equation ax^2+bx+c=0 .");
	printf("enter the value of a :");
	scanf("%d",&a);
	printf("enter the value of b :");
	scanf("%d",&b);
	printf("enter the value of c :");
	scanf("%d",c);
	d=(b*b)-4*a*c;
	switch (d<0)
		{
			case 1:
				printf("imaginary roots");
				break;
			case 0:
				switch (d>0)
				{
				case 1:
				   x=y;
				   x=(-b/2*a)-d;
				   y=(-b/2*a)+d;
				   printf("unequal roots =%d%d",x,y );
				break;
				case 0:
					x=-b/2*a;
					printf(" equal roots =%d",x);
					break;
			    }
		
			default:
			printf("invalid number");
				
				
		}
	getch();
}
