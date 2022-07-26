
#include <stdio.h>

void Fact(int);
int main()
{
    Fact(6);
    return 0;
}

void Fact(int n)
{
   int i,fact=1;
   for ( i = 1; i<=n; i++)
   {
      fact = fact*i;
   }
   printf("%d ",fact);
   
}