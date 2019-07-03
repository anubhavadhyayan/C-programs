#include<stdio.h>

int main()
{
	int p,r,t,si;
	char ch,x=1;
	while(x)
	{
		printf("\nEnter the value of P,r,t: \n");
		scanf("%d%d%d",&p,&r,&t);
		si=(p*r*t)/100;
		printf("The SI is = %d",si);

		printf("\n\nDo You want to enter another value,press Y/N = ");
        ch = getche();
		if(ch=='Y'||ch=='y')
		{
		   x=1;
		}
		else
		{
		   x=0;
		}
	}
return 0;
}
