#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[5],i,temp,j;
	printf("nter the elements of array:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=4,j=0;i>j;i--,j++)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
	for(i=0;i<5;i++)
	{
		printf("%d",i[arr]);
	}
}
