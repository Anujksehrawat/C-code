#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j,k,l,count=1,p;
	for(i=0;i<5;i++)
	{
		p=i;
		for(j=0;j<4-i;j++)
		{
			printf(" ");
		}
		for(k=0;k<=i;k++)
		{
			printf("%d",count+k);
		}
		for(l=0;l<i;l++)
		{
			printf("%d",2*p-l);			
		}
		printf("\n");
		count++;
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf(" ");
		}
		for(k=0;k<4-i;k++)
		{
			printf("%d",(4-i)+k);
		}
		p=k;
		for(l=1;l<=3-i;l++)
		{
			printf("%d",2*p-l-1);
		}
		printf("\n");
	}
}
