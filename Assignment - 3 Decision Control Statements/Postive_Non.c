#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("Postive\n");
    }
    if (num <= 0)
    {
        printf("Non-Postive\n");
    }

    return 0;
}