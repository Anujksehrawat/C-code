#include<stdio.h>
#include<conio.h>
void fact(int n);
void main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	fact(n);
}
void fact(int n)
{
	int i=1,fac=1,z;
	printf("Factorial of %d=",n);
	while(i<=n)
	{
		fac=fac*i;
		i++;
	}
	printf("%d",fac);
}
