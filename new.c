#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str1[80],str2[80],str3[80],str4[80];
	int i,j,k=0,flag;
	printf("Enter the first String:");
	scanf("%s",str1);
	printf("Enter the second String:");
	scanf("%s",str2);
	for(i=0;i<strlen(str1);i++)
	{
		flag=0;
		for(j=0;j<strlen(str2);j++)
		{
			if(str1[i]==str2[j])
			{
				flag=1;
				break;
			}
		}
		if(flag!=1)
		{
			str3[k]=str1[i];
			k++;
		}
	}
	str2[k]='\0';
	k=0;
	for(i=0;i<strlen(str2);i++)
	{
		flag=0;
		for(j=0;j<strlen(str1);j++)
		{
			if(str2[i]==str1[j])
			{
				flag=1;
				break;
			}
		}
		if(flag!=1)
		{
			str4[k]=str2[i];
			k++;
		}
	}
	str4[k]='\0';
	printf("%s\n",str3);
	printf("%s",str4);
}