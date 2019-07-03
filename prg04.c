#include<stdio.h>
#include<curses.h>
void sum()
{
	int a,b,c;
	printf("input two numbers");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("\n addition=%d",c);
}
	void main()
	{
	    sum();
	    sum();
	    sum();
	    getchar();
}
