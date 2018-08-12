#include<stdio.h>
#include<conio.h>
void main()
{
	char str[6];
	int i,j,z;
	printf("Enter a string:");
	scanf("%s",&str);
	for(i=0;i<6;i++)
	{
		z=0;
		for(j=0;j<6;j++)
		{
			if(str[i]==str[j] && j<i)
			{
				break;
			}
			if(str[i]==str[j])
			{
				z++;
			}
		}
		if(z>0)
		printf("%c=%d\n",str[i],z);
	}
}
