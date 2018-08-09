#include<stdio.h>
#include<stdio.h>
void main()
{
	int i,j,count=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
	       if(i==j)
		   {
			count=0;
			printf("%d",count);
	     	}
	     	else
	     	{
	     	count=1;
			printf("%d",count);	
			 }
	    }
	    printf("\n");
	}
}
