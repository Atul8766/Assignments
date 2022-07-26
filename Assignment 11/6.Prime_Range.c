#include <stdio.h>

void Prime(int,int);

int main()
{
    Prime(50,100);

    return 0;
}

void Prime(int start, int end)
{
   int i,n;
    for (n = start; n<=end; n++)
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