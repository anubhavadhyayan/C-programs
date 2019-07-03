#include<stdio.h>
int main()
{
	int i,n,sum=0;
	 printf("Enter value of n: ");
    scanf("%d", &n);
    printf("\neven no. between 0 and %d are ",n);
    for(i=1;i<=n;i++)
    {
    if(i%2==0)
    {
    printf("\n%d \n",i);

    sum=sum+i;
    }
    }

        printf("\nsum of even no. are %d",sum);


  return 0;
}
