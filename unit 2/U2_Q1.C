// Design a structure named student to store data about student which contains following data element
#include<stdio.h>
#include<conio.h>
struct student
{
	int rollno;
	char name[20];
	char department[40];
	int year;
	float score;
};
void main()
{
	struct student s;
	clrscr();
	printf("enter rollno:");
	scanf("%d",&s.rollno);
	printf("enter name:");
	scanf("%s",&s.name);
	printf("enter department:");
	scanf("%s",&s.department);
	printf("enter the year of joining:");
	scanf("%d",&s.year);
	printf("enter score:");
	scanf("%f",&s.score);
	printf("\n---student details---\n");
	printf("rollno: %d\n",s.rollno);
	printf("name: %s\n",s.name);
	printf("department: %s\n",s.department);
	printf("year: %d\n",s.year);
	printf("score: %f\n",s.score);
	getch();
}


