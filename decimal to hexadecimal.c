#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b[100],c[100],j=1;
	printf("enter the decimal number :");
	scanf("%d",&a);
	while(a>0)
	{
		b[j]=a%16;
		a=a/16;
		j++;
		
		
	}
	int i=j-1;
	while(i>0)
	
	{
		if(b[i]==10)
		{
			b[i]='A';
			printf("%c",b[i]);
		}
			else if(b[i]==11)
		{
			b[i]='B';
			printf("%c",b[i]);
		}	
		   else if(b[i]==12)
		{
			b[i]='C';
			printf("%c",b[i]);
		}	
		   else if(b[i]==13)
		{
			b[i]='D';
			printf("%c",b[i]);
		}	
		  else if(b[i]==14)
		{
			b[i]='E';
			printf("%c",c[j]);
		}	
		  else if(b[i]==15)
		{
			b[i]='F';
			printf("%c",b[i]);
		}	
		  else if(b[i]==16)
		{
			b[i]='G';
			printf("%c",b[i]);
		}
		 else if(b[i]<10)
		 {
		 	
		 	printf("%d",b[i]);
		 }
		 i--;
	}
	getch();
}
