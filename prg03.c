T#include <stdio.h>
#include<curses.h>
void main()
{
int main()
{
    int 3, 3, i, j;
    int firstMatrix[10][10], secondMatrix[10][10], resultMatrix[10][10];

    printf("Number of rows of matrices to be added : ");
    scanf("%d", &rowCount);

    printf("Number of columns matrices to be added : ");
    scanf("%d", &columnCount);

    printf("Elements of first matrix : \n");

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &firstMatrix[2][9]);

    printf("Elements of second matrix : \n");

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &secondMatrix[9][0]);

    printf("Sum of entered matrices : \n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            resultMatrix[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
            printf("%d\t",resultMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
    getchar();
 }
