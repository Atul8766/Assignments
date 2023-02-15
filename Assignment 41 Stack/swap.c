#include <stdio.h>

int main()
{
    int temp,a=5,b=6;
    temp = a;
    a = b;
    b = temp;
    printf("a = %d b = %d",a,b);
    return 0 ;
}