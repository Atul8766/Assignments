#include <stdio.h>

void Prime(int);

int main()
{
    Prime(100);

    return 0;
}

void Prime(int k)
{
   int i,n;
    for (n = 2; n<=k; n++)
    {
    for (i = 2; i<n; i++)
    {
        if (n%i==0)
        break;
    }
    if (n==i)
    {
        printf("%d ",n);
    }   
    }   
}