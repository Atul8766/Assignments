#include <stdio.h>

int main()
{
    int num,n=1;
    printf("Enter a Number: ");
    scanf("%d",&num);
    do
    {
        printf("%d ",num);
        num--;
    } while (num>=n);
    
    return 0;
}