#include<stdio.h>
#include<curses.h>
void main()
{
    int roll,age;
	char name[10],course[5];
	printf("input your roll=");
	scanf("%d",&roll);
	printf("input your age=");
	scanf("%d",&age);
	printf("input your name=");
	scanf("%s",&name);
	printf("input your course=");
	scanf("%s",&course);
	printf("\n student roll=%d",roll);
	printf("\n student age=%d",age);
	printf("\n student name=%s",name);
	printf("\n student course name=%s",course);
	getchar();
}
