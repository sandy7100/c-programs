#include<stdio.h>
#include<conio.h>
void main()
{
     float a,b;
     int c,j=0,i=1,n;
     printf("Enter the binary number :");
     scanf("%f",&a);
     c=a;
     b=a-c;
     while(c>0)
     {
     	n=c%10;
     	c=c/10;
     	j=j+n*i;
     	i=2*i;
     	
	 }
     printf("%d",j);
     printf(".");
     float h;
     int r;
     while(b>0)
     {
     	h=b*10;
     	r=h;
     	b=h-r;
     	printf("\n %d",r);
	 }
     
     getch();
}
