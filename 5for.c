#include<stdio.h>
#include<stdio.h>
void main()
{
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=5;j>i;j--)
		{
			if(5%2>=i)
			{
				printf("%d",i+1);
			}
			else
			{
				printf("%d",5-i);
			}
	    }
	    printf("\n");
	}
}
