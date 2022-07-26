#include <stdio.h>

int Prime(int);

int main()
{
    int ans = Prime(17);
    printf("ans is %d if 1 that means prime otherwise not prime\n",ans);

    return 0;
}

int Prime(int n)
{
    int i;
    for (i = 2; i< n; i++)
    {
        if (n%i==0)
        break;
    }
    if (n==i)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}