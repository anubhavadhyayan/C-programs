#include<stdio.h>
#include<curses.h>
int main()
{
int a = 10, b = 5;

printf("before swapping");
printf("\n value of a is %d",a);
printf("\n value of b is %d",b);

a = a + b;
b = a - b;
a = a - b;

printf("\n after swapping");
printf("\n value of a is %d",a);
printf("\n value of b is %d",b);

return 0;

}
