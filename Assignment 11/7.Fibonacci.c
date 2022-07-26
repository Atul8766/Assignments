#include <stdio.h>

void fibo(int);

int main()
{
    fibo(10);
    return 0;
}

void fibo(int n)
{
    int i,a=-1,b=1,c=0;
    for (  i = 1; i <= n; i++)
    {
        c = a+b;
        printf("%d ",c);
        a = b;
        b = c;
        
    }
    
}