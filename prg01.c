#include <stdio.h>
//#include <conio.h>   windows only header file . not available in gcc in gcc the same funtions can be found in
#include <curses.h>
void main()
{
	int area, height, width;
	//clrscr();
	printf("input height of rectangle = ");
	scanf("%d", &height);
	printf("input width of rectangle = ");
	scanf("%d", &width);
	area = height * width;

	printf("\n area of rectangle = %d\n\n", area);
	getchar();
}
