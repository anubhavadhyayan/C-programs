#include<stdio.h>
#include<curses.h>
struct student
{
	int roll;
	char name[10];
	char course[5];

};

 void main()

{
int roll;
char name,course;
	struct student p,*q;
	printf("input roll,name and course name of student");
	scanf("%d %s %s",&p.roll,&p.name,&p.course);
	q=&p;
	printf("\n roll number=%d",q-->roll);
	printf("\n student name=%s",q-->name);
	printf("\n student course name=%s",q-->course);
	getchar();
}
