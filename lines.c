#include<stdio.h>
#include<conio.h>
void call();
void main()
{
	call();
}
void call()
{
	int i,j;
	for(i=0;i<20;i++)
	{
		
		for(j=0;j<40;j++)
		{
			if(j!=20)
			{
				printf("\t");
			}
			else if(j==20)
			{
				printf("|\n");
				break;
			} 
			if(i==10 && j==20)
			{
				printf("\n");
			}
			 
		} 	
			if(i==10)
	        {
	        	for(j=0;j<80;j++)
	        	{
		        printf("_");
		    }
	        } 	
	}
}
