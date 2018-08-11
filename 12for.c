#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,m;
	for(i=0;i<5;i++)
	{
			for(k=1;k<i+1;k++)
			{
				printf(" ");
			}
			for(j=9;j>=i+k;j--)
		    {
			printf("*");
		    }
		    for(m=0;m<i;m++)
		    {
		    	printf(" ");
			}
		printf("\n");
	}
}
