#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b;
	int c,n[100],i=1,l,k;
	printf("Enter the floating decimal number :");
	scanf("%f",&a);
	c=a;
	b=a-c;
	
	while(c>0)
	{
	   n[i]=c%2;
	   c=c/2;
	   
	   i++;
    }
    int j=i-1;
    while(j>0)
    {
    	printf("%d",n[j]);
    	j--;
	}
	printf(".");
	for(k=1;k<=8;k++)
	{
		b=2*b;
		l=b;
		printf("%d",l);
		if(l==1)
		b=b-1;
		
		
	}
	getch();
	
	
	
	
}
