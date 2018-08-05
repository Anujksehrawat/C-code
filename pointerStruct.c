#include<stdio.h>
#include<conio.h>
struct student{
	char name[10];
	int rollno;
};
void main()
{
	struct student stu1={"Anuj",11};
	struct student *ptr;
	ptr=&stu1;
	printf("Name=%s\n",(*ptr).name);
	printf("Rollno=%d",ptr->rollno);
}
