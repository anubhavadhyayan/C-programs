#include<stdio.h>
int main()
{
	int i,f=1;
	printf("input the number you want factorial=");
	scanf("%d",&i);
	while(i>0)
	{
    f=f*i;
	i--;
	}
	printf("%d",f);
	return 0;
}
