#include<stdio.h>
#include<curses.h>
void max()
{
	int a,b;
	printf("input two numbers");
	scanf("%d%d",&a,&b);
	if (a>b)
	printf("larger number=%d",a);
	else
	printf("larger number=%d",b);
}
 void main()
    {
        max();
        max();
        getchar();
    }