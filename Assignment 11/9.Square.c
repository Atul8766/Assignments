#include <stdio.h>

int square(int);
int main()
{
    printf("Square is %d\n",square(8));
    return 0;
}

int square(int n)
{
    if (n==0)
    {
        return 0;
    }
    
    return n*n;
}