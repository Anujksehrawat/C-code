#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j,k,l;
	for(i=0;i<5;i++)
	{
		for(j=0;j<=5-i;j++)
		{
			printf(" ");
		}
		for(k=0;k<=i;k++)
		{
			printf("*");
		}
		for(l=0;l<i;l++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=0;i<5;i++)
	{
		for(j=1;j<5-1+i;j++)
		{
			printf(" ");
		}
		for(k=4;k>=1+i;k--)
		{
			printf("*");
		}
		for(l=3;l>=i+1;l--)
		{
			printf("*");
		}
		printf("\n");
	}
}
