#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,m;
	for(i=0;i<5;i++)
	{
			for(k=0;k<5-i;k++)
			{
				printf("  ");
			}
			for(j=0;j<=i;j++)
		    {
			printf("* ");
		    }
		    for(m=0;m<i;m++)
		    {
		    	printf("* ");
			}
		printf("\n");
	}
}
