#include <stdio.h>
int main()
{

    int bottle , Total = 100 , Remain ;

    while(bottle <= 100)
    {
    printf ( " Enter the sell of Bottle : " );
    scanf ( "%d" ,&bottle) ;

    Remain = Total - bottle;

    if(bottle <= 49)
    {
        printf("Bottle is in stock.");
        printf("Remaining item = %d \n",Remain);
    }

    else if(bottle == 50 )
    {
        printf ( " Your 50% Bottle is sell." );
        printf("Remaining item = %d \n",Remain);
    }
    else if(51 >= bottle <= 99)
    {
        printf("You have below 50% bottle in stock");
        printf("Remaining item = %d \n",Remain);
    }
    else if(bottle == 100)
    {
        printf("Bottle is out of stock.");
        printf("Remaining item = %d \n",Remain);
    }

    else
    {
    printf("error");
    }
    bottle ++;
    }
    return 0;
}
