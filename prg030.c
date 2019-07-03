#include<stdio.h>
int main()
{
int n,count=0;
printf("Input the number you wish to count=");
scanf("%d",&n);
while(n>0)
{
  n=n/10;
  count=count+1;
}
printf("your given no.s are %d",count);
return 0;
}
