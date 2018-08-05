#include<stdio.h>
#include<conio.h>
struct stu{
	char name[5];
	int rollno;
	float marks;
	};
	void main()
	{
		int i;
		struct stu stuarr[2];
		printf("Enter the student details:Name,Rollno,Marks\n");
		for(i=0;i<2;i++)
		{
			printf("Name%d:",i+1);
			scanf("%s",&stuarr[i].name);
			printf("Rollno:");
			scanf("%d",&stuarr[i].rollno);
			printf("Marks:");
			scanf("%f",&stuarr[i].marks);
		}
		printf("Details of student are in the following:\n");
		for(i=0;i<2;i++)
		{
			printf("student%d\n Name=%s Rollno=%d Marks=%.2f",i+1,stuarr[i].name,stuarr[i].rollno,stuarr[i].marks);
			printf("\n");
		}
	}
