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
			    printf("%d",count+j+1);
			    
		    }
		    for(m=0;m<i;m++)
		    {
		        printf("%d",j-m+i-1);
			}
			count=count+1;
		printf("\n");
	}
}
