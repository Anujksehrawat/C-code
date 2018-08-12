#include<stdio.h>
#include<conio.h>
void main()
{
	int amt,note1=0,note2=0,note3=0,note4=0;
	printf("Enter a amount:");
	scanf("%d",&amt);
	if(amt>=50)
	{
		note1=amt/50;
		amt=amt%50;
	}
	if(amt>=20)
	{
		note2=amt/20;
		amt=amt%20;
	}
	if(amt>=10)
	{
		note3=amt/10;
		amt=amt%10;
	}
	if(amt>=5)
	{
		note4=amt/5;
	}
	printf("50=%d\n20=%d\n10=%d\n5=%d",note1,note2,note3,note4);
}
