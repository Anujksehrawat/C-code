#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,m,count=0;
	for(i=0;i<5;i++)
	{
			for(k=0;k<5-i;k++)
			{
				printf(" ");
			}
			for(j=0;j<=i;j++)
		    {
			printf("%d",5-j);
		    }
		    for(m=0;m<i;m++)
		    {
		    	printf("%d",5+m-count+1);
			}
		printf("\n");
		count=count+1;
	}
}
