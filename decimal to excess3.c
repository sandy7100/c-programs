#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b[100],i=1;
	printf("enter the decimal number :");
	scanf("%d",&a);
	a=a+3;
	while(a>0)
	{
		b[i]=a%2;
		a=a/2;
		i++;
		
	}
	int j=i-1;
	while(j>0)
	{
		printf("%d",b[j]);
		j--;
	}
	getch();
		
}
