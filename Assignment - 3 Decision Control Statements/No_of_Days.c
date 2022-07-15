#include <stdio.h>

int main()
{
    int month;
    printf("Enter month number: ");
    scanf("%d",&month);
    if(month == 4 || month == 6 || month ==9 || month ==11)
    {
        printf("30 Days\n");
    }
    else if (month == 2)
    {
        printf("28 Days\n");
        printf("If it is Leap Year Then 29 Days");
    }
    else
    {
        printf("31 Days\n");
    }
    
}