#include <stdio.h>

int main()
{
    int num,x,rev;
    printf("Enter a number: ");
    scanf("%d",&num);
    while (num!=0)
    {
        x = num%10;
        printf("%d",x);
        num = num/10;
    }
    printf("\n");
    return 0;
}