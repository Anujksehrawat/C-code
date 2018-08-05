#include<stdio.h>
#include<conio.h>
struct student{
	char name[10];
	int *stuptr;
};
void main()
{
	struct student stu,*ptr;
	ptr=&stu;
	printf("Enter name:");
	scanf("%s",&ptr->name);
	printf("Enter int pointer value:");
	scanf("%d",&ptr->stuptr);
	printf("%s\n",(*ptr).name);
	printf("%d",ptr->stuptr);
}
