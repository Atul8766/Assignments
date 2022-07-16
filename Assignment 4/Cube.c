#include <stdio.h>

int main()
{
    int num=1;
    do
    {
        printf("%d ",num*num*num);
        num++;
    } while (num<=10);
    
    return 0;
}