#include <stdio.h>

int main()
{
    int sum=0,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        sum  = sum+i*i;
    }
    printf("%d\n",sum);
    
    return 0;
}