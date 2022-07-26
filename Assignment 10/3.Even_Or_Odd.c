#include <stdio.h>

int odev(int);
int main()
{
    int ans =odev(10);
    printf("%d\n",ans);
    return 0;
}

int odev(int n)
{
   if (n%2==0)
   {
    return 1;
   }
   return 0;
   
}