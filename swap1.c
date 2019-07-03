#include<stdio.h>
#include<curses.h>
int main()
{
int a = 10, b = 5, c;

printf("before swapping");
printf("\n value of a is %d",a);
printf("\n value of b is %d",b);

c = a;
a = b;
b = c;

printf("\n after swapping");
printf("\n value of a is %d",a);
printf("\n value of b is %d",b);

return 0;

}
