#include<stdio.h>
#include<conio.h>
#define n 5
void main()
{
	int arr[n],i,slar,lar;
	printf("Enter a no:");
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
    }
    slar=0;
    lar=0;
    for(i=0;i<n;i++)
    {
    	if(arr[i]>lar)
    	{
    		slar=lar;
    		lar=arr[i];
		}
		else
		{
		if(arr[i]>slar && arr[i]<lar)
		{
			slar=arr[i];
		}
	}
	
	}
	printf("%d",slar);
}
