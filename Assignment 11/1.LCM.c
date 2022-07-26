#include <stdio.h>

int LCM(int,int);

int main()
{
    int ans = LCM(4,6);
    printf("LCM is %d\n",ans);

    return 0;
}

int LCM(int n1,int n2)
{
    int i;
    for (i = 1; 1 ; i++)
    {
        if (i%n1==0 && i%n2==0)
        {
            break;
        }
    }
    return i;
}