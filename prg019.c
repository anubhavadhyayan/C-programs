#include<stdio.h>
#include<curses.h>
int main()
{
    int x, y;
    printf("Enter Value of x ");
    scanf("%d", &x);
    printf("\nEnter Value of y ");
    scanf("%d", &y);
    swap(x, y);
    printf("\n After Swapping: x = %d, y = %d", x, y);
    return 0;
    }
