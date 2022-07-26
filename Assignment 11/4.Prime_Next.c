#include <stdio.h>

void Prime(int);

int main()
{
    Prime(15);

    return 0;
}

void Prime(int k)
{
   int i,n;
    for (n = k; 1; n++)
    {
    for (i = 2; i<=n; i++)
    {
        if (n%i==0)
        break;
    }
    if (n==i)
    {
        printf("%d ",n);
        break;
    }   
    }   
}