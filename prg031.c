#include <stdio.h>
void main()
{
   int k,j;

   printf("Input number of rows : ");

   for(k=1;k<=4;k++)
   {
	for(j=1;j<=k;j++)
	   printf("%d",k);
	printf("\n");
   }
}
