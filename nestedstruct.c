#include<stdio.h>
#include<conio.h>
void main()
{
	struct time{
		int hr;
		int min;
		int sec;
	};
	struct date{
		int day;
		int month;
		int year;
		struct time t;
		
	};
	struct student{
		char name[10];
		struct date dob;
		
	}stu1;
	struct time t;
	struct date dob;
	printf("Enter time:h/min/sec/\n");
	scanf("%d%d%d",&stu1.dob.t.hr,&stu1.dob.t.min,&stu1.dob.t.sec);
	printf("Enter date:day/month/year\n");
	scanf("%d%d%d",&stu1.dob.day,&stu1.dob.month,&stu1.dob.year);
	printf("Enter student name:");
	scanf("%s",&stu1.name);
	printf("%u",stu1.dob.day);
}
