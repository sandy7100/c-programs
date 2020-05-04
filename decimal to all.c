#include<stdio.h>
#include<conio.h>
void main()
{
	int b[100],i=1,a,k,l;
	float n,r,x;
	printf("enter the decimal number :");
	scanf("%f",&n);
	a=n;
	r=n-a;
	x=r;
	
	printf("\n in binary :");
	
	while(a>0)
	{
	   b[i]=a%2;
	   a=a/2;
	   //printf("%d",b[i]);
	   i++;
    }
    int j=i-1;
    while(j>0) 
    {
    	printf("%d",b[j]);
    	j--;
	}
	printf(".");
	for(k=1;k<=16;k++)
	{
		r=2*r;
		l=r;
		printf("%d",l);
		if(l==1)
		r=r-1;
	}
	a=n;i=1,r=x;
	
	printf(" \n in octal :");
	
		while(a>0)
	{
		b[i]=a%8;
		a=a/8;
		i++;
	}
	int y=i-1;
	while(y>0)
	{
		printf("%d",b[y]);
		y--;
	}
	printf(".");
	int v;
	for(k=1;k<=7;k++)
	{
		r=r*8;
		v=r;
		printf("%d",v);
		if(v>0)
		{
			r=r-v;
		}
		
	}
	
	printf(" \n in hexadecimal :");
	
	a=n;i=1,r=x;
		while(a>0)
	{
		b[i]=a%16;
		a=a/16;
		i++;
		
		
	}
	int m=i-1;
	while(m>0)
	
	{
		if(b[m]==10)
		{
			b[m]='A';
			printf("%c",b[m]);
		}
			else if(b[m]==11)
		{
			b[m]='B';
			printf("%c",b[m]);
		}	
		   else if(b[m]==12)
		{
			b[m]='C';
			printf("%c",b[m]);
		}	
		   else if(b[m]==13)
		{
			b[m]='D';
			printf("%c",b[m]);
		}	
		  else if(b[m]==14)
		{
			b[m]='E';
			printf("%c",b[m]);
		}	
		  else if(b[m]==15)
		{
			b[m]='F';
			printf("%c",b[m]);
		}	
		  else if(b[m]==16)
		{
			b[m]='G';
			printf("%c",b[m]);
		}
		 else if(b[m]<10)
		 {
		 	
		 	printf("%d",b[m]);
		 }
		 m--;
	}
	printf(".");
	int p;
	for(k=1;k<=5;k++)
	{
		r=r*16;
		p=r;
		r=r-p;
		if(p<10)
		printf("%d",p);
		else if(p==10)
		{
		  p='A';
		  printf("%c",p);
	    }
	   else if(p==11)
	    {
	    	p='B';
	    	printf("%c",p);
		}
		else if(p==12)
	    {
	    	p='C';
	    	printf("%c",p);
		}
		else if(p==13)
	    {
	    	p='D';
	    	printf("%c",p);
		}
		 else if(p==14)
	    {
	    	p='E';
	    	printf("%c",p);
		}
		 else if(p==15)
	    {
	    	p='F';
	    	printf("%c",p);
		}
		else if(p==16)
	    {
	    	p='G';
	    	printf("%c",p);
		}
		
	}
	/*
	printf("\n in excess 3 :");
	a=n;i=1;
		a=a+3;
	while(a>0)
	{
		b[i]=a%2;
		a=a/2;
		i++;
		
	}
	int h=i-1;
	while(h>0)
	{
		printf("%d",b[h]);
		h--;
	}*/
	getch();
	
}
