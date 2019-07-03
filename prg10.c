#include<stdio.h>
#include<curses.h>
void main()
{
	int a,b,*p,*q;
	a=10;
	b=20;
	p=&a;
	q=&b;
	printf("\n value of a=%d",a);
	printf("\n address of a=%u",&a);
	printf("\n value of b=%d",b);
	printf("\n address of b=%u",&b);
	printf("\n value of pointer p=%u",p);
	printf("\n address of pointer p=%u",&p);
	printf("\n value at the pointer p=%d",*p);
	printf("\n value of pointer q=%u",q);
	printf("\n address of pointer q=%u",&q);
	printf("\n value at the pointer q=%d",*q);
}