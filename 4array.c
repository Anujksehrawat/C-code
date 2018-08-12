#include<stdio.h>
#include<conio.h>
#define n 3
void main()
{
	int arr1[n][n],i,j;
	printf("Enter the elements of 2D array:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("These are elements of 2D array:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",arr1[i][j]);
		}
		printf("\n");
	}
}
