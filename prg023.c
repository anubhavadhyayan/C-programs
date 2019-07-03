#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5,total;
	float percentage;

	printf("\n Enter your all marks=");
	scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);

	total=s1+s2+s3+s4+s5;
	percentage=total*100/500;

	if(percentage >75 && percentage <=100)
	 printf("\n grade A");

	else if(percentage >60 && percentage <=75)
	  printf("\n grade B");

	else if(percentage >45 && percentage <=60)
	  printf("\n grade C");

	else if(percentage >33 && percentage <=45)
	  printf("\n grade D");

	else

	printf("\n grade E");

	return 0;
}
