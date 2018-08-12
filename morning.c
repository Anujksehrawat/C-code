#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str[20];
	int i,j,flag;
	printf("Enter a string:");
	scanf("%s",&str);
	for(i=0;i<strlen(str);i++)
	{
		for(j=0;j<strlen(str);j++)
		{
			if(str[i]==str[j] && i!=j)
			{
				flag=1;
				break;
			}
			else if(str[i]!=str[j])
			{
				flag=0;
			}
		}
		if(flag==0)
		{
			break;
		}
	}
		if(flag==0)
		{
	printf("%c",str[i]);
}
}
