#include <stdio.h>

int main()
{
    int num=10;
    do
    {
        printf("%d ",num*2-1);
        num--;
    } while (num>=1);
    
    return 0;
}