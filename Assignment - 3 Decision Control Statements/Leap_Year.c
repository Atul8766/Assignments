#include <stdio.h>

int main()
{
    int year;
    printf("Enter Year: ");
    scanf("%d",&year);

    // if year is divisble by 400 then it is a leap year
    if (year % 400 == 0)
    {
        printf("%d is a leap year\n",year);
    }
    // if a year is divisble by 100 then it is not a leap year
    else if (year % 100 == 0)
    {
        printf("%d is a not leap year\n",year);
    }
    //it is also divible by 4
    else if (year % 4 == 0)
    {
        printf("%d is a leap year\n",year);
    }
    // now whatever is left they are all are leap year
    else
    {
        printf("%d is a not leap year\n",year);
    }
}