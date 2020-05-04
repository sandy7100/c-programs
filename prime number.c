#include<stdio.h>
#include<conio.h>
void main()
{
	int a,i,c=0,j,d;
	printf("enter the value of n :");
	scanf("%d",&a);
	for(i=2;i<=a;i++)
	{
		for(j=2;j<=i;j++)
		{
		   
		   if(i%j==0)
		   {
			 c++;
	         if(c==1)
		      {
		       	printf("%4d",i);
		       }
	        }
	    }
	     
	     
    }
	getch();
	
}
