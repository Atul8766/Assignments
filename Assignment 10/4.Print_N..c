#include <stdio.h>

void print(int);
int main()
{
    print(10);
    return 0;
}

void print(int n)
{
   for ( int i=1; i<=n ; i++)
   {
       printf("%d ",i);
   }
}