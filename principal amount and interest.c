#include<stdio.h>
#include<conio.h>
void main()
{
	int p,n,r,a;
	printf("enter the principal value :");
	scanf("%d",&p);
	print("enter the rate % :");
	scanf("%d",r);
	printf("enter the number of years");
	scanf("%d",&n);
	a=p+r*p/100;
	printf(" amount after %d year :%d",n,p);
	getch();
	
	
}
