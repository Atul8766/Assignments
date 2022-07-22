#include <stdio.h>

int main()
{
    int i;
    printf("2 3 5 7 ");
    for ( i = 2; i <=100; i++)
    {
        if (i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0)
             printf("%d ",i);
    }
    
    return 0;
}