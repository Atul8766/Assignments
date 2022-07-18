#include <stdio.h>

int main()
{
    int i,f;
    printf("Entet a number: ");
    scanf("%d",&f);
    for ( i =f-1; i >= 1; i--)
    {
        f = f*i;
    }
    printf("Factorial is %d\n",f);
    
    return 0;
}