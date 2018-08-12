#include<stdio.h>
#include<conio.h>
void main()
{
	int i,arr[5],large,smal;
	printf("Elements of array:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	large=smal=arr[0];
	for(i=1;i<5;i++)
	{
		if(arr[i]<smal)
		{
			smal=arr[i];
		}
		else if(arr[i]>large)
		{
			large=arr[i];
		}
	}
	printf("Small=%d and Large=%d",smal,large);
}
