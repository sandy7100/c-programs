#include<Stdio.h>
#include<conio.h>
void main()
{
	int a[100],b,i;
	printf("enter the hexadecimal number :");
	scanf("%d",&a[100]);
	for(i=1;i<=2;i++)
	{
		if(a[i]=='A')
		{
			a[i]=10;
		}
		if(a[i]=='B')
		{
			a[i]=11;
		}
		if(a[i]=='C')
		{
			a[i]=12;
		}
		if(a[i]=='D')
		{
			a[i]=13;
		}
		if(a[i]=='E')
		{
			a[i]=14;
		}
		if(a[i]=='F')
		{
			a[i]=15;
		}
		if(a[i]=='G')
		{
			a[i]=16;
		}
		else
		a[i]=a[i];
		
	}
	printf("%d",a[i]);
	getch();
}
