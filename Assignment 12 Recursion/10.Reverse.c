#include <stdio.h>

void rev(int n);
int main()
{
    rev(658);
    printf("\n");
    return 0;
}

void rev(int n)
{
    if (n>0)
    { 
        printf("%d",n%10);
        rev(n/10);
    }
    
}