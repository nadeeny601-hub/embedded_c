#include <stdio.h>
#include <stdlib.h>
// leep year or not
int main()
{
    int year ;
    printf("enter the year\n");
    scanf("%d",year);
    if (year %4 == 0)
    {
        printf ("this is a leap year ");
    }
    else
    {
        printf ("this is not a leap year");
    }
    return 0;
}
