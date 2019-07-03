#include<stdio.h>
#include<curses.h>
int main()
{
	int a,b,symbol,c;
	printf("\n Input the value of a=");
	scanf("%d",&a);
	printf("\n Input the value of b=");
	scanf("%d",&b);
	printf("\n Input symbol=");
	scanf("%d",&symbol);
	switch(c)
	{
		case1:c=a+b;
		printf("\n Addition=%d",c);
		break;

		case'-':printf("\n %d-%d=%d",a-b);

		case'*':printf("\n %d*%d=%d",a*b);

		case'/':printf("\n %d/%d=%d",a/b);

		default:
		printf("\n Error" );
	}

	return 0;
	}
