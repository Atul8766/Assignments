#include <stdio.h>

int main()
{
    int num=1,n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    do
    {
        printf("%d ",num*2-1);
        num++;
    } while (num<=n);
    
    return 0;
}