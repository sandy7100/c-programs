#include<stdio.h>
#include<conio.h>
void main()
{
	int a,i=1,b[100];
	printf("enter the decimal number :");
	scanf("%d",&a);
	while(a>0)
	{
		b[i]=a%8;
		a=a/8;
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
