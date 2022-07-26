#include <stdio.h>

int HCF(int,int);

int main()
{
    int ans = HCF(20,15);
    printf("HCF is %d\n",ans);

    return 0;
}

int HCF(int n1,int n2)
{
    int i,ans;
    for (i = 1; i<=n1 ; i++)
    {
        if (n1%i==0 && n2%i==0)
        {
            ans = i;
        }
    }
    return ans;
}