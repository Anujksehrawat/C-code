#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10],i,odd=0,even=0;
	printf("Elements of array:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++)
	{
		if(arr[i]%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	printf("Even elements=%d and Odd elements=%d",even,odd);
}
