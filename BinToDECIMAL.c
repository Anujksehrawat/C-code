#include<stdio.h>
#include<conio.h>
void main()
{
	int z,i=1,rem,dec=0,d,n;
	printf("Enter a binary no:");
	scanf("%d",&z);
	n=z;
	while(n>0)
	{
	   rem=n%10;
	   d=i*rem;	
	   dec=dec+d;
	   i=i*2;
	   n=n/10;  
	}
	printf("Binary no=%d and its Decimal no is=%d",z,dec);
}
