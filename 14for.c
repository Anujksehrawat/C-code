#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j,k,l;
	for(i=0;i<5;i++)
	{
		for(j=0;j<4-i;j++)
		{
			printf(" ");
		}
		for(k=0;k<=i;k++)
		{
			printf("%d",k+1);
		}
		for(l=0;l<i;l++)
		{
			printf("%d",l+1+k);
		}
		printf("\n");
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=4-i;k++)
		{
			printf("%d",k);
		}
		for(l=0;l<3-i;l++)
		{
			printf("%d",l+k);
		}
		printf("\n");
	}
}
