#include <stdio.h>
int main()
{
    int number, originalNumber, remainder, result = 0;

    printf("Enter a three digit integer: ");
    scanf("%d", &number);



    while (number != 0)
    {
        remainder = number%10;
        result += remainder*remainder*remainder;
        number /= 10;
    }

    if(result == number)
        printf("%d is an Armstrong number.",number);
    else
        printf("%d is not an Armstrong number.",number);

    return 0;
}
