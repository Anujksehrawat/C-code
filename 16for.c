#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j,k,l,p;
	for(i=0;i<5;i++)
	{
		p=i;
		for(j=0;j<4-i;j++)
		{
			printf(" ");
		}
		for(k=0;k<=i;k++)
		{
			printf("%d",5-k);
		}
		for(l=0;l<i;l++)
		{
			printf("%d",5-p+l+1);			
		}
		printf("\n");
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf(" ");
		}
		for(k=0;k<4-i;k++)
		{
			printf("%d",5-k);
		}
		p=i+2;
		for(l=1;l<=3-i;l++)
		{
			printf("%d",p+l);
		}
		printf("\n");
	}
}
