#include<stdio.h>
// demo1.C - Sample C Program
void main()
{
	int area, height, width;
	printf("input height of rectangle = ");
	scanf("%d", &height);
	printf("input width of rectangle = ");
	scanf("%d", &width);
	area = height * width;
	printf("\n area of rectangle = %d", area);
	getchar();
}
