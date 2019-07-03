#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("Enter the value of n=");
	scanf("%d",&n);
	printf("\n Odd no.s between 0 and %d are",n);
	for(i=1;i<=n;i=i+2)
	{
	printf("\n %d \t",i);
	sum=sum+i;
	}
	printf("\n sum of all odd no.s are=%d",sum);
	return 0u;
}
