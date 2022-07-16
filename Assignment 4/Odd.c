#include <stdio.h>

int main()
{
    int num=1;
    do
    {
        printf("%d ",num*2-1);
        num++;
    } while (num<=10);
    
    return 0;
}